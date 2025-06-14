// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU_CONTROL__SYMS_H_
#define VERILATED_VALU_CONTROL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Valu_control.h"

// INCLUDE MODULE CLASSES
#include "Valu_control___024root.h"
#include "Valu_control___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Valu_control__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Valu_control* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Valu_control___024root         TOP;
    Valu_control___024unit         TOP____024unit;

    // CONSTRUCTORS
    Valu_control__Syms(VerilatedContext* contextp, const char* namep, Valu_control* modelp);
    ~Valu_control__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
