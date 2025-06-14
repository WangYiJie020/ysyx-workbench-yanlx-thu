// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_control.h for the primary calling header

#ifndef VERILATED_VALU_CONTROL___024UNIT_H_
#define VERILATED_VALU_CONTROL___024UNIT_H_  // guard

#include "verilated.h"

class Valu_control__Syms;

class Valu_control___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Valu_control__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_control___024unit(Valu_control__Syms* symsp, const char* v__name);
    ~Valu_control___024unit();
    VL_UNCOPYABLE(Valu_control___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
