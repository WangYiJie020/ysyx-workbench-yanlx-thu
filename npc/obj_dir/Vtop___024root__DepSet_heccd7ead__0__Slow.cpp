// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__AXI_Arbiter__DOT__arid_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__arlen_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__arsize_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__arburst_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__awid_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__awlen_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__awsize_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__awburst_o = 0U;
    vlSelf->top__DOT__AXI_Arbiter__DOT__wlast_o = 0U;
    vlSelf->top__DOT__Xbar__DOT__axi_rlast_o = 0U;
    vlSelf->top__DOT__Xbar__DOT__axi_rid_o = 0U;
    vlSelf->top__DOT__Xbar__DOT__axi_bid_o = 0U;
    vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus = 0x1800U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 16, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_wbu_to_ifu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__valid_wbu_to_ifu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ready_wbu_to_ifu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_ifu_to_idu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__valid_ifu_to_idu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ready_ifu_to_idu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ifu_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ifu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ifu_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ifu_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ifu_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ifu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ifu_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__useless1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__useless2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__useless3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__useless4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__uart_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_awready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__uart_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__uart_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_awready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sram_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__clint_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__clint_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_awready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__clint_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__clint_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__clint_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clint_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm_idu_to_exu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a_in_src_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__b_in_src_idu_to_exu = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pc_srcs_idu_to_exu = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__adder_a_src_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__adder_out_src_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_op_idu_to_exu = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__MemRead_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWrite_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wmask_idu_to_exu = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__rmask_idu_to_exu = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__wb_src_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_write_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_wdata_src_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reg_write_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__valid_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ready_idu_to_exu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_wdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csr_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__IDU__csr_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__reg_write = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__Rgefile__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__MemRead_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWrite_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wmask_exu_to_lsu = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__rmask_exu_to_lsu = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__wb_src_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_write_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_wdta_src_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reg_write_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__waddr_exu_to_lsu = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__valid_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ready_exu_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_lsu_to_wbu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_src_lsu_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_write_lsu_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reg_write_lsu_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__waddr_lsu_to_wbu = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__valid_lsu_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ready_lsu_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__lsu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_awready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__lsu_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__lsu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__LFSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IFU__DOT__arvalid_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IFU__DOT__rready_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IFU__DOT__lfsr_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__arvalid_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__IFU__DOT__rready_buffer = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__IFU__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__unnamedblk3__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__unnamedblk5__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__AXI_Arbiter__DOT__rlast_o_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__rid_o_a = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__AXI_Arbiter__DOT__awready_o_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__wready_o_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__bresp_o_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__AXI_Arbiter__DOT__bid_o_a = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__AXI_Arbiter__DOT__bvalid_o_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__rlast_o_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__rid_o_b = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__AXI_Arbiter__DOT__bid_o_b = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__AXI_Arbiter__DOT__arid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__AXI_Arbiter__DOT__arlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__AXI_Arbiter__DOT__arsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__AXI_Arbiter__DOT__arburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__AXI_Arbiter__DOT__awid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__AXI_Arbiter__DOT__awlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__AXI_Arbiter__DOT__awsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__AXI_Arbiter__DOT__awburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__AXI_Arbiter__DOT__wlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__axi_rlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__axi_rid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__axi_bid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__sram_arid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__sram_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Xbar__DOT__sram_arsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Xbar__DOT__sram_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Xbar__DOT__sram_awid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__sram_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Xbar__DOT__sram_awsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Xbar__DOT__sram_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Xbar__DOT__sram_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__uart_arid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__uart_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Xbar__DOT__uart_arsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Xbar__DOT__uart_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Xbar__DOT__uart_awid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__uart_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Xbar__DOT__uart_awsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Xbar__DOT__uart_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Xbar__DOT__uart_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__clint_arid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__clint_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Xbar__DOT__clint_arsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Xbar__DOT__clint_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Xbar__DOT__clint_awid_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Xbar__DOT__clint_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Xbar__DOT__clint_awsize_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Xbar__DOT__clint_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Xbar__DOT__clint_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__ar_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__r_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__aw_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__w_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Xbar__DOT__b_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__arid_i = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Mem__DOT__arlen_i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Mem__DOT__arsize_i = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Mem__DOT__arburst_i = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Mem__DOT__rlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__ar_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__aw_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__b_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Mem__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__flag_waddr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__flag_wdata = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__flag_rdata = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__flag_raddr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__flag_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__rdata_counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Mem__DOT__wdata_counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Mem__DOT__w_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Mem__DOT__r_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Mem__DOT__LFSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Mem__DOT__lfsr_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__write_box = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__UART__DOT__rlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__ar_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__aw_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__b_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__UART__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__UART__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__UART__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__UART__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__flag_waddr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__flag_wdata = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__flag_rdata = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__flag_raddr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__flag_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__rdata_counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__UART__DOT__wdata_counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__UART__DOT__w_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__UART__DOT__r_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__UART__DOT__LFSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__UART__DOT__lfsr_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__write_box = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__CLINT__DOT__rlast_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__ar_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__aw_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__b_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CLINT__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CLINT__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CLINT__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__CLINT__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__flag_waddr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__flag_wdata = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__flag_rdata = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__flag_raddr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__flag_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__rdata_counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CLINT__DOT__wdata_counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CLINT__DOT__w_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CLINT__DOT__r_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CLINT__DOT__LFSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CLINT__DOT__lfsr_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CLINT__DOT__write_box = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__CLINT__DOT__time_counter = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__inst = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__IDU__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__Rgefile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__EXU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__a_in_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__b_in_src = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EXU__DOT__pc_srcs = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EXU__DOT__adder_a_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__adder_out_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__EXU__DOT__a_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__pc_new = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EXU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__LSU__DOT__rlast_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__rid_i = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__LSU__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__rmask = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__LSU__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__wvalid_tmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__LFSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__arvalid_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__rready_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__awvalid_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__wvalid_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__bready_delay = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__lfsr_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__arvalid_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__LSU__DOT__rready_buffer = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__awvalid_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__LSU__DOT__wvalid_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__LSU__DOT__bready_buffer = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__LSU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__LSU__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk3__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk5__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk6__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk7__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk8__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk9__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk10__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__unnamedblk11__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT__datamem_readdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT__rmask = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__WBU__DOT__wb_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__csr_wdata_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__WBU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vdly__top__DOT__IFU__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__IDU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__IDU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__LSU__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__LSU__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__LSU__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__Rgefile__DOT__rf__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
