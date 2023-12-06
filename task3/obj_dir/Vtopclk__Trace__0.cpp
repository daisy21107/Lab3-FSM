// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtopclk__Syms.h"


void Vtopclk___024root__trace_chg_sub_0(Vtopclk___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtopclk___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_chg_top_0\n"); );
    // Init
    Vtopclk___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtopclk___024root*>(voidSelf);
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtopclk___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtopclk___024root__trace_chg_sub_0(Vtopclk___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->topclk__DOT____Vcellout__ticking__tick),2);
        bufp->chgBit(oldp+1,(vlSelf->topclk__DOT____Vcellout__ticking__tick));
        bufp->chgCData(oldp+2,((((((((((0U == vlSelf->topclk__DOT__FSM__DOT__current_state) 
                                       | (1U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                      | (2U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                     | (3U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                    | (4U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                   | (5U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                  | (6U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                 | (7U == vlSelf->topclk__DOT__FSM__DOT__current_state))
                                 ? ((0U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                     ? 0U : ((1U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                              ? 1U : 
                                             ((2U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                                 : ((8U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                     ? 0xffU : 0U))),8);
        bufp->chgIData(oldp+3,(vlSelf->topclk__DOT__FSM__DOT__current_state),32);
        bufp->chgIData(oldp+4,((((((((((0U == vlSelf->topclk__DOT__FSM__DOT__current_state) 
                                       | (1U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                      | (2U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                     | (3U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                    | (4U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                   | (5U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                  | (6U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                 | (7U == vlSelf->topclk__DOT__FSM__DOT__current_state))
                                 ? ((0U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                     ? ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                         ? 1U : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                     : ((1U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                         ? ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                             ? 2U : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                         : ((2U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                             ? ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                                 ? 3U
                                                 : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                             : ((3U 
                                                 == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                 ? 
                                                ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                                  ? 4U
                                                  : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                 : 
                                                ((4U 
                                                  == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                  ? 
                                                 ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                                   ? 5U
                                                   : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                  : 
                                                 ((5U 
                                                   == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                   ? 
                                                  ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                                    ? 6U
                                                    : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                   : 
                                                  ((6U 
                                                    == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                                     ? 7U
                                                     : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                    : 
                                                   ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                                     ? 8U
                                                     : vlSelf->topclk__DOT__FSM__DOT__current_state))))))))
                                 : ((8U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                     ? ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                         ? 0U : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                     : vlSelf->topclk__DOT__FSM__DOT__current_state))),32);
        bufp->chgSData(oldp+5,(vlSelf->topclk__DOT__ticking__DOT__count),16);
    }
    bufp->chgBit(oldp+6,(vlSelf->clk));
    bufp->chgBit(oldp+7,(vlSelf->rst));
    bufp->chgBit(oldp+8,(vlSelf->en));
    bufp->chgSData(oldp+9,(vlSelf->N),16);
    bufp->chgSData(oldp+10,(vlSelf->data_out),16);
}

void Vtopclk___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_cleanup\n"); );
    // Init
    Vtopclk___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtopclk___024root*>(voidSelf);
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
