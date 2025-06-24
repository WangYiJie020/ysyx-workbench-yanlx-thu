// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0;
    __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0;
    __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__reg_write) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 7U))))) {
        __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0 
            = ((IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst)))
                ? vlSelf->top__DOT__datamem_readdata
                : vlSelf->top__DOT__alu_result);
        __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__inst >> 7U));
    }
    vlSelf->top__DOT__pc = ((IData)(vlSelf->rst_n) ? vlSelf->top__DOT__npc
                             : 0x80000000U);
    if (__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0) {
        vlSelf->top__DOT__Rgefile__DOT__rf[__Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0;
    }
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[1U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[2U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[3U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[4U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[5U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[6U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[7U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[8U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[9U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xaU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xaU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xbU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xbU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xcU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xcU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xdU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xdU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xeU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xeU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xfU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xfU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x10U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x10U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x11U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x11U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x12U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x12U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x13U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x13U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x14U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x14U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x15U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x15U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x16U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x16U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x17U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x17U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x18U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x18U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x19U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x19U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1aU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1aU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1bU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1bU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1cU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1cU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1dU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1dU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1eU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1eU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1fU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1fU];
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__pc, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
    vlSelf->top__DOT__inst = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
    vlSelf->top__DOT__reg_file[0x1fU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1fU];
    vlSelf->top__DOT__reg_file[0x1eU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1eU];
    vlSelf->top__DOT__reg_file[0x1dU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1dU];
    vlSelf->top__DOT__reg_file[0x1cU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1cU];
    vlSelf->top__DOT__reg_file[0x1bU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1bU];
    vlSelf->top__DOT__reg_file[0x1aU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1aU];
    vlSelf->top__DOT__reg_file[0x19U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x19U];
    vlSelf->top__DOT__reg_file[0x18U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x18U];
    vlSelf->top__DOT__reg_file[0x17U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x17U];
    vlSelf->top__DOT__reg_file[0x16U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x16U];
    vlSelf->top__DOT__reg_file[0x15U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x15U];
    vlSelf->top__DOT__reg_file[0x14U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x14U];
    vlSelf->top__DOT__reg_file[0x13U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x13U];
    vlSelf->top__DOT__reg_file[0x12U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x12U];
    vlSelf->top__DOT__reg_file[0x11U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x11U];
    vlSelf->top__DOT__reg_file[0x10U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x10U];
    vlSelf->top__DOT__reg_file[0xfU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xfU];
    vlSelf->top__DOT__reg_file[0xeU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xeU];
    vlSelf->top__DOT__reg_file[0xdU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xdU];
    vlSelf->top__DOT__reg_file[0xcU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xcU];
    vlSelf->top__DOT__reg_file[0xbU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xbU];
    vlSelf->top__DOT__reg_file[0xaU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xaU];
    vlSelf->top__DOT__reg_file[9U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [9U];
    vlSelf->top__DOT__reg_file[8U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [8U];
    vlSelf->top__DOT__reg_file[7U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [7U];
    vlSelf->top__DOT__reg_file[6U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [6U];
    vlSelf->top__DOT__reg_file[5U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [5U];
    vlSelf->top__DOT__reg_file[4U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [4U];
    vlSelf->top__DOT__reg_file[3U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [3U];
    vlSelf->top__DOT__reg_file[2U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [2U];
    vlSelf->top__DOT__reg_file[1U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [1U];
    vlSelf->top__DOT__reg_file[0U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0U];
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__inst))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 167, "");
    }
    if ((0x40U & vlSelf->top__DOT__inst)) {
        vlSelf->top__DOT__reg_write = (1U & (IData)(
                                                    ((0x20U 
                                                      == 
                                                      (0x30U 
                                                       & vlSelf->top__DOT__inst)) 
                                                     & ((8U 
                                                         & vlSelf->top__DOT__inst)
                                                         ? (IData)(
                                                                   (7U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->top__DOT__inst)))
                                                         : (IData)(
                                                                   (7U 
                                                                    == 
                                                                    (0x7007U 
                                                                     & vlSelf->top__DOT__inst)))))));
        vlSelf->top__DOT__wmask = 0U;
        if ((0x20U & vlSelf->top__DOT__inst)) {
            if ((0x10U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__pc_srcs = 0U;
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((8U & vlSelf->top__DOT__inst)) {
                if ((4U & vlSelf->top__DOT__inst)) {
                    if ((2U & vlSelf->top__DOT__inst)) {
                        if ((1U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__pc_srcs = 1U;
                            vlSelf->top__DOT__alu_op = 4U;
                            vlSelf->top__DOT__b_in_src = 2U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->top__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 0x14U)))));
                        } else {
                            vlSelf->top__DOT__pc_srcs = 0U;
                            vlSelf->top__DOT__alu_op = 0U;
                            vlSelf->top__DOT__b_in_src = 0U;
                            vlSelf->top__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__pc_srcs = 0U;
                        vlSelf->top__DOT__alu_op = 0U;
                        vlSelf->top__DOT__b_in_src = 0U;
                        vlSelf->top__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pc_srcs = 0U;
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__inst)) {
                if ((2U & vlSelf->top__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__inst)) {
                        if ((0U == (7U & (vlSelf->top__DOT__inst 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__pc_srcs = 1U;
                            vlSelf->top__DOT__alu_op = 4U;
                            vlSelf->top__DOT__b_in_src = 2U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__inst 
                                              >> 0x14U));
                        } else {
                            vlSelf->top__DOT__pc_srcs = 0U;
                            vlSelf->top__DOT__alu_op = 0U;
                            vlSelf->top__DOT__b_in_src = 0U;
                            vlSelf->top__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__pc_srcs = 0U;
                        vlSelf->top__DOT__alu_op = 0U;
                        vlSelf->top__DOT__b_in_src = 0U;
                        vlSelf->top__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pc_srcs = 0U;
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else {
                if ((2U & vlSelf->top__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__pc_srcs = 
                            ((0U == (7U & (vlSelf->top__DOT__inst 
                                           >> 0xcU)))
                              ? 2U : ((1U == (7U & 
                                              (vlSelf->top__DOT__inst 
                                               >> 0xcU)))
                                       ? 3U : 0U));
                        vlSelf->top__DOT__alu_op = 5U;
                        vlSelf->top__DOT__imm = ((0x4000U 
                                                  & vlSelf->top__DOT__inst)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__inst 
                                                                >> 7U)))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__inst 
                                                                >> 7U))))))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__inst 
                                                                >> 7U)))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__inst 
                                                                >> 7U)))))))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->top__DOT__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->top__DOT__inst 
                                                               >> 7U)))))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__inst 
                                                                >> 7U)))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__inst 
                                                                >> 7U))))))));
                    } else {
                        vlSelf->top__DOT__pc_srcs = 0U;
                        vlSelf->top__DOT__alu_op = 0U;
                        vlSelf->top__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__pc_srcs = 0U;
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
                vlSelf->top__DOT__b_in_src = 0U;
            }
        } else {
            vlSelf->top__DOT__pc_srcs = 0U;
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__b_in_src = 0U;
            vlSelf->top__DOT__imm = 0U;
        }
    } else {
        if ((0x20U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__reg_write = (1U & (IData)(
                                                        ((0x10U 
                                                          == 
                                                          (0x18U 
                                                           & vlSelf->top__DOT__inst)) 
                                                         & ((4U 
                                                             & vlSelf->top__DOT__inst)
                                                             ? 
                                                            ((vlSelf->top__DOT__inst 
                                                              >> 1U) 
                                                             & vlSelf->top__DOT__inst)
                                                             : (IData)(
                                                                       ((3U 
                                                                         == 
                                                                         (0x7003U 
                                                                          & vlSelf->top__DOT__inst)) 
                                                                        & ((0U 
                                                                            == 
                                                                            (vlSelf->top__DOT__inst 
                                                                             >> 0x19U)) 
                                                                           | (0x20U 
                                                                              == 
                                                                              (vlSelf->top__DOT__inst 
                                                                               >> 0x19U)))))))));
            if ((0x10U & vlSelf->top__DOT__inst)) {
                if ((8U & vlSelf->top__DOT__inst)) {
                    vlSelf->top__DOT__wmask = 0U;
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                } else if ((4U & vlSelf->top__DOT__inst)) {
                    vlSelf->top__DOT__wmask = 0U;
                    vlSelf->top__DOT__alu_op = 0U;
                    if ((2U & vlSelf->top__DOT__inst)) {
                        if ((1U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__b_in_src = 1U;
                            vlSelf->top__DOT__imm = 
                                (0xfffff000U & vlSelf->top__DOT__inst);
                        } else {
                            vlSelf->top__DOT__b_in_src = 0U;
                            vlSelf->top__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__b_in_src = 0U;
                        vlSelf->top__DOT__imm = 0U;
                    }
                } else {
                    if ((2U & vlSelf->top__DOT__inst)) {
                        if ((1U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__wmask 
                                = ((0U == (7U & (vlSelf->top__DOT__inst 
                                                 >> 0xcU)))
                                    ? (((0U == (vlSelf->top__DOT__inst 
                                                >> 0x19U)) 
                                        | (0x20U == 
                                           (vlSelf->top__DOT__inst 
                                            >> 0x19U)))
                                        ? 0xfU : 0U)
                                    : 0U);
                            vlSelf->top__DOT__alu_op 
                                = ((0x4000U & vlSelf->top__DOT__inst)
                                    ? ((0x2000U & vlSelf->top__DOT__inst)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__inst)
                                            ? 1U : 2U)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__inst)
                                            ? ((0U 
                                                == 
                                                (vlSelf->top__DOT__inst 
                                                 >> 0x19U))
                                                ? 7U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0x19U))
                                                    ? 8U
                                                    : 0U))
                                            : 3U)) : 
                                   ((0x2000U & vlSelf->top__DOT__inst)
                                     ? ((0x1000U & vlSelf->top__DOT__inst)
                                         ? 9U : 0xaU)
                                     : ((0x1000U & vlSelf->top__DOT__inst)
                                         ? 6U : ((0U 
                                                  == 
                                                  (vlSelf->top__DOT__inst 
                                                   >> 0x19U))
                                                  ? 4U
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (vlSelf->top__DOT__inst 
                                                    >> 0x19U))
                                                   ? 5U
                                                   : 0U)))));
                        } else {
                            vlSelf->top__DOT__wmask = 0U;
                            vlSelf->top__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__wmask = 0U;
                        vlSelf->top__DOT__alu_op = 0U;
                    }
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else if ((8U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__wmask = 0U;
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__wmask = 0U;
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    if ((2U == (7U & (vlSelf->top__DOT__inst 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__wmask = 0xfU;
                        vlSelf->top__DOT__b_in_src = 1U;
                    } else {
                        vlSelf->top__DOT__wmask = 0U;
                        vlSelf->top__DOT__b_in_src = 0U;
                    }
                    vlSelf->top__DOT__alu_op = 4U;
                    vlSelf->top__DOT__imm = ((0U == 
                                              (7U & 
                                               (vlSelf->top__DOT__inst 
                                                >> 0xcU)))
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 7U))))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 7U))))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 7U))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 7U)))))));
                } else {
                    vlSelf->top__DOT__wmask = 0U;
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__wmask = 0U;
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            }
        } else if ((0x10U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__reg_write = (1U & ((~ 
                                                  (vlSelf->top__DOT__inst 
                                                   >> 3U)) 
                                                 & ((4U 
                                                     & vlSelf->top__DOT__inst)
                                                     ? 
                                                    ((vlSelf->top__DOT__inst 
                                                      >> 1U) 
                                                     & vlSelf->top__DOT__inst)
                                                     : 
                                                    ((vlSelf->top__DOT__inst 
                                                      >> 1U) 
                                                     & (vlSelf->top__DOT__inst 
                                                        & ((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__inst 
                                                                >> 0xcU))) 
                                                           | (3U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xcU)))))))));
            vlSelf->top__DOT__wmask = 0U;
            if ((8U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__inst)) {
                if ((2U & vlSelf->top__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__alu_op = 4U;
                        vlSelf->top__DOT__b_in_src = 1U;
                        vlSelf->top__DOT__imm = (0xfffff000U 
                                                 & vlSelf->top__DOT__inst);
                    } else {
                        vlSelf->top__DOT__alu_op = 0U;
                        vlSelf->top__DOT__b_in_src = 0U;
                        vlSelf->top__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    if ((0x4000U & vlSelf->top__DOT__inst)) {
                        if ((0x2000U & vlSelf->top__DOT__inst)) {
                            if ((0x1000U & vlSelf->top__DOT__inst)) {
                                vlSelf->top__DOT__alu_op = 1U;
                                vlSelf->top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->top__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->top__DOT__inst 
                                        >> 0x14U));
                            } else {
                                vlSelf->top__DOT__alu_op = 2U;
                                vlSelf->top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->top__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->top__DOT__inst 
                                        >> 0x14U));
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                            if ((0U == (vlSelf->top__DOT__inst 
                                        >> 0x19U))) {
                                vlSelf->top__DOT__alu_op = 7U;
                                vlSelf->top__DOT__imm 
                                    = (0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0x14U));
                            } else if ((0x20U == (vlSelf->top__DOT__inst 
                                                  >> 0x19U))) {
                                vlSelf->top__DOT__alu_op = 8U;
                                vlSelf->top__DOT__imm 
                                    = (0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0x14U));
                            } else {
                                vlSelf->top__DOT__alu_op = 7U;
                                vlSelf->top__DOT__imm 
                                    = (0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0x14U));
                            }
                        } else {
                            vlSelf->top__DOT__alu_op = 3U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__inst 
                                              >> 0x14U));
                        }
                    } else if ((0x2000U & vlSelf->top__DOT__inst)) {
                        if ((0x1000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__alu_op = 9U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__inst 
                                              >> 0x14U));
                        } else {
                            vlSelf->top__DOT__alu_op = 0xaU;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__inst 
                                              >> 0x14U));
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__alu_op = 6U;
                        vlSelf->top__DOT__imm = (0x1fU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 0x14U));
                    } else {
                        vlSelf->top__DOT__alu_op = 4U;
                        vlSelf->top__DOT__imm = (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U));
                    }
                    vlSelf->top__DOT__b_in_src = ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 0U));
                } else {
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            }
        } else {
            vlSelf->top__DOT__reg_write = (1U & (IData)(
                                                        (0x2003U 
                                                         == 
                                                         (0x700fU 
                                                          & vlSelf->top__DOT__inst))));
            if ((8U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__wmask = 0U;
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__wmask = 0U;
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    if ((2U == (7U & (vlSelf->top__DOT__inst 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__wmask = 0xfU;
                        vlSelf->top__DOT__b_in_src = 1U;
                    } else {
                        vlSelf->top__DOT__wmask = 0U;
                        vlSelf->top__DOT__b_in_src = 0U;
                    }
                    vlSelf->top__DOT__alu_op = 4U;
                    vlSelf->top__DOT__imm = ((0x4000U 
                                              & vlSelf->top__DOT__inst)
                                              ? ((0x2000U 
                                                  & vlSelf->top__DOT__inst)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__inst 
                                                     >> 0x14U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__inst 
                                                      >> 0x14U))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__inst 
                                                      >> 0x14U))))
                                              : ((0x2000U 
                                                  & vlSelf->top__DOT__inst)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__inst 
                                                      >> 0x14U))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__inst 
                                                      >> 0x14U)))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__inst 
                                                      >> 0x14U))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__inst 
                                                      >> 0x14U)))));
                } else {
                    vlSelf->top__DOT__wmask = 0U;
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__b_in_src = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__wmask = 0U;
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__b_in_src = 0U;
                vlSelf->top__DOT__imm = 0U;
            }
        }
        vlSelf->top__DOT__pc_srcs = 0U;
    }
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__Rgefile__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
    Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [1U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [2U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [3U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [4U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [5U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [6U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [7U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [8U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [9U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xaU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xbU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xcU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xdU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xeU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xfU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x10U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x11U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x12U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x13U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x14U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x15U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x16U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x17U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x18U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x19U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1aU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1bU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1cU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1dU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1eU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1fU], vlSelf->top__DOT__pc);
    vlSelf->top__DOT__b_in = ((2U & (IData)(vlSelf->top__DOT__b_in_src))
                               ? ((1U & (IData)(vlSelf->top__DOT__b_in_src))
                                   ? 0U : 4U) : ((1U 
                                                  & (IData)(vlSelf->top__DOT__b_in_src))
                                                  ? vlSelf->top__DOT__imm
                                                  : 
                                                 vlSelf->top__DOT__Rgefile__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0x14U))]));
    vlSelf->top__DOT__pc_new = (((IData)((0x67U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__inst)))
                                  ? vlSelf->top__DOT__rs1
                                  : vlSelf->top__DOT__pc) 
                                + vlSelf->top__DOT__imm);
    vlSelf->top__DOT__a_in = ((1U & ((0x40U & vlSelf->top__DOT__inst)
                                      ? (IData)(((0x20U 
                                                  == 
                                                  (0x30U 
                                                   & vlSelf->top__DOT__inst)) 
                                                 & ((8U 
                                                     & vlSelf->top__DOT__inst)
                                                     ? (IData)(
                                                               (7U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->top__DOT__inst)))
                                                     : (IData)(
                                                               (7U 
                                                                == 
                                                                (0x7007U 
                                                                 & vlSelf->top__DOT__inst))))))
                                      : (IData)((0x17U 
                                                 == 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__inst)))))
                               ? vlSelf->top__DOT__pc
                               : vlSelf->top__DOT__rs1);
    vlSelf->top__DOT__alu_result = ((8U & (IData)(vlSelf->top__DOT__alu_op))
                                     ? ((4U & (IData)(vlSelf->top__DOT__alu_op))
                                         ? vlSelf->top__DOT__b_in
                                         : ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__alu_op))
                                                 ? vlSelf->top__DOT__b_in
                                                 : 
                                                (VL_LTS_III(32, vlSelf->top__DOT__a_in, vlSelf->top__DOT__b_in)
                                                  ? 1U
                                                  : 0U))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__alu_op))
                                                 ? 
                                                ((vlSelf->top__DOT__a_in 
                                                  < vlSelf->top__DOT__b_in)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                ((0x1fU 
                                                  >= vlSelf->top__DOT__b_in)
                                                  ? 
                                                 (vlSelf->top__DOT__a_in 
                                                  >> vlSelf->top__DOT__b_in)
                                                  : 0U))))
                                     : ((4U & (IData)(vlSelf->top__DOT__alu_op))
                                         ? ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__alu_op))
                                                 ? 
                                                ((0x1fU 
                                                  >= vlSelf->top__DOT__b_in)
                                                  ? 
                                                 (vlSelf->top__DOT__a_in 
                                                  >> vlSelf->top__DOT__b_in)
                                                  : 0U)
                                                 : 
                                                ((0x1fU 
                                                  >= vlSelf->top__DOT__b_in)
                                                  ? 
                                                 (vlSelf->top__DOT__a_in 
                                                  << vlSelf->top__DOT__b_in)
                                                  : 0U))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__alu_op))
                                                 ? 
                                                (vlSelf->top__DOT__a_in 
                                                 - vlSelf->top__DOT__b_in)
                                                 : 
                                                (vlSelf->top__DOT__a_in 
                                                 + vlSelf->top__DOT__b_in)))
                                         : ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__alu_op))
                                                 ? 
                                                (vlSelf->top__DOT__a_in 
                                                 ^ vlSelf->top__DOT__b_in)
                                                 : 
                                                (vlSelf->top__DOT__a_in 
                                                 | vlSelf->top__DOT__b_in))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__alu_op))
                                                 ? 
                                                (vlSelf->top__DOT__a_in 
                                                 & vlSelf->top__DOT__b_in)
                                                 : vlSelf->top__DOT__b_in))));
    if (((IData)((0x2023U == (0x707fU & vlSelf->top__DOT__inst))) 
         & (~ (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst)))))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__alu_result, 
                                                               vlSelf->top__DOT__Rgefile__DOT__rf
                                                               [
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__inst 
                                                                   >> 0x14U))], vlSelf->top__DOT__wmask);
    }
    vlSelf->top__DOT__npc = ((4U & (IData)(vlSelf->top__DOT__pc_srcs))
                              ? ((IData)(4U) + vlSelf->top__DOT__pc)
                              : ((2U & (IData)(vlSelf->top__DOT__pc_srcs))
                                  ? ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                      ? ((0U != vlSelf->top__DOT__alu_result)
                                          ? vlSelf->top__DOT__pc_new
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__pc))
                                      : ((0U != vlSelf->top__DOT__alu_result)
                                          ? ((IData)(4U) 
                                             + vlSelf->top__DOT__pc)
                                          : vlSelf->top__DOT__pc_new))
                                  : ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                      ? vlSelf->top__DOT__pc_new
                                      : ((IData)(4U) 
                                         + vlSelf->top__DOT__pc))));
    if (((~ (IData)((0x2023U == (0x707fU & vlSelf->top__DOT__inst)))) 
         & (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst))))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__alu_result, vlSelf->__Vfunc_pmem_read__3__Vfuncout);
        vlSelf->top__DOT__datamem_readdata = vlSelf->__Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__datamem_readdata = 0U;
    }
}
