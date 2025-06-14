// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_control.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Valu_control__Syms.h"
#include "Valu_control___024unit.h"

void Valu_control___024unit___ctor_var_reset(Valu_control___024unit* vlSelf);

Valu_control___024unit::Valu_control___024unit(Valu_control__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_control___024unit___ctor_var_reset(this);
}

void Valu_control___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valu_control___024unit::~Valu_control___024unit() {
}
