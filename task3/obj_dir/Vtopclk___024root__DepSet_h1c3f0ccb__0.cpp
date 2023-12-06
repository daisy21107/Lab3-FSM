// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtopclk.h for the primary calling header

#include "verilated.h"

#include "Vtopclk__Syms.h"
#include "Vtopclk___024root.h"

void Vtopclk___024root___eval_act(Vtopclk___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtopclk___024root___nba_sequent__TOP__0(Vtopclk___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__topclk__DOT__ticking__DOT__count;
    __Vdly__topclk__DOT__ticking__DOT__count = 0;
    // Body
    __Vdly__topclk__DOT__ticking__DOT__count = vlSelf->topclk__DOT__ticking__DOT__count;
    if (vlSelf->rst) {
        vlSelf->topclk__DOT__FSM__DOT__current_state = 0U;
        vlSelf->topclk__DOT____Vcellout__ticking__tick = 0U;
        __Vdly__topclk__DOT__ticking__DOT__count = vlSelf->N;
    } else {
        vlSelf->topclk__DOT__FSM__DOT__current_state 
            = vlSelf->topclk__DOT__FSM__DOT__next_state;
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->topclk__DOT__ticking__DOT__count))) {
                vlSelf->topclk__DOT____Vcellout__ticking__tick = 1U;
                __Vdly__topclk__DOT__ticking__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__topclk__DOT__ticking__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->topclk__DOT__ticking__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->topclk__DOT____Vcellout__ticking__tick = 0U;
            }
        }
    }
    vlSelf->topclk__DOT__ticking__DOT__count = __Vdly__topclk__DOT__ticking__DOT__count;
    if (((((((((0U == vlSelf->topclk__DOT__FSM__DOT__current_state) 
               | (1U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
              | (2U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
             | (3U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
            | (4U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
           | (5U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
          | (6U == vlSelf->topclk__DOT__FSM__DOT__current_state)) 
         | (7U == vlSelf->topclk__DOT__FSM__DOT__current_state))) {
        if ((0U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 1U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        } else if ((1U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 2U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        } else if ((2U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 3U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        } else if ((3U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 4U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        } else if ((4U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 5U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        } else if ((5U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 6U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        } else if ((6U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 7U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->topclk__DOT__FSM__DOT__next_state 
                = ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
                    ? 8U : vlSelf->topclk__DOT__FSM__DOT__current_state);
        }
    } else if ((8U == vlSelf->topclk__DOT__FSM__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->topclk__DOT__FSM__DOT__next_state = 
            ((IData)(vlSelf->topclk__DOT____Vcellout__ticking__tick)
              ? 0U : vlSelf->topclk__DOT__FSM__DOT__current_state);
    } else {
        vlSelf->data_out = 0U;
        vlSelf->topclk__DOT__FSM__DOT__next_state = vlSelf->topclk__DOT__FSM__DOT__current_state;
    }
}

void Vtopclk___024root___eval_nba(Vtopclk___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtopclk___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtopclk___024root___eval_triggers__act(Vtopclk___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopclk___024root___dump_triggers__act(Vtopclk___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopclk___024root___dump_triggers__nba(Vtopclk___024root* vlSelf);
#endif  // VL_DEBUG

void Vtopclk___024root___eval(Vtopclk___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtopclk___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtopclk___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("topclk.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtopclk___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtopclk___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("topclk.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtopclk___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtopclk___024root___eval_debug_assertions(Vtopclk___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopclk___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
