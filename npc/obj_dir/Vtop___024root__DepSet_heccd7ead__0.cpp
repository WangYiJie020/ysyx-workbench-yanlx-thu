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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    vlSelf->__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 0U;
    if ((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))) {
        if ((0U != (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                          >> 0xcU)))) {
            if (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0xcU))) | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xcU))))) {
                if (vlSelf->top__DOT__csr_write) {
                    if ((0x300U == (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x14U))) {
                        vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
                            = vlSelf->top__DOT__csr_wdata;
                    } else if ((0x305U != (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0x14U))) {
                        if ((0x341U != (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            if ((0x342U != (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U))) {
                                vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
                                    = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
                            }
                        }
                    }
                }
            } else {
                vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
                    = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
            }
        }
    } else {
        vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
            = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    }
    if (((IData)(vlSelf->top__DOT__reg_write) & (0U 
                                                 != (IData)(vlSelf->top__DOT__waddr)))) {
        vlSelf->__Vdlyvval__top__DOT__Rgefile__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                ? vlSelf->top__DOT__WBU__DOT__mem_data
                : vlSelf->top__DOT__WBU__DOT__alu_result);
        vlSelf->__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0 
            = vlSelf->top__DOT__waddr;
    }
    vlSelf->top__DOT__IFU__DOT__pc = ((IData)(vlSelf->rst_n)
                                       ? vlSelf->top__DOT__IFU__DOT__npc
                                       : 0x80000000U);
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h4a96c7c5_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1dd48d1a_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hb056201f_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__IFU__DOT__npc = vlSelf->__Vdly__top__DOT__IFU__DOT__npc;
    if (vlSelf->rst_n) {
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
                = vlSelf->top__DOT__lsu_rdata;
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
        vlSelf->top__DOT__WBU__DOT__current_state = vlSelf->top__DOT__WBU__DOT__next_state;
        if ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 1U;
            if (((IData)(vlSelf->top__DOT__LSU__DOT__arvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_arready))) {
                vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid = 0U;
            }
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__awvalid = 0U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__wvalid = 0U;
            vlSelf->top__DOT__LSU__DOT__rready = 0U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__bready = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 0U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid 
                = vlSelf->top__DOT__MemRead_exu_to_lsu;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
            vlSelf->top__DOT__LSU__DOT__alu_result 
                = vlSelf->top__DOT__EXU__DOT__alu_result;
            vlSelf->top__DOT__LSU__DOT__rs1 = vlSelf->top__DOT__EXU__DOT__rs1;
            vlSelf->top__DOT__LSU__DOT__wdata = vlSelf->top__DOT__EXU__DOT__rs2;
            vlSelf->top__DOT__LSU__DOT__rready = vlSelf->top__DOT__MemRead_exu_to_lsu;
            vlSelf->__Vdly__top__DOT__LSU__DOT__bready = 1U;
            vlSelf->top__DOT__LSU__DOT__rmask = vlSelf->top__DOT__rmask_exu_to_lsu;
            vlSelf->__Vdly__top__DOT__LSU__DOT__awvalid 
                = vlSelf->top__DOT__MemWrite_exu_to_lsu;
            vlSelf->__Vdly__top__DOT__LSU__DOT__wvalid 
                = vlSelf->top__DOT__MemWrite_exu_to_lsu;
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
        } else if ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 0U;
            if (((IData)(vlSelf->top__DOT__LSU__DOT__awvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_awready))) {
                vlSelf->__Vdly__top__DOT__LSU__DOT__awvalid = 0U;
            }
            if (((IData)(vlSelf->top__DOT__LSU__DOT__wvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_wready))) {
                vlSelf->__Vdly__top__DOT__LSU__DOT__wvalid = 0U;
            }
            if (((IData)(vlSelf->top__DOT__LSU__DOT__arvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_arready))) {
                vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid = 0U;
            }
            vlSelf->top__DOT__valid_lsu_to_wbu = (1U 
                                                  & ((IData)(vlSelf->top__DOT__MemRead_exu_to_lsu)
                                                      ? 
                                                     (0U 
                                                      == (IData)(vlSelf->top__DOT__lsu_rresp))
                                                      : 
                                                     ((~ (IData)(vlSelf->top__DOT__MemWrite_exu_to_lsu)) 
                                                      | (((IData)(vlSelf->top__DOT__LSU__DOT__bready) 
                                                          & (IData)(vlSelf->top__DOT__lsu_bvalid)) 
                                                         & (0U 
                                                            == (IData)(vlSelf->top__DOT__lsu_bresp))))));
        } else if ((2U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 1U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid = 0U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
            vlSelf->top__DOT__LSU__DOT__rready = 0U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__awvalid = 0U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__wvalid = 0U;
        }
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
        vlSelf->top__DOT__valid_wbu_to_ifu = 0U;
        vlSelf->top__DOT__ready_lsu_to_wbu = 0U;
        vlSelf->top__DOT__WBU__DOT__current_state = 0U;
        vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid = 1U;
        vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
        vlSelf->top__DOT__ready_exu_to_lsu = 0U;
        vlSelf->top__DOT__LSU__DOT__current_state = 0U;
        vlSelf->top__DOT__valid_exu_to_lsu = 0U;
        vlSelf->top__DOT__ready_idu_to_exu = 0U;
        vlSelf->top__DOT__EXU__DOT__current_state = 0U;
    }
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch) {
        vlSelf->top__DOT__lsu_rdata = vlSelf->top__DOT__axi_rdata;
        vlSelf->top__DOT__lsu_rresp = vlSelf->top__DOT__axi_rresp;
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
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                             << 6U) | (((IData)(vlSelf->top__DOT__valid_wbu_to_ifu) 
                                        << 5U) | (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->top__DOT__IFU__DOT__current_state)))));
    vlSelf->top__DOT__IFU__DOT__next_state = Vtop__ConstPool__TABLE_h4a96c7c5_0
        [vlSelf->__Vtableidx1];
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch) {
        vlSelf->top__DOT__lsu_arready = vlSelf->top__DOT__axi_arready;
    }
    vlSelf->top__DOT__LSU__DOT__arvalid = vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid;
    vlSelf->top__DOT__LSU__DOT__awvalid = vlSelf->__Vdly__top__DOT__LSU__DOT__awvalid;
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch) {
        vlSelf->top__DOT__lsu_awready = vlSelf->top__DOT__axi_awready;
    }
    vlSelf->top__DOT__LSU__DOT__wvalid = vlSelf->__Vdly__top__DOT__LSU__DOT__wvalid;
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch) {
        vlSelf->top__DOT__lsu_wready = vlSelf->top__DOT__axi_wready;
    }
    vlSelf->top__DOT__LSU__DOT__bready = vlSelf->__Vdly__top__DOT__LSU__DOT__bready;
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch) {
        vlSelf->top__DOT__lsu_bvalid = vlSelf->top__DOT__axi_bvalid;
        vlSelf->top__DOT__lsu_bresp = vlSelf->top__DOT__axi_bresp;
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__IDU__DOT__pc = vlSelf->__Vdly__top__DOT__IDU__DOT__pc;
    vlSelf->top__DOT__csr_write = vlSelf->__Vdly__top__DOT__csr_write;
    vlSelf->top__DOT__csr_wdata = ((IData)(vlSelf->top__DOT__WBU__DOT__csr_wdata_src)
                                    ? vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1
                                    : vlSelf->top__DOT__WBU__DOT__rs1);
    vlSelf->top__DOT__IDU__DOT__inst = vlSelf->__Vdly__top__DOT__IDU__DOT__inst;
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
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
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
