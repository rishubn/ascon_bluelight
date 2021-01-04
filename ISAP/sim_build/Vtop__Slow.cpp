// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->lwc__DOT____Vxrand4 = VL_RAND_RESET_Q(33);
    vlTOPp->lwc__DOT____Vxrand8 = VL_RAND_RESET_I(2);
    vlTOPp->lwc__DOT____Vxrand7 = VL_RAND_RESET_I(14);
    vlTOPp->lwc__DOT____Vxrand6 = VL_RAND_RESET_I(14);
    vlTOPp->lwc__DOT____Vxrand3 = VL_RAND_RESET_Q(33);
    vlTOPp->lwc__DOT____Vxrand5 = VL_RAND_RESET_I(4);
    vlTOPp->lwc__DOT____Vxrand1 = VL_RAND_RESET_Q(33);
    vlTOPp->lwc__DOT____Vxrand2 = (0xffffffffULL & 
                                   VL_RAND_RESET_Q(33));
    vlTOPp->lwc__DOT____Vxrand10 = (0xffffffffULL & 
                                    VL_RAND_RESET_Q(33));
    vlTOPp->lwc__DOT____Vxrand9 = (0xffffffffULL & 
                                   VL_RAND_RESET_Q(33));
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024EN = 1U;
    vlTOPp->lwc__DOT__lwc_tagFifo_rv__024EN = 1U;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024CLR = 0U;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024CLR = 0U;
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port0___05Fwrite_1 
        = vlTOPp->lwc__DOT____Vxrand2;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__CLR 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024CLR;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__CLR 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024CLR;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->lwc__DOT__pdi_data = vlTOPp->pdi_data;
    vlTOPp->lwc__DOT__pdi_valid = vlTOPp->pdi_valid;
    vlTOPp->lwc__DOT__sdi_data = vlTOPp->sdi_data;
    vlTOPp->lwc__DOT__sdi_valid = vlTOPp->sdi_valid;
    vlTOPp->lwc__DOT__do_ready = vlTOPp->do_ready;
    vlTOPp->lwc__DOT__clk = vlTOPp->clk;
    vlTOPp->lwc__DOT__rst = vlTOPp->rst;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_IN 
        = vlTOPp->pdi_data;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_IN 
        = vlTOPp->sdi_data;
    vlTOPp->lwc__DOT__lwc_outRemainder__024D_IN = (3U 
                                                   & (IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv));
    vlTOPp->lwc__DOT__lwc_outSegLast__024D_IN = (1U 
                                                 & (IData)(
                                                           (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                            >> 0x18U)));
    vlTOPp->lwc__DOT__lwc_outSegType__024D_IN = (0xfU 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                >> 0x1fU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                 >> 0x1eU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                  >> 0x1dU)))
                                                       ? 9U
                                                       : (IData)(
                                                                 (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                  >> 0x1cU)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                  >> 0x1dU)))
                                                       ? 9U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU)))
                                                        ? 9U
                                                        : (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                 >> 0x1eU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                  >> 0x1dU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU)))
                                                        ? (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU))
                                                        : 9U)
                                                       : (IData)(
                                                                 (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                  >> 0x1cU)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                  >> 0x1dU)))
                                                       ? 9U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU)))
                                                        ? (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU))
                                                        : 9U)))));
    vlTOPp->lwc__DOT__ascon__DOT__bdo_notEmpty = (0U 
                                                  != (IData)(vlTOPp->lwc__DOT__ascon__DOT__piso_countReg));
    vlTOPp->lwc__DOT__ascon__DOT__piso_countReg__024D_IN 
        = (0xfU & ((IData)(vlTOPp->lwc__DOT__ascon__DOT__piso_countReg) 
                   - (IData)(1U)));
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[0U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[1U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[1U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[2U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[2U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[3U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[3U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[4U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[4U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[5U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[5U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[6U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[6U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[7U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[7U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[8U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[8U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[9U];
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024D_IN[9U] 
        = vlTOPp->lwc__DOT__ascon__DOT__piso_vec[9U];
    vlTOPp->lwc__DOT__ascon__DOT__sipo_count_reg__024D_IN 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->lwc__DOT__ascon__DOT__sipo_count_reg)));
    vlTOPp->lwc__DOT__do_data = (IData)((vlTOPp->lwc__DOT__lwc_doSender_fifof_q_0 
                                         >> 1U));
    vlTOPp->lwc__DOT__do_last = (1U & (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_q_0));
    vlTOPp->lwc__DOT__do_valid = (0U != (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_cntr_r__024write_1___05FVAL_2 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)));
    vlTOPp->lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FVAL_1 
        = (0x3fffU & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                      - (IData)(1U)));
    if ((0U == (0xffffU & (IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv)))) {
        vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_1 = 4U;
        vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_3 
            = ((4U == (0xfU & (IData)((vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                       >> 0x1cU))))
                ? 2U : 3U);
    } else {
        vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_1 
            = (0x3fffU & (IData)((vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                  >> 2U)));
        vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_3 = 1U;
    }
    vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_2 
        = ((IData)(vlTOPp->lwc__DOT__lwc_outSegLast)
            ? ((4U == (IData)(vlTOPp->lwc__DOT__lwc_outSegType))
                ? 2U : 3U) : 0U);
    vlTOPp->lwc__DOT__NOT_lwc_outCounter_23_BITS_13_TO_1_35_EQ_0_36___05FETC___05F_d273 
        = (((0U != (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                               >> 1U))) | ((0U != (IData)(vlTOPp->lwc__DOT__lwc_outRemainder)) 
                                           & (IData)(vlTOPp->lwc__DOT__lwc_outCounter))) 
           | ((4U == (IData)(vlTOPp->lwc__DOT__lwc_outSegType)) 
              & (IData)(vlTOPp->lwc__DOT__lwc_outSegLast)));
    vlTOPp->lwc__DOT__x___05Fh8042 = (0x3fffU & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                                 - (IData)(1U)));
    vlTOPp->lwc__DOT__IF_lwc_inSegType_61_EQ_5_64_AND_lwc_inSegEoT_4_ETC___05F_d168 
        = (((5U == (IData)(vlTOPp->lwc__DOT__lwc_inSegType)) 
            & (IData)(vlTOPp->lwc__DOT__lwc_inSegEoT))
            ? 5U : ((IData)(vlTOPp->lwc__DOT__lwc_inSegLast)
                     ? 0U : 2U));
    vlTOPp->lwc__DOT__lwc_inWordCounter_28_BITS_13_TO_1_36_EQ_0_37_A_ETC___05F_d145 
        = (((0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                               >> 1U))) & ((~ (IData)(vlTOPp->lwc__DOT__lwc_inWordCounter)) 
                                           | (0U == (IData)(vlTOPp->lwc__DOT__lwc_finalRemainBytes)))) 
           & (IData)(vlTOPp->lwc__DOT__lwc_inSegEoT));
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__D_OUT;
    vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r_1_MINUS_1___05F_d29 
        = (3U & ((IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r) 
                 - (IData)(1U)));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_1 
        = ((QData)((IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv)) 
           << 1U);
    vlTOPp->lwc__DOT__x___05Fh8126 = (0xe0000000U | 
                                      ((IData)(vlTOPp->lwc__DOT__lwc_statFailure) 
                                       << 0x1cU));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_dequeueing__024whas 
        = ((0U != (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)) 
           & (IData)(vlTOPp->do_ready));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status 
        = ((2U != (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)) 
           & (3U == (IData)(vlTOPp->lwc__DOT__lwc_outState)));
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__D_OUT;
    vlTOPp->lwc__DOT__ascon__DOT__RDY_bdi_enq = ((0xaU 
                                                  != (IData)(vlTOPp->lwc__DOT__ascon__DOT__sipo_count_reg)) 
                                                 & (1U 
                                                    == (IData)(vlTOPp->lwc__DOT__ascon__DOT__state)));
    vlTOPp->lwc__DOT__ascon__DOT__RDY_process = (0U 
                                                 == (IData)(vlTOPp->lwc__DOT__ascon__DOT__state));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header 
        = (((2U != (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)) 
            & (0U == (IData)(vlTOPp->lwc__DOT__lwc_outState))) 
           & (IData)((vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                      >> 0x20U)));
    vlTOPp->lwc__DOT__ascon__DOT__RDY_bdo_deq = (0U 
                                                 != (IData)(vlTOPp->lwc__DOT__ascon__DOT__piso_countReg));
    vlTOPp->lwc__DOT__ascon__DOT__bdo_first = (((QData)((IData)(
                                                                vlTOPp->lwc__DOT__ascon__DOT__piso_vec[0U])) 
                                                << 3U) 
                                               | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlTOPp->lwc__DOT__ascon__DOT__piso_countReg)) 
                                                                  << 2U))));
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__EMPTY_N 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__empty_reg;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__EMPTY_N 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__empty_reg;
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port0___05Fwrite_1 
        = vlTOPp->lwc__DOT____Vxrand2;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__CLR 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024CLR;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__CLR 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024CLR;
    vlTOPp->lwc__DOT__ascon__DOT__CLK = vlTOPp->lwc__DOT__clk;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__CLK 
        = vlTOPp->lwc__DOT__clk;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__CLK 
        = vlTOPp->lwc__DOT__clk;
    vlTOPp->lwc__DOT__ascon__DOT__RST_N = vlTOPp->lwc__DOT__rst;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__RST 
        = vlTOPp->lwc__DOT__rst;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__RST 
        = vlTOPp->lwc__DOT__rst;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__D_IN 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_IN;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__D_IN 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_IN;
    vlTOPp->do_data = vlTOPp->lwc__DOT__do_data;
    vlTOPp->do_last = vlTOPp->lwc__DOT__do_last;
    vlTOPp->do_valid = vlTOPp->lwc__DOT__do_valid;
    vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_2 
        = ((((0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                >> 1U))) & (~ (IData)(vlTOPp->lwc__DOT__lwc_outCounter))) 
            | ((0U == (IData)(vlTOPp->lwc__DOT__lwc_outRemainder)) 
               & (0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                    >> 1U))))) ? 4U
            : (IData)(vlTOPp->lwc__DOT__x___05Fh8042));
    vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_3 
        = (((4U == (IData)(vlTOPp->lwc__DOT__lwc_inSegType)) 
            & (IData)(vlTOPp->lwc__DOT__lwc_inSegEoT))
            ? 7U : (IData)(vlTOPp->lwc__DOT__IF_lwc_inSegType_61_EQ_5_64_AND_lwc_inSegEoT_4_ETC___05F_d168));
    vlTOPp->lwc__DOT__MUX_ascon__024process_1___05FVAL_2 
        = (0xfU & ((0x80000000U & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                    ? ((0x40000000U & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                        ? ((0x20000000U & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                            ? 9U : (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                    >> 0x1cU)) : ((0x20000000U 
                                                   & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                                                   ? 9U
                                                   : 
                                                  ((0x10000000U 
                                                    & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                                                    ? 9U
                                                    : 
                                                   (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                                    >> 0x1cU))))
                    : ((0x40000000U & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                        ? ((0x20000000U & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                            ? ((0x10000000U & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                                ? (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                   >> 0x1cU) : 9U) : 
                           (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                            >> 0x1cU)) : ((0x20000000U 
                                           & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                                           ? 9U : (
                                                   (0x10000000U 
                                                    & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)
                                                    ? 
                                                   (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                                    >> 0x1cU)
                                                    : 9U)))));
    vlTOPp->lwc__DOT__el_word___05Fh3645 = ((0xff000000U 
                                             & (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                                << 0x18U)) 
                                            | ((0xff0000U 
                                                & (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                                   << 8U)) 
                                               | ((0xff00U 
                                                   & (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                                      >> 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                                                        >> 0x18U)))));
    vlTOPp->lwc__DOT___dfoo1 = ((2U != (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)) 
                                | (1U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r_1_MINUS_1___05F_d29)));
    vlTOPp->lwc__DOT___dfoo3 = ((1U != (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)) 
                                | (0U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r_1_MINUS_1___05F_d29)));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_3 
        = (1ULL | ((QData)((IData)(vlTOPp->lwc__DOT__x___05Fh8126)) 
                   << 1U));
    vlTOPp->lwc__DOT__lwc_tagFifo_rv__024port1___05Fwrite_1 
        = (0x100000000ULL | (QData)((IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)));
    vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_2 
        = ((0U == (0xffffU & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT))
            ? (((5U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                >> 0x1cU))) & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                               >> 0x19U))
                ? 5U : ((4U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                        >> 0x1cU)))
                         ? 7U : 0U)) : 4U);
    vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_5 
        = ((0x40000000U & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
            ? 1U : 2U);
    vlTOPp->lwc__DOT__MUX_ascon__024process_1___05FVAL_1 
        = (0xfU & ((0x80000000U & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                    ? ((0x40000000U & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                        ? ((0x20000000U & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                            ? 9U : (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                    >> 0x1cU)) : ((0x20000000U 
                                                   & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                                                   ? 9U
                                                   : 
                                                  ((0x10000000U 
                                                    & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                                                    ? 9U
                                                    : 
                                                   (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                    >> 0x1cU))))
                    : ((0x40000000U & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                        ? ((0x20000000U & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                            ? ((0x10000000U & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                                ? (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                   >> 0x1cU) : 9U) : 
                           (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                            >> 0x1cU)) : ((0x20000000U 
                                           & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                                           ? 9U : (
                                                   (0x10000000U 
                                                    & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)
                                                    ? 
                                                   (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                    >> 0x1cU)
                                                    : 9U)))));
    vlTOPp->lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FVAL_1 
        = ((4U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                           >> 0x1cU))) ? (0x150000000ULL 
                                          | (QData)((IData)(
                                                            (0x200ffffU 
                                                             & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT))))
            : ((5U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                               >> 0x1cU))) ? (0x140000000ULL 
                                              | (QData)((IData)(
                                                                (0x1000000U 
                                                                 | (0x200ffffU 
                                                                    & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)))))
                : 0x193000020ULL));
    vlTOPp->lwc__DOT__el_word___05Fh4485 = ((0xff000000U 
                                             & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                << 0x18U)) 
                                            | ((0xff0000U 
                                                & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                   << 8U)) 
                                               | ((0xff00U 
                                                   & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                      >> 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                        >> 0x18U)))));
    vlTOPp->lwc__DOT__ascon__024RDY_bdi_enq = vlTOPp->lwc__DOT__ascon__DOT__RDY_bdi_enq;
    vlTOPp->lwc__DOT__ascon__024RDY_process = vlTOPp->lwc__DOT__ascon__DOT__RDY_process;
    vlTOPp->lwc__DOT__lwc_outRemainder__024EN = vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header;
    vlTOPp->lwc__DOT__lwc_outSegLast__024EN = vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header;
    vlTOPp->lwc__DOT__lwc_outSegType__024EN = vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header;
    vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header) 
           & ((0U != (0xffffU & (IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv))) 
              | (4U == (0xfU & (IData)((vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                        >> 0x1cU))))));
    vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_3 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header) 
           & (((0U != (0xffffU & (IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv))) 
               | (IData)((vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                          >> 0x18U))) | (4U == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                           >> 0x1cU))))));
    vlTOPp->lwc__DOT__ascon__024RDY_bdo_deq = vlTOPp->lwc__DOT__ascon__DOT__RDY_bdo_deq;
    vlTOPp->lwc__DOT__ascon__024bdo_first = vlTOPp->lwc__DOT__ascon__DOT__bdo_first;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024EMPTY_N 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__EMPTY_N;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__EMPTY_N;
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port1___05Fread 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header)
            ? vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port0___05Fwrite_1
            : vlTOPp->lwc__DOT__lwc_headersFifo_rv);
    vlTOPp->lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_1 
        = (((QData)((IData)(vlTOPp->lwc__DOT__el_word___05Fh3645)) 
            << 3U) | (QData)((IData)((((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter_28_BITS_13_TO_1_36_EQ_0_37_A_ETC___05F_d145) 
                                       << 2U) | (IData)(vlTOPp->lwc__DOT__lwc_finalRemainBytes)))));
    vlTOPp->lwc__DOT__lwc_inSegType__024D_IN = vlTOPp->lwc__DOT__MUX_ascon__024process_1___05FVAL_1;
    vlTOPp->lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_2 
        = (((QData)((IData)(vlTOPp->lwc__DOT__el_word___05Fh4485)) 
            << 3U) | (QData)((IData)((((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter_28_BITS_13_TO_1_36_EQ_0_37_A_ETC___05F_d145) 
                                       << 2U) | (IData)(vlTOPp->lwc__DOT__lwc_finalRemainBytes)))));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data 
        = (((2U != (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)) 
            & (1U == (IData)(vlTOPp->lwc__DOT__lwc_outState))) 
           & (IData)(vlTOPp->lwc__DOT__ascon__024RDY_bdo_deq));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag 
        = (((2U == (IData)(vlTOPp->lwc__DOT__lwc_outState)) 
            & (IData)(vlTOPp->lwc__DOT__ascon__024RDY_bdo_deq)) 
           & (IData)((vlTOPp->lwc__DOT__lwc_tagFifo_rv 
                      >> 0x20U)));
    vlTOPp->lwc__DOT__sw___05Fh6283 = ((0xff000000U 
                                        & ((IData)(
                                                   (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                    >> 3U)) 
                                           << 0x18U)) 
                                       | ((0xff0000U 
                                           & ((IData)(
                                                      (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                       >> 0xbU)) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((IData)(
                                                         (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                          >> 0x13U)) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (IData)(
                                                          (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                           >> 0x1bU))))));
    vlTOPp->lwc__DOT__b___05Fh7625 = (0xffU & (IData)(
                                                      (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                       >> 3U)));
    vlTOPp->lwc__DOT__b___05Fh7632 = (0xffffU & (IData)(
                                                        (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                         >> 3U)));
    vlTOPp->lwc__DOT__b___05Fh7635 = (0xffffffU & (IData)(
                                                          (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                           >> 3U)));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_inst 
        = ((1U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
           & (IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024EMPTY_N));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr 
        = (((3U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
            & (IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024EMPTY_N)) 
           & (IData)(vlTOPp->lwc__DOT__ascon__024RDY_process));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi 
        = (((8U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
            & (IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024EMPTY_N)) 
           & (IData)(vlTOPp->lwc__DOT__ascon__024RDY_bdi_enq));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_pdi_instruction 
        = ((0U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
           & (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr 
        = ((5U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
           & (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi 
        = (((4U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
            & (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N)) 
           & (IData)(vlTOPp->lwc__DOT__ascon__024RDY_bdi_enq));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_enq_tag = 
        ((7U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
         & (~ (IData)((vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port1___05Fread 
                       >> 0x20U))));
    vlTOPp->lwc__DOT__CASE_lwc_pdiReceiver_fifofD_OUT_BITS_31_TO_28_ETC___05Fq2 
        = (1U & (((4U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                  >> 0x1cU))) | (5U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                     >> 0x1cU))))
                  ? (~ (IData)((vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port1___05Fread 
                                >> 0x20U))) : (((7U 
                                                 != 
                                                 (0xfU 
                                                  & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                     >> 0x1cU))) 
                                                | (~ 
                                                   (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                    >> 0x18U))) 
                                               | (~ (IData)(
                                                            (vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port1___05Fread 
                                                             >> 0x20U))))));
    vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_2 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data) 
           & (IData)(vlTOPp->lwc__DOT__NOT_lwc_outCounter_23_BITS_13_TO_1_35_EQ_0_36___05FETC___05F_d273));
    vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_2 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data) 
           & (((0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                  >> 1U))) & (~ (IData)(vlTOPp->lwc__DOT__lwc_outCounter))) 
              | ((0U == (IData)(vlTOPp->lwc__DOT__lwc_outRemainder)) 
                 & (0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                      >> 1U))))));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_x_wire__024whas 
        = (((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header) 
            | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data)) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_enqueueing__024whas 
        = (((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status) 
            | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data)) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header));
    vlTOPp->lwc__DOT__lwc_outCounter__024EN = ((((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header) 
                                                 & ((0U 
                                                     != 
                                                     (0xffffU 
                                                      & (IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv))) 
                                                    | (4U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU)))))) 
                                                | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data) 
                                                   & (IData)(vlTOPp->lwc__DOT__NOT_lwc_outCounter_23_BITS_13_TO_1_35_EQ_0_36___05FETC___05F_d273))) 
                                               | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag));
    vlTOPp->lwc__DOT__lwc_outState__024EN = (((((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag) 
                                                & (0U 
                                                   == 
                                                   (0x1fffU 
                                                    & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                                       >> 1U)))) 
                                               | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data) 
                                                  & (((0U 
                                                       == 
                                                       (0x1fffU 
                                                        & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                                           >> 1U))) 
                                                      & (~ (IData)(vlTOPp->lwc__DOT__lwc_outCounter))) 
                                                     | ((0U 
                                                         == (IData)(vlTOPp->lwc__DOT__lwc_outRemainder)) 
                                                        & (0U 
                                                           == 
                                                           (0x1fffU 
                                                            & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                                               >> 1U))))))) 
                                              | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header) 
                                                 & (((0U 
                                                      != 
                                                      (0xffffU 
                                                       & (IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv))) 
                                                     | (IData)(
                                                               (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                >> 0x18U))) 
                                                    | (4U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlTOPp->lwc__DOT__lwc_headersFifo_rv 
                                                                   >> 0x1cU))))))) 
                                             | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status));
    vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag) 
           & (0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_outCounter) 
                                >> 1U))));
    vlTOPp->lwc__DOT__ascon__024EN_bdo_deq = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data) 
                                              | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag));
    vlTOPp->lwc__DOT__lwc_tagFifo_rv__024port1___05Fread 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag)
            ? vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port0___05Fwrite_1
            : vlTOPp->lwc__DOT__lwc_tagFifo_rv);
    vlTOPp->lwc__DOT__NOT_lwc_tagFifo_rv_port0___05Fread___05F19_BITS_31_TO___05FETC___05F_d234 
        = ((IData)(vlTOPp->lwc__DOT__lwc_tagFifo_rv) 
           != vlTOPp->lwc__DOT__sw___05Fh6283);
    vlTOPp->lwc__DOT__CASE_asconbdo_first_BITS_1_TO_0_0_asconbdo_f_ETC___05Fq1 
        = ((1U & (IData)((vlTOPp->lwc__DOT__ascon__024bdo_first 
                          >> 1U))) ? ((1U & (IData)(vlTOPp->lwc__DOT__ascon__024bdo_first))
                                       ? vlTOPp->lwc__DOT__b___05Fh7635
                                       : vlTOPp->lwc__DOT__b___05Fh7632)
            : ((1U & (IData)(vlTOPp->lwc__DOT__ascon__024bdo_first))
                ? vlTOPp->lwc__DOT__b___05Fh7625 : (IData)(
                                                           (vlTOPp->lwc__DOT__ascon__024bdo_first 
                                                            >> 3U))));
    vlTOPp->lwc__DOT__lwc_finalRemainBytes__024D_IN 
        = (3U & ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr)
                  ? vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT
                  : vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT));
    if (vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi) {
        vlTOPp->lwc__DOT__ascon__024bdi_enq_el = vlTOPp->lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_1;
        vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_4 
            = ((((0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                    >> 1U))) & (~ (IData)(vlTOPp->lwc__DOT__lwc_inWordCounter))) 
                | ((0U == (IData)(vlTOPp->lwc__DOT__lwc_finalRemainBytes)) 
                   & (0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                        >> 1U))))) 
               & 1U);
    } else {
        vlTOPp->lwc__DOT__ascon__024bdi_enq_el = vlTOPp->lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_2;
        vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_4 = 0U;
    }
    vlTOPp->lwc__DOT__lwc_sdiReceiver_deq_pw__024whas 
        = (((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi) 
            | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr)) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_inst));
    vlTOPp->lwc__DOT__ascon__024EN_bdi_enq = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi) 
                                              | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi));
    vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_3 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi) 
           & (((0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                  >> 1U))) & (~ (IData)(vlTOPp->lwc__DOT__lwc_inWordCounter))) 
              | ((0U == (IData)(vlTOPp->lwc__DOT__lwc_finalRemainBytes)) 
                 & (0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                      >> 1U))))));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr 
        = ((((2U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
             & (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N)) 
            & (IData)(vlTOPp->lwc__DOT__ascon__024RDY_process)) 
           & (IData)(vlTOPp->lwc__DOT__CASE_lwc_pdiReceiver_fifofD_OUT_BITS_31_TO_28_ETC___05Fq2));
    vlTOPp->lwc__DOT__lwc_outCounter__024D_IN = ((IData)(vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_1)
                                                  ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_1)
                                                  : 
                                                 ((IData)(vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_2)
                                                   ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_2)
                                                   : 
                                                  ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag)
                                                    ? (IData)(vlTOPp->lwc__DOT__x___05Fh8042)
                                                    : (IData)(vlTOPp->lwc__DOT____Vxrand7))));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr 
        = ((~ (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_enqueueing__024whas)) 
           & (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_dequeueing__024whas));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_both 
        = (((IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_enqueueing__024whas) 
            & (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_dequeueing__024whas)) 
           & (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_x_wire__024whas));
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr 
        = (((IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_enqueueing__024whas) 
            & (~ (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_dequeueing__024whas))) 
           & (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_x_wire__024whas));
    vlTOPp->lwc__DOT__lwc_outState__024D_IN = ((IData)(vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_1)
                                                ? 3U
                                                : ((IData)(vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_2)
                                                    ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_2)
                                                    : 
                                                   ((IData)(vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_3)
                                                     ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_3)
                                                     : 
                                                    ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status)
                                                      ? 0U
                                                      : (IData)(vlTOPp->lwc__DOT____Vxrand8)))));
    vlTOPp->lwc__DOT__ascon__DOT__EN_bdo_deq = vlTOPp->lwc__DOT__ascon__024EN_bdo_deq;
    vlTOPp->lwc__DOT__ascon__DOT__piso_countReg__024EN 
        = vlTOPp->lwc__DOT__ascon__024EN_bdo_deq;
    vlTOPp->lwc__DOT__ascon__DOT__piso_vec__024EN = vlTOPp->lwc__DOT__ascon__024EN_bdo_deq;
    vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data 
        = (((6U == (IData)(vlTOPp->lwc__DOT__lwc_inState)) 
            & (~ (IData)((vlTOPp->lwc__DOT__lwc_tagFifo_rv__024port1___05Fread 
                          >> 0x20U)))) & (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N));
    vlTOPp->lwc__DOT__lwc_statFailure__024EN = (((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag) 
                                                 & (IData)(vlTOPp->lwc__DOT__NOT_lwc_tagFifo_rv_port0___05Fread___05F19_BITS_31_TO___05FETC___05F_d234)) 
                                                | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status));
    vlTOPp->lwc__DOT__MUX_lwc_statFailure__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag) 
           & (IData)(vlTOPp->lwc__DOT__NOT_lwc_tagFifo_rv_port0___05Fread___05F19_BITS_31_TO___05FETC___05F_d234));
    vlTOPp->lwc__DOT__IF_ascon_bdo_first___05F26_BIT_2_40_THEN_IF_ascon___05FETC___05F_d254 
        = ((1U & (IData)((vlTOPp->lwc__DOT__ascon__024bdo_first 
                          >> 2U))) ? vlTOPp->lwc__DOT__CASE_asconbdo_first_BITS_1_TO_0_0_asconbdo_f_ETC___05Fq1
            : (IData)((vlTOPp->lwc__DOT__ascon__024bdo_first 
                       >> 3U)));
    vlTOPp->lwc__DOT__ascon__DOT__bdi_enq_el = vlTOPp->lwc__DOT__ascon__024bdi_enq_el;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024DEQ 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_deq_pw__024whas;
    vlTOPp->lwc__DOT__ascon__DOT__EN_bdi_enq = vlTOPp->lwc__DOT__ascon__024EN_bdi_enq;
    vlTOPp->lwc__DOT__ascon__DOT__sipo_count_reg__024EN 
        = vlTOPp->lwc__DOT__ascon__024EN_bdi_enq;
    vlTOPp->lwc__DOT__lwc_inSegType__024EN = vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr;
    vlTOPp->lwc__DOT__lwc_finalRemainBytes__024EN = 
        ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr) 
         | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr));
    vlTOPp->lwc__DOT__lwc_inSegEoT__024D_IN = (1U & 
                                               ((~ (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr)) 
                                                | (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                   >> 0x19U)));
    vlTOPp->lwc__DOT__lwc_inSegEoT__024EN = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr) 
                                             | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr));
    vlTOPp->lwc__DOT__lwc_inSegLast__024D_IN = (1U 
                                                & ((~ (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr)) 
                                                   | (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                      >> 0x18U)));
    vlTOPp->lwc__DOT__lwc_inSegLast__024EN = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr) 
                                              | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr));
    vlTOPp->lwc__DOT__ascon__024process_typ = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr)
                                                ? (IData)(vlTOPp->lwc__DOT__MUX_ascon__024process_1___05FVAL_1)
                                                : (IData)(vlTOPp->lwc__DOT__MUX_ascon__024process_1___05FVAL_2));
    vlTOPp->lwc__DOT__ascon__024EN_process = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr) 
                                              | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr));
    vlTOPp->lwc__DOT__ascon__024process_empty = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr)
                                                  ? 
                                                 (0U 
                                                  == 
                                                  (0xffffU 
                                                   & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT))
                                                  : 
                                                 (0U 
                                                  == 
                                                  (0xffffU 
                                                   & vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT)));
    vlTOPp->lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_3 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr));
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024EN_port1___05Fwrite 
        = (((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr) 
            & (((5U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                >> 0x1cU))) | (4U == 
                                               (0xfU 
                                                & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                   >> 0x1cU)))) 
               | ((7U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                  >> 0x1cU))) & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                 >> 0x18U)))) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_enq_tag));
    vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_2 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr) 
           & (((0U != (0xffffU & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)) 
               | (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                  >> 0x18U)) | ((5U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                >> 0x1cU))) 
                                & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                   >> 0x19U))));
    vlTOPp->lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FSEL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr) 
           & (((5U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                               >> 0x1cU))) | (4U == 
                                              (0xfU 
                                               & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                  >> 0x1cU)))) 
              | ((7U == (0xfU & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                 >> 0x1cU))) & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                >> 0x18U))));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r__024D_IN 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr)
            ? (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r_1_MINUS_1___05F_d29)
            : (IData)(vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_cntr_r__024write_1___05FVAL_2));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_2 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_both) 
           & (IData)(vlTOPp->lwc__DOT___dfoo1));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_2 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_both) 
           & (IData)(vlTOPp->lwc__DOT___dfoo3));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r__024EN 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_q_0__024EN 
        = ((((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr) 
             & (0U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r))) 
            | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_both) 
               & (IData)(vlTOPp->lwc__DOT___dfoo3))) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_q_1__024EN 
        = ((((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr) 
             & (1U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r))) 
            | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_both) 
               & (IData)(vlTOPp->lwc__DOT___dfoo1))) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr) 
           & (1U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr) 
           & (0U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r)));
    vlTOPp->lwc__DOT__lwc_inWordCounter__024EN = ((
                                                   ((((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data) 
                                                      | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi)) 
                                                     | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi)) 
                                                    | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr)) 
                                                   | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr)) 
                                                  | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr));
    vlTOPp->lwc__DOT__lwc_tagFifo_rv__024port2___05Fread 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data)
            ? vlTOPp->lwc__DOT__lwc_tagFifo_rv__024port1___05Fwrite_1
            : vlTOPp->lwc__DOT__lwc_tagFifo_rv__024port1___05Fread);
    vlTOPp->lwc__DOT__lwc_inState__024EN = ((((((((
                                                   ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data) 
                                                    & (0U 
                                                       == 
                                                       (0x1fffU 
                                                        & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                                           >> 1U)))) 
                                                   | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr) 
                                                      & (((0U 
                                                           != 
                                                           (0xffffU 
                                                            & vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT)) 
                                                          | (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                             >> 0x18U)) 
                                                         | ((5U 
                                                             == 
                                                             (0xfU 
                                                              & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                                 >> 0x1cU))) 
                                                            & (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                                               >> 0x19U))))) 
                                                  | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi) 
                                                     & (((0U 
                                                          == 
                                                          (0x1fffU 
                                                           & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                                              >> 1U))) 
                                                         & (~ (IData)(vlTOPp->lwc__DOT__lwc_inWordCounter))) 
                                                        | ((0U 
                                                            == (IData)(vlTOPp->lwc__DOT__lwc_finalRemainBytes)) 
                                                           & (0U 
                                                              == 
                                                              (0x1fffU 
                                                               & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                                                  >> 1U))))))) 
                                                 | ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi) 
                                                    & (((0U 
                                                         == 
                                                         (0x1fffU 
                                                          & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                                             >> 1U))) 
                                                        & (~ (IData)(vlTOPp->lwc__DOT__lwc_inWordCounter))) 
                                                       | ((0U 
                                                           == (IData)(vlTOPp->lwc__DOT__lwc_finalRemainBytes)) 
                                                          & (0U 
                                                             == 
                                                             (0x1fffU 
                                                              & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                                                 >> 1U))))))) 
                                                | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_pdi_instruction)) 
                                               | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_enq_tag)) 
                                              | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_inst)) 
                                             | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr)) 
                                            | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr));
    vlTOPp->lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_1 
        = (((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data) 
            | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi)) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi));
    vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data) 
           & (0U == (0x1fffU & ((IData)(vlTOPp->lwc__DOT__lwc_inWordCounter) 
                                >> 1U))));
    vlTOPp->lwc__DOT__lwc_pdiReceiver_deq_pw__024whas 
        = (((((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data) 
              | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr)) 
             | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi)) 
            | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr)) 
           | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_pdi_instruction));
    vlTOPp->lwc__DOT__lwc_statFailure__024D_IN = vlTOPp->lwc__DOT__MUX_lwc_statFailure__024write_1___05FSEL_1;
    vlTOPp->lwc__DOT__x___05Fh7136 = ((0xff000000U 
                                       & (vlTOPp->lwc__DOT__IF_ascon_bdo_first___05F26_BIT_2_40_THEN_IF_ascon___05FETC___05F_d254 
                                          << 0x18U)) 
                                      | ((0xff0000U 
                                          & (vlTOPp->lwc__DOT__IF_ascon_bdo_first___05F26_BIT_2_40_THEN_IF_ascon___05FETC___05F_d254 
                                             << 8U)) 
                                         | ((0xff00U 
                                             & (vlTOPp->lwc__DOT__IF_ascon_bdo_first___05F26_BIT_2_40_THEN_IF_ascon___05FETC___05F_d254 
                                                >> 8U)) 
                                            | (0xffU 
                                               & (vlTOPp->lwc__DOT__IF_ascon_bdo_first___05F26_BIT_2_40_THEN_IF_ascon___05FETC___05F_d254 
                                                  >> 0x18U)))));
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__DEQ 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024DEQ;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__FULL_N 
        = (1U & ((~ (IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__empty_reg)) 
                 | (IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024DEQ)));
    vlTOPp->lwc__DOT__ascon__DOT__process_typ = vlTOPp->lwc__DOT__ascon__024process_typ;
    vlTOPp->lwc__DOT__ascon__DOT__EN_process = vlTOPp->lwc__DOT__ascon__024EN_process;
    vlTOPp->lwc__DOT__ascon__DOT__state__024EN = vlTOPp->lwc__DOT__ascon__024EN_process;
    vlTOPp->lwc__DOT__ascon__DOT__process_empty = vlTOPp->lwc__DOT__ascon__024process_empty;
    vlTOPp->lwc__DOT__ascon__DOT__state__024D_IN = 
        ((IData)(vlTOPp->lwc__DOT__ascon__024process_empty)
          ? 0U : 1U);
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port1___05Fwrite_1 
        = ((IData)(vlTOPp->lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FSEL_1)
            ? vlTOPp->lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FVAL_1
            : 0x183000010ULL);
    vlTOPp->lwc__DOT__lwc_tagFifo_rv__024D_IN = vlTOPp->lwc__DOT__lwc_tagFifo_rv__024port2___05Fread;
    vlTOPp->lwc__DOT__lwc_inWordCounter__024D_IN = 
        (0x3fffU & ((IData)(vlTOPp->lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_1)
                     ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FVAL_1)
                     : ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr)
                         ? (vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT 
                            >> 2U) : ((IData)(vlTOPp->lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_3)
                                       ? (vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT 
                                          >> 2U) : (IData)(vlTOPp->lwc__DOT____Vxrand6)))));
    vlTOPp->lwc__DOT__lwc_inState__024D_IN = ((IData)(vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_2)
                                               ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_2)
                                               : ((IData)(vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_3)
                                                   ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_3)
                                                   : 
                                                  ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_pdi_instruction)
                                                    ? (IData)(vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_5)
                                                    : 
                                                   ((((IData)(vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_1) 
                                                      | (IData)(vlTOPp->lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_4)) 
                                                     | (IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_enq_tag))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_inst)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr)
                                                        ? 8U
                                                        : (IData)(vlTOPp->lwc__DOT____Vxrand5))))))));
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024DEQ 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_deq_pw__024whas;
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_2 
        = ((QData)((IData)(vlTOPp->lwc__DOT__x___05Fh7136)) 
           << 1U);
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024FULL_N 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__FULL_N;
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port2___05Fread 
        = ((IData)(vlTOPp->lwc__DOT__lwc_headersFifo_rv__024EN_port1___05Fwrite)
            ? vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port1___05Fwrite_1
            : vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port1___05Fread);
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__DEQ 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024DEQ;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__FULL_N 
        = (1U & ((~ (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__empty_reg)) 
                 | (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024DEQ)));
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_1 
        = ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header)
            ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_1
            : ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data)
                ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_2
                : ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status)
                    ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_3
                    : vlTOPp->lwc__DOT____Vxrand1)));
    vlTOPp->lwc__DOT__sdi_ready = ((IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024FULL_N) 
                                   | (IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_deq_pw__024whas));
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024ENQ 
        = ((IData)(vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024FULL_N) 
           & (IData)(vlTOPp->sdi_valid));
    vlTOPp->lwc__DOT__lwc_headersFifo_rv__024D_IN = vlTOPp->lwc__DOT__lwc_headersFifo_rv__024port2___05Fread;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024FULL_N 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__FULL_N;
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FVAL_2 
        = ((2U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r))
            ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_1
            : 0ULL);
    vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_2 
        = ((1U == (IData)(vlTOPp->lwc__DOT__lwc_doSender_fifof_cntr_r))
            ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_1
            : vlTOPp->lwc__DOT__lwc_doSender_fifof_q_1);
    vlTOPp->sdi_ready = vlTOPp->lwc__DOT__sdi_ready;
    vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__DOT__ENQ 
        = vlTOPp->lwc__DOT__lwc_sdiReceiver_fifof__024ENQ;
    vlTOPp->lwc__DOT__pdi_ready = ((IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024FULL_N) 
                                   | (IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_deq_pw__024whas));
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024ENQ 
        = ((IData)(vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024FULL_N) 
           & (IData)(vlTOPp->pdi_valid));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_q_1__024D_IN 
        = ((IData)(vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_1)
            ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_1
            : ((IData)(vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_2)
                ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FVAL_2
                : ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr)
                    ? 0ULL : vlTOPp->lwc__DOT____Vxrand4)));
    vlTOPp->lwc__DOT__lwc_doSender_fifof_q_0__024D_IN 
        = ((IData)(vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_1)
            ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_1
            : ((IData)(vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_2)
                ? vlTOPp->lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_2
                : ((IData)(vlTOPp->lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr)
                    ? vlTOPp->lwc__DOT__lwc_doSender_fifof_q_1
                    : vlTOPp->lwc__DOT____Vxrand3)));
    vlTOPp->pdi_ready = vlTOPp->lwc__DOT__pdi_ready;
    vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__DOT__ENQ 
        = vlTOPp->lwc__DOT__lwc_pdiReceiver_fifof__024ENQ;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    pdi_data = VL_RAND_RESET_I(32);
    pdi_valid = VL_RAND_RESET_I(1);
    pdi_ready = VL_RAND_RESET_I(1);
    sdi_data = VL_RAND_RESET_I(32);
    sdi_valid = VL_RAND_RESET_I(1);
    sdi_ready = VL_RAND_RESET_I(1);
    do_data = VL_RAND_RESET_I(32);
    do_last = VL_RAND_RESET_I(1);
    do_valid = VL_RAND_RESET_I(1);
    do_ready = VL_RAND_RESET_I(1);
    lwc__DOT____Vxrand10 = VL_RAND_RESET_Q(33);
    lwc__DOT____Vxrand9 = VL_RAND_RESET_Q(33);
    lwc__DOT____Vxrand8 = VL_RAND_RESET_I(2);
    lwc__DOT____Vxrand7 = VL_RAND_RESET_I(14);
    lwc__DOT____Vxrand6 = VL_RAND_RESET_I(14);
    lwc__DOT____Vxrand5 = VL_RAND_RESET_I(4);
    lwc__DOT____Vxrand4 = VL_RAND_RESET_Q(33);
    lwc__DOT____Vxrand3 = VL_RAND_RESET_Q(33);
    lwc__DOT____Vxrand2 = VL_RAND_RESET_Q(33);
    lwc__DOT____Vxrand1 = VL_RAND_RESET_Q(33);
    lwc__DOT__clk = VL_RAND_RESET_I(1);
    lwc__DOT__rst = VL_RAND_RESET_I(1);
    lwc__DOT__pdi_data = VL_RAND_RESET_I(32);
    lwc__DOT__pdi_valid = VL_RAND_RESET_I(1);
    lwc__DOT__pdi_ready = VL_RAND_RESET_I(1);
    lwc__DOT__sdi_data = VL_RAND_RESET_I(32);
    lwc__DOT__sdi_valid = VL_RAND_RESET_I(1);
    lwc__DOT__sdi_ready = VL_RAND_RESET_I(1);
    lwc__DOT__do_data = VL_RAND_RESET_I(32);
    lwc__DOT__do_last = VL_RAND_RESET_I(1);
    lwc__DOT__do_valid = VL_RAND_RESET_I(1);
    lwc__DOT__do_ready = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_headersFifo_rv__024port0___05Fwrite_1 = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_headersFifo_rv__024port1___05Fread = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_headersFifo_rv__024port1___05Fwrite_1 = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_headersFifo_rv__024port2___05Fread = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_tagFifo_rv__024port1___05Fread = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_tagFifo_rv__024port1___05Fwrite_1 = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_tagFifo_rv__024port2___05Fread = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_doSender_fifof_dequeueing__024whas = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_doSender_fifof_enqueueing__024whas = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_doSender_fifof_x_wire__024whas = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_headersFifo_rv__024EN_port1___05Fwrite = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_deq_pw__024whas = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_deq_pw__024whas = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_doSender_fifof_cntr_r = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_doSender_fifof_cntr_r__024D_IN = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_doSender_fifof_cntr_r__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_doSender_fifof_q_0 = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_doSender_fifof_q_0__024D_IN = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_doSender_fifof_q_0__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_doSender_fifof_q_1 = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_doSender_fifof_q_1__024D_IN = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_doSender_fifof_q_1__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_finalRemainBytes = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_finalRemainBytes__024D_IN = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_finalRemainBytes__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_headersFifo_rv = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_headersFifo_rv__024D_IN = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_headersFifo_rv__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inSegEoT = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inSegEoT__024D_IN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inSegEoT__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inSegLast = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inSegLast__024D_IN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inSegLast__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inSegType = VL_RAND_RESET_I(4);
    lwc__DOT__lwc_inSegType__024D_IN = VL_RAND_RESET_I(4);
    lwc__DOT__lwc_inSegType__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inState = VL_RAND_RESET_I(4);
    lwc__DOT__lwc_inState__024D_IN = VL_RAND_RESET_I(4);
    lwc__DOT__lwc_inState__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inWordCounter = VL_RAND_RESET_I(14);
    lwc__DOT__lwc_inWordCounter__024D_IN = VL_RAND_RESET_I(14);
    lwc__DOT__lwc_inWordCounter__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_outCounter = VL_RAND_RESET_I(14);
    lwc__DOT__lwc_outCounter__024D_IN = VL_RAND_RESET_I(14);
    lwc__DOT__lwc_outCounter__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_outRemainder = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_outRemainder__024D_IN = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_outRemainder__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_outSegLast = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_outSegLast__024D_IN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_outSegLast__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_outSegType = VL_RAND_RESET_I(4);
    lwc__DOT__lwc_outSegType__024D_IN = VL_RAND_RESET_I(4);
    lwc__DOT__lwc_outSegType__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_outState = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_outState__024D_IN = VL_RAND_RESET_I(2);
    lwc__DOT__lwc_outState__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_statFailure = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_statFailure__024D_IN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_statFailure__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_tagFifo_rv = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_tagFifo_rv__024D_IN = VL_RAND_RESET_Q(33);
    lwc__DOT__lwc_tagFifo_rv__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__024bdi_enq_el = VL_RAND_RESET_Q(35);
    lwc__DOT__ascon__024bdo_first = VL_RAND_RESET_Q(35);
    lwc__DOT__ascon__024process_typ = VL_RAND_RESET_I(4);
    lwc__DOT__ascon__024EN_bdi_enq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__024EN_bdo_deq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__024EN_process = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__024RDY_bdi_enq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__024RDY_bdo_deq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__024RDY_process = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__024process_empty = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__024D_IN = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_pdiReceiver_fifof__024D_OUT = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_pdiReceiver_fifof__024CLR = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__024DEQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__024EMPTY_N = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__024ENQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__024FULL_N = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__024D_IN = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_sdiReceiver_fifof__024D_OUT = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_sdiReceiver_fifof__024CLR = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__024DEQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__024EMPTY_N = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__024ENQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__024FULL_N = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_both = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_decCtr = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_doSender_fifof_incCtr = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_enq_tag = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_pdi = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_feed_core_sdi = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_get_pdi_hdr = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_hdr = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_get_sdi_inst = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_data = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_get_tag_hdr = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_out_header = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_out_status = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_pdi_instruction = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_sendout_data = VL_RAND_RESET_I(1);
    lwc__DOT__WILL_FIRE_RL_lwc_rl_verify_tag = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_1 = VL_RAND_RESET_Q(33);
    lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FVAL_1 = VL_RAND_RESET_Q(33);
    lwc__DOT__MUX_ascon__024process_1___05FVAL_1 = VL_RAND_RESET_I(4);
    lwc__DOT__MUX_ascon__024process_1___05FVAL_2 = VL_RAND_RESET_I(4);
    lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_1 = VL_RAND_RESET_Q(35);
    lwc__DOT__MUX_ascon__024bdi_enq_1___05FVAL_2 = VL_RAND_RESET_Q(35);
    lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FVAL_2 = VL_RAND_RESET_Q(33);
    lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FVAL_2 = VL_RAND_RESET_Q(33);
    lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_1 = VL_RAND_RESET_Q(33);
    lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_2 = VL_RAND_RESET_Q(33);
    lwc__DOT__MUX_lwc_doSender_fifof_x_wire__024wset_1___05FVAL_3 = VL_RAND_RESET_Q(33);
    lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FVAL_1 = VL_RAND_RESET_I(14);
    lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_1 = VL_RAND_RESET_I(14);
    lwc__DOT__MUX_lwc_outCounter__024write_1___05FVAL_2 = VL_RAND_RESET_I(14);
    lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_2 = VL_RAND_RESET_I(4);
    lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_3 = VL_RAND_RESET_I(4);
    lwc__DOT__MUX_lwc_inState__024write_1___05FVAL_5 = VL_RAND_RESET_I(4);
    lwc__DOT__MUX_lwc_doSender_fifof_cntr_r__024write_1___05FVAL_2 = VL_RAND_RESET_I(2);
    lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_2 = VL_RAND_RESET_I(2);
    lwc__DOT__MUX_lwc_outState__024write_1___05FVAL_3 = VL_RAND_RESET_I(2);
    lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_doSender_fifof_q_0__024write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_doSender_fifof_q_1__024write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_headersFifo_rv__024port1___05Fwrite_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_inState__024write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_inWordCounter__024write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_outCounter__024write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_outState__024write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    lwc__DOT__MUX_lwc_statFailure__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    lwc__DOT__CASE_asconbdo_first_BITS_1_TO_0_0_asconbdo_f_ETC___05Fq1 = VL_RAND_RESET_I(32);
    lwc__DOT__CASE_lwc_pdiReceiver_fifofD_OUT_BITS_31_TO_28_ETC___05Fq2 = VL_RAND_RESET_I(1);
    lwc__DOT__IF_ascon_bdo_first___05F26_BIT_2_40_THEN_IF_ascon___05FETC___05F_d254 = VL_RAND_RESET_I(32);
    lwc__DOT__b___05Fh7625 = VL_RAND_RESET_I(32);
    lwc__DOT__b___05Fh7632 = VL_RAND_RESET_I(32);
    lwc__DOT__b___05Fh7635 = VL_RAND_RESET_I(32);
    lwc__DOT__el_word___05Fh3645 = VL_RAND_RESET_I(32);
    lwc__DOT__el_word___05Fh4485 = VL_RAND_RESET_I(32);
    lwc__DOT__sw___05Fh6283 = VL_RAND_RESET_I(32);
    lwc__DOT__x___05Fh7136 = VL_RAND_RESET_I(32);
    lwc__DOT__x___05Fh8126 = VL_RAND_RESET_I(32);
    lwc__DOT__x___05Fh8042 = VL_RAND_RESET_I(14);
    lwc__DOT__IF_lwc_inSegType_61_EQ_5_64_AND_lwc_inSegEoT_4_ETC___05F_d168 = VL_RAND_RESET_I(4);
    lwc__DOT__lwc_doSender_fifof_cntr_r_1_MINUS_1___05F_d29 = VL_RAND_RESET_I(2);
    lwc__DOT__NOT_lwc_outCounter_23_BITS_13_TO_1_35_EQ_0_36___05FETC___05F_d273 = VL_RAND_RESET_I(1);
    lwc__DOT__NOT_lwc_tagFifo_rv_port0___05Fread___05F19_BITS_31_TO___05FETC___05F_d234 = VL_RAND_RESET_I(1);
    lwc__DOT___dfoo1 = VL_RAND_RESET_I(1);
    lwc__DOT___dfoo3 = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_inWordCounter_28_BITS_13_TO_1_36_EQ_0_37_A_ETC___05F_d145 = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__CLK = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__RST_N = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__process_typ = VL_RAND_RESET_I(4);
    lwc__DOT__ascon__DOT__process_empty = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__EN_process = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__RDY_process = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__bdi_enq_el = VL_RAND_RESET_Q(35);
    lwc__DOT__ascon__DOT__EN_bdi_enq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__RDY_bdi_enq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__EN_bdo_deq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__RDY_bdo_deq = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__bdo_notEmpty = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__bdo_first = VL_RAND_RESET_Q(35);
    lwc__DOT__ascon__DOT__piso_countReg = VL_RAND_RESET_I(4);
    lwc__DOT__ascon__DOT__piso_countReg__024D_IN = VL_RAND_RESET_I(4);
    lwc__DOT__ascon__DOT__piso_countReg__024EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, lwc__DOT__ascon__DOT__piso_vec);
    VL_RAND_RESET_W(320, lwc__DOT__ascon__DOT__piso_vec__024D_IN);
    lwc__DOT__ascon__DOT__piso_vec__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__sipo_count_reg = VL_RAND_RESET_I(4);
    lwc__DOT__ascon__DOT__sipo_count_reg__024D_IN = VL_RAND_RESET_I(4);
    lwc__DOT__ascon__DOT__sipo_count_reg__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__ascon__DOT__state = VL_RAND_RESET_I(2);
    lwc__DOT__ascon__DOT__state__024D_IN = VL_RAND_RESET_I(2);
    lwc__DOT__ascon__DOT__state__024EN = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__CLK = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__RST = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__D_IN = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__ENQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__DEQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__CLR = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__FULL_N = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__EMPTY_N = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__D_OUT = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__empty_reg = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_pdiReceiver_fifof__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__CLK = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__RST = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__D_IN = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__ENQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__DEQ = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__CLR = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__FULL_N = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__EMPTY_N = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__D_OUT = VL_RAND_RESET_I(32);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__empty_reg = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    lwc__DOT__lwc_sdiReceiver_fifof__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
}
