// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtopclk.h for the primary calling header

#ifndef VERILATED_VTOPCLK___024ROOT_H_
#define VERILATED_VTOPCLK___024ROOT_H_  // guard

#include "verilated.h"


class Vtopclk__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtopclk___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    CData/*0:0*/ topclk__DOT____Vcellout__ticking__tick;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(N,15,0);
    VL_OUT16(data_out,15,0);
    SData/*15:0*/ topclk__DOT__ticking__DOT__count;
    IData/*31:0*/ topclk__DOT__FSM__DOT__current_state;
    IData/*31:0*/ topclk__DOT__FSM__DOT__next_state;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtopclk__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtopclk___024root(Vtopclk__Syms* symsp, const char* v__name);
    ~Vtopclk___024root();
    VL_UNCOPYABLE(Vtopclk___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
