// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_control.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Valu_control__Syms.h"
#include "Valu_control___024root.h"

void Valu_control___024root___ctor_var_reset(Valu_control___024root* vlSelf);

Valu_control___024root::Valu_control___024root(Valu_control__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_control___024root___ctor_var_reset(this);
}

void Valu_control___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valu_control___024root::~Valu_control___024root() {
}
