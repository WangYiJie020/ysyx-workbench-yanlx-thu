// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ rmask, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h7b4d463a_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h2128083f_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h413ee4ec_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_hd435c651_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h757488f1_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_he56f561c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h22430f06_0;
extern const VlUnpacked<CData/*7:0*/, 1024> Vtop__ConstPool__TABLE_hd0c4a6d6_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_hfcb85a5e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h329e03ac_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h2b8e0fee_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h0253fb65_0;
void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc, IData/*31:0*/ csr_reg_0, IData/*31:0*/ csr_reg_1, IData/*31:0*/ csr_reg_2, IData/*31:0*/ csr_reg_3);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT____Vcellout__CSR__csr_reg[0U] 
        = vlSelf->top__DOT__CSR__DOT__csr_mepc;
    vlSelf->top__DOT____Vcellout__CSR__csr_reg[1U] 
        = vlSelf->top__DOT__CSR__DOT__csr_mstatus;
    vlSelf->top__DOT____Vcellout__CSR__csr_reg[2U] 
        = vlSelf->top__DOT__CSR__DOT__csr_mcause;
    vlSelf->top__DOT____Vcellout__CSR__csr_reg[3U] 
        = vlSelf->top__DOT__CSR__DOT__csr_mtvec;
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__pc, 0U, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
    vlSelf->top__DOT__inst = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
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
    vlSelf->top__DOT__csr_reg[3U] = vlSelf->top__DOT____Vcellout__CSR__csr_reg
        [3U];
    vlSelf->top__DOT__csr_reg[2U] = vlSelf->top__DOT____Vcellout__CSR__csr_reg
        [2U];
    vlSelf->top__DOT__csr_reg[1U] = vlSelf->top__DOT____Vcellout__CSR__csr_reg
        [1U];
    vlSelf->top__DOT__csr_reg[0U] = vlSelf->top__DOT____Vcellout__CSR__csr_reg
        [0U];
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__inst))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 204, "");
    }
    if ((0x40U & vlSelf->top__DOT__inst)) {
        if ((0x20U & vlSelf->top__DOT__inst)) {
            if ((0x10U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((8U & vlSelf->top__DOT__inst)) {
                if ((4U & vlSelf->top__DOT__inst)) {
                    if ((2U & vlSelf->top__DOT__inst)) {
                        if ((1U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__alu_op = 4U;
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
                            vlSelf->top__DOT__alu_op = 0U;
                            vlSelf->top__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__alu_op = 0U;
                        vlSelf->top__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__inst)) {
                if ((2U & vlSelf->top__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__inst)) {
                        if ((0U == (7U & (vlSelf->top__DOT__inst 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__alu_op = 4U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__inst 
                                              >> 0x14U));
                        } else {
                            vlSelf->top__DOT__alu_op = 0U;
                            vlSelf->top__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__alu_op = 0U;
                        vlSelf->top__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    if ((0x4000U & vlSelf->top__DOT__inst)) {
                        if ((0x2000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__alu_op = 9U;
                            vlSelf->top__DOT__imm = 
                                ((0x1000U & vlSelf->top__DOT__inst)
                                  ? (((- (IData)((vlSelf->top__DOT__inst 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->top__DOT__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 7U)))))
                                  : (((- (IData)((vlSelf->top__DOT__inst 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->top__DOT__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 7U))))));
                        } else {
                            vlSelf->top__DOT__alu_op = 0xaU;
                            vlSelf->top__DOT__imm = 
                                ((0x1000U & vlSelf->top__DOT__inst)
                                  ? (((- (IData)((vlSelf->top__DOT__inst 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->top__DOT__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 7U)))))
                                  : (((- (IData)((vlSelf->top__DOT__inst 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->top__DOT__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->top__DOT__inst 
                                                           >> 7U))))));
                        }
                    } else {
                        vlSelf->top__DOT__alu_op = 5U;
                        vlSelf->top__DOT__imm = ((0x2000U 
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
                                                               >> 7U)))))));
                    }
                } else {
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__imm = 0U;
            }
        } else {
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__imm = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__inst)) {
        if ((0x10U & vlSelf->top__DOT__inst)) {
            if ((8U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__imm = ((2U & vlSelf->top__DOT__inst)
                                          ? ((1U & vlSelf->top__DOT__inst)
                                              ? (0xfffff000U 
                                                 & vlSelf->top__DOT__inst)
                                              : 0U)
                                          : 0U);
            } else {
                vlSelf->top__DOT__alu_op = ((2U & vlSelf->top__DOT__inst)
                                             ? ((1U 
                                                 & vlSelf->top__DOT__inst)
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->top__DOT__inst)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__inst)
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__inst)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x19U))
                                                     ? 7U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (vlSelf->top__DOT__inst 
                                                       >> 0x19U))
                                                      ? 8U
                                                      : 0U))
                                                    : 3U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__inst)
                                                    ? 9U
                                                    : 0xaU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__inst)
                                                    ? 6U
                                                    : 
                                                   ((0U 
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
                                                      : 0U)))))
                                                 : 0U)
                                             : 0U);
                vlSelf->top__DOT__imm = 0U;
            }
        } else if ((8U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__imm = 0U;
        } else if ((4U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__imm = 0U;
        } else if ((2U & vlSelf->top__DOT__inst)) {
            if ((1U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__alu_op = 4U;
                vlSelf->top__DOT__imm = ((0U == (7U 
                                                 & (vlSelf->top__DOT__inst 
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
                                          : ((1U == 
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
                                              : ((2U 
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
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__imm = 0U;
            }
        } else {
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__imm = 0U;
        }
    } else if ((0x10U & vlSelf->top__DOT__inst)) {
        if ((8U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__imm = 0U;
        } else if ((4U & vlSelf->top__DOT__inst)) {
            if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    vlSelf->top__DOT__alu_op = 4U;
                    vlSelf->top__DOT__imm = (0xfffff000U 
                                             & vlSelf->top__DOT__inst);
                } else {
                    vlSelf->top__DOT__alu_op = 0U;
                    vlSelf->top__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__imm = 0U;
            }
        } else if ((2U & vlSelf->top__DOT__inst)) {
            if ((1U & vlSelf->top__DOT__inst)) {
                if ((0x4000U & vlSelf->top__DOT__inst)) {
                    if ((0x2000U & vlSelf->top__DOT__inst)) {
                        if ((0x1000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__alu_op = 1U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__inst 
                                              >> 0x14U));
                        } else {
                            vlSelf->top__DOT__alu_op = 2U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__inst 
                                              >> 0x14U));
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                        if ((0U == (vlSelf->top__DOT__inst 
                                    >> 0x19U))) {
                            vlSelf->top__DOT__alu_op = 7U;
                            vlSelf->top__DOT__imm = 
                                (0x1fU & (vlSelf->top__DOT__inst 
                                          >> 0x14U));
                        } else if ((0x20U == (vlSelf->top__DOT__inst 
                                              >> 0x19U))) {
                            vlSelf->top__DOT__alu_op = 8U;
                            vlSelf->top__DOT__imm = 
                                (0x1fU & (vlSelf->top__DOT__inst 
                                          >> 0x14U));
                        } else {
                            vlSelf->top__DOT__alu_op = 7U;
                            vlSelf->top__DOT__imm = 
                                (0x1fU & (vlSelf->top__DOT__inst 
                                          >> 0x14U));
                        }
                    } else {
                        vlSelf->top__DOT__alu_op = 3U;
                        vlSelf->top__DOT__imm = (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U));
                    }
                } else if ((0x2000U & vlSelf->top__DOT__inst)) {
                    if ((0x1000U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__alu_op = 9U;
                        vlSelf->top__DOT__imm = (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U));
                    } else {
                        vlSelf->top__DOT__alu_op = 0xaU;
                        vlSelf->top__DOT__imm = (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
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
            } else {
                vlSelf->top__DOT__alu_op = 0U;
                vlSelf->top__DOT__imm = 0U;
            }
        } else {
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__imm = 0U;
        }
    } else if ((8U & vlSelf->top__DOT__inst)) {
        vlSelf->top__DOT__alu_op = 0U;
        vlSelf->top__DOT__imm = 0U;
    } else if ((4U & vlSelf->top__DOT__inst)) {
        vlSelf->top__DOT__alu_op = 0U;
        vlSelf->top__DOT__imm = 0U;
    } else if ((2U & vlSelf->top__DOT__inst)) {
        if ((1U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__alu_op = 4U;
            vlSelf->top__DOT__imm = ((0x4000U & vlSelf->top__DOT__inst)
                                      ? ((0x2000U & vlSelf->top__DOT__inst)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__inst 
                                                >> 0x14U))
                                          : ((0x1000U 
                                              & vlSelf->top__DOT__inst)
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U))
                                              : (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U))))
                                      : ((0x2000U & vlSelf->top__DOT__inst)
                                          ? ((0x1000U 
                                              & vlSelf->top__DOT__inst)
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U))
                                              : (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U)))
                                          : ((0x1000U 
                                              & vlSelf->top__DOT__inst)
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U))
                                              : (((- (IData)(
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__inst 
                                                    >> 0x14U)))));
        } else {
            vlSelf->top__DOT__alu_op = 0U;
            vlSelf->top__DOT__imm = 0U;
        }
    } else {
        vlSelf->top__DOT__alu_op = 0U;
        vlSelf->top__DOT__imm = 0U;
    }
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__Rgefile__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
    vlSelf->top__DOT__csr_rdata = ((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__inst))
                                    ? ((0U == (7U & 
                                               (vlSelf->top__DOT__inst 
                                                >> 0xcU)))
                                        ? ((0x73U == vlSelf->top__DOT__inst)
                                            ? vlSelf->top__DOT__CSR__DOT__csr_mtvec
                                            : ((0x30200073U 
                                                == vlSelf->top__DOT__inst)
                                                ? vlSelf->top__DOT__CSR__DOT__csr_mepc
                                                : 0U))
                                        : (((1U == 
                                             (7U & 
                                              (vlSelf->top__DOT__inst 
                                               >> 0xcU))) 
                                            | (2U == 
                                               (7U 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0xcU))))
                                            ? ((0x300U 
                                                == 
                                                (vlSelf->top__DOT__inst 
                                                 >> 0x14U))
                                                ? vlSelf->top__DOT__CSR__DOT__csr_mstatus
                                                : (
                                                   (0x305U 
                                                    == 
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__CSR__DOT__csr_mtvec
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__CSR__DOT__csr_mepc
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (vlSelf->top__DOT__inst 
                                                       >> 0x14U))
                                                      ? vlSelf->top__DOT__CSR__DOT__csr_mcause
                                                      : 0U))))
                                            : 0U)) : 0U);
    vlSelf->__Vtableidx1 = ((0x380U & (vlSelf->top__DOT__inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->top__DOT__inst));
    vlSelf->top__DOT__a_in_src = Vtop__ConstPool__TABLE_h7b4d463a_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__b_in_src = Vtop__ConstPool__TABLE_h2128083f_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__reg_write = Vtop__ConstPool__TABLE_h413ee4ec_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__pc_srcs = Vtop__ConstPool__TABLE_hd435c651_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__adder_a_src = Vtop__ConstPool__TABLE_h757488f1_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__mem_read = Vtop__ConstPool__TABLE_he56f561c_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__mem_write = Vtop__ConstPool__TABLE_h22430f06_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__wmask = Vtop__ConstPool__TABLE_hd0c4a6d6_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__wb_src = Vtop__ConstPool__TABLE_he56f561c_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__rmask = Vtop__ConstPool__TABLE_hfcb85a5e_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__csr_write = Vtop__ConstPool__TABLE_h329e03ac_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__adder_out_src = Vtop__ConstPool__TABLE_h2b8e0fee_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__csr_wdata_src = Vtop__ConstPool__TABLE_h0253fb65_0
        [vlSelf->__Vtableidx1];
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
    vlSelf->top__DOT__csr_wdata = ((IData)(vlSelf->top__DOT__csr_wdata_src)
                                    ? (vlSelf->top__DOT__csr_rdata 
                                       | vlSelf->top__DOT__rs1)
                                    : vlSelf->top__DOT__rs1);
    vlSelf->top__DOT__pc_new = ((IData)(vlSelf->top__DOT__adder_out_src)
                                 ? vlSelf->top__DOT__csr_rdata
                                 : (((IData)(vlSelf->top__DOT__adder_a_src)
                                      ? vlSelf->top__DOT__rs1
                                      : vlSelf->top__DOT__pc) 
                                    + vlSelf->top__DOT__imm));
    vlSelf->top__DOT__a_in = ((IData)(vlSelf->top__DOT__a_in_src)
                               ? vlSelf->top__DOT__pc
                               : vlSelf->top__DOT__rs1);
    vlSelf->top__DOT__b_in = ((2U & (IData)(vlSelf->top__DOT__b_in_src))
                               ? ((1U & (IData)(vlSelf->top__DOT__b_in_src))
                                   ? vlSelf->top__DOT__csr_rdata
                                   : 4U) : ((1U & (IData)(vlSelf->top__DOT__b_in_src))
                                             ? vlSelf->top__DOT__imm
                                             : vlSelf->top__DOT__Rgefile__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__inst 
                                                 >> 0x14U))]));
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
                                                                 [0x1fU], vlSelf->top__DOT__pc, 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [0U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [1U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [2U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [3U]);
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
                                                VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__a_in, 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT__b_in)))))
                                     : ((4U & (IData)(vlSelf->top__DOT__alu_op))
                                         ? ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__alu_op))
                                                 ? 
                                                (vlSelf->top__DOT__a_in 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__b_in))
                                                 : 
                                                (vlSelf->top__DOT__a_in 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__b_in)))
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
    vlSelf->top__DOT__npc = ((4U & (IData)(vlSelf->top__DOT__pc_srcs))
                              ? ((2U & (IData)(vlSelf->top__DOT__pc_srcs))
                                  ? ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                      ? ((0U == vlSelf->top__DOT__alu_result)
                                          ? vlSelf->top__DOT__pc_new
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__pc))
                                      : ((1U == vlSelf->top__DOT__alu_result)
                                          ? vlSelf->top__DOT__pc_new
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__pc)))
                                  : ((1U & (IData)(vlSelf->top__DOT__pc_srcs))
                                      ? ((0U == vlSelf->top__DOT__alu_result)
                                          ? vlSelf->top__DOT__pc_new
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__pc))
                                      : ((1U == vlSelf->top__DOT__alu_result)
                                          ? vlSelf->top__DOT__pc_new
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__pc))))
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
    if (((IData)(vlSelf->top__DOT__mem_write) & (~ (IData)(vlSelf->top__DOT__mem_read)))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__alu_result, 
                                                               vlSelf->top__DOT__Rgefile__DOT__rf
                                                               [
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__inst 
                                                                   >> 0x14U))], 
                                                               (0xffU 
                                                                & ((1U 
                                                                    == (IData)(vlSelf->top__DOT__wmask))
                                                                    ? 
                                                                   ((IData)(vlSelf->top__DOT__wmask) 
                                                                    << 
                                                                    (3U 
                                                                     & vlSelf->top__DOT__alu_result))
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__wmask))
                                                                     ? 
                                                                    ((IData)(vlSelf->top__DOT__wmask) 
                                                                     << 
                                                                     (3U 
                                                                      & vlSelf->top__DOT__alu_result))
                                                                     : (IData)(vlSelf->top__DOT__wmask)))));
    }
    if (((~ (IData)(vlSelf->top__DOT__mem_write)) & (IData)(vlSelf->top__DOT__mem_read))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__alu_result, (IData)(vlSelf->top__DOT__rmask), vlSelf->__Vfunc_pmem_read__3__Vfuncout);
        vlSelf->top__DOT__datamem_readdata = vlSelf->__Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__datamem_readdata = 0U;
    }
    vlSelf->top__DOT__mem_data = ((4U & (IData)(vlSelf->top__DOT__rmask))
                                   ? ((2U & (IData)(vlSelf->top__DOT__rmask))
                                       ? vlSelf->top__DOT__datamem_readdata
                                       : ((1U & (IData)(vlSelf->top__DOT__rmask))
                                           ? vlSelf->top__DOT__datamem_readdata
                                           : ((2U & vlSelf->top__DOT__alu_result)
                                               ? ((1U 
                                                   & vlSelf->top__DOT__alu_result)
                                                   ? 
                                                  (vlSelf->top__DOT__datamem_readdata 
                                                   >> 0x18U)
                                                   : 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__datamem_readdata 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & vlSelf->top__DOT__alu_result)
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelf->top__DOT__datamem_readdata 
                                                      >> 8U))
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__datamem_readdata)))))
                                   : ((2U & (IData)(vlSelf->top__DOT__rmask))
                                       ? ((1U & (IData)(vlSelf->top__DOT__rmask))
                                           ? ((2U & vlSelf->top__DOT__alu_result)
                                               ? ((1U 
                                                   & vlSelf->top__DOT__alu_result)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__datamem_readdata 
                                                                >> 0x1fU))) 
                                                    << 8U) 
                                                   | (vlSelf->top__DOT__datamem_readdata 
                                                      >> 0x18U))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__datamem_readdata 
                                                                   >> 0x17U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlSelf->top__DOT__datamem_readdata 
                                                         >> 0x10U))))
                                               : ((1U 
                                                   & vlSelf->top__DOT__alu_result)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__datamem_readdata 
                                                                   >> 0xfU)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlSelf->top__DOT__datamem_readdata 
                                                         >> 8U)))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__datamem_readdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__datamem_readdata))))
                                           : ((2U & vlSelf->top__DOT__alu_result)
                                               ? (vlSelf->top__DOT__datamem_readdata 
                                                  >> 0x10U)
                                               : (0xffffU 
                                                  & vlSelf->top__DOT__datamem_readdata)))
                                       : ((1U & (IData)(vlSelf->top__DOT__rmask))
                                           ? ((2U & vlSelf->top__DOT__alu_result)
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__datamem_readdata 
                                                               >> 0x1fU))) 
                                                   << 0x10U) 
                                                  | (vlSelf->top__DOT__datamem_readdata 
                                                     >> 0x10U))
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__datamem_readdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__datamem_readdata)))
                                           : vlSelf->top__DOT__datamem_readdata)));
}
