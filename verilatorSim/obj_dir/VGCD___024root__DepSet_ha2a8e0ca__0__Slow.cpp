// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCD.h for the primary calling header

#include "verilated.h"

#include "VGCD___024root.h"

VL_ATTR_COLD void VGCD___024root___settle__TOP__2(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->io_outputGCD = vlSelf->GCD__DOT__x;
    vlSelf->io_outputValid = (0U == (IData)(vlSelf->GCD__DOT__y));
}

VL_ATTR_COLD void VGCD___024root___eval_initial(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VGCD___024root___eval_settle(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_settle\n"); );
    // Body
    VGCD___024root___settle__TOP__2(vlSelf);
}

VL_ATTR_COLD void VGCD___024root___final(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___final\n"); );
}

VL_ATTR_COLD void VGCD___024root___ctor_var_reset(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->io_value1 = VL_RAND_RESET_I(16);
    vlSelf->io_value2 = VL_RAND_RESET_I(16);
    vlSelf->io_loadingValues = VL_RAND_RESET_I(1);
    vlSelf->io_outputGCD = VL_RAND_RESET_I(16);
    vlSelf->io_outputValid = VL_RAND_RESET_I(1);
    vlSelf->GCD__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT__y = VL_RAND_RESET_I(16);
}
