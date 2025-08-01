// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__IFU__DOT__npc = vlSelf->top__DOT__IFU__DOT__npc;
    vlSelf->__Vdly__top__DOT__IDU__DOT__pc = vlSelf->top__DOT__IDU__DOT__pc;
}

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
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1dd48d1a_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((0U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
        }
        if ((1U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__valid_ifu_to_idu = 1U;
            vlSelf->__Vdly__top__DOT__IFU__DOT__npc 
                = vlSelf->top__DOT__npc_wbu_to_ifu;
        } else {
            vlSelf->top__DOT__valid_ifu_to_idu = ((0x80000000U 
                                                   == vlSelf->top__DOT__IFU__DOT__pc) 
                                                  | (2U 
                                                     == (IData)(vlSelf->top__DOT__IFU__DOT__current_state)));
        }
        if ((0U == (IData)(vlSelf->top__DOT__IDU__DOT__current_state))) {
            vlSelf->top__DOT__ready_ifu_to_idu = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__current_state))) {
            vlSelf->top__DOT__ready_ifu_to_idu = 0U;
        }
        if ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__current_state))) {
            vlSelf->top__DOT__valid_idu_to_exu = 1U;
            vlSelf->__Vdly__top__DOT__IDU__DOT__pc 
                = vlSelf->top__DOT__IFU__DOT__pc;
            vlSelf->top__DOT__IDU__DOT__inst = vlSelf->top__DOT__inst_from_mem;
        } else {
            vlSelf->top__DOT__valid_idu_to_exu = ((0x80000000U 
                                                   == vlSelf->top__DOT__IDU__DOT__pc) 
                                                  | (2U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__current_state)));
        }
        vlSelf->top__DOT__IFU__DOT__current_state = vlSelf->top__DOT__IFU__DOT__next_state;
        vlSelf->top__DOT__IDU__DOT__current_state = vlSelf->top__DOT__IDU__DOT__next_state;
    } else {
        vlSelf->top__DOT__valid_ifu_to_idu = 0U;
        vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
        vlSelf->__Vdly__top__DOT__IFU__DOT__npc = 0x80000000U;
        vlSelf->top__DOT__valid_idu_to_exu = 0U;
        vlSelf->top__DOT__ready_ifu_to_idu = 0U;
        vlSelf->top__DOT__IFU__DOT__current_state = 0U;
        vlSelf->top__DOT__IDU__DOT__current_state = 0U;
    }
    vlSelf->top__DOT__IDU__DOT__pc = vlSelf->__Vdly__top__DOT__IDU__DOT__pc;
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
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_idu_to_exu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__current_state)))));
    vlSelf->top__DOT__IDU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx2];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_wbu_to_ifu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__IFU__DOT__current_state)))));
    vlSelf->top__DOT__IFU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx1];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__IFU__DOT__npc = vlSelf->__Vdly__top__DOT__IFU__DOT__npc;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 16, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 16, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
