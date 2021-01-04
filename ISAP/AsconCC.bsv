package AsconCC;

import Vector::*;
import GetPut::*;

import Asconp::*;
import SIPO::*;
import PISO::*;
import CryptoCore::*;

typedef enum {
  IDLE,
  ABSORB_BDI, // waiting on process command
  ZERO_FILL,  // recieve from bdi
  SQUEEZE,
  BDO
//  SQUEEZE
} InState_t deriving(Bits, Eq);

typedef enum {
  IDLE,
  PERMUTE
//  SQUEEZE
} XState_t deriving(Bits, Eq);

typedef TMul#((TDiv#(SizeOf#(AsconLane),SizeOf#(CoreWord))), NumLanes) NumCoreWords;

(* synthesize *)
module mkAsconCC(CryptoCoreIfc);
    SIPO#(4, CoreWord) sipo <- mkSIPO;
    PISO#(4, CoreWord) piso <- mkPISO;

    // FSMs
    Reg#(InState_t) inState <- mkReg(IDLE);
    Reg#(XState_t) xState <- mkReg(IDLE);
    // rule rl_idle if (state == IDLE);

    // Registers
    Reg#(SegmentType) inRecvType <- mkRegU;

    Reg#(Bit#(KeySize)) keyR <- mkRegU;
    Reg#(Bit#(NpubSize)) npubR <- mkRegU;

    Reg#(AsconState) asconState <- mkRegU;
    Reg#(UInt#(2)) counter <- mkRegU;

    Reg#(UInt#(TLog#(AsconRounds))) roundCounter <- mkRegU;

    Reg#(Bool) initStep <- mkRegU;
    Reg#(Bool) finalADStep <- mkRegU;
    Reg#(Bool) emitTag <- mkRegU;
    Reg#(Bool) inLastOfType <- mkRegU;
    Reg#(Bool) inEmptyType <- mkRegU;
    let sipoCount = sipo.count;
    let sipoCount4 = pack(sipoCount)[1] == 1 && pack(sipoCount)[0] == 1;
   // let sipoCount8 = pack(sipoCount)[2] == 1 && sipoCount4;
    let inRecvKey = inRecvType == Key;
    let inRecvNpub = inRecvType == Npub;


    (* fire_when_enabled *)
    rule rl_squeeze if (inState == SQUEEZE && xState == IDLE);
      $display("SQUEEZE ", $time);
      case (inRecvType)
        Key: begin
          keyR <= pack(sipo.data);
        end
        Npub: begin
          initStep <= True;
          let newState = AsconState{x0:initialVector, x1:keyR[127:64], x2:keyR[63:0], x3:pack(sipo.data)[127:64], x4:pack(sipo.data)[63:0]};
          asconState <= newState;
          roundCounter <= fromInteger(valueOf(Pa));
          xState <= PERMUTE;
        end
        AD: begin
          if(inEmptyType) begin
            $display("Domain sep - Empty AD ", $time);
            $display(print_state("DSB ", asconState));
            let newState = domainSep(asconState);
            $display(print_state("DSA ", newState));
            asconState <= newState;
            inEmptyType <= False;
          end else begin
            $display("Absorb AD ", $time);
            let newState = dataXOR(asconState, pack(sipo.data));
            asconState <= newState;
            roundCounter <= fromInteger(valueOf(Pb));
            xState <= PERMUTE;
            finalADStep <= inLastOfType;
          end
        end
        Plaintext, Ciphertext: begin
          let newState = dataXOR(asconState, pack(sipo.data));
          if(inEmptyType || inLastOfType) begin
            $display("Empty or Last PT/CT ", $time);
            newState = finalXOR(newState, keyR);
            asconState <= newState;
            roundCounter <= fromInteger(valueOf(Pa));
            emitTag <= True;
            
            xState <= PERMUTE;
          end
        end
        default: begin
        //   inState <= InIdle;
        end
      endcase
    //  end
      if(inRecvNpub) begin
    //    asconState <= toChunks({iv,keyR, pack(sipo.data[9]), pack(sipo.data[8]), pack(sipo.data[7]), pack(sipo.data[6])});
     //   $display("SQUEEZE ", $time);
     //   xState <= PERMUTE;
    // piso.enq(toChunks({asconState.x3, asconState.x4}), 4);
      end
        sipo.deq;
    //  end
      inState <= IDLE;
    endrule
    
    (* fire_when_enabled *)
    rule rl_fill_zero if (inState == ZERO_FILL);
      if(sipoCount4) begin
        inState <= SQUEEZE;
      end
      sipo.enq(0);
    endrule

    (* fire_when_enabled *)
    rule rl_permute if (xState == PERMUTE);
      $display("PERMUTE ", $time);
      
      if (roundCounter == 0) begin
         if(initStep) begin
          $display("INIT STEP ", $time);
          let newState = initXOR(asconState, keyR);
          asconState <= newState;
          initStep <= False; 
         /* end else if(finalADStep) begin
          $display("Domain Sep ", $time);
          finalADStep <= False;
          let newState = domainSep(asconState);
          asconState <= newState;*/
          end else if(emitTag) begin
            $display("Emit Tag ", $time);
            let newState = initXOR(asconState, keyR);
            if(!piso.notEmpty) begin
              piso.enq(toChunks({newState.x3, newState.x4}), 4);
            end
            emitTag <= False;
          end
        $display(print_state("State After ", asconState));
        $display("Done ", $time);
        xState <= IDLE;
      end
      else begin
        let newState = asconRound(asconState, roundCounter -1);
        asconState <= newState;
        roundCounter <= roundCounter - 1;
      end
    endrule



    method Action process(SegmentType typ, Bool empty) if (inState == IDLE);
     // initStep <= False;
      inRecvType <= typ;
      inState <= empty ? ZERO_FILL : ABSORB_BDI;
      inEmptyType <= empty;
      if(empty) begin
        sipo.enq({1, 31'b0});
      end
    endmethod
    
    interface FifoIn bdi;
      method Action enq(i) if (inState == ABSORB_BDI);
        match tagged BdIO {word: .word, lot: .lot, padarg: .padarg} = i;
        match {.padded, .pw} = padWord(word, padarg, True);
        sipo.enq(lot ? pw : word);
        inLastOfType <= lot;
        if(sipoCount4) begin
          inState <= SQUEEZE;
        end else if(lot) begin
          inState <= ZERO_FILL;
        end

      endmethod
    endinterface





    interface FifoOut bdo;
      method deq = piso.deq;
      method first;
        let lot = (piso.count == 1);
        return BdIO {word: piso.first, lot: lot, padarg: {'0}} ;
      endmethod
      method notEmpty = piso.notEmpty;
    endinterface

endmodule

endpackage : AsconCC