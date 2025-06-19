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

extern "C" void reg_return_value(const svLogicVecVal* gpr_0, const svLogicVecVal* gpr_1, const svLogicVecVal* gpr_2, const svLogicVecVal* gpr_3, const svLogicVecVal* gpr_4, const svLogicVecVal* gpr_5, const svLogicVecVal* gpr_6, const svLogicVecVal* gpr_7, const svLogicVecVal* gpr_8, const svLogicVecVal* gpr_9, const svLogicVecVal* gpr_10, const svLogicVecVal* gpr_11, const svLogicVecVal* gpr_12, const svLogicVecVal* gpr_13, const svLogicVecVal* gpr_14, const svLogicVecVal* gpr_15, const svLogicVecVal* gpr_16, const svLogicVecVal* gpr_17, const svLogicVecVal* gpr_18, const svLogicVecVal* gpr_19, const svLogicVecVal* gpr_20, const svLogicVecVal* gpr_21, const svLogicVecVal* gpr_22, const svLogicVecVal* gpr_23, const svLogicVecVal* gpr_24, const svLogicVecVal* gpr_25, const svLogicVecVal* gpr_26, const svLogicVecVal* gpr_27, const svLogicVecVal* gpr_28, const svLogicVecVal* gpr_29, const svLogicVecVal* gpr_30, const svLogicVecVal* gpr_31, const svLogicVecVal* pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr_0__Vcvt[1];
    for (size_t gpr_0__Vidx = 0; gpr_0__Vidx < 1; ++gpr_0__Vidx) VL_SET_SVLV_I(32, gpr_0__Vcvt + 1 * gpr_0__Vidx, gpr_0);
    svLogicVecVal gpr_1__Vcvt[1];
    for (size_t gpr_1__Vidx = 0; gpr_1__Vidx < 1; ++gpr_1__Vidx) VL_SET_SVLV_I(32, gpr_1__Vcvt + 1 * gpr_1__Vidx, gpr_1);
    svLogicVecVal gpr_2__Vcvt[1];
    for (size_t gpr_2__Vidx = 0; gpr_2__Vidx < 1; ++gpr_2__Vidx) VL_SET_SVLV_I(32, gpr_2__Vcvt + 1 * gpr_2__Vidx, gpr_2);
    svLogicVecVal gpr_3__Vcvt[1];
    for (size_t gpr_3__Vidx = 0; gpr_3__Vidx < 1; ++gpr_3__Vidx) VL_SET_SVLV_I(32, gpr_3__Vcvt + 1 * gpr_3__Vidx, gpr_3);
    svLogicVecVal gpr_4__Vcvt[1];
    for (size_t gpr_4__Vidx = 0; gpr_4__Vidx < 1; ++gpr_4__Vidx) VL_SET_SVLV_I(32, gpr_4__Vcvt + 1 * gpr_4__Vidx, gpr_4);
    svLogicVecVal gpr_5__Vcvt[1];
    for (size_t gpr_5__Vidx = 0; gpr_5__Vidx < 1; ++gpr_5__Vidx) VL_SET_SVLV_I(32, gpr_5__Vcvt + 1 * gpr_5__Vidx, gpr_5);
    svLogicVecVal gpr_6__Vcvt[1];
    for (size_t gpr_6__Vidx = 0; gpr_6__Vidx < 1; ++gpr_6__Vidx) VL_SET_SVLV_I(32, gpr_6__Vcvt + 1 * gpr_6__Vidx, gpr_6);
    svLogicVecVal gpr_7__Vcvt[1];
    for (size_t gpr_7__Vidx = 0; gpr_7__Vidx < 1; ++gpr_7__Vidx) VL_SET_SVLV_I(32, gpr_7__Vcvt + 1 * gpr_7__Vidx, gpr_7);
    svLogicVecVal gpr_8__Vcvt[1];
    for (size_t gpr_8__Vidx = 0; gpr_8__Vidx < 1; ++gpr_8__Vidx) VL_SET_SVLV_I(32, gpr_8__Vcvt + 1 * gpr_8__Vidx, gpr_8);
    svLogicVecVal gpr_9__Vcvt[1];
    for (size_t gpr_9__Vidx = 0; gpr_9__Vidx < 1; ++gpr_9__Vidx) VL_SET_SVLV_I(32, gpr_9__Vcvt + 1 * gpr_9__Vidx, gpr_9);
    svLogicVecVal gpr_10__Vcvt[1];
    for (size_t gpr_10__Vidx = 0; gpr_10__Vidx < 1; ++gpr_10__Vidx) VL_SET_SVLV_I(32, gpr_10__Vcvt + 1 * gpr_10__Vidx, gpr_10);
    svLogicVecVal gpr_11__Vcvt[1];
    for (size_t gpr_11__Vidx = 0; gpr_11__Vidx < 1; ++gpr_11__Vidx) VL_SET_SVLV_I(32, gpr_11__Vcvt + 1 * gpr_11__Vidx, gpr_11);
    svLogicVecVal gpr_12__Vcvt[1];
    for (size_t gpr_12__Vidx = 0; gpr_12__Vidx < 1; ++gpr_12__Vidx) VL_SET_SVLV_I(32, gpr_12__Vcvt + 1 * gpr_12__Vidx, gpr_12);
    svLogicVecVal gpr_13__Vcvt[1];
    for (size_t gpr_13__Vidx = 0; gpr_13__Vidx < 1; ++gpr_13__Vidx) VL_SET_SVLV_I(32, gpr_13__Vcvt + 1 * gpr_13__Vidx, gpr_13);
    svLogicVecVal gpr_14__Vcvt[1];
    for (size_t gpr_14__Vidx = 0; gpr_14__Vidx < 1; ++gpr_14__Vidx) VL_SET_SVLV_I(32, gpr_14__Vcvt + 1 * gpr_14__Vidx, gpr_14);
    svLogicVecVal gpr_15__Vcvt[1];
    for (size_t gpr_15__Vidx = 0; gpr_15__Vidx < 1; ++gpr_15__Vidx) VL_SET_SVLV_I(32, gpr_15__Vcvt + 1 * gpr_15__Vidx, gpr_15);
    svLogicVecVal gpr_16__Vcvt[1];
    for (size_t gpr_16__Vidx = 0; gpr_16__Vidx < 1; ++gpr_16__Vidx) VL_SET_SVLV_I(32, gpr_16__Vcvt + 1 * gpr_16__Vidx, gpr_16);
    svLogicVecVal gpr_17__Vcvt[1];
    for (size_t gpr_17__Vidx = 0; gpr_17__Vidx < 1; ++gpr_17__Vidx) VL_SET_SVLV_I(32, gpr_17__Vcvt + 1 * gpr_17__Vidx, gpr_17);
    svLogicVecVal gpr_18__Vcvt[1];
    for (size_t gpr_18__Vidx = 0; gpr_18__Vidx < 1; ++gpr_18__Vidx) VL_SET_SVLV_I(32, gpr_18__Vcvt + 1 * gpr_18__Vidx, gpr_18);
    svLogicVecVal gpr_19__Vcvt[1];
    for (size_t gpr_19__Vidx = 0; gpr_19__Vidx < 1; ++gpr_19__Vidx) VL_SET_SVLV_I(32, gpr_19__Vcvt + 1 * gpr_19__Vidx, gpr_19);
    svLogicVecVal gpr_20__Vcvt[1];
    for (size_t gpr_20__Vidx = 0; gpr_20__Vidx < 1; ++gpr_20__Vidx) VL_SET_SVLV_I(32, gpr_20__Vcvt + 1 * gpr_20__Vidx, gpr_20);
    svLogicVecVal gpr_21__Vcvt[1];
    for (size_t gpr_21__Vidx = 0; gpr_21__Vidx < 1; ++gpr_21__Vidx) VL_SET_SVLV_I(32, gpr_21__Vcvt + 1 * gpr_21__Vidx, gpr_21);
    svLogicVecVal gpr_22__Vcvt[1];
    for (size_t gpr_22__Vidx = 0; gpr_22__Vidx < 1; ++gpr_22__Vidx) VL_SET_SVLV_I(32, gpr_22__Vcvt + 1 * gpr_22__Vidx, gpr_22);
    svLogicVecVal gpr_23__Vcvt[1];
    for (size_t gpr_23__Vidx = 0; gpr_23__Vidx < 1; ++gpr_23__Vidx) VL_SET_SVLV_I(32, gpr_23__Vcvt + 1 * gpr_23__Vidx, gpr_23);
    svLogicVecVal gpr_24__Vcvt[1];
    for (size_t gpr_24__Vidx = 0; gpr_24__Vidx < 1; ++gpr_24__Vidx) VL_SET_SVLV_I(32, gpr_24__Vcvt + 1 * gpr_24__Vidx, gpr_24);
    svLogicVecVal gpr_25__Vcvt[1];
    for (size_t gpr_25__Vidx = 0; gpr_25__Vidx < 1; ++gpr_25__Vidx) VL_SET_SVLV_I(32, gpr_25__Vcvt + 1 * gpr_25__Vidx, gpr_25);
    svLogicVecVal gpr_26__Vcvt[1];
    for (size_t gpr_26__Vidx = 0; gpr_26__Vidx < 1; ++gpr_26__Vidx) VL_SET_SVLV_I(32, gpr_26__Vcvt + 1 * gpr_26__Vidx, gpr_26);
    svLogicVecVal gpr_27__Vcvt[1];
    for (size_t gpr_27__Vidx = 0; gpr_27__Vidx < 1; ++gpr_27__Vidx) VL_SET_SVLV_I(32, gpr_27__Vcvt + 1 * gpr_27__Vidx, gpr_27);
    svLogicVecVal gpr_28__Vcvt[1];
    for (size_t gpr_28__Vidx = 0; gpr_28__Vidx < 1; ++gpr_28__Vidx) VL_SET_SVLV_I(32, gpr_28__Vcvt + 1 * gpr_28__Vidx, gpr_28);
    svLogicVecVal gpr_29__Vcvt[1];
    for (size_t gpr_29__Vidx = 0; gpr_29__Vidx < 1; ++gpr_29__Vidx) VL_SET_SVLV_I(32, gpr_29__Vcvt + 1 * gpr_29__Vidx, gpr_29);
    svLogicVecVal gpr_30__Vcvt[1];
    for (size_t gpr_30__Vidx = 0; gpr_30__Vidx < 1; ++gpr_30__Vidx) VL_SET_SVLV_I(32, gpr_30__Vcvt + 1 * gpr_30__Vidx, gpr_30);
    svLogicVecVal gpr_31__Vcvt[1];
    for (size_t gpr_31__Vidx = 0; gpr_31__Vidx < 1; ++gpr_31__Vidx) VL_SET_SVLV_I(32, gpr_31__Vcvt + 1 * gpr_31__Vidx, gpr_31);
    svLogicVecVal pc__Vcvt[1];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVLV_I(32, pc__Vcvt + 1 * pc__Vidx, pc);
    reg_return_value(gpr_0__Vcvt, gpr_1__Vcvt, gpr_2__Vcvt, gpr_3__Vcvt, gpr_4__Vcvt, gpr_5__Vcvt, gpr_6__Vcvt, gpr_7__Vcvt, gpr_8__Vcvt, gpr_9__Vcvt, gpr_10__Vcvt, gpr_11__Vcvt, gpr_12__Vcvt, gpr_13__Vcvt, gpr_14__Vcvt, gpr_15__Vcvt, gpr_16__Vcvt, gpr_17__Vcvt, gpr_18__Vcvt, gpr_19__Vcvt, gpr_20__Vcvt, gpr_21__Vcvt, gpr_22__Vcvt, gpr_23__Vcvt, gpr_24__Vcvt, gpr_25__Vcvt, gpr_26__Vcvt, gpr_27__Vcvt, gpr_28__Vcvt, gpr_29__Vcvt, gpr_30__Vcvt, gpr_31__Vcvt, pc__Vcvt);
}
