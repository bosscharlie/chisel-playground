// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCD__Syms.h"


VL_ATTR_COLD void VGCD___024root__trace_init_sub__TOP__0(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBus(c+2,"io_value1", false,-1, 15,0);
    tracep->declBus(c+3,"io_value2", false,-1, 15,0);
    tracep->declBit(c+4,"io_loadingValues", false,-1);
    tracep->declBus(c+5,"io_outputGCD", false,-1, 15,0);
    tracep->declBit(c+6,"io_outputValid", false,-1);
    tracep->pushNamePrefix("GCD ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBus(c+2,"io_value1", false,-1, 15,0);
    tracep->declBus(c+3,"io_value2", false,-1, 15,0);
    tracep->declBit(c+4,"io_loadingValues", false,-1);
    tracep->declBus(c+5,"io_outputGCD", false,-1, 15,0);
    tracep->declBit(c+6,"io_outputValid", false,-1);
    tracep->declBus(c+7,"x", false,-1, 15,0);
    tracep->declBus(c+8,"y", false,-1, 15,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VGCD___024root__trace_init_top(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_init_top\n"); );
    // Body
    VGCD___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VGCD___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VGCD___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VGCD___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VGCD___024root__trace_register(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VGCD___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VGCD___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VGCD___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VGCD___024root__trace_full_sub_0(VGCD___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VGCD___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_full_top_0\n"); );
    // Init
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VGCD___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VGCD___024root__trace_full_sub_0(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullSData(oldp+2,(vlSelf->io_value1),16);
    tracep->fullSData(oldp+3,(vlSelf->io_value2),16);
    tracep->fullBit(oldp+4,(vlSelf->io_loadingValues));
    tracep->fullSData(oldp+5,(vlSelf->io_outputGCD),16);
    tracep->fullBit(oldp+6,(vlSelf->io_outputValid));
    tracep->fullSData(oldp+7,(vlSelf->GCD__DOT__x),16);
    tracep->fullSData(oldp+8,(vlSelf->GCD__DOT__y),16);
}
