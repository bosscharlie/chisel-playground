// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCD.h for the primary calling header

#include "verilated.h"

#include "VGCD__Syms.h"
#include "VGCD___024root.h"

void VGCD___024root___ctor_var_reset(VGCD___024root* vlSelf);

VGCD___024root::VGCD___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VGCD___024root___ctor_var_reset(this);
}

void VGCD___024root::__Vconfigure(VGCD__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VGCD___024root::~VGCD___024root() {
}
