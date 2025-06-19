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

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> regvalue);
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_h1baa5ab3_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h7b4d463a_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hf9dc518c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h0874e4f8_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h1b521792_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h757488f1_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x100073U == vlSelf->inst))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 120, "");
    }
    Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(vlSelf->top__DOT__Rgefile__DOT__rf);
    vlSelf->__Vtableidx2 = ((0x380U & (vlSelf->inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__alu_op = Vtop__ConstPool__TABLE_h1baa5ab3_0
        [vlSelf->__Vtableidx2];
    vlSelf->top__DOT__imm = ((0x40U & vlSelf->inst)
                              ? ((0x20U & vlSelf->inst)
                                  ? ((0x10U & vlSelf->inst)
                                      ? 0U : ((8U & vlSelf->inst)
                                               ? ((4U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0xff000U 
                                                         & vlSelf->inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                               : ((4U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->inst 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)))
                                  : 0U) : ((0x20U & vlSelf->inst)
                                            ? ((0x10U 
                                                & vlSelf->inst)
                                                ? (
                                                   (8U 
                                                    & vlSelf->inst)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->inst)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U))
                                                : 0U)
                                            : ((0x10U 
                                                & vlSelf->inst)
                                                ? (
                                                   (8U 
                                                    & vlSelf->inst)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->inst)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU)))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->inst 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)))
                                                : 0U)));
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__Rgefile__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->__Vtableidx1 = ((0x380U & (vlSelf->inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__a_in_src = Vtop__ConstPool__TABLE_h7b4d463a_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__b_in_src = Vtop__ConstPool__TABLE_hf9dc518c_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__reg_write = Vtop__ConstPool__TABLE_h0874e4f8_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__pc_srcs = Vtop__ConstPool__TABLE_h1b521792_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__adder_a_src = Vtop__ConstPool__TABLE_h757488f1_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__a_in = ((IData)(vlSelf->top__DOT__a_in_src)
                               ? vlSelf->pc : vlSelf->top__DOT__rs1);
    vlSelf->top__DOT__b_in = ((2U & (IData)(vlSelf->top__DOT__b_in_src))
                               ? ((1U & (IData)(vlSelf->top__DOT__b_in_src))
                                   ? 0U : 4U) : ((1U 
                                                  & (IData)(vlSelf->top__DOT__b_in_src))
                                                  ? vlSelf->top__DOT__imm
                                                  : 
                                                 vlSelf->top__DOT__Rgefile__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U))]));
    vlSelf->top__DOT__npc = ((IData)(vlSelf->top__DOT__pc_srcs)
                              ? (((IData)(vlSelf->top__DOT__adder_a_src)
                                   ? vlSelf->top__DOT__rs1
                                   : vlSelf->pc) + vlSelf->top__DOT__imm)
                              : ((IData)(4U) + vlSelf->pc));
}
