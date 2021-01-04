// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(pdi_valid,0,0);
    VL_OUT8(pdi_ready,0,0);
    VL_IN8(sdi_valid,0,0);
    VL_OUT8(sdi_ready,0,0);
    VL_OUT8(do_last,0,0);
    VL_OUT8(do_valid,0,0);
    VL_IN8(do_ready,0,0);
    VL_IN(pdi_data,31,0);
    VL_IN(sdi_data,31,0);
    VL_OUT(do_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ lwc__DOT__clk;
        CData/*0:0*/ lwc__DOT__rst;
        CData/*0:0*/ lwc__DOT__pdi_valid;
        CData/*0:0*/ lwc__DOT__pdi_ready;
        CData/*0:0*/ lwc__DOT__sdi_valid;
        CData/*0:0*/ lwc__DOT__sdi_ready;
        CData/*0:0*/ lwc__DOT__do_last;
        CData/*0:0*/ lwc__DOT__do_valid;
        CData/*0:0*/ lwc__DOT__do_ready;
        CData/*0:0*/ lwc__DOT__lwc_doSender_fifof_dequeueing__024whas;
        CData/*0:0*/ lwc__DOT__lwc_doSender_fifof_enqueueing__024whas;
        CData/*0:0*/ lwc__DOT__lwc_doSender_fifof_x_wire__024whas;
        CData/*0:0*/ lwc__DOT__lwc_headersFifo_rv__024EN_port1___05Fwrite;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_deq_pw__024whas;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_deq_pw__024whas;
        CData/*1:0*/ lwc__DOT__lwc_doSender_fifof_cntr_r;
        CData/*1:0*/ lwc__DOT__lwc_doSender_fifof_cntr_r__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_doSender_fifof_cntr_r__024EN;
        CData/*0:0*/ lwc__DOT__lwc_doSender_fifof_q_0__024EN;
        CData/*0:0*/ lwc__DOT__lwc_doSender_fifof_q_1__024EN;
        CData/*1:0*/ lwc__DOT__lwc_finalRemainBytes;
        CData/*1:0*/ lwc__DOT__lwc_finalRemainBytes__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_finalRemainBytes__024EN;
        CData/*0:0*/ lwc__DOT__lwc_headersFifo_rv__024EN;
        CData/*0:0*/ lwc__DOT__lwc_inSegEoT;
        CData/*0:0*/ lwc__DOT__lwc_inSegEoT__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_inSegEoT__024EN;
        CData/*0:0*/ lwc__DOT__lwc_inSegLast;
        CData/*0:0*/ lwc__DOT__lwc_inSegLast__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_inSegLast__024EN;
        CData/*3:0*/ lwc__DOT__lwc_inSegType;
        CData/*3:0*/ lwc__DOT__lwc_inSegType__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_inSegType__024EN;
        CData/*3:0*/ lwc__DOT__lwc_inState;
        CData/*3:0*/ lwc__DOT__lwc_inState__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_inState__024EN;
        CData/*0:0*/ lwc__DOT__lwc_inWordCounter__024EN;
        CData/*0:0*/ lwc__DOT__lwc_outCounter__024EN;
        CData/*1:0*/ lwc__DOT__lwc_outRemainder;
        CData/*1:0*/ lwc__DOT__lwc_outRemainder__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_outRemainder__024EN;
        CData/*0:0*/ lwc__DOT__lwc_outSegLast;
        CData/*0:0*/ lwc__DOT__lwc_outSegLast__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_outSegLast__024EN;
        CData/*3:0*/ lwc__DOT__lwc_outSegType;
        CData/*3:0*/ lwc__DOT__lwc_outSegType__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_outSegType__024EN;
        CData/*1:0*/ lwc__DOT__lwc_outState;
        CData/*1:0*/ lwc__DOT__lwc_outState__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_outState__024EN;
        CData/*0:0*/ lwc__DOT__lwc_statFailure;
        CData/*0:0*/ lwc__DOT__lwc_statFailure__024D_IN;
        CData/*0:0*/ lwc__DOT__lwc_statFailure__024EN;
        CData/*0:0*/ lwc__DOT__lwc_tagFifo_rv__024EN;
        CData/*3:0*/ lwc__DOT__ascon__024process_typ;
        CData/*0:0*/ lwc__DOT__ascon__024EN_bdi_enq;
        CData/*0:0*/ lwc__DOT__ascon__024EN_bdo_deq;
        CData/*0:0*/ lwc__DOT__ascon__024EN_process;
        CData/*0:0*/ lwc__DOT__ascon__024RDY_bdi_enq;
        CData/*0:0*/ lwc__DOT__ascon__024RDY_bdo_deq;
        CData/*0:0*/ lwc__DOT__ascon__024RDY_process;
        CData/*0:0*/ lwc__DOT__ascon__024process_empty;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__024CLR;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__024DEQ;
    };
    struct {
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__024ENQ;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__024FULL_N;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__024CLR;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__024DEQ;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__024EMPTY_N;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__024ENQ;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__024FULL_N;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_both;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_enq_tag;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_inst;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_pdi_instruction;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data;
        CData/*0:0*/ lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag;
        CData/*3:0*/ lwc__DOT__MUX_ascon__024process_1___05FVAL_1;
        CData/*3:0*/ lwc__DOT__MUX_ascon__024process_1___05FVAL_2;
        CData/*3:0*/ lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_2;
        CData/*3:0*/ lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_3;
        CData/*3:0*/ lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_5;
        CData/*1:0*/ lwc__DOT__MUX_lwc_doSender_fifof_cntr_r__024write_1___05FVAL_2;
        CData/*1:0*/ lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_2;
        CData/*1:0*/ lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_3;
        CData/*0:0*/ lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_2;
        CData/*0:0*/ lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_2;
        CData/*0:0*/ lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_2;
        CData/*0:0*/ lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_3;
        CData/*0:0*/ lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_4;
        CData/*0:0*/ lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_3;
        CData/*0:0*/ lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_2;
        CData/*0:0*/ lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_2;
        CData/*0:0*/ lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_3;
        CData/*0:0*/ lwc__DOT__MUX_lwc_statFailure__024write_1___05FSEL_1;
        CData/*0:0*/ lwc__DOT__CASE_lwc_pdiReceiver_fifofD_OUT_BITS_31_TO_28_ETC___05Fq2;
        CData/*3:0*/ lwc__DOT__IF_lwc_inSegType_61_EQ_5_64_AND_lwc_inSegEoT_4_ETC___05F_d168;
        CData/*1:0*/ lwc__DOT__lwc_doSender_fifof_cntr_r_1_MINUS_1___05F_d29;
        CData/*0:0*/ lwc__DOT__NOT_lwc_outCounter_23_BITS_13_TO_1_35_EQ_0_36___05FETC___05F_d273;
        CData/*0:0*/ lwc__DOT__NOT_lwc_tagFifo_rv_port0___05Fread___05F19_BITS_31_TO___05FETC___05F_d234;
        CData/*0:0*/ lwc__DOT___dfoo1;
        CData/*0:0*/ lwc__DOT___dfoo3;
        CData/*0:0*/ lwc__DOT__lwc_inWordCounter_28_BITS_13_TO_1_36_EQ_0_37_A_ETC___05F_d145;
        CData/*0:0*/ lwc__DOT__ascon__DOT__CLK;
        CData/*0:0*/ lwc__DOT__ascon__DOT__RST_N;
        CData/*3:0*/ lwc__DOT__ascon__DOT__process_typ;
        CData/*0:0*/ lwc__DOT__ascon__DOT__process_empty;
        CData/*0:0*/ lwc__DOT__ascon__DOT__EN_process;
        CData/*0:0*/ lwc__DOT__ascon__DOT__RDY_process;
        CData/*0:0*/ lwc__DOT__ascon__DOT__EN_bdi_enq;
    };
    struct {
        CData/*0:0*/ lwc__DOT__ascon__DOT__RDY_bdi_enq;
        CData/*0:0*/ lwc__DOT__ascon__DOT__EN_bdo_deq;
        CData/*0:0*/ lwc__DOT__ascon__DOT__RDY_bdo_deq;
        CData/*0:0*/ lwc__DOT__ascon__DOT__bdo_notEmpty;
        CData/*3:0*/ lwc__DOT__ascon__DOT__piso_countReg;
        CData/*3:0*/ lwc__DOT__ascon__DOT__piso_countReg__024D_IN;
        CData/*0:0*/ lwc__DOT__ascon__DOT__piso_countReg__024EN;
        CData/*0:0*/ lwc__DOT__ascon__DOT__piso_vec__024EN;
        CData/*3:0*/ lwc__DOT__ascon__DOT__sipo_count_reg;
        CData/*3:0*/ lwc__DOT__ascon__DOT__sipo_count_reg__024D_IN;
        CData/*0:0*/ lwc__DOT__ascon__DOT__sipo_count_reg__024EN;
        CData/*1:0*/ lwc__DOT__ascon__DOT__state;
        CData/*1:0*/ lwc__DOT__ascon__DOT__state__024D_IN;
        CData/*0:0*/ lwc__DOT__ascon__DOT__state__024EN;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__CLK;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__RST;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__ENQ;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__DEQ;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__CLR;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__FULL_N;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__EMPTY_N;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__empty_reg;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__CLK;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__RST;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__ENQ;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__DEQ;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__CLR;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__FULL_N;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__EMPTY_N;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__empty_reg;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__error_checks__DOT__enqerror;
        SData/*13:0*/ lwc__DOT__lwc_inWordCounter;
        SData/*13:0*/ lwc__DOT__lwc_inWordCounter__024D_IN;
        SData/*13:0*/ lwc__DOT__lwc_outCounter;
        SData/*13:0*/ lwc__DOT__lwc_outCounter__024D_IN;
        SData/*13:0*/ lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FVAL_1;
        SData/*13:0*/ lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_1;
        SData/*13:0*/ lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_2;
        SData/*13:0*/ lwc__DOT__x___05Fh8042;
        IData/*31:0*/ lwc__DOT__pdi_data;
        IData/*31:0*/ lwc__DOT__sdi_data;
        IData/*31:0*/ lwc__DOT__do_data;
        IData/*31:0*/ lwc__DOT__lwc_pdiReceiver_fifof__024D_IN;
        IData/*31:0*/ lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT;
        IData/*31:0*/ lwc__DOT__lwc_sdiReceiver_fifof__024D_IN;
        IData/*31:0*/ lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT;
        IData/*31:0*/ lwc__DOT__CASE_asconbdo_first_BITS_1_TO_0_0_asconbdo_f_ETC___05Fq1;
        IData/*31:0*/ lwc__DOT__IF_ascon_bdo_first___05F26_BIT_2_40_THEN_IF_ascon___05FETC___05F_d254;
        IData/*31:0*/ lwc__DOT__b___05Fh7625;
        IData/*31:0*/ lwc__DOT__b___05Fh7632;
        IData/*31:0*/ lwc__DOT__b___05Fh7635;
        IData/*31:0*/ lwc__DOT__el_word___05Fh3645;
        IData/*31:0*/ lwc__DOT__el_word___05Fh4485;
        IData/*31:0*/ lwc__DOT__sw___05Fh6283;
        IData/*31:0*/ lwc__DOT__x___05Fh7136;
        IData/*31:0*/ lwc__DOT__x___05Fh8126;
        WData/*319:0*/ lwc__DOT__ascon__DOT__piso_vec[10];
        WData/*319:0*/ lwc__DOT__ascon__DOT__piso_vec__024D_IN[10];
        IData/*31:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__D_IN;
        IData/*31:0*/ lwc__DOT__lwc_pdiReceiver_fifof__DOT__D_OUT;
        IData/*31:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__D_IN;
    };
    struct {
        IData/*31:0*/ lwc__DOT__lwc_sdiReceiver_fifof__DOT__D_OUT;
        QData/*32:0*/ lwc__DOT__lwc_headersFifo_rv__024port0___05Fwrite_1;
        QData/*32:0*/ lwc__DOT__lwc_headersFifo_rv__024port1___05Fread;
        QData/*32:0*/ lwc__DOT__lwc_headersFifo_rv__024port1___05Fwrite_1;
        QData/*32:0*/ lwc__DOT__lwc_headersFifo_rv__024port2___05Fread;
        QData/*32:0*/ lwc__DOT__lwc_tagFifo_rv__024port1___05Fread;
        QData/*32:0*/ lwc__DOT__lwc_tagFifo_rv__024port1___05Fwrite_1;
        QData/*32:0*/ lwc__DOT__lwc_tagFifo_rv__024port2___05Fread;
        QData/*32:0*/ lwc__DOT__lwc_doSender_fifof_q_0;
        QData/*32:0*/ lwc__DOT__lwc_doSender_fifof_q_0__024D_IN;
        QData/*32:0*/ lwc__DOT__lwc_doSender_fifof_q_1;
        QData/*32:0*/ lwc__DOT__lwc_doSender_fifof_q_1__024D_IN;
        QData/*32:0*/ lwc__DOT__lwc_headersFifo_rv;
        QData/*32:0*/ lwc__DOT__lwc_headersFifo_rv__024D_IN;
        QData/*32:0*/ lwc__DOT__lwc_tagFifo_rv;
        QData/*32:0*/ lwc__DOT__lwc_tagFifo_rv__024D_IN;
        QData/*34:0*/ lwc__DOT__ascon__024bdi_enq_el;
        QData/*34:0*/ lwc__DOT__ascon__024bdo_first;
        QData/*32:0*/ lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_1;
        QData/*32:0*/ lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FVAL_1;
        QData/*34:0*/ lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_1;
        QData/*34:0*/ lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_2;
        QData/*32:0*/ lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_2;
        QData/*32:0*/ lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FVAL_2;
        QData/*32:0*/ lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_1;
        QData/*32:0*/ lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_2;
        QData/*32:0*/ lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_3;
        QData/*34:0*/ lwc__DOT__ascon__DOT__bdi_enq_el;
        QData/*34:0*/ lwc__DOT__ascon__DOT__bdo_first;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ lwc__DOT____Vxrand8;
    CData/*3:0*/ lwc__DOT____Vxrand5;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*13:0*/ lwc__DOT____Vxrand7;
    SData/*13:0*/ lwc__DOT____Vxrand6;
    QData/*32:0*/ lwc__DOT____Vxrand10;
    QData/*32:0*/ lwc__DOT____Vxrand9;
    QData/*32:0*/ lwc__DOT____Vxrand4;
    QData/*32:0*/ lwc__DOT____Vxrand3;
    QData/*32:0*/ lwc__DOT____Vxrand2;
    QData/*32:0*/ lwc__DOT____Vxrand1;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
