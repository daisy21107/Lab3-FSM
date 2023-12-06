// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtopclk.h"
#include "Vtopclk__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtopclk::Vtopclk(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtopclk__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , N{vlSymsp->TOP.N}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtopclk::Vtopclk(const char* _vcname__)
    : Vtopclk(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtopclk::~Vtopclk() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtopclk___024root___eval_debug_assertions(Vtopclk___024root* vlSelf);
#endif  // VL_DEBUG
void Vtopclk___024root___eval_static(Vtopclk___024root* vlSelf);
void Vtopclk___024root___eval_initial(Vtopclk___024root* vlSelf);
void Vtopclk___024root___eval_settle(Vtopclk___024root* vlSelf);
void Vtopclk___024root___eval(Vtopclk___024root* vlSelf);

void Vtopclk::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtopclk::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtopclk___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtopclk___024root___eval_static(&(vlSymsp->TOP));
        Vtopclk___024root___eval_initial(&(vlSymsp->TOP));
        Vtopclk___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtopclk___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtopclk::eventsPending() { return false; }

uint64_t Vtopclk::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtopclk::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtopclk___024root___eval_final(Vtopclk___024root* vlSelf);

VL_ATTR_COLD void Vtopclk::final() {
    Vtopclk___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtopclk::hierName() const { return vlSymsp->name(); }
const char* Vtopclk::modelName() const { return "Vtopclk"; }
unsigned Vtopclk::threads() const { return 1; }
void Vtopclk::prepareClone() const { contextp()->prepareClone(); }
void Vtopclk::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtopclk::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtopclk___024root__trace_init_top(Vtopclk___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtopclk___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtopclk___024root*>(voidSelf);
    Vtopclk__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtopclk___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtopclk___024root__trace_register(Vtopclk___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtopclk::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtopclk::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtopclk___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
