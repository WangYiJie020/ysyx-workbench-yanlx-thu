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
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst_n)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ rmask, IData/*31:0*/ &pmem_read__Vfuncrtn);

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
        if ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->__Vdly__top__DOT__ready_exu_to_lsu = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->__Vdly__top__DOT__ready_exu_to_lsu = 0U;
        }
        if ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__valid_lsu_to_wbu = 1U;
            if (vlSelf->top__DOT__LSU__DOT__flag) {
                vlSelf->top__DOT__LSU__DOT__MemRead = 0U;
                vlSelf->top__DOT__LSU__DOT__MemWrite = 0U;
            } else {
                vlSelf->top__DOT__LSU__DOT__MemRead 
                    = vlSelf->top__DOT__MemRead_exu_to_lsu;
                vlSelf->top__DOT__LSU__DOT__MemWrite 
                    = vlSelf->top__DOT__MemWrite_exu_to_lsu;
                vlSelf->top__DOT__LSU__DOT__flag = 1U;
            }
            vlSelf->top__DOT__LSU__DOT__alu_result 
                = vlSelf->top__DOT__EXU__DOT__alu_result;
            vlSelf->top__DOT__LSU__DOT__rs1 = vlSelf->top__DOT__EXU__DOT__rs1;
            vlSelf->top__DOT__LSU__DOT__rs2 = vlSelf->top__DOT__EXU__DOT__rs2;
            vlSelf->top__DOT__LSU__DOT__wmask = vlSelf->top__DOT__wmask_exu_to_lsu;
            vlSelf->top__DOT__LSU__DOT__rmask = vlSelf->top__DOT__rmask_exu_to_lsu;
            vlSelf->top__DOT__wb_src_lsu_to_wbu = vlSelf->top__DOT__wb_src_exu_to_lsu;
            vlSelf->top__DOT__csr_write_lsu_to_wbu 
                = vlSelf->top__DOT__csr_write_exu_to_lsu;
            vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu 
                = vlSelf->top__DOT__csr_wdta_src_exu_to_lsu;
            vlSelf->top__DOT__reg_write_lsu_to_wbu 
                = vlSelf->top__DOT__reg_write_exu_to_lsu;
            vlSelf->top__DOT__npc_lsu_to_wbu = ((4U 
                                                 & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))
                                                   : 
                                                  ((1U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))
                                                   : 
                                                  ((1U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? 
                                                  ((0U 
                                                    != vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))
                                                   : 
                                                  ((0U 
                                                    != vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc)
                                                    : vlSelf->top__DOT__EXU__DOT__pc_new))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__EXU__DOT__pc))));
            vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu 
                = (vlSelf->top__DOT__EXU__DOT__csr_rdata 
                   | vlSelf->top__DOT__EXU__DOT__rs1);
            vlSelf->top__DOT__waddr_lsu_to_wbu = vlSelf->top__DOT__waddr_exu_to_lsu;
            vlSelf->top__DOT__LSU__DOT__alu_result 
                = vlSelf->top__DOT__EXU__DOT__alu_result;
        } else if ((2U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__LSU__DOT__flag = 0U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 1U;
        } else {
            vlSelf->top__DOT__LSU__DOT__flag = 0U;
            vlSelf->top__DOT__LSU__DOT__MemRead = 0U;
            vlSelf->top__DOT__LSU__DOT__MemWrite = 0U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
        }
        vlSelf->top__DOT__IFU__DOT__current_state = vlSelf->top__DOT__IFU__DOT__next_state;
    } else {
        vlSelf->top__DOT__valid_ifu_to_idu = 0U;
        vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
        vlSelf->__Vdly__top__DOT__IFU__DOT__npc = 0x80000000U;
        vlSelf->top__DOT__LSU__DOT__flag = 0U;
        vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
        vlSelf->__Vdly__top__DOT__ready_exu_to_lsu = 0U;
        vlSelf->top__DOT__IFU__DOT__current_state = 0U;
    }
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
    if (((~ (IData)(vlSelf->top__DOT__LSU__DOT__MemWrite)) 
         & (IData)(vlSelf->top__DOT__LSU__DOT__MemRead))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__LSU__DOT__alu_result, (IData)(vlSelf->top__DOT__LSU__DOT__rmask), vlSelf->__Vfunc_pmem_read__3__Vfuncout);
        vlSelf->top__DOT__LSU__DOT__datamem_readdata 
            = vlSelf->__Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__LSU__DOT__datamem_readdata = 0U;
    }
    vlSelf->top__DOT__LSU__DOT__current_state = ((IData)(vlSelf->rst_n)
                                                  ? (IData)(vlSelf->top__DOT__LSU__DOT__next_state)
                                                  : 0U);
}

void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc, IData/*31:0*/ csr_reg_0, IData/*31:0*/ csr_reg_1, IData/*31:0*/ csr_reg_2, IData/*31:0*/ csr_reg_3);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__IFU__DOT__pc = ((IData)(vlSelf->rst_n)
                                       ? vlSelf->top__DOT__IFU__DOT__npc
                                       : 0x80000000U);
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
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__pc, 0U, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
    vlSelf->top__DOT__inst_from_mem = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__inst_from_mem))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 320, "");
    }
}
