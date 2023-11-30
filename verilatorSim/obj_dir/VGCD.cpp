// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VGCD.h"
#include "VGCD__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VGCD::VGCD(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VGCD__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , io_loadingValues{vlSymsp->TOP.io_loadingValues}
    , io_outputValid{vlSymsp->TOP.io_outputValid}
    , io_value1{vlSymsp->TOP.io_value1}
    , io_value2{vlSymsp->TOP.io_value2}
    , io_outputGCD{vlSymsp->TOP.io_outputGCD}
    , rootp{&(vlSymsp->TOP)}
{
}

VGCD::VGCD(const char* _vcname__)
    : VGCD(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VGCD::~VGCD() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VGCD___024root___eval_initial(VGCD___024root* vlSelf);
void VGCD___024root___eval_settle(VGCD___024root* vlSelf);
void VGCD___024root___eval(VGCD___024root* vlSelf);
#ifdef VL_DEBUG
void VGCD___024root___eval_debug_assertions(VGCD___024root* vlSelf);
#endif  // VL_DEBUG
void VGCD___024root___final(VGCD___024root* vlSelf);

static void _eval_initial_loop(VGCD__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VGCD___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VGCD___024root___eval_settle(&(vlSymsp->TOP));
        VGCD___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VGCD::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGCD::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VGCD___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VGCD___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VGCD::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VGCD::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VGCD::final() {
    VGCD___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VGCD___024root__trace_init_top(VGCD___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VGCD___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VGCD___024root__trace_register(VGCD___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VGCD::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VGCD___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
