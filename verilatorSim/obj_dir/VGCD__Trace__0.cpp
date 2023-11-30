// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCD__Syms.h"


void VGCD___024root__trace_chg_sub_0(VGCD___024root* vlSelf, VerilatedVcd* tracep);

void VGCD___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_chg_top_0\n"); );
    // Init
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VGCD___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VGCD___024root__trace_chg_sub_0(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->clock));
    tracep->chgSData(oldp+1,(vlSelf->io_value1),16);
    tracep->chgSData(oldp+2,(vlSelf->io_value2),16);
    tracep->chgBit(oldp+3,(vlSelf->io_loadingValues));
    tracep->chgSData(oldp+4,(vlSelf->io_outputGCD),16);
    tracep->chgBit(oldp+5,(vlSelf->io_outputValid));
    tracep->chgSData(oldp+6,(vlSelf->GCD__DOT__x),16);
    tracep->chgSData(oldp+7,(vlSelf->GCD__DOT__y),16);
}

void VGCD___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_cleanup\n"); );
    // Init
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
