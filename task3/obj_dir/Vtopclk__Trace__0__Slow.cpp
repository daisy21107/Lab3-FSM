// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtopclk__Syms.h"


VL_ATTR_COLD void Vtopclk___024root__trace_init_sub__TOP__0(Vtopclk___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"N", false,-1, 15,0);
    tracep->declBus(c+11,"data_out", false,-1, 15,0);
    tracep->pushNamePrefix("topclk ");
    tracep->declBus(c+12,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"N", false,-1, 15,0);
    tracep->declBus(c+11,"data_out", false,-1, 15,0);
    tracep->declBus(c+1,"tick", false,-1, 1,0);
    tracep->pushNamePrefix("FSM ");
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"data_out", false,-1, 7,0);
    tracep->declBus(c+4,"current_state", false,-1, 31,0);
    tracep->declBus(c+5,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ticking ");
    tracep->declBus(c+12,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"N", false,-1, 15,0);
    tracep->declBit(c+2,"tick", false,-1);
    tracep->declBus(c+6,"count", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtopclk___024root__trace_init_top(Vtopclk___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_init_top\n"); );
    // Body
    Vtopclk___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtopclk___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtopclk___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtopclk___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtopclk___024root__trace_register(Vtopclk___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtopclk___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtopclk___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtopclk___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtopclk___024root__trace_full_sub_0(Vtopclk___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtopclk___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_full_top_0\n"); );
    // Init
    Vtopclk___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtopclk___024root*>(voidSelf);
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtopclk___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtopclk___024root__trace_full_sub_0(Vtopclk___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->topclk__DOT____Vcellout__ticking__tick),2);
    bufp->fullBit(oldp+2,(vlSelf->topclk__DOT____Vcellout__ticking__tick));
    bufp->fullCData(oldp+3,((((((((((0U == vlSelf->topclk__DOT__FSM__DOT__current_state) 
                                    | (1U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                   | (2U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                  | (3U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                 | (4U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                                | (5U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                               | (6U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
                              | (7U == vlSelf->topclk__DOT__FSM__DOT__current_state))
                              ? ((0U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                  ? 0U : ((1U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                           ? 1U : (
                                                   (2U 
                                                    == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
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
    bufp->fullIData(oldp+4,(vlSelf->topclk__DOT__FSM__DOT__current_state),32);
    bufp->fullIData(oldp+5,((((((((((0U == vlSelf->topclk__DOT__FSM__DOT__current_state) 
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
                                              ? 3U : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                          : ((3U == vlSelf->topclk__DOT__FSM__DOT__current_state)
                                              ? ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                                                  ? 4U
                                                  : vlSelf->topclk__DOT__FSM__DOT__current_state)
                                              : ((4U 
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
    bufp->fullSData(oldp+6,(vlSelf->topclk__DOT__ticking__DOT__count),16);
    bufp->fullBit(oldp+7,(vlSelf->clk));
    bufp->fullBit(oldp+8,(vlSelf->rst));
    bufp->fullBit(oldp+9,(vlSelf->en));
    bufp->fullSData(oldp+10,(vlSelf->N),16);
    bufp->fullSData(oldp+11,(vlSelf->data_out),16);
    bufp->fullIData(oldp+12,(0x10U),32);
}
