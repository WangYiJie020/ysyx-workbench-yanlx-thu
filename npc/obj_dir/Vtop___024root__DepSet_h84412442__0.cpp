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

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ rmask, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__IFU__DOT__pc = ((IData)(vlSelf->rst_n)
                                       ? vlSelf->top__DOT__IFU__DOT__npc
                                       : 0x80000000U);
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__pc, 0U, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
    vlSelf->top__DOT__inst_from_mem = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__inst_from_mem))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 320, "");
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hbf80e028_0;
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1dd48d1a_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hb056201f_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((0U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            vlSelf->top__DOT__valid_ifu_to_idu = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 1U;
            vlSelf->top__DOT__valid_ifu_to_idu = 1U;
            vlSelf->top__DOT__IFU__DOT__npc = vlSelf->top__DOT__npc_wbu_to_ifu;
        } else if ((2U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            vlSelf->top__DOT__valid_ifu_to_idu = (3U 
                                                  != (IData)(vlSelf->top__DOT__IFU__DOT__current_state));
        } else {
            if ((3U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
                vlSelf->top__DOT__ready_wbu_to_ifu = 1U;
            }
            vlSelf->top__DOT__valid_ifu_to_idu = 0U;
        }
        vlSelf->top__DOT__IFU__DOT__current_state = vlSelf->top__DOT__IFU__DOT__next_state;
        if ((0U == (IData)(vlSelf->top__DOT__WBU__DOT__current_state))) {
            vlSelf->top__DOT__ready_lsu_to_wbu = 1U;
            vlSelf->top__DOT__valid_wbu_to_ifu = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__WBU__DOT__current_state))) {
            vlSelf->top__DOT__ready_lsu_to_wbu = 0U;
            vlSelf->top__DOT__valid_wbu_to_ifu = 1U;
            vlSelf->top__DOT__WBU__DOT__alu_result 
                = vlSelf->top__DOT__LSU__DOT__alu_result;
            vlSelf->top__DOT__WBU__DOT__rs1 = vlSelf->top__DOT__LSU__DOT__rs1;
            vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1 
                = vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu;
            vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                = vlSelf->top__DOT__LSU__DOT__datamem_readdata;
            vlSelf->top__DOT__npc_wbu_to_ifu = vlSelf->top__DOT__npc_lsu_to_wbu;
            vlSelf->top__DOT__WBU__DOT__rmask = vlSelf->top__DOT__LSU__DOT__rmask;
            vlSelf->top__DOT__WBU__DOT__wb_src = vlSelf->top__DOT__wb_src_lsu_to_wbu;
            vlSelf->top__DOT__WBU__DOT__csr_wdata_src 
                = vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu;
            vlSelf->__Vdly__top__DOT__csr_write = vlSelf->top__DOT__csr_write_lsu_to_wbu;
            vlSelf->top__DOT__reg_write = vlSelf->top__DOT__reg_write_lsu_to_wbu;
            vlSelf->top__DOT__waddr = vlSelf->top__DOT__waddr_lsu_to_wbu;
        } else if ((2U == (IData)(vlSelf->top__DOT__WBU__DOT__current_state))) {
            vlSelf->top__DOT__ready_lsu_to_wbu = 1U;
            vlSelf->top__DOT__valid_wbu_to_ifu = 1U;
        } else {
            vlSelf->top__DOT__valid_wbu_to_ifu = 0U;
        }
    } else {
        vlSelf->top__DOT__valid_ifu_to_idu = 0U;
        vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
        vlSelf->top__DOT__IFU__DOT__npc = 0x80000000U;
        vlSelf->top__DOT__IFU__DOT__current_state = 0U;
        vlSelf->top__DOT__valid_wbu_to_ifu = 0U;
        vlSelf->top__DOT__ready_lsu_to_wbu = 0U;
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
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_wbu_to_ifu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__IFU__DOT__current_state)))));
    vlSelf->top__DOT__IFU__DOT__next_state = Vtop__ConstPool__TABLE_hbf80e028_0
        [vlSelf->__Vtableidx1];
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__WBU__DOT__current_state = vlSelf->top__DOT__WBU__DOT__next_state;
        if ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 1U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 0U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
            vlSelf->top__DOT__LSU__DOT__alu_result 
                = vlSelf->top__DOT__EXU__DOT__alu_result;
            vlSelf->top__DOT__LSU__DOT__rs1 = vlSelf->top__DOT__EXU__DOT__rs1;
            vlSelf->top__DOT__LSU__DOT__rs2 = vlSelf->top__DOT__EXU__DOT__rs2;
            vlSelf->top__DOT__LSU__DOT__MemRead = vlSelf->top__DOT__MemRead_exu_to_lsu;
            vlSelf->top__DOT__LSU__DOT__MemWrite = vlSelf->top__DOT__MemWrite_exu_to_lsu;
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
        } else if ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 0U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 1U;
        } else if ((2U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 1U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
        }
    } else {
        vlSelf->top__DOT__WBU__DOT__current_state = 0U;
        vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
        vlSelf->top__DOT__ready_exu_to_lsu = 0U;
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
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__LSU__DOT__current_state = vlSelf->top__DOT__LSU__DOT__next_state;
        if ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__current_state))) {
            vlSelf->top__DOT__ready_idu_to_exu = 1U;
            vlSelf->top__DOT__valid_exu_to_lsu = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__current_state))) {
            vlSelf->top__DOT__ready_idu_to_exu = 0U;
            vlSelf->top__DOT__valid_exu_to_lsu = 1U;
            vlSelf->top__DOT__EXU__DOT__pc = vlSelf->top__DOT__IDU__DOT__pc;
            vlSelf->top__DOT__EXU__DOT__rs1 = vlSelf->top__DOT__Rgefile__DOT__rf
                [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                           >> 0xfU))];
            vlSelf->top__DOT__EXU__DOT__rs2 = vlSelf->top__DOT__Rgefile__DOT__rf
                [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                           >> 0x14U))];
            vlSelf->top__DOT__EXU__DOT__imm = vlSelf->top__DOT__imm_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__csr_rdata = 
                ((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                  ? ((0U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                   >> 0xcU))) ? ((0x73U 
                                                  == vlSelf->top__DOT__IDU__DOT__inst)
                                                  ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                                  : 
                                                 ((0x30200073U 
                                                   == vlSelf->top__DOT__IDU__DOT__inst)
                                                   ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                                   : 0U))
                      : (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU))) 
                          | (2U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                          >> 0xcU))))
                          ? ((0x300U == (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))
                              ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus
                              : ((0x305U == (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 0x14U))
                                  ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                  : ((0x341U == (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0x14U))
                                      ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                      : ((0x342U == 
                                          (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0x14U))
                                          ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause
                                          : 0U)))) : 0U))
                  : 0U);
            vlSelf->top__DOT__EXU__DOT__a_in_src = vlSelf->top__DOT__a_in_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__b_in_src = vlSelf->top__DOT__b_in_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__pc_srcs = vlSelf->top__DOT__pc_srcs_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__adder_a_src 
                = vlSelf->top__DOT__adder_a_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__adder_out_src 
                = vlSelf->top__DOT__adder_out_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__alu_op = vlSelf->top__DOT__alu_op_idu_to_exu;
            vlSelf->top__DOT__MemRead_exu_to_lsu = vlSelf->top__DOT__MemRead_idu_to_exu;
            vlSelf->top__DOT__MemWrite_exu_to_lsu = vlSelf->top__DOT__MemWrite_idu_to_exu;
            vlSelf->top__DOT__wmask_exu_to_lsu = vlSelf->top__DOT__wmask_idu_to_exu;
            vlSelf->top__DOT__rmask_exu_to_lsu = vlSelf->top__DOT__rmask_idu_to_exu;
            vlSelf->top__DOT__wb_src_exu_to_lsu = vlSelf->top__DOT__wb_src_idu_to_exu;
            vlSelf->top__DOT__csr_write_exu_to_lsu 
                = vlSelf->top__DOT__csr_write_idu_to_exu;
            vlSelf->top__DOT__csr_wdta_src_exu_to_lsu 
                = vlSelf->top__DOT__csr_wdata_src_idu_to_exu;
            vlSelf->top__DOT__reg_write_exu_to_lsu 
                = vlSelf->top__DOT__reg_write_idu_to_exu;
            vlSelf->top__DOT__waddr_exu_to_lsu = (0x1fU 
                                                  & (vlSelf->top__DOT__IDU__DOT__inst 
                                                     >> 7U));
        } else if ((2U == (IData)(vlSelf->top__DOT__EXU__DOT__current_state))) {
            vlSelf->top__DOT__ready_idu_to_exu = 1U;
            vlSelf->top__DOT__valid_exu_to_lsu = 1U;
        } else {
            vlSelf->top__DOT__valid_exu_to_lsu = 0U;
        }
        vlSelf->top__DOT__EXU__DOT__current_state = vlSelf->top__DOT__EXU__DOT__next_state;
    } else {
        vlSelf->top__DOT__LSU__DOT__current_state = 0U;
        vlSelf->top__DOT__valid_exu_to_lsu = 0U;
        vlSelf->top__DOT__ready_idu_to_exu = 0U;
        vlSelf->top__DOT__EXU__DOT__current_state = 0U;
    }
    vlSelf->__Vtableidx6 = (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_wbu_to_ifu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_lsu_to_wbu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_lsu_to_wbu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__WBU__DOT__current_state)))));
    vlSelf->top__DOT__WBU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx6];
    vlSelf->top__DOT__EXU__DOT__a_in = ((IData)(vlSelf->top__DOT__EXU__DOT__a_in_src)
                                         ? vlSelf->top__DOT__EXU__DOT__pc
                                         : vlSelf->top__DOT__EXU__DOT__rs1);
    vlSelf->top__DOT__EXU__DOT__pc_new = ((IData)(vlSelf->top__DOT__EXU__DOT__adder_out_src)
                                           ? vlSelf->top__DOT__EXU__DOT__csr_rdata
                                           : (((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                                : vlSelf->top__DOT__EXU__DOT__pc) 
                                              + vlSelf->top__DOT__EXU__DOT__imm));
    vlSelf->top__DOT__EXU__DOT__b_in = ((2U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                         ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                             ? vlSelf->top__DOT__EXU__DOT__csr_rdata
                                             : 4U) : 
                                        ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                          ? vlSelf->top__DOT__EXU__DOT__imm
                                          : vlSelf->top__DOT__EXU__DOT__rs2));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top__DOT__ready_idu_to_exu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_idu_to_exu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__current_state)))));
    vlSelf->top__DOT__IDU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx2];
    vlSelf->__Vtableidx5 = (((IData)(vlSelf->top__DOT__ready_exu_to_lsu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_exu_to_lsu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_lsu_to_wbu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_lsu_to_wbu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__LSU__DOT__current_state)))));
    vlSelf->top__DOT__LSU__DOT__next_state = Vtop__ConstPool__TABLE_hb056201f_0
        [vlSelf->__Vtableidx5];
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
    vlSelf->__Vtableidx4 = (((IData)(vlSelf->top__DOT__ready_exu_to_lsu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_exu_to_lsu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_idu_to_exu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_idu_to_exu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__EXU__DOT__current_state)))));
    vlSelf->top__DOT__EXU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx4];
}

