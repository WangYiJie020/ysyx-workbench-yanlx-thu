// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" void ebreak();

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void reg_return_value(const svLogicVecVal* regvalue);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ regvalue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit\n"); );
    // Body
    svLogicVecVal regvalue__Vcvt[1];
    for (size_t regvalue__Vidx = 0; regvalue__Vidx < 1; ++regvalue__Vidx) VL_SET_SVLV_I(32, regvalue__Vcvt + 1 * regvalue__Vidx, regvalue);
    reg_return_value(regvalue__Vcvt);
}
