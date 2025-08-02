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

void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ rmask, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1dd48d1a_0;
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
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc, IData/*31:0*/ csr_reg_0, IData/*31:0*/ csr_reg_1, IData/*31:0*/ csr_reg_2, IData/*31:0*/ csr_reg_3);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x40U & vlSelf->top__DOT__IDU__DOT__inst)) {
        if ((0x20U & vlSelf->top__DOT__IDU__DOT__inst)) {
            if ((0x10U & vlSelf->top__DOT__IDU__DOT__inst)) {
                vlSelf->top__DOT__imm_idu_to_exu = 0U;
                vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
            } else if ((8U & vlSelf->top__DOT__IDU__DOT__inst)) {
                if ((4U & vlSelf->top__DOT__IDU__DOT__inst)) {
                    if ((2U & vlSelf->top__DOT__IDU__DOT__inst)) {
                        if ((1U & vlSelf->top__DOT__IDU__DOT__inst)) {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__IDU__DOT__inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__IDU__DOT__inst 
                                                          >> 0x14U)))));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 4U;
                        } else {
                            vlSelf->top__DOT__imm_idu_to_exu = 0U;
                            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__imm_idu_to_exu = 0U;
                        vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                    }
                } else {
                    vlSelf->top__DOT__imm_idu_to_exu = 0U;
                    vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__IDU__DOT__inst)) {
                if ((2U & vlSelf->top__DOT__IDU__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__IDU__DOT__inst)) {
                        if ((0U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 4U;
                        } else {
                            vlSelf->top__DOT__imm_idu_to_exu = 0U;
                            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__imm_idu_to_exu = 0U;
                        vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                    }
                } else {
                    vlSelf->top__DOT__imm_idu_to_exu = 0U;
                    vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__IDU__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__IDU__DOT__inst)) {
                    if ((0x4000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                        if ((0x2000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))))
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U))))));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 9U;
                        } else {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))))
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U))))));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 0xaU;
                        }
                    } else {
                        vlSelf->top__DOT__imm_idu_to_exu 
                            = ((0x2000U & vlSelf->top__DOT__IDU__DOT__inst)
                                ? (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__IDU__DOT__inst 
                                                         >> 7U)))))
                                : ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))))
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 7U)))))));
                        vlSelf->top__DOT__alu_op_idu_to_exu = 5U;
                    }
                } else {
                    vlSelf->top__DOT__imm_idu_to_exu = 0U;
                    vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                }
            } else {
                vlSelf->top__DOT__imm_idu_to_exu = 0U;
                vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
            }
        } else {
            vlSelf->top__DOT__imm_idu_to_exu = 0U;
            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__IDU__DOT__inst)) {
        if ((0x10U & vlSelf->top__DOT__IDU__DOT__inst)) {
            if ((8U & vlSelf->top__DOT__IDU__DOT__inst)) {
                vlSelf->top__DOT__imm_idu_to_exu = 0U;
                vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
            } else if ((4U & vlSelf->top__DOT__IDU__DOT__inst)) {
                vlSelf->top__DOT__imm_idu_to_exu = 
                    ((2U & vlSelf->top__DOT__IDU__DOT__inst)
                      ? ((1U & vlSelf->top__DOT__IDU__DOT__inst)
                          ? (0xfffff000U & vlSelf->top__DOT__IDU__DOT__inst)
                          : 0U) : 0U);
                vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
            } else {
                vlSelf->top__DOT__imm_idu_to_exu = 0U;
                vlSelf->top__DOT__alu_op_idu_to_exu 
                    = ((2U & vlSelf->top__DOT__IDU__DOT__inst)
                        ? ((1U & vlSelf->top__DOT__IDU__DOT__inst)
                            ? ((0x4000U & vlSelf->top__DOT__IDU__DOT__inst)
                                ? ((0x2000U & vlSelf->top__DOT__IDU__DOT__inst)
                                    ? ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)
                                        ? 1U : 2U) : 
                                   ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)
                                     ? ((0U == (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x19U))
                                         ? 7U : ((0x20U 
                                                  == 
                                                  (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x19U))
                                                  ? 8U
                                                  : 0U))
                                     : 3U)) : ((0x2000U 
                                                & vlSelf->top__DOT__IDU__DOT__inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__IDU__DOT__inst)
                                                    ? 9U
                                                    : 0xaU)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__IDU__DOT__inst)
                                                    ? 6U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x19U))
                                                     ? 4U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (vlSelf->top__DOT__IDU__DOT__inst 
                                                       >> 0x19U))
                                                      ? 5U
                                                      : 0U)))))
                            : 0U) : 0U);
            }
        } else if ((8U & vlSelf->top__DOT__IDU__DOT__inst)) {
            vlSelf->top__DOT__imm_idu_to_exu = 0U;
            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
        } else if ((4U & vlSelf->top__DOT__IDU__DOT__inst)) {
            vlSelf->top__DOT__imm_idu_to_exu = 0U;
            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
        } else if ((2U & vlSelf->top__DOT__IDU__DOT__inst)) {
            if ((1U & vlSelf->top__DOT__IDU__DOT__inst)) {
                vlSelf->top__DOT__imm_idu_to_exu = 
                    ((0U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                   >> 0xcU))) ? (((- (IData)(
                                                             (vlSelf->top__DOT__IDU__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->top__DOT__IDU__DOT__inst 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->top__DOT__IDU__DOT__inst 
                                                          >> 7U))))
                      : ((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                       >> 0xcU))) ? 
                         (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                       >> 0x1fU))) 
                           << 0xcU) | ((0xfe0U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x14U)) 
                                       | (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 7U))))
                          : ((2U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0xcU)))
                              ? (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 7U))))
                              : (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 7U)))))));
                vlSelf->top__DOT__alu_op_idu_to_exu = 4U;
            } else {
                vlSelf->top__DOT__imm_idu_to_exu = 0U;
                vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
            }
        } else {
            vlSelf->top__DOT__imm_idu_to_exu = 0U;
            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
        }
    } else if ((0x10U & vlSelf->top__DOT__IDU__DOT__inst)) {
        if ((8U & vlSelf->top__DOT__IDU__DOT__inst)) {
            vlSelf->top__DOT__imm_idu_to_exu = 0U;
            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
        } else if ((4U & vlSelf->top__DOT__IDU__DOT__inst)) {
            if ((2U & vlSelf->top__DOT__IDU__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__IDU__DOT__inst)) {
                    vlSelf->top__DOT__imm_idu_to_exu 
                        = (0xfffff000U & vlSelf->top__DOT__IDU__DOT__inst);
                    vlSelf->top__DOT__alu_op_idu_to_exu = 4U;
                } else {
                    vlSelf->top__DOT__imm_idu_to_exu = 0U;
                    vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
                }
            } else {
                vlSelf->top__DOT__imm_idu_to_exu = 0U;
                vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
            }
        } else if ((2U & vlSelf->top__DOT__IDU__DOT__inst)) {
            if ((1U & vlSelf->top__DOT__IDU__DOT__inst)) {
                if ((0x4000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                    if ((0x2000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                        if ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 1U;
                        } else {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 2U;
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                        if ((0U == (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x19U))) {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 7U;
                        } else if ((0x20U == (vlSelf->top__DOT__IDU__DOT__inst 
                                              >> 0x19U))) {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 8U;
                        } else {
                            vlSelf->top__DOT__imm_idu_to_exu 
                                = (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
                            vlSelf->top__DOT__alu_op_idu_to_exu = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__imm_idu_to_exu 
                            = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
                        vlSelf->top__DOT__alu_op_idu_to_exu = 3U;
                    }
                } else if ((0x2000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                    if ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                        vlSelf->top__DOT__imm_idu_to_exu 
                            = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
                        vlSelf->top__DOT__alu_op_idu_to_exu = 9U;
                    } else {
                        vlSelf->top__DOT__imm_idu_to_exu 
                            = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U));
                        vlSelf->top__DOT__alu_op_idu_to_exu = 0xaU;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__IDU__DOT__inst)) {
                    vlSelf->top__DOT__imm_idu_to_exu 
                        = (0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x14U));
                    vlSelf->top__DOT__alu_op_idu_to_exu = 6U;
                } else {
                    vlSelf->top__DOT__imm_idu_to_exu 
                        = (((- (IData)((vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U));
                    vlSelf->top__DOT__alu_op_idu_to_exu = 4U;
                }
            } else {
                vlSelf->top__DOT__imm_idu_to_exu = 0U;
                vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
            }
        } else {
            vlSelf->top__DOT__imm_idu_to_exu = 0U;
            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
        }
    } else if ((8U & vlSelf->top__DOT__IDU__DOT__inst)) {
        vlSelf->top__DOT__imm_idu_to_exu = 0U;
        vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
    } else if ((4U & vlSelf->top__DOT__IDU__DOT__inst)) {
        vlSelf->top__DOT__imm_idu_to_exu = 0U;
        vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
    } else if ((2U & vlSelf->top__DOT__IDU__DOT__inst)) {
        if ((1U & vlSelf->top__DOT__IDU__DOT__inst)) {
            vlSelf->top__DOT__imm_idu_to_exu = ((0x4000U 
                                                 & vlSelf->top__DOT__IDU__DOT__inst)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__IDU__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__IDU__DOT__inst 
                                                     >> 0x14U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x14U))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x14U))))
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__IDU__DOT__inst)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x14U))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x14U)))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__IDU__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x14U))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__IDU__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__IDU__DOT__inst 
                                                      >> 0x14U)))));
            vlSelf->top__DOT__alu_op_idu_to_exu = 4U;
        } else {
            vlSelf->top__DOT__imm_idu_to_exu = 0U;
            vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
        }
    } else {
        vlSelf->top__DOT__imm_idu_to_exu = 0U;
        vlSelf->top__DOT__alu_op_idu_to_exu = 0U;
    }
    vlSelf->top__DOT__LSU__DOT__next_state = ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))
                                               ? (((IData)(vlSelf->top__DOT__valid_exu_to_lsu) 
                                                   & (IData)(vlSelf->top__DOT__ready_exu_to_lsu))
                                                   ? 1U
                                                   : (IData)(vlSelf->top__DOT__LSU__DOT__current_state))
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__LSU__DOT__current_state))));
    if (((IData)(vlSelf->top__DOT__LSU__DOT__MemWrite) 
         & (~ (IData)(vlSelf->top__DOT__LSU__DOT__MemRead)))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__LSU__DOT__alu_result, vlSelf->top__DOT__LSU__DOT__rs2, 
                                                               (0xffU 
                                                                & ((1U 
                                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                                                    ? 
                                                                   ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                                                    << 
                                                                    (3U 
                                                                     & vlSelf->top__DOT__LSU__DOT__alu_result))
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                                                     ? 
                                                                    ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                                                     << 
                                                                     (3U 
                                                                      & vlSelf->top__DOT__LSU__DOT__alu_result))
                                                                     : (IData)(vlSelf->top__DOT__LSU__DOT__wmask)))));
    }
    vlSelf->top__DOT__WBU__DOT__mem_data = ((4U & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                             ? ((2U 
                                                 & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                 ? vlSelf->top__DOT__WBU__DOT__datamem_readdata
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                  ? vlSelf->top__DOT__WBU__DOT__datamem_readdata
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                    >> 0x18U)
                                                    : 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                       >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__WBU__DOT__datamem_readdata)))))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                 >> 0x1fU))) 
                                                     << 8U) 
                                                    | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                       >> 0x18U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                    >> 0x17U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                          >> 0x10U))))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                    >> 0xfU)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                          >> 8U)))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->top__DOT__WBU__DOT__datamem_readdata))))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__WBU__DOT__datamem_readdata)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                >> 0x1fU))) 
                                                    << 0x10U) 
                                                   | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                      >> 0x10U))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__WBU__DOT__datamem_readdata)))
                                                  : vlSelf->top__DOT__WBU__DOT__datamem_readdata)));
    vlSelf->top__DOT__csr_wdata = ((IData)(vlSelf->top__DOT__WBU__DOT__csr_wdata_src)
                                    ? vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1
                                    : vlSelf->top__DOT__WBU__DOT__rs1);
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__pc, 0U, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
    vlSelf->top__DOT__inst_from_mem = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
    if (((~ (IData)(vlSelf->top__DOT__LSU__DOT__MemWrite)) 
         & (IData)(vlSelf->top__DOT__LSU__DOT__MemRead))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__LSU__DOT__alu_result, (IData)(vlSelf->top__DOT__LSU__DOT__rmask), vlSelf->__Vfunc_pmem_read__3__Vfuncout);
        vlSelf->top__DOT__LSU__DOT__datamem_readdata 
            = vlSelf->__Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__LSU__DOT__datamem_readdata = 0U;
    }
    vlSelf->top__DOT__EXU__DOT__pc_new = ((IData)(vlSelf->top__DOT__EXU__DOT__adder_out_src)
                                           ? vlSelf->top__DOT__EXU__DOT__csr_rdata
                                           : (((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                                : vlSelf->top__DOT__EXU__DOT__pc) 
                                              + vlSelf->top__DOT__EXU__DOT__imm));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_wbu_to_ifu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__IFU__DOT__current_state)))));
    vlSelf->top__DOT__IFU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx1];
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top__DOT__ready_exu_to_lsu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_idu_to_exu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__current_state)))));
    vlSelf->top__DOT__IDU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx2];
    vlSelf->top__DOT__EXU__DOT__a_in = ((IData)(vlSelf->top__DOT__EXU__DOT__a_in_src)
                                         ? vlSelf->top__DOT__EXU__DOT__pc
                                         : vlSelf->top__DOT__EXU__DOT__rs1);
    vlSelf->top__DOT__EXU__DOT__b_in = ((2U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                         ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                             ? vlSelf->top__DOT__EXU__DOT__csr_rdata
                                             : 4U) : 
                                        ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                          ? vlSelf->top__DOT__EXU__DOT__imm
                                          : vlSelf->top__DOT__EXU__DOT__rs2));
    vlSelf->__Vtableidx3 = ((0x380U & (vlSelf->top__DOT__IDU__DOT__inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->top__DOT__IDU__DOT__inst));
    vlSelf->top__DOT__a_in_src_idu_to_exu = Vtop__ConstPool__TABLE_h7b4d463a_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__b_in_src_idu_to_exu = Vtop__ConstPool__TABLE_h2128083f_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__reg_write_idu_to_exu = Vtop__ConstPool__TABLE_h413ee4ec_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__pc_srcs_idu_to_exu = Vtop__ConstPool__TABLE_hd435c651_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__adder_a_src_idu_to_exu = Vtop__ConstPool__TABLE_h757488f1_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__MemRead_idu_to_exu = Vtop__ConstPool__TABLE_he56f561c_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__MemWrite_idu_to_exu = Vtop__ConstPool__TABLE_h22430f06_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__wmask_idu_to_exu = Vtop__ConstPool__TABLE_hd0c4a6d6_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__wb_src_idu_to_exu = Vtop__ConstPool__TABLE_he56f561c_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__rmask_idu_to_exu = Vtop__ConstPool__TABLE_hfcb85a5e_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__csr_write_idu_to_exu = Vtop__ConstPool__TABLE_h329e03ac_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__adder_out_src_idu_to_exu = Vtop__ConstPool__TABLE_h2b8e0fee_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__csr_wdata_src_idu_to_exu = Vtop__ConstPool__TABLE_h0253fb65_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec;
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
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__inst_from_mem))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 320, "");
    }
    vlSelf->top__DOT__EXU__DOT__alu_result = ((8U & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                   ? vlSelf->top__DOT__EXU__DOT__b_in
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? vlSelf->top__DOT__EXU__DOT__b_in
                                                     : 
                                                    (VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT__a_in, vlSelf->top__DOT__EXU__DOT__b_in)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    ((vlSelf->top__DOT__EXU__DOT__a_in 
                                                      < vlSelf->top__DOT__EXU__DOT__b_in)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__EXU__DOT__a_in, 
                                                                   (0x1fU 
                                                                    & vlSelf->top__DOT__EXU__DOT__b_in)))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__EXU__DOT__b_in))
                                                     : 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__EXU__DOT__b_in)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     - vlSelf->top__DOT__EXU__DOT__b_in)
                                                     : 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     + vlSelf->top__DOT__EXU__DOT__b_in)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     ^ vlSelf->top__DOT__EXU__DOT__b_in)
                                                     : 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     | vlSelf->top__DOT__EXU__DOT__b_in))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     & vlSelf->top__DOT__EXU__DOT__b_in)
                                                     : vlSelf->top__DOT__EXU__DOT__b_in))));
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[3U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [3U];
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[2U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [2U];
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[1U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [1U];
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[0U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [0U];
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
    vlSelf->top__DOT__csr_reg[3U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [3U];
    vlSelf->top__DOT__csr_reg[2U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [2U];
    vlSelf->top__DOT__csr_reg[1U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [1U];
    vlSelf->top__DOT__csr_reg[0U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [0U];
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
                                                                 [0x1fU], vlSelf->top__DOT__IFU__DOT__pc, 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [0U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [1U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [2U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [3U]);
}