void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc, IData/*31:0*/ csr_reg_0, IData/*31:0*/ csr_reg_1, IData/*31:0*/ csr_reg_2, IData/*31:0*/ csr_reg_3);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
        = vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    if ((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))) {
        if ((0U != (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                          >> 0xcU)))) {
            if (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0xcU))) | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xcU))))) {
                if (vlSelf->top__DOT__csr_write) {
                    if ((0x300U != (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x14U))) {
                        if ((0x305U == (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec 
                                = vlSelf->top__DOT__csr_wdata;
                        }
                    }
                }
            }
        }
        if ((0U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                          >> 0xcU)))) {
            if ((0x73U == vlSelf->top__DOT__IDU__DOT__inst)) {
                vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc 
                    = vlSelf->top__DOT__IDU__DOT__pc;
                vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause 
                    = vlSelf->top__DOT__Rgefile__DOT__rf
                    [0xfU];
            }
        } else if (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                  >> 0xcU))) | (2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xcU))))) {
            if (vlSelf->top__DOT__csr_write) {
                if ((0x300U != (vlSelf->top__DOT__IDU__DOT__inst 
                                >> 0x14U))) {
                    if ((0x305U != (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x14U))) {
                        if ((0x341U == (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc 
                                = vlSelf->top__DOT__csr_wdata;
                        }
                        if ((0x341U != (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            if ((0x342U == (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U))) {
                                vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause 
                                    = vlSelf->top__DOT__csr_wdata;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0) {
        vlSelf->top__DOT__Rgefile__DOT__rf[vlSelf->__Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__top__DOT__Rgefile__DOT__rf__v0;
    }
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause;
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
