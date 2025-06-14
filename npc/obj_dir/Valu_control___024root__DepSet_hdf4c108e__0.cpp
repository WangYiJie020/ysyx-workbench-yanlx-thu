// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_control.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Valu_control__Syms.h"
#include "Valu_control___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_control___024root___dump_triggers__ico(Valu_control___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_control___024root___eval_triggers__ico(Valu_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_control___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_control___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_control___024root___dump_triggers__act(Valu_control___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_control___024root___eval_triggers__act(Valu_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_control___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_control___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Valu_control___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Valu_control___024root___nba_sequent__TOP__0(Valu_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_control___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0;
    __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0;
    __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 0;
    // Body
    if (VL_UNLIKELY((0x100073U == vlSelf->inst))) {
        Valu_control___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 119, "");
    }
    __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__reg_write) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U))))) {
        __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0 
            = vlSelf->datamem_addr;
        __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    vlSelf->pc = ((IData)(vlSelf->rst_n) ? vlSelf->top__DOT__npc
                   : 0x80000000U);
    if (__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0) {
        vlSelf->top__DOT__Rgefile__DOT__rf[__Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0;
    }
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__Rgefile__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
}
