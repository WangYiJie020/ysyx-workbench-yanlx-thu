// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__AXI_Arbiter__DOT__arid_o),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__AXI_Arbiter__DOT__arlen_o),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__AXI_Arbiter__DOT__arsize_o),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__AXI_Arbiter__DOT__arburst_o),2);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__AXI_Arbiter__DOT__awid_o),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__AXI_Arbiter__DOT__awlen_o),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__AXI_Arbiter__DOT__awsize_o),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__AXI_Arbiter__DOT__awburst_o),2);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__AXI_Arbiter__DOT__wlast_o));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__Xbar__DOT__axi_rlast_o));
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__Xbar__DOT__axi_rid_o),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__Xbar__DOT__axi_bid_o),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__ifu_araddr),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ifu_rdata),32);
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__ready_wbu_to_ifu));
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__pc_ifu_to_idu),32);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__valid_ifu_to_idu));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__ready_ifu_to_idu));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__ifu_arvalid));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__ifu_arready));
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__ifu_rresp),2);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__ifu_rvalid));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__ifu_rready));
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__axi_araddr),32);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__axi_arvalid));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__axi_arready));
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__axi_rdata),32);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__axi_rresp),2);
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__axi_rvalid));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__axi_rready));
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__axi_awaddr),32);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__axi_awvalid));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__axi_awready));
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__axi_wdata),32);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__axi_wstrb),4);
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__axi_wvalid));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__axi_wready));
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__axi_bresp),2);
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__axi_bvalid));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__axi_bready));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__uart_arready));
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__uart_rdata),32);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__uart_rresp),2);
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__uart_rvalid));
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__uart_awaddr),32);
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__uart_awvalid));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__uart_awready));
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__uart_wdata),32);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__uart_wstrb),4);
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__uart_wvalid));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__uart_wready));
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__uart_bresp),2);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__uart_bvalid));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__uart_bready));
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__sram_araddr),32);
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__sram_arvalid));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__sram_arready));
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__sram_rdata),32);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__sram_rresp),2);
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__sram_rvalid));
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__sram_rready));
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__sram_awaddr),32);
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__sram_awvalid));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__sram_awready));
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__sram_wdata),32);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__sram_wstrb),4);
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__sram_wvalid));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__sram_wready));
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__sram_bresp),2);
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__sram_bvalid));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__sram_bready));
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__clint_araddr),32);
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__clint_arvalid));
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__clint_arready));
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__clint_rdata),32);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__clint_rresp),2);
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__clint_rvalid));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__clint_rready));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__clint_awready));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__clint_wready));
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__clint_bresp),2);
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__clint_bvalid));
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__valid_idu_to_exu));
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__lsu_araddr),32);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__lsu_arvalid));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__lsu_rvalid));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__lsu_rready));
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__lsu_awaddr),32);
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__lsu_awvalid));
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__lsu_wstrb),4);
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__lsu_wvalid));
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__lsu_bready));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__AXI_Arbiter__DOT__rlast_o_a));
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__AXI_Arbiter__DOT__rid_o_a),4);
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__AXI_Arbiter__DOT__awready_o_a));
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__AXI_Arbiter__DOT__wready_o_a));
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__AXI_Arbiter__DOT__bid_o_a),4);
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__AXI_Arbiter__DOT__bvalid_o_a));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__AXI_Arbiter__DOT__rlast_o_b));
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__AXI_Arbiter__DOT__rid_o_b),4);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__AXI_Arbiter__DOT__bid_o_b),4);
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__CLINT__DOT__rlast_o));
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__CLINT__DOT__ar_state));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__CLINT__DOT__r_state));
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__CLINT__DOT__aw_state));
        bufp->chgBit(oldp+112,(vlSelf->top__DOT__CLINT__DOT__w_state));
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__CLINT__DOT__araddr),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__CLINT__DOT__awaddr),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__CLINT__DOT__wdata),32);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__CLINT__DOT__wstrb),4);
        bufp->chgBit(oldp+117,(vlSelf->top__DOT__CLINT__DOT__flag_waddr));
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__CLINT__DOT__flag_wdata));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__CLINT__DOT__flag_rdata));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__CLINT__DOT__flag_raddr));
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__CLINT__DOT__rdata_counter),5);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__CLINT__DOT__wdata_counter),5);
        bufp->chgCData(oldp+123,(vlSelf->top__DOT__CLINT__DOT__w_delay),5);
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__CLINT__DOT__r_delay),5);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__CLINT__DOT__LFSR),5);
        bufp->chgBit(oldp+126,((1U & VL_REDXOR_8(vlSelf->top__DOT__CLINT__DOT__LFSR))));
        bufp->chgCData(oldp+127,(vlSelf->top__DOT__CLINT__DOT__write_box),2);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__CLINT__DOT__time_counter),64);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__IDU__DOT__current_state),2);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__IFU__DOT__LFSR),5);
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__IFU__DOT__arvalid_delay),5);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__IFU__DOT__rready_delay),5);
        bufp->chgBit(oldp+134,((1U & VL_REDXOR_8(vlSelf->top__DOT__IFU__DOT__LFSR))));
        bufp->chgBit(oldp+135,(vlSelf->top__DOT__IFU__DOT__arvalid));
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__IFU__DOT__rready));
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__IFU__DOT__arvalid_buffer),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[0]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[1]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[2]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[3]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[4]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[5]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[6]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[7]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[8]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[9]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[10]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[11]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[12]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[13]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[14]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[15]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[16]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[17]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[18]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[19]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[20]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[21]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[22]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[23]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[24]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[25]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[26]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[27]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[28]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[29]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[30]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[31]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__IFU__DOT__rready_buffer),32);
        bufp->chgCData(oldp+171,(vlSelf->top__DOT__IFU__DOT__current_state),3);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__IFU__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__IFU__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__IFU__DOT__unnamedblk5__DOT__j),32);
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__LSU__DOT__flag));
        bufp->chgCData(oldp+178,(vlSelf->top__DOT__LSU__DOT__LFSR),5);
        bufp->chgCData(oldp+179,(vlSelf->top__DOT__LSU__DOT__arvalid_delay),5);
        bufp->chgCData(oldp+180,(vlSelf->top__DOT__LSU__DOT__rready_delay),5);
        bufp->chgCData(oldp+181,(vlSelf->top__DOT__LSU__DOT__awvalid_delay),5);
        bufp->chgCData(oldp+182,(vlSelf->top__DOT__LSU__DOT__wvalid_delay),5);
        bufp->chgCData(oldp+183,(vlSelf->top__DOT__LSU__DOT__bready_delay),5);
        bufp->chgBit(oldp+184,((1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR))));
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__LSU__DOT__arvalid_buffer),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[0]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[1]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[2]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[3]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[4]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[5]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[6]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[7]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[8]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[9]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[10]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[11]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[12]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[13]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[14]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[15]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[16]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[17]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[18]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[19]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[20]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[21]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[22]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[23]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[24]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[25]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[26]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[27]),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[28]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[29]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[30]),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[31]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__LSU__DOT__rready_buffer),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__LSU__DOT__awvalid_buffer),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[1]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[2]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[3]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[4]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[5]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[6]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[7]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[8]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[9]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[10]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[11]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[12]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[13]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[14]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[15]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[16]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[17]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[18]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[19]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[20]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[21]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[22]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[23]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[24]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[25]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[26]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[27]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[28]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[29]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[30]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[31]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__LSU__DOT__wvalid_buffer),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[0]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[1]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[2]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[3]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[4]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[5]),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[6]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[7]),32);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[8]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[9]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[10]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[11]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[12]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[13]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[14]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[15]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[16]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[17]),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[18]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[19]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[20]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[21]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[22]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[23]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[24]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[25]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[26]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[27]),32);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[28]),32);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[29]),32);
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[30]),32);
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[31]),32);
        bufp->chgCData(oldp+285,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0]),4);
        bufp->chgCData(oldp+286,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[1]),4);
        bufp->chgCData(oldp+287,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[2]),4);
        bufp->chgCData(oldp+288,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[3]),4);
        bufp->chgCData(oldp+289,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[4]),4);
        bufp->chgCData(oldp+290,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[5]),4);
        bufp->chgCData(oldp+291,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[6]),4);
        bufp->chgCData(oldp+292,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[7]),4);
        bufp->chgCData(oldp+293,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[8]),4);
        bufp->chgCData(oldp+294,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[9]),4);
        bufp->chgCData(oldp+295,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[10]),4);
        bufp->chgCData(oldp+296,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[11]),4);
        bufp->chgCData(oldp+297,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[12]),4);
        bufp->chgCData(oldp+298,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[13]),4);
        bufp->chgCData(oldp+299,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[14]),4);
        bufp->chgCData(oldp+300,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[15]),4);
        bufp->chgCData(oldp+301,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[16]),4);
        bufp->chgCData(oldp+302,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[17]),4);
        bufp->chgCData(oldp+303,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[18]),4);
        bufp->chgCData(oldp+304,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[19]),4);
        bufp->chgCData(oldp+305,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[20]),4);
        bufp->chgCData(oldp+306,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[21]),4);
        bufp->chgCData(oldp+307,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[22]),4);
        bufp->chgCData(oldp+308,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[23]),4);
        bufp->chgCData(oldp+309,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[24]),4);
        bufp->chgCData(oldp+310,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[25]),4);
        bufp->chgCData(oldp+311,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[26]),4);
        bufp->chgCData(oldp+312,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[27]),4);
        bufp->chgCData(oldp+313,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[28]),4);
        bufp->chgCData(oldp+314,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[29]),4);
        bufp->chgCData(oldp+315,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[30]),4);
        bufp->chgCData(oldp+316,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[31]),4);
        bufp->chgIData(oldp+317,(vlSelf->top__DOT__LSU__DOT__bready_buffer),32);
        bufp->chgIData(oldp+318,(vlSelf->top__DOT__LSU__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+319,(vlSelf->top__DOT__LSU__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+320,(vlSelf->top__DOT__LSU__DOT__unnamedblk11__DOT__j),32);
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__LSU__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+322,(vlSelf->top__DOT__LSU__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+323,(vlSelf->top__DOT__LSU__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+324,(vlSelf->top__DOT__LSU__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__LSU__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+326,(vlSelf->top__DOT__LSU__DOT__unnamedblk7__DOT__j),32);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__LSU__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+328,(vlSelf->top__DOT__LSU__DOT__unnamedblk9__DOT__j),32);
        bufp->chgBit(oldp+329,(vlSelf->top__DOT__Mem__DOT__rlast_o));
        bufp->chgBit(oldp+330,(vlSelf->top__DOT__Mem__DOT__ar_state));
        bufp->chgBit(oldp+331,(vlSelf->top__DOT__Mem__DOT__r_state));
        bufp->chgBit(oldp+332,(vlSelf->top__DOT__Mem__DOT__aw_state));
        bufp->chgBit(oldp+333,(vlSelf->top__DOT__Mem__DOT__w_state));
        bufp->chgIData(oldp+334,(vlSelf->top__DOT__Mem__DOT__araddr),32);
        bufp->chgIData(oldp+335,(vlSelf->top__DOT__Mem__DOT__awaddr),32);
        bufp->chgIData(oldp+336,(vlSelf->top__DOT__Mem__DOT__wdata),32);
        bufp->chgCData(oldp+337,(vlSelf->top__DOT__Mem__DOT__wstrb),4);
        bufp->chgBit(oldp+338,(vlSelf->top__DOT__Mem__DOT__flag_waddr));
        bufp->chgBit(oldp+339,(vlSelf->top__DOT__Mem__DOT__flag_wdata));
        bufp->chgBit(oldp+340,(vlSelf->top__DOT__Mem__DOT__flag_rdata));
        bufp->chgBit(oldp+341,(vlSelf->top__DOT__Mem__DOT__flag_raddr));
        bufp->chgCData(oldp+342,(vlSelf->top__DOT__Mem__DOT__rdata_counter),5);
        bufp->chgCData(oldp+343,(vlSelf->top__DOT__Mem__DOT__wdata_counter),5);
        bufp->chgCData(oldp+344,(vlSelf->top__DOT__Mem__DOT__w_delay),5);
        bufp->chgCData(oldp+345,(vlSelf->top__DOT__Mem__DOT__r_delay),5);
        bufp->chgCData(oldp+346,(vlSelf->top__DOT__Mem__DOT__LFSR),5);
        bufp->chgBit(oldp+347,((1U & VL_REDXOR_8(vlSelf->top__DOT__Mem__DOT__LFSR))));
        bufp->chgCData(oldp+348,(vlSelf->top__DOT__Mem__DOT__write_box),2);
        bufp->chgBit(oldp+349,(vlSelf->top__DOT__UART__DOT__ar_state));
        bufp->chgBit(oldp+350,(vlSelf->top__DOT__UART__DOT__r_state));
        bufp->chgBit(oldp+351,(vlSelf->top__DOT__UART__DOT__aw_state));
        bufp->chgBit(oldp+352,(vlSelf->top__DOT__UART__DOT__w_state));
        bufp->chgIData(oldp+353,(vlSelf->top__DOT__UART__DOT__araddr),32);
        bufp->chgIData(oldp+354,(vlSelf->top__DOT__UART__DOT__awaddr),32);
        bufp->chgIData(oldp+355,(vlSelf->top__DOT__UART__DOT__wdata),32);
        bufp->chgCData(oldp+356,(vlSelf->top__DOT__UART__DOT__wstrb),4);
        bufp->chgBit(oldp+357,(vlSelf->top__DOT__UART__DOT__flag_waddr));
        bufp->chgBit(oldp+358,(vlSelf->top__DOT__UART__DOT__flag_wdata));
        bufp->chgBit(oldp+359,(vlSelf->top__DOT__UART__DOT__flag_rdata));
        bufp->chgBit(oldp+360,(vlSelf->top__DOT__UART__DOT__flag_raddr));
        bufp->chgCData(oldp+361,(vlSelf->top__DOT__UART__DOT__rdata_counter),5);
        bufp->chgCData(oldp+362,(vlSelf->top__DOT__UART__DOT__wdata_counter),5);
        bufp->chgCData(oldp+363,(vlSelf->top__DOT__UART__DOT__w_delay),5);
        bufp->chgCData(oldp+364,(vlSelf->top__DOT__UART__DOT__r_delay),5);
        bufp->chgCData(oldp+365,(vlSelf->top__DOT__UART__DOT__LFSR),5);
        bufp->chgBit(oldp+366,((1U & VL_REDXOR_8(vlSelf->top__DOT__UART__DOT__LFSR))));
        bufp->chgCData(oldp+367,(vlSelf->top__DOT__UART__DOT__write_box),2);
        bufp->chgCData(oldp+368,(vlSelf->top__DOT__Xbar__DOT__sram_arid_o),4);
        bufp->chgCData(oldp+369,(vlSelf->top__DOT__Xbar__DOT__sram_arlen_o),8);
        bufp->chgCData(oldp+370,(vlSelf->top__DOT__Xbar__DOT__sram_arsize_o),3);
        bufp->chgCData(oldp+371,(vlSelf->top__DOT__Xbar__DOT__sram_arburst_o),2);
        bufp->chgCData(oldp+372,(vlSelf->top__DOT__Xbar__DOT__sram_awid_o),4);
        bufp->chgCData(oldp+373,(vlSelf->top__DOT__Xbar__DOT__sram_awlen_o),8);
        bufp->chgCData(oldp+374,(vlSelf->top__DOT__Xbar__DOT__sram_awsize_o),3);
        bufp->chgCData(oldp+375,(vlSelf->top__DOT__Xbar__DOT__sram_awburst_o),2);
        bufp->chgBit(oldp+376,(vlSelf->top__DOT__Xbar__DOT__sram_wlast_o));
        bufp->chgCData(oldp+377,(vlSelf->top__DOT__Xbar__DOT__uart_awid_o),4);
        bufp->chgCData(oldp+378,(vlSelf->top__DOT__Xbar__DOT__uart_awlen_o),8);
        bufp->chgCData(oldp+379,(vlSelf->top__DOT__Xbar__DOT__uart_awsize_o),3);
        bufp->chgCData(oldp+380,(vlSelf->top__DOT__Xbar__DOT__uart_awburst_o),2);
        bufp->chgBit(oldp+381,(vlSelf->top__DOT__Xbar__DOT__uart_wlast_o));
        bufp->chgCData(oldp+382,(vlSelf->top__DOT__Xbar__DOT__clint_arid_o),4);
        bufp->chgCData(oldp+383,(vlSelf->top__DOT__Xbar__DOT__clint_arlen_o),8);
        bufp->chgCData(oldp+384,(vlSelf->top__DOT__Xbar__DOT__clint_arsize_o),3);
        bufp->chgCData(oldp+385,(vlSelf->top__DOT__Xbar__DOT__clint_arburst_o),2);
        bufp->chgBit(oldp+386,(vlSelf->top__DOT__Xbar__DOT__ar_switch));
        bufp->chgBit(oldp+387,(vlSelf->top__DOT__Xbar__DOT__r_switch));
        bufp->chgBit(oldp+388,(vlSelf->top__DOT__Xbar__DOT__aw_switch));
        bufp->chgBit(oldp+389,(vlSelf->top__DOT__Xbar__DOT__w_switch));
        bufp->chgBit(oldp+390,(vlSelf->top__DOT__Xbar__DOT__b_switch));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+391,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
        bufp->chgBit(oldp+392,(vlSelf->top__DOT__valid_wbu_to_ifu));
        bufp->chgBit(oldp+393,(vlSelf->top__DOT__ready_idu_to_exu));
        bufp->chgIData(oldp+394,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                                   ? vlSelf->top__DOT__WBU__DOT__mem_data
                                   : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
        bufp->chgCData(oldp+395,(vlSelf->top__DOT__waddr),5);
        bufp->chgBit(oldp+396,(vlSelf->top__DOT__reg_write));
        bufp->chgIData(oldp+397,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
        bufp->chgIData(oldp+398,(vlSelf->top__DOT__EXU__DOT__rs1),32);
        bufp->chgIData(oldp+399,(vlSelf->top__DOT__EXU__DOT__rs2),32);
        bufp->chgIData(oldp+400,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                                  | vlSelf->top__DOT__EXU__DOT__rs1)),32);
        bufp->chgIData(oldp+401,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                   ? ((2U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                       ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                           ? ((0U == vlSelf->top__DOT__EXU__DOT__alu_result)
                                               ? vlSelf->top__DOT__EXU__DOT__pc_new
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__EXU__DOT__pc))
                                           : ((1U == vlSelf->top__DOT__EXU__DOT__alu_result)
                                               ? vlSelf->top__DOT__EXU__DOT__pc_new
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__EXU__DOT__pc)))
                                       : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                           ? ((0U == vlSelf->top__DOT__EXU__DOT__alu_result)
                                               ? vlSelf->top__DOT__EXU__DOT__pc_new
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__EXU__DOT__pc))
                                           : ((1U == vlSelf->top__DOT__EXU__DOT__alu_result)
                                               ? vlSelf->top__DOT__EXU__DOT__pc_new
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__EXU__DOT__pc))))
                                   : ((2U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                       ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                           ? ((0U != vlSelf->top__DOT__EXU__DOT__alu_result)
                                               ? vlSelf->top__DOT__EXU__DOT__pc_new
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__EXU__DOT__pc))
                                           : ((0U != vlSelf->top__DOT__EXU__DOT__alu_result)
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__EXU__DOT__pc)
                                               : vlSelf->top__DOT__EXU__DOT__pc_new))
                                       : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                           ? vlSelf->top__DOT__EXU__DOT__pc_new
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__EXU__DOT__pc))))),32);
        bufp->chgBit(oldp+402,(vlSelf->top__DOT__MemRead_exu_to_lsu));
        bufp->chgBit(oldp+403,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
        bufp->chgCData(oldp+404,(vlSelf->top__DOT__wmask_exu_to_lsu),4);
        bufp->chgCData(oldp+405,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
        bufp->chgBit(oldp+406,(vlSelf->top__DOT__wb_src_exu_to_lsu));
        bufp->chgBit(oldp+407,(vlSelf->top__DOT__csr_write_exu_to_lsu));
        bufp->chgBit(oldp+408,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
        bufp->chgBit(oldp+409,(vlSelf->top__DOT__reg_write_exu_to_lsu));
        bufp->chgCData(oldp+410,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
        bufp->chgBit(oldp+411,(vlSelf->top__DOT__valid_exu_to_lsu));
        bufp->chgBit(oldp+412,(vlSelf->top__DOT__ready_exu_to_lsu));
        bufp->chgIData(oldp+413,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
        bufp->chgIData(oldp+414,(vlSelf->top__DOT__LSU__DOT__rs1),32);
        bufp->chgIData(oldp+415,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
        bufp->chgIData(oldp+416,(vlSelf->top__DOT__lsu_rdata),32);
        bufp->chgIData(oldp+417,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
        bufp->chgCData(oldp+418,(vlSelf->top__DOT__LSU__DOT__rmask),3);
        bufp->chgBit(oldp+419,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
        bufp->chgBit(oldp+420,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
        bufp->chgBit(oldp+421,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
        bufp->chgBit(oldp+422,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
        bufp->chgCData(oldp+423,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
        bufp->chgBit(oldp+424,(vlSelf->top__DOT__valid_lsu_to_wbu));
        bufp->chgBit(oldp+425,(vlSelf->top__DOT__ready_lsu_to_wbu));
        bufp->chgBit(oldp+426,(vlSelf->top__DOT__lsu_arready));
        bufp->chgCData(oldp+427,(vlSelf->top__DOT__lsu_rresp),2);
        bufp->chgBit(oldp+428,(vlSelf->top__DOT__lsu_awready));
        bufp->chgBit(oldp+429,(vlSelf->top__DOT__lsu_wready));
        bufp->chgCData(oldp+430,(vlSelf->top__DOT__lsu_bresp),2);
        bufp->chgBit(oldp+431,(vlSelf->top__DOT__lsu_bvalid));
        bufp->chgIData(oldp+432,(vlSelf->top__DOT__EXU__DOT__pc),32);
        bufp->chgIData(oldp+433,(vlSelf->top__DOT__EXU__DOT__imm),32);
        bufp->chgIData(oldp+434,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
        bufp->chgBit(oldp+435,(vlSelf->top__DOT__EXU__DOT__a_in_src));
        bufp->chgCData(oldp+436,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
        bufp->chgCData(oldp+437,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
        bufp->chgBit(oldp+438,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
        bufp->chgBit(oldp+439,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
        bufp->chgCData(oldp+440,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
        bufp->chgIData(oldp+441,(vlSelf->top__DOT__EXU__DOT__a_in),32);
        bufp->chgIData(oldp+442,(vlSelf->top__DOT__EXU__DOT__b_in),32);
        bufp->chgIData(oldp+443,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                   ? vlSelf->top__DOT__EXU__DOT__rs1
                                   : vlSelf->top__DOT__EXU__DOT__pc)),32);
        bufp->chgIData(oldp+444,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                    ? vlSelf->top__DOT__EXU__DOT__rs1
                                    : vlSelf->top__DOT__EXU__DOT__pc) 
                                  + vlSelf->top__DOT__EXU__DOT__imm)),32);
        bufp->chgIData(oldp+445,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
        bufp->chgBit(oldp+446,((1U & (~ (IData)((0U 
                                                 != vlSelf->top__DOT__EXU__DOT__alu_result))))));
        bufp->chgCData(oldp+447,(vlSelf->top__DOT__EXU__DOT__current_state),2);
        bufp->chgCData(oldp+448,(vlSelf->top__DOT__EXU__DOT__next_state),2);
        bufp->chgIData(oldp+449,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
        bufp->chgCData(oldp+450,(vlSelf->top__DOT__IDU__DOT__next_state),2);
        bufp->chgIData(oldp+451,(vlSelf->top__DOT__IFU__DOT__npc),32);
        bufp->chgCData(oldp+452,(vlSelf->top__DOT__IFU__DOT__next_state),3);
        bufp->chgBit(oldp+453,(vlSelf->top__DOT__LSU__DOT__arvalid));
        bufp->chgBit(oldp+454,(vlSelf->top__DOT__LSU__DOT__rready));
        bufp->chgBit(oldp+455,(vlSelf->top__DOT__LSU__DOT__awvalid));
        bufp->chgIData(oldp+456,(vlSelf->top__DOT__LSU__DOT__wdata),32);
        bufp->chgCData(oldp+457,((0xfU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                           ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                              << (3U 
                                                  & vlSelf->top__DOT__LSU__DOT__alu_result))
                                           : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                               ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->top__DOT__LSU__DOT__alu_result))
                                               : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),4);
        bufp->chgBit(oldp+458,(vlSelf->top__DOT__LSU__DOT__wvalid));
        bufp->chgBit(oldp+459,(vlSelf->top__DOT__LSU__DOT__bready));
        bufp->chgCData(oldp+460,(vlSelf->top__DOT__LSU__DOT__current_state),2);
        bufp->chgCData(oldp+461,(vlSelf->top__DOT__LSU__DOT__next_state),2);
        bufp->chgIData(oldp+462,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
        bufp->chgIData(oldp+463,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
        bufp->chgIData(oldp+464,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
        bufp->chgIData(oldp+465,(vlSelf->top__DOT__WBU__DOT__rs1),32);
        bufp->chgIData(oldp+466,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
        bufp->chgCData(oldp+467,(vlSelf->top__DOT__WBU__DOT__rmask),3);
        bufp->chgBit(oldp+468,(vlSelf->top__DOT__WBU__DOT__wb_src));
        bufp->chgBit(oldp+469,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
        bufp->chgCData(oldp+470,(vlSelf->top__DOT__WBU__DOT__current_state),2);
        bufp->chgCData(oldp+471,(vlSelf->top__DOT__WBU__DOT__next_state),2);
        bufp->chgCData(oldp+472,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
        bufp->chgIData(oldp+473,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                               >> 0x1fU))) 
                                   << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x18U))),32);
        bufp->chgIData(oldp+474,((((- (IData)((1U & 
                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 0x17U)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 0x10U)))),32);
        bufp->chgIData(oldp+475,((((- (IData)((1U & 
                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 0xfU)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 8U)))),32);
        bufp->chgIData(oldp+476,((((- (IData)((1U & 
                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
        bufp->chgIData(oldp+477,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                  >> 0x18U)),32);
        bufp->chgIData(oldp+478,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x10U))),32);
        bufp->chgIData(oldp+479,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                           >> 8U))),32);
        bufp->chgIData(oldp+480,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+481,(vlSelf->top__DOT__Rgefile__DOT__rf
                                 [0xfU]),32);
        bufp->chgIData(oldp+482,(vlSelf->top__DOT__csr_reg[0]),32);
        bufp->chgIData(oldp+483,(vlSelf->top__DOT__csr_reg[1]),32);
        bufp->chgIData(oldp+484,(vlSelf->top__DOT__csr_reg[2]),32);
        bufp->chgIData(oldp+485,(vlSelf->top__DOT__csr_reg[3]),32);
        bufp->chgIData(oldp+486,(vlSelf->top__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+487,(vlSelf->top__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+488,(vlSelf->top__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+489,(vlSelf->top__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+490,(vlSelf->top__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+491,(vlSelf->top__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+492,(vlSelf->top__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+493,(vlSelf->top__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+494,(vlSelf->top__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+495,(vlSelf->top__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+496,(vlSelf->top__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+497,(vlSelf->top__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+498,(vlSelf->top__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+499,(vlSelf->top__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+500,(vlSelf->top__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+501,(vlSelf->top__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+502,(vlSelf->top__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+503,(vlSelf->top__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+504,(vlSelf->top__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+505,(vlSelf->top__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+506,(vlSelf->top__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+507,(vlSelf->top__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+508,(vlSelf->top__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+509,(vlSelf->top__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+510,(vlSelf->top__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+511,(vlSelf->top__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+512,(vlSelf->top__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+513,(vlSelf->top__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+514,(vlSelf->top__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+515,(vlSelf->top__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+516,(vlSelf->top__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+517,(vlSelf->top__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+518,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
        bufp->chgIData(oldp+519,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
        bufp->chgIData(oldp+520,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
        bufp->chgIData(oldp+521,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
        bufp->chgIData(oldp+522,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
        bufp->chgIData(oldp+523,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
        bufp->chgIData(oldp+524,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
        bufp->chgIData(oldp+525,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
        bufp->chgIData(oldp+526,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
        bufp->chgIData(oldp+527,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
        bufp->chgIData(oldp+528,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
        bufp->chgIData(oldp+529,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
        bufp->chgIData(oldp+530,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
        bufp->chgIData(oldp+531,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
        bufp->chgIData(oldp+532,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
        bufp->chgIData(oldp+533,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
        bufp->chgIData(oldp+534,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
        bufp->chgIData(oldp+535,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
        bufp->chgIData(oldp+536,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
        bufp->chgIData(oldp+537,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
        bufp->chgIData(oldp+538,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
        bufp->chgIData(oldp+539,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
        bufp->chgIData(oldp+540,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
        bufp->chgIData(oldp+541,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
        bufp->chgIData(oldp+542,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
        bufp->chgIData(oldp+543,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
        bufp->chgIData(oldp+544,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
        bufp->chgIData(oldp+545,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
        bufp->chgIData(oldp+546,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
        bufp->chgIData(oldp+547,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
        bufp->chgIData(oldp+548,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
        bufp->chgIData(oldp+549,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
        bufp->chgIData(oldp+550,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
        bufp->chgIData(oldp+551,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
        bufp->chgIData(oldp+552,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
        bufp->chgIData(oldp+553,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
        bufp->chgIData(oldp+554,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
        bufp->chgIData(oldp+555,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
        bufp->chgIData(oldp+556,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
        bufp->chgIData(oldp+557,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
        bufp->chgIData(oldp+558,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
        bufp->chgIData(oldp+559,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
        bufp->chgIData(oldp+560,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
        bufp->chgIData(oldp+561,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
        bufp->chgIData(oldp+562,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
        bufp->chgIData(oldp+563,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
        bufp->chgIData(oldp+564,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
        bufp->chgIData(oldp+565,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
        bufp->chgIData(oldp+566,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
        bufp->chgIData(oldp+567,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
        bufp->chgIData(oldp+568,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
        bufp->chgIData(oldp+569,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
        bufp->chgIData(oldp+570,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
        bufp->chgIData(oldp+571,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
        bufp->chgIData(oldp+572,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
        bufp->chgIData(oldp+573,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
        bufp->chgIData(oldp+574,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
        bufp->chgIData(oldp+575,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
        bufp->chgIData(oldp+576,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
        bufp->chgIData(oldp+577,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
        bufp->chgIData(oldp+578,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
        bufp->chgIData(oldp+579,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
        bufp->chgIData(oldp+580,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
        bufp->chgIData(oldp+581,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
        bufp->chgIData(oldp+582,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
        bufp->chgIData(oldp+583,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
        bufp->chgIData(oldp+584,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
        bufp->chgIData(oldp+585,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
        bufp->chgIData(oldp+586,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
        bufp->chgIData(oldp+587,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
        bufp->chgIData(oldp+588,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
        bufp->chgIData(oldp+589,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
        bufp->chgIData(oldp+590,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
        bufp->chgIData(oldp+591,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
        bufp->chgIData(oldp+592,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
        bufp->chgIData(oldp+593,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+594,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+595,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+596,(vlSelf->top__DOT__IDU__DOT__pc),32);
        bufp->chgIData(oldp+597,(vlSelf->top__DOT__imm_idu_to_exu),32);
        bufp->chgBit(oldp+598,(vlSelf->top__DOT__a_in_src_idu_to_exu));
        bufp->chgCData(oldp+599,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
        bufp->chgCData(oldp+600,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
        bufp->chgBit(oldp+601,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
        bufp->chgBit(oldp+602,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
        bufp->chgCData(oldp+603,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
        bufp->chgBit(oldp+604,(vlSelf->top__DOT__MemRead_idu_to_exu));
        bufp->chgBit(oldp+605,(vlSelf->top__DOT__MemWrite_idu_to_exu));
        bufp->chgCData(oldp+606,((0xfU & (IData)(vlSelf->top__DOT__IDU__DOT__wmask_tmp))),8);
        bufp->chgCData(oldp+607,(vlSelf->top__DOT__rmask_idu_to_exu),3);
        bufp->chgBit(oldp+608,(vlSelf->top__DOT__wb_src_idu_to_exu));
        bufp->chgBit(oldp+609,(vlSelf->top__DOT__csr_write_idu_to_exu));
        bufp->chgBit(oldp+610,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
        bufp->chgBit(oldp+611,(vlSelf->top__DOT__reg_write_idu_to_exu));
        bufp->chgCData(oldp+612,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+613,(vlSelf->top__DOT__csr_write));
        bufp->chgIData(oldp+614,(vlSelf->top__DOT__csr_wdata),32);
        bufp->chgCData(oldp+615,((0xfU & (IData)(vlSelf->top__DOT__IDU__DOT__wmask_tmp))),4);
        bufp->chgIData(oldp+616,(vlSelf->top__DOT__IDU__DOT__inst),32);
        bufp->chgCData(oldp+617,(vlSelf->top__DOT__IDU__DOT__wmask_tmp),8);
        bufp->chgCData(oldp+618,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
        bufp->chgCData(oldp+619,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+620,((vlSelf->top__DOT__IDU__DOT__inst 
                                  >> 0x19U)),7);
    }
    bufp->chgBit(oldp+621,(vlSelf->clk));
    bufp->chgBit(oldp+622,(vlSelf->rst_n));
    bufp->chgIData(oldp+623,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+624,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+625,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                               ? ((0U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0xcU)))
                                   ? ((0x73U == vlSelf->top__DOT__IDU__DOT__inst)
                                       ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                       : ((0x30200073U 
                                           == vlSelf->top__DOT__IDU__DOT__inst)
                                           ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                           : 0U)) : 
                                  (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                                  >> 0xcU))) 
                                    | (2U == (7U & 
                                              (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xcU))))
                                    ? ((0x300U == (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U))
                                        ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus
                                        : ((0x305U 
                                            == (vlSelf->top__DOT__IDU__DOT__inst 
                                                >> 0x14U))
                                            ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                            : ((0x341U 
                                                == 
                                                (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0x14U))
                                                ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                                : (
                                                   (0x342U 
                                                    == 
                                                    (vlSelf->top__DOT__IDU__DOT__inst 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause
                                                    : 0U))))
                                    : 0U)) : 0U)),32);
    bufp->chgIData(oldp+626,(vlSelf->top__DOT__IFU__DOT__pc),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
