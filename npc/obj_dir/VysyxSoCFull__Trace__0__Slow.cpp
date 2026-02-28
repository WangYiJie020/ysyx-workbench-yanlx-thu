// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1588,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1589,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1590,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1591,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1593,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1594,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1595,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1596,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1597,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1598,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1599,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1600,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1601,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1602,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1603,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1604,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1605,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1606,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1607,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1588,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1589,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1590,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1591,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1593,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1594,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1595,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1596,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1597,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1598,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1599,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1600,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1601,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1602,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1603,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1604,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1605,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1606,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1607,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+702,"spi_sck", false,-1);
    tracep->declBus(c+1435,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1436,"spi_mosi", false,-1);
    tracep->declBit(c+1608,"spi_miso", false,-1);
    tracep->declBit(c+1606,"uart_rx", false,-1);
    tracep->declBit(c+1607,"uart_tx", false,-1);
    tracep->declBit(c+1609,"psram_sck", false,-1);
    tracep->declBit(c+1580,"psram_ce_n", false,-1);
    tracep->declBus(c+1610,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1611,"sdram_clk", false,-1);
    tracep->declBit(c+1437,"sdram_cke", false,-1);
    tracep->declBit(c+703,"sdram_cs", false,-1);
    tracep->declBit(c+704,"sdram_ras", false,-1);
    tracep->declBit(c+705,"sdram_cas", false,-1);
    tracep->declBit(c+706,"sdram_we", false,-1);
    tracep->declBus(c+1612,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1438,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1439,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1498,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1588,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1589,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1590,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1591,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1592,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1593,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1594,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1595,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1596,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1597,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1598,"ps2_clk", false,-1);
    tracep->declBit(c+1599,"ps2_data", false,-1);
    tracep->declBus(c+1600,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1601,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1602,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1603,"vga_hsync", false,-1);
    tracep->declBit(c+1604,"vga_vsync", false,-1);
    tracep->declBit(c+1605,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1663,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1664,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1665,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1210,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+152,"in_psel", false,-1);
    tracep->declBit(c+153,"in_penable", false,-1);
    tracep->declBus(c+1666,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+154,"in_pwrite", false,-1);
    tracep->declBus(c+155,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+156,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+157,"in_pready", false,-1);
    tracep->declBus(c+158,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+159,"in_pslverr", false,-1);
    tracep->declBus(c+1211,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1212,"out_psel", false,-1);
    tracep->declBit(c+1213,"out_penable", false,-1);
    tracep->declBus(c+1214,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1215,"out_pwrite", false,-1);
    tracep->declBus(c+1216,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1613,"out_pready", false,-1);
    tracep->declBus(c+1614,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1615,"out_pslverr", false,-1);
    tracep->declBus(c+1667,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1668,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1669,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1666,"ST_FORWARD", false,-1, 2,0);
    tracep->declBus(c+1670,"ST_WAIT", false,-1, 2,0);
    tracep->declBus(c+1671,"ST_SKIP", false,-1, 2,0);
    tracep->declBus(c+1672,"ST_DONE", false,-1, 2,0);
    tracep->declBus(c+160,"state", false,-1, 2,0);
    tracep->declBus(c+161,"accum", false,-1, 31,0);
    tracep->declBus(c+162,"dev_cycles", false,-1, 15,0);
    tracep->declBus(c+163,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+164,"saved_prdata", false,-1, 31,0);
    tracep->declBit(c+165,"saved_pslverr", false,-1);
    tracep->declBit(c+1218,"fwd_active", false,-1);
    tracep->declBus(c+166,"accum_final", false,-1, 31,0);
    tracep->declBus(c+167,"total_cpu", false,-1, 31,0);
    tracep->declBus(c+168,"k_plus1", false,-1, 31,0);
    tracep->declBus(c+169,"extra_delay", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1212,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1213,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1215,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1211,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1214,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1613,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1615,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1614,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1219,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1220,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1221,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1214,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+707,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1673,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1674,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1222,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1223,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1214,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+170,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1675,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+171,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1225,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1226,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1214,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+708,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1675,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+709,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1227,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1211,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1214,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1675,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+172,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1229,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1230,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1214,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1231,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1675,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1617,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1232,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1233,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1221,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1214,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+710,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+711,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+712,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1234,"sel_0", false,-1);
    tracep->declBit(c+1235,"sel_1", false,-1);
    tracep->declBit(c+1236,"sel_2", false,-1);
    tracep->declBit(c+1237,"sel_3", false,-1);
    tracep->declBit(c+1238,"sel_4", false,-1);
    tracep->declBit(c+1239,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+173,"auto_in_awready", false,-1);
    tracep->declBit(c+174,"auto_in_awvalid", false,-1);
    tracep->declBus(c+175,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+178,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+173,"auto_in_wready", false,-1);
    tracep->declBit(c+179,"auto_in_wvalid", false,-1);
    tracep->declBus(c+180,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+181,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+182,"auto_in_bready", false,-1);
    tracep->declBit(c+183,"auto_in_bvalid", false,-1);
    tracep->declBus(c+184,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+185,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+186,"auto_in_arready", false,-1);
    tracep->declBit(c+187,"auto_in_arvalid", false,-1);
    tracep->declBus(c+188,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+189,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+190,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+191,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+192,"auto_in_rready", false,-1);
    tracep->declBit(c+193,"auto_in_rvalid", false,-1);
    tracep->declBus(c+194,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+185,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+152,"auto_out_psel", false,-1);
    tracep->declBit(c+153,"auto_out_penable", false,-1);
    tracep->declBit(c+154,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1210,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+155,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+157,"auto_out_pready", false,-1);
    tracep->declBit(c+159,"auto_out_pslverr", false,-1);
    tracep->declBus(c+158,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+153,"nodeOut_penable", false,-1);
    tracep->declBus(c+196,"state", false,-1, 1,0);
    tracep->declBit(c+186,"accept_read", false,-1);
    tracep->declBit(c+173,"accept_write", false,-1);
    tracep->declBit(c+197,"is_write_r", false,-1);
    tracep->declBit(c+154,"is_write", false,-1);
    tracep->declBus(c+194,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+184,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+198,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+199,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+200,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+201,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+202,"resp", false,-1, 1,0);
    tracep->declBus(c+203,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+185,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+193,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+204,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+183,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+205,"auto_in_awready", false,-1);
    tracep->declBit(c+1453,"auto_in_awvalid", false,-1);
    tracep->declBus(c+206,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+207,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+208,"auto_in_wready", false,-1);
    tracep->declBit(c+1456,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_in_wlast", false,-1);
    tracep->declBit(c+675,"auto_in_bready", false,-1);
    tracep->declBit(c+209,"auto_in_bvalid", false,-1);
    tracep->declBus(c+210,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+211,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+212,"auto_in_arready", false,-1);
    tracep->declBit(c+36,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+213,"auto_in_rvalid", false,-1);
    tracep->declBus(c+214,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+215,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+216,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+217,"auto_in_rlast", false,-1);
    tracep->declBit(c+173,"auto_out_awready", false,-1);
    tracep->declBit(c+174,"auto_out_awvalid", false,-1);
    tracep->declBus(c+175,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+178,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+173,"auto_out_wready", false,-1);
    tracep->declBit(c+179,"auto_out_wvalid", false,-1);
    tracep->declBus(c+180,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+181,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+182,"auto_out_bready", false,-1);
    tracep->declBit(c+183,"auto_out_bvalid", false,-1);
    tracep->declBus(c+184,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+185,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+186,"auto_out_arready", false,-1);
    tracep->declBit(c+187,"auto_out_arvalid", false,-1);
    tracep->declBus(c+188,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+189,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+190,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+191,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+192,"auto_out_rready", false,-1);
    tracep->declBit(c+193,"auto_out_rvalid", false,-1);
    tracep->declBus(c+194,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+185,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+182,"io_enq_ready", false,-1);
    tracep->declBit(c+183,"io_enq_valid", false,-1);
    tracep->declBus(c+184,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+185,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+675,"io_deq_ready", false,-1);
    tracep->declBit(c+209,"io_deq_valid", false,-1);
    tracep->declBus(c+210,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+211,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+218,"wrap", false,-1);
    tracep->declBit(c+219,"wrap_1", false,-1);
    tracep->declBit(c+220,"maybe_full", false,-1);
    tracep->declBit(c+221,"ptr_match", false,-1);
    tracep->declBit(c+222,"empty", false,-1);
    tracep->declBit(c+223,"full", false,-1);
    tracep->declBit(c+224,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+219,"R0_addr", false,-1);
    tracep->declBit(c+1676,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declBus(c+225,"R0_data", false,-1, 5,0);
    tracep->declBit(c+218,"W0_addr", false,-1);
    tracep->declBit(c+224,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declBus(c+226,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+227+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+229,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+193,"io_enq_valid", false,-1);
    tracep->declBus(c+194,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+195,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+185,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBus(c+214,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+215,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+216,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+217,"io_deq_bits_last", false,-1);
    tracep->declBit(c+230,"wrap", false,-1);
    tracep->declBit(c+231,"wrap_1", false,-1);
    tracep->declBit(c+232,"maybe_full", false,-1);
    tracep->declBit(c+233,"ptr_match", false,-1);
    tracep->declBit(c+234,"empty", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+231,"R0_addr", false,-1);
    tracep->declBit(c+1676,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declQuad(c+237,"R0_data", false,-1, 38,0);
    tracep->declBit(c+230,"W0_addr", false,-1);
    tracep->declBit(c+236,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declQuad(c+239,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+241+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+245,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+36,"io_enq_valid", false,-1);
    tracep->declBus(c+37,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+40,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+186,"io_deq_ready", false,-1);
    tracep->declBit(c+187,"io_deq_valid", false,-1);
    tracep->declBus(c+188,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+189,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+190,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+191,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+246,"wrap", false,-1);
    tracep->declBit(c+247,"wrap_1", false,-1);
    tracep->declBit(c+248,"maybe_full", false,-1);
    tracep->declBit(c+249,"ptr_match", false,-1);
    tracep->declBit(c+250,"empty", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+41,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+247,"R0_addr", false,-1);
    tracep->declBit(c+1676,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declQuad(c+252,"R0_data", false,-1, 46,0);
    tracep->declBit(c+246,"W0_addr", false,-1);
    tracep->declBit(c+41,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declQuad(c+42,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+254+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+205,"io_enq_ready", false,-1);
    tracep->declBit(c+1453,"io_enq_valid", false,-1);
    tracep->declBus(c+206,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1454,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1455,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+207,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+173,"io_deq_ready", false,-1);
    tracep->declBit(c+174,"io_deq_valid", false,-1);
    tracep->declBus(c+175,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+176,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+177,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+178,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+259,"wrap", false,-1);
    tracep->declBit(c+260,"wrap_1", false,-1);
    tracep->declBit(c+261,"maybe_full", false,-1);
    tracep->declBit(c+262,"ptr_match", false,-1);
    tracep->declBit(c+263,"empty", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+1460,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+260,"R0_addr", false,-1);
    tracep->declBit(c+1676,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declQuad(c+265,"R0_data", false,-1, 46,0);
    tracep->declBit(c+259,"W0_addr", false,-1);
    tracep->declBit(c+1460,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declQuad(c+1618,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+267+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+1456,"io_enq_valid", false,-1);
    tracep->declBus(c+1457,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1458,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1459,"io_enq_bits_last", false,-1);
    tracep->declBit(c+173,"io_deq_ready", false,-1);
    tracep->declBit(c+179,"io_deq_valid", false,-1);
    tracep->declBus(c+180,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+181,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+272,"wrap", false,-1);
    tracep->declBit(c+273,"wrap_1", false,-1);
    tracep->declBit(c+274,"maybe_full", false,-1);
    tracep->declBit(c+275,"ptr_match", false,-1);
    tracep->declBit(c+276,"empty", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+1461,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+273,"R0_addr", false,-1);
    tracep->declBit(c+1676,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declQuad(c+278,"R0_data", false,-1, 35,0);
    tracep->declBit(c+272,"W0_addr", false,-1);
    tracep->declBit(c+1461,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declQuad(c+1462,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+280+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1663,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1664,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1665,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+101,"in_arready", false,-1);
    tracep->declBit(c+44,"in_arvalid", false,-1);
    tracep->declBus(c+45,"in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1620,"in_rready", false,-1);
    tracep->declBit(c+713,"in_rvalid", false,-1);
    tracep->declBus(c+714,"in_rid", false,-1, 3,0);
    tracep->declBus(c+715,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1677,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+716,"in_rlast", false,-1);
    tracep->declBit(c+102,"in_awready", false,-1);
    tracep->declBit(c+1464,"in_awvalid", false,-1);
    tracep->declBus(c+1678,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"in_wready", false,-1);
    tracep->declBit(c+1465,"in_wvalid", false,-1);
    tracep->declBus(c+1009,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"in_wlast", false,-1);
    tracep->declBit(c+1621,"in_bready", false,-1);
    tracep->declBit(c+717,"in_bvalid", false,-1);
    tracep->declBus(c+714,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1677,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"out_arready", false,-1);
    tracep->declBit(c+44,"out_arvalid", false,-1);
    tracep->declBus(c+45,"out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1620,"out_rready", false,-1);
    tracep->declBit(c+713,"out_rvalid", false,-1);
    tracep->declBus(c+714,"out_rid", false,-1, 3,0);
    tracep->declBus(c+715,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1677,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+716,"out_rlast", false,-1);
    tracep->declBit(c+102,"out_awready", false,-1);
    tracep->declBit(c+1464,"out_awvalid", false,-1);
    tracep->declBus(c+1678,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"out_wready", false,-1);
    tracep->declBit(c+1465,"out_wvalid", false,-1);
    tracep->declBus(c+1009,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"out_wlast", false,-1);
    tracep->declBit(c+1621,"out_bready", false,-1);
    tracep->declBit(c+717,"out_bvalid", false,-1);
    tracep->declBus(c+714,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1677,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1667,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1680,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1669,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1666,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1670,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1671,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1672,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1681,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1682,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1683,"WT_ACCESS", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+285,"auto_in_awready", false,-1);
    tracep->declBit(c+1466,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1678,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+286,"auto_in_wready", false,-1);
    tracep->declBit(c+1467,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1009,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"auto_in_wlast", false,-1);
    tracep->declBit(c+1622,"auto_in_bready", false,-1);
    tracep->declBit(c+1240,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1241,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1242,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+287,"auto_in_arready", false,-1);
    tracep->declBit(c+50,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_in_rready", false,-1);
    tracep->declBit(c+288,"auto_in_rvalid", false,-1);
    tracep->declBus(c+289,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+292,"auto_in_rlast", false,-1);
    tracep->declBit(c+1563,"auto_out_awready", false,-1);
    tracep->declBit(c+1468,"auto_out_awvalid", false,-1);
    tracep->declBus(c+206,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+207,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+293,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1564,"auto_out_wready", false,-1);
    tracep->declBit(c+1469,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_out_wlast", false,-1);
    tracep->declBit(c+1565,"auto_out_bready", false,-1);
    tracep->declBit(c+294,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1241,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1243,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1244,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+105,"auto_out_arready", false,-1);
    tracep->declBit(c+51,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+104,"auto_out_rready", false,-1);
    tracep->declBit(c+288,"auto_out_rvalid", false,-1);
    tracep->declBus(c+289,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+295,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+296,"auto_out_rlast", false,-1);
    tracep->declBit(c+1469,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+297,"w_idle", false,-1);
    tracep->declBit(c+1566,"in_awready", false,-1);
    tracep->declBit(c+298,"busy", false,-1);
    tracep->declBus(c+299,"r_addr", false,-1, 31,0);
    tracep->declBus(c+300,"r_len", false,-1, 7,0);
    tracep->declBus(c+53,"len", false,-1, 7,0);
    tracep->declBus(c+54,"addr", false,-1, 31,0);
    tracep->declBit(c+301,"busy_1", false,-1);
    tracep->declBus(c+302,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+303,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+304,"len_1", false,-1, 7,0);
    tracep->declBus(c+1470,"addr_1", false,-1, 31,0);
    tracep->declBit(c+305,"wbeats_latched", false,-1);
    tracep->declBit(c+1468,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1471,"wbeats_valid", false,-1);
    tracep->declBus(c+306,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1472,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1459,"w_last", false,-1);
    tracep->declBit(c+1565,"nodeOut_bready", false,-1);
    tracep->declBus(c+1245,"error_0", false,-1, 1,0);
    tracep->declBus(c+1246,"error_1", false,-1, 1,0);
    tracep->declBus(c+1247,"error_2", false,-1, 1,0);
    tracep->declBus(c+1248,"error_3", false,-1, 1,0);
    tracep->declBus(c+1249,"error_4", false,-1, 1,0);
    tracep->declBus(c+1250,"error_5", false,-1, 1,0);
    tracep->declBus(c+1251,"error_6", false,-1, 1,0);
    tracep->declBus(c+1252,"error_7", false,-1, 1,0);
    tracep->declBus(c+1253,"error_8", false,-1, 1,0);
    tracep->declBus(c+1254,"error_9", false,-1, 1,0);
    tracep->declBus(c+1255,"error_10", false,-1, 1,0);
    tracep->declBus(c+1256,"error_11", false,-1, 1,0);
    tracep->declBus(c+1257,"error_12", false,-1, 1,0);
    tracep->declBus(c+1258,"error_13", false,-1, 1,0);
    tracep->declBus(c+1259,"error_14", false,-1, 1,0);
    tracep->declBus(c+1260,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBus(c+45,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+46,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+47,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+48,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+49,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+106,"io_deq_ready", false,-1);
    tracep->declBit(c+51,"io_deq_valid", false,-1);
    tracep->declBus(c+37,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+55,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+56,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+39,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+40,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+307,"ram", false,-1, 48,0);
    tracep->declBit(c+309,"full", false,-1);
    tracep->declBit(c+51,"io_deq_valid_0", false,-1);
    tracep->declBit(c+107,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1466,"io_enq_valid", false,-1);
    tracep->declBus(c+1678,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1007,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1679,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1008,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1677,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1567,"io_deq_ready", false,-1);
    tracep->declBit(c+1473,"io_deq_valid", false,-1);
    tracep->declBus(c+206,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1474,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+310,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1455,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+207,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+311,"ram", false,-1, 48,0);
    tracep->declBit(c+313,"full", false,-1);
    tracep->declBit(c+1473,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1568,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+286,"io_enq_ready", false,-1);
    tracep->declBit(c+1467,"io_enq_valid", false,-1);
    tracep->declBus(c+1009,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1010,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1011,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1569,"io_deq_ready", false,-1);
    tracep->declBit(c+1475,"io_deq_valid", false,-1);
    tracep->declBus(c+1457,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1458,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1623,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+314,"ram", false,-1, 36,0);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+1475,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1570,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1571,"auto_in_awready", false,-1);
    tracep->declBit(c+1476,"auto_in_awvalid", false,-1);
    tracep->declBus(c+206,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1477,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1624,"auto_in_wready", false,-1);
    tracep->declBit(c+1478,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1572,"auto_in_bready", false,-1);
    tracep->declBit(c+317,"auto_in_bvalid", false,-1);
    tracep->declBus(c+318,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+319,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_in_arready", false,-1);
    tracep->declBit(c+57,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+109,"auto_in_rready", false,-1);
    tracep->declBit(c+320,"auto_in_rvalid", false,-1);
    tracep->declBus(c+321,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+322,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+323,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+108,"nodeIn_arready", false,-1);
    tracep->declBit(c+1571,"nodeIn_awready", false,-1);
    tracep->declBit(c+1479,"w_sel0", false,-1);
    tracep->declBit(c+317,"w_full", false,-1);
    tracep->declBus(c+318,"w_id", false,-1, 3,0);
    tracep->declBit(c+324,"r_sel1", false,-1);
    tracep->declBit(c+325,"w_sel1", false,-1);
    tracep->declBit(c+320,"r_full", false,-1);
    tracep->declBus(c+321,"r_id", false,-1, 3,0);
    tracep->declBit(c+110,"ren", false,-1);
    tracep->declBit(c+326,"rdata_REG", false,-1);
    tracep->declBus(c+327,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+328,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+329,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+330,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+59,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+110,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declBus(c+331,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1480,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1573,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declBus(c+1457,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1458,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+111,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1012,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1678,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1625,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1013,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1009,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1014,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1407,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1408,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1626,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1409,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1410,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1627,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1628,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1411,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+102,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1464,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1678,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1465,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1009,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1621,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+717,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+714,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1677,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1620,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+713,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+714,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+715,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1677,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+716,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+285,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1466,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1678,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+286,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1467,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1009,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1622,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1240,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1241,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1242,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+287,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+50,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+288,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+292,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1407,"in_0_bvalid", false,-1);
    tracep->declBit(c+1409,"in_0_rvalid", false,-1);
    tracep->declBit(c+113,"in_0_wready", false,-1);
    tracep->declBit(c+114,"in_0_awready", false,-1);
    tracep->declBit(c+1629,"in_0_arready", false,-1);
    tracep->declBit(c+111,"anonIn_awready", false,-1);
    tracep->declBit(c+112,"anonIn_arready", false,-1);
    tracep->declBit(c+62,"requestARIO_0_0", false,-1);
    tracep->declBit(c+63,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1015,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1016,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+64,"arSel", false,-1, 15,0);
    tracep->declBus(c+1684,"awSel", false,-1, 15,0);
    tracep->declBus(c+1412,"rSel", false,-1, 15,0);
    tracep->declBus(c+1413,"bSel", false,-1, 15,0);
    tracep->declBus(c+332,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+333,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+334,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+335,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+336,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+337,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+338,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1685,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+339,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+340,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+341,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1686,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+342,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+343,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+344,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1687,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+345,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+346,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+347,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1688,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+348,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+349,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+350,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1689,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+351,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+352,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+353,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1690,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+354,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+355,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+356,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1691,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+357,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+358,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+359,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1692,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+360,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+361,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+362,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1693,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+363,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+364,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+365,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1694,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+366,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+367,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+368,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1695,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+369,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+370,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+371,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1696,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+372,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+373,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+374,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1697,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+375,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+376,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+377,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1698,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+378,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+379,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+380,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1699,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+65,"in_0_arvalid", false,-1);
    tracep->declBit(c+381,"latched", false,-1);
    tracep->declBit(c+1481,"in_0_awvalid", false,-1);
    tracep->declBit(c+1482,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1483,"in_0_wvalid", false,-1);
    tracep->declBit(c+382,"idle_2", false,-1);
    tracep->declBit(c+1414,"anyValid", false,-1);
    tracep->declBus(c+1415,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+383,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1416,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1417,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1418,"prefixOR_1", false,-1);
    tracep->declBit(c+1419,"winner_2_1", false,-1);
    tracep->declBit(c+384,"state_2_0", false,-1);
    tracep->declBit(c+385,"state_2_1", false,-1);
    tracep->declBit(c+1420,"muxState_2_0", false,-1);
    tracep->declBit(c+1421,"muxState_2_1", false,-1);
    tracep->declBit(c+386,"idle_3", false,-1);
    tracep->declBit(c+1422,"anyValid_1", false,-1);
    tracep->declBus(c+1423,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+387,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1424,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1425,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1426,"winner_3_0", false,-1);
    tracep->declBit(c+1427,"winner_3_1", false,-1);
    tracep->declBit(c+388,"state_3_0", false,-1);
    tracep->declBit(c+389,"state_3_1", false,-1);
    tracep->declBit(c+1428,"muxState_3_0", false,-1);
    tracep->declBit(c+1630,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+390,"io_enq_ready", false,-1);
    tracep->declBit(c+1482,"io_enq_valid", false,-1);
    tracep->declBus(c+1017,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+115,"io_deq_ready", false,-1);
    tracep->declBit(c+1484,"io_deq_valid", false,-1);
    tracep->declBus(c+1485,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+391,"wrap", false,-1);
    tracep->declBit(c+392,"wrap_1", false,-1);
    tracep->declBit(c+393,"maybe_full", false,-1);
    tracep->declBit(c+394,"ptr_match", false,-1);
    tracep->declBit(c+395,"empty", false,-1);
    tracep->declBit(c+396,"full", false,-1);
    tracep->declBit(c+1484,"io_deq_valid_0", false,-1);
    tracep->declBit(c+116,"do_deq", false,-1);
    tracep->declBit(c+117,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+392,"R0_addr", false,-1);
    tracep->declBit(c+1676,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declBus(c+397,"R0_data", false,-1, 1,0);
    tracep->declBit(c+391,"W0_addr", false,-1);
    tracep->declBit(c+117,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declBus(c+1017,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+398+i*1,"Memory", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1574,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1486,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+206,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+207,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1564,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1469,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1565,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+294,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1241,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1243,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+66,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+288,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+296,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1571,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1476,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+206,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1477,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1624,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1478,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1572,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+317,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+318,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+319,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+57,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+109,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+320,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+321,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+322,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+323,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1487,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1488,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+400,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+67,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+401,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+402,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+403,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+205,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1453,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+206,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+207,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+208,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1456,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+675,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+209,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+210,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+211,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+212,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+213,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+214,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+215,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+216,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+217,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+294,"in_0_bvalid", false,-1);
    tracep->declBit(c+288,"in_0_rvalid", false,-1);
    tracep->declBit(c+1575,"in_0_wready", false,-1);
    tracep->declBit(c+1576,"in_0_awready", false,-1);
    tracep->declBit(c+118,"in_0_arready", false,-1);
    tracep->declBit(c+1574,"anonIn_awready", false,-1);
    tracep->declBit(c+69,"requestARIO_0_0", false,-1);
    tracep->declBit(c+70,"requestARIO_0_1", false,-1);
    tracep->declBit(c+71,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1489,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1490,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1491,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+72,"arSel", false,-1, 15,0);
    tracep->declBus(c+404,"awSel", false,-1, 15,0);
    tracep->declBus(c+405,"rSel", false,-1, 15,0);
    tracep->declBus(c+1261,"bSel", false,-1, 15,0);
    tracep->declBit(c+406,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+407,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+408,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+409,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+410,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+411,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+412,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+413,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+414,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+415,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+416,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+417,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+418,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+419,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+420,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+421,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+422,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+423,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+424,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+425,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+426,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+427,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+428,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+429,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+430,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+431,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+432,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+433,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+434,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+435,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+436,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+437,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+438,"latched", false,-1);
    tracep->declBit(c+1492,"in_0_awvalid", false,-1);
    tracep->declBit(c+1493,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1494,"in_0_wvalid", false,-1);
    tracep->declBit(c+439,"idle_3", false,-1);
    tracep->declBit(c+440,"anyValid", false,-1);
    tracep->declBus(c+441,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+442,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+443,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+444,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+445,"prefixOR_1", false,-1);
    tracep->declBit(c+446,"winner_3_1", false,-1);
    tracep->declBit(c+447,"winner_3_2", false,-1);
    tracep->declBit(c+448,"state_3_0", false,-1);
    tracep->declBit(c+449,"state_3_1", false,-1);
    tracep->declBit(c+450,"state_3_2", false,-1);
    tracep->declBit(c+451,"muxState_3_0", false,-1);
    tracep->declBit(c+452,"muxState_3_1", false,-1);
    tracep->declBit(c+453,"muxState_3_2", false,-1);
    tracep->declBit(c+454,"idle_4", false,-1);
    tracep->declBit(c+455,"anyValid_1", false,-1);
    tracep->declBus(c+456,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+457,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+458,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+459,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+460,"winner_4_0", false,-1);
    tracep->declBit(c+461,"winner_4_2", false,-1);
    tracep->declBit(c+462,"state_4_0", false,-1);
    tracep->declBit(c+463,"state_4_2", false,-1);
    tracep->declBit(c+464,"muxState_4_0", false,-1);
    tracep->declBit(c+465,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+1493,"io_enq_valid", false,-1);
    tracep->declBus(c+1495,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1577,"io_deq_ready", false,-1);
    tracep->declBit(c+1496,"io_deq_valid", false,-1);
    tracep->declBus(c+1497,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+467,"wrap", false,-1);
    tracep->declBit(c+468,"wrap_1", false,-1);
    tracep->declBit(c+469,"maybe_full", false,-1);
    tracep->declBit(c+470,"ptr_match", false,-1);
    tracep->declBit(c+471,"empty", false,-1);
    tracep->declBit(c+472,"full", false,-1);
    tracep->declBit(c+1496,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1578,"do_deq", false,-1);
    tracep->declBit(c+1579,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+468,"R0_addr", false,-1);
    tracep->declBit(c+1676,"R0_en", false,-1);
    tracep->declBit(c+1586,"R0_clk", false,-1);
    tracep->declBus(c+473,"R0_data", false,-1, 2,0);
    tracep->declBit(c+467,"W0_addr", false,-1);
    tracep->declBit(c+1579,"W0_en", false,-1);
    tracep->declBit(c+1586,"W0_clk", false,-1);
    tracep->declBus(c+1495,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+474+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1563,"auto_in_awready", false,-1);
    tracep->declBit(c+1468,"auto_in_awvalid", false,-1);
    tracep->declBus(c+206,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+207,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+293,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1564,"auto_in_wready", false,-1);
    tracep->declBit(c+1469,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_in_wlast", false,-1);
    tracep->declBit(c+1565,"auto_in_bready", false,-1);
    tracep->declBit(c+294,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1241,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1243,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1244,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+105,"auto_in_arready", false,-1);
    tracep->declBit(c+51,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+104,"auto_in_rready", false,-1);
    tracep->declBit(c+288,"auto_in_rvalid", false,-1);
    tracep->declBus(c+289,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+295,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+296,"auto_in_rlast", false,-1);
    tracep->declBit(c+1574,"auto_out_awready", false,-1);
    tracep->declBit(c+1486,"auto_out_awvalid", false,-1);
    tracep->declBus(c+206,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1454,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+207,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1564,"auto_out_wready", false,-1);
    tracep->declBit(c+1469,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1457,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1458,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1459,"auto_out_wlast", false,-1);
    tracep->declBit(c+1565,"auto_out_bready", false,-1);
    tracep->declBit(c+294,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1241,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1243,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_out_arready", false,-1);
    tracep->declBit(c+66,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+104,"auto_out_rready", false,-1);
    tracep->declBit(c+288,"auto_out_rvalid", false,-1);
    tracep->declBus(c+289,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+290,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+296,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+476,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+477,"io_deq_valid", false,-1);
    tracep->declBit(c+478,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+477,"full", false,-1);
    tracep->declBit(c+478,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+479,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+480,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+481,"io_deq_valid", false,-1);
    tracep->declBit(c+482,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->declBit(c+482,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+483,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+91,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+92,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBit(c+506,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+507,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+676,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1391,"io_deq_ready", false,-1);
    tracep->declBit(c+509,"io_deq_valid", false,-1);
    tracep->declBit(c+510,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"full", false,-1);
    tracep->declBit(c+510,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+511,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+677,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1392,"io_deq_ready", false,-1);
    tracep->declBit(c+513,"io_deq_valid", false,-1);
    tracep->declBit(c+514,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+513,"full", false,-1);
    tracep->declBit(c+514,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+515,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+678,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1393,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+679,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1394,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+680,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1395,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+681,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1396,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+682,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1397,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+683,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1398,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+684,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1399,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+685,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1400,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+686,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1401,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+687,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1402,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+688,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1403,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1404,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+94,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+690,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1405,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+293,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1406,"io_deq_ready", false,-1);
    tracep->declBit(c+577,"io_deq_valid", false,-1);
    tracep->declBit(c+578,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+577,"full", false,-1);
    tracep->declBit(c+578,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+579,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+95,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+581,"io_deq_valid", false,-1);
    tracep->declBit(c+582,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+581,"full", false,-1);
    tracep->declBit(c+582,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+583,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+584,"io_enq_ready", false,-1);
    tracep->declBit(c+96,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+585,"io_deq_valid", false,-1);
    tracep->declBit(c+586,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+585,"full", false,-1);
    tracep->declBit(c+586,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+587,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+588,"io_enq_ready", false,-1);
    tracep->declBit(c+97,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+589,"io_deq_valid", false,-1);
    tracep->declBit(c+590,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+589,"full", false,-1);
    tracep->declBit(c+590,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+591,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+98,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+593,"io_deq_valid", false,-1);
    tracep->declBit(c+594,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+593,"full", false,-1);
    tracep->declBit(c+594,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+595,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+99,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+597,"io_deq_valid", false,-1);
    tracep->declBit(c+598,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+597,"full", false,-1);
    tracep->declBit(c+598,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+599,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+600,"io_enq_ready", false,-1);
    tracep->declBit(c+100,"io_enq_valid", false,-1);
    tracep->declBit(c+52,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+601,"io_deq_valid", false,-1);
    tracep->declBit(c+602,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+601,"full", false,-1);
    tracep->declBit(c+602,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+603,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1631,"reset", false,-1);
    tracep->declBit(c+111,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1012,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1678,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1625,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1013,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1009,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1014,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1407,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1408,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1626,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_master_out_arready", false,-1);
    tracep->declBit(c+60,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+45,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1409,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1410,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1627,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1628,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1411,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1631,"reset", false,-1);
    tracep->declBit(c+1675,"io_interrupt", false,-1);
    tracep->declBit(c+111,"io_master_awready", false,-1);
    tracep->declBit(c+1012,"io_master_awvalid", false,-1);
    tracep->declBus(c+1007,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1678,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1679,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1625,"io_master_wready", false,-1);
    tracep->declBit(c+1013,"io_master_wvalid", false,-1);
    tracep->declBus(c+1009,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"io_master_wlast", false,-1);
    tracep->declBit(c+1014,"io_master_bready", false,-1);
    tracep->declBit(c+1407,"io_master_bvalid", false,-1);
    tracep->declBus(c+1626,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1408,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+112,"io_master_arready", false,-1);
    tracep->declBit(c+60,"io_master_arvalid", false,-1);
    tracep->declBus(c+46,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+45,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+47,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"io_master_rready", false,-1);
    tracep->declBit(c+1409,"io_master_rvalid", false,-1);
    tracep->declBus(c+1628,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1627,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1411,"io_master_rlast", false,-1);
    tracep->declBus(c+1410,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1700,"io_slave_awready", false,-1);
    tracep->declBit(c+1675,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1701,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1678,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1679,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1669,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1702,"io_slave_wready", false,-1);
    tracep->declBit(c+1675,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1701,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1678,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1675,"io_slave_wlast", false,-1);
    tracep->declBit(c+1675,"io_slave_bready", false,-1);
    tracep->declBit(c+1703,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1704,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1705,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1706,"io_slave_arready", false,-1);
    tracep->declBit(c+1675,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1701,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1678,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1679,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1669,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1677,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1675,"io_slave_rready", false,-1);
    tracep->declBit(c+1707,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1708,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1709,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1710,"io_slave_rlast", false,-1);
    tracep->declBus(c+1711,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBit(c+1505,"reset_ifu", false,-1);
    tracep->declBus(c+1506,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1507,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1508,"npc", false,-1, 31,0);
    tracep->declBit(c+1712,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1713,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1506,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1507,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1509,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1510,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1511,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1678,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1679,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1670,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1677,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1512,"ifu_arvalid", false,-1);
    tracep->declBit(c+119,"ifu_arready", false,-1);
    tracep->declBus(c+120,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+121,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+122,"ifu_rlast", false,-1);
    tracep->declBus(c+123,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+124,"ifu_rvalid", false,-1);
    tracep->declBit(c+1513,"ifu_rready", false,-1);
    tracep->declBit(c+1018,"bus_busy", false,-1);
    tracep->declBit(c+1714,"useless1", false,-1);
    tracep->declBit(c+1715,"useless2", false,-1);
    tracep->declBit(c+1716,"useless3", false,-1);
    tracep->declBit(c+1717,"useless4", false,-1);
    tracep->declBit(c+1514,"fencei", false,-1);
    tracep->declBus(c+1019,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1678,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1679,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1677,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1021,"lsu_arvalid", false,-1);
    tracep->declBit(c+125,"lsu_arready", false,-1);
    tracep->declBus(c+126,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"lsu_rlast", false,-1);
    tracep->declBus(c+129,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+130,"lsu_rvalid", false,-1);
    tracep->declBit(c+1022,"lsu_rready", false,-1);
    tracep->declBus(c+1007,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1678,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1679,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1012,"lsu_awvalid", false,-1);
    tracep->declBit(c+111,"lsu_awready", false,-1);
    tracep->declBus(c+1009,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"lsu_wlast", false,-1);
    tracep->declBit(c+1013,"lsu_wvalid", false,-1);
    tracep->declBit(c+1625,"lsu_wready", false,-1);
    tracep->declBus(c+1626,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1408,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1407,"lsu_bvalid", false,-1);
    tracep->declBit(c+1014,"lsu_bready", false,-1);
    tracep->declBus(c+1515,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1678,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1679,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1516,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1677,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1517,"axi_arvalid", false,-1);
    tracep->declBit(c+131,"axi_arready", false,-1);
    tracep->declBus(c+132,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"axi_rlast", false,-1);
    tracep->declBus(c+135,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+136,"axi_rvalid", false,-1);
    tracep->declBit(c+1518,"axi_rready", false,-1);
    tracep->declBus(c+1007,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1678,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1679,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1012,"axi_awvalid", false,-1);
    tracep->declBit(c+111,"axi_awready", false,-1);
    tracep->declBus(c+1009,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"axi_wlast", false,-1);
    tracep->declBit(c+1013,"axi_wvalid", false,-1);
    tracep->declBit(c+1625,"axi_wready", false,-1);
    tracep->declBus(c+1626,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1408,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1407,"axi_bvalid", false,-1);
    tracep->declBit(c+1014,"axi_bready", false,-1);
    tracep->declBus(c+73,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+74,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+75,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+76,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+77,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+78,"clint_arvalid", false,-1);
    tracep->declBit(c+1023,"clint_arready", false,-1);
    tracep->declBus(c+1024,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1025,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1026,"clint_rlast", false,-1);
    tracep->declBus(c+1678,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1027,"clint_rvalid", false,-1);
    tracep->declBit(c+79,"clint_rready", false,-1);
    tracep->declBus(c+1718,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1719,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1720,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1721,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1722,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1723,"clint_awvalid", false,-1);
    tracep->declBit(c+1028,"clint_awready", false,-1);
    tracep->declBus(c+1724,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1725,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1726,"clint_wlast", false,-1);
    tracep->declBit(c+1727,"clint_wvalid", false,-1);
    tracep->declBit(c+1029,"clint_wready", false,-1);
    tracep->declBus(c+1030,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1678,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1031,"clint_bvalid", false,-1);
    tracep->declBit(c+1728,"clint_bready", false,-1);
    tracep->declBus(c+1519,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1520,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1633,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1634,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1262,"a5", false,-1, 31,0);
    tracep->declBus(c+1521,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1633,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1634,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1522,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1635,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1523,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1524,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1525,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1526,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1527,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1528,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1529,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1530,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1531,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1532,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1533,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1534,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1535,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1536,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1537,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1538,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1032,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1539,"csr_write", false,-1);
    tracep->declBus(c+1540,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1263+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1033,"wdata", false,-1, 31,0);
    tracep->declBus(c+1034,"waddr", false,-1, 4,0);
    tracep->declBit(c+1035,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1267+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1036,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1037,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1038,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1039,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1729,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1040,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1041,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1042,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1043,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1044,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1045,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1046,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1047,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1048,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1049,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1050,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1051,"npc_valid", false,-1);
    tracep->declBit(c+1052,"rd_exu_valid", false,-1);
    tracep->declBus(c+1053,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1054,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1055,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1056,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1730,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1057,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1058,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1059,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1060,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1061,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1062,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1063,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1064,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1065,"rd_lsu_valid", false,-1);
    tracep->declBit(c+1066,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+1511,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1678,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1679,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1670,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1677,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1512,"arvalid_i_a", false,-1);
    tracep->declBit(c+119,"arready_o_a", false,-1);
    tracep->declBus(c+120,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+121,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+122,"rlast_o_a", false,-1);
    tracep->declBus(c+123,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+124,"rvalid_o_a", false,-1);
    tracep->declBit(c+1513,"rready_i_a", false,-1);
    tracep->declBus(c+1731,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1678,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1679,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1669,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1677,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1675,"awvalid_i_a", false,-1);
    tracep->declBit(c+1732,"awready_o_a", false,-1);
    tracep->declBus(c+1731,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1678,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1675,"wlast_i_a", false,-1);
    tracep->declBit(c+1675,"wvalid_i_a", false,-1);
    tracep->declBit(c+1733,"wready_o_a", false,-1);
    tracep->declBus(c+1734,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1735,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1736,"bvalid_o_a", false,-1);
    tracep->declBit(c+1675,"bready_i_a", false,-1);
    tracep->declBus(c+1019,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1678,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1679,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1020,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1677,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1021,"arvalid_i_b", false,-1);
    tracep->declBit(c+125,"arready_o_b", false,-1);
    tracep->declBus(c+126,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+127,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+128,"rlast_o_b", false,-1);
    tracep->declBus(c+129,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+130,"rvalid_o_b", false,-1);
    tracep->declBit(c+1022,"rready_i_b", false,-1);
    tracep->declBus(c+1007,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1678,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1679,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1008,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1677,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1012,"awvalid_i_b", false,-1);
    tracep->declBit(c+111,"awready_o_b", false,-1);
    tracep->declBus(c+1009,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1010,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1011,"wlast_i_b", false,-1);
    tracep->declBit(c+1013,"wvalid_i_b", false,-1);
    tracep->declBit(c+1625,"wready_o_b", false,-1);
    tracep->declBus(c+1626,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1408,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1407,"bvalid_o_b", false,-1);
    tracep->declBit(c+1014,"bready_i_b", false,-1);
    tracep->declBus(c+1515,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1678,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1679,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1516,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1677,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1517,"arvalid_o", false,-1);
    tracep->declBit(c+131,"arready_i", false,-1);
    tracep->declBus(c+132,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+133,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+134,"rlast_i", false,-1);
    tracep->declBus(c+135,"rid_i", false,-1, 3,0);
    tracep->declBit(c+136,"rvalid_i", false,-1);
    tracep->declBit(c+1518,"rready_o", false,-1);
    tracep->declBus(c+1007,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1678,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1679,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1008,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1677,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1012,"awvalid_o", false,-1);
    tracep->declBit(c+111,"awready_i", false,-1);
    tracep->declBus(c+1009,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1010,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1011,"wlast_o", false,-1);
    tracep->declBit(c+1013,"wvalid_o", false,-1);
    tracep->declBit(c+1625,"wready_i", false,-1);
    tracep->declBus(c+1626,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1408,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1407,"bvalid_i", false,-1);
    tracep->declBit(c+1014,"bready_o", false,-1);
    tracep->declBit(c+1018,"bus_busy", false,-1);
    tracep->declBus(c+1737,"MASTER_A", false,-1, 0,0);
    tracep->declBus(c+1738,"MASTER_B", false,-1, 0,0);
    tracep->declBit(c+1067,"arb_grant", false,-1);
    tracep->declBit(c+1068,"arb_locked", false,-1);
    tracep->declBit(c+1069,"current_master", false,-1);
    tracep->declBit(c+1636,"ar_handshake", false,-1);
    tracep->declBit(c+1637,"r_last_handshake", false,-1);
    tracep->declBit(c+1541,"arb_grant_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+73,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+74,"arid_i", false,-1, 3,0);
    tracep->declBus(c+75,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+76,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+77,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+78,"arvalid_i", false,-1);
    tracep->declBit(c+1023,"arready_o", false,-1);
    tracep->declBus(c+1024,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1025,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1026,"rlast_o", false,-1);
    tracep->declBus(c+1678,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1027,"rvalid_o", false,-1);
    tracep->declBit(c+79,"rready_i", false,-1);
    tracep->declBus(c+1718,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1719,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1720,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1721,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1722,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1723,"awvalid_i", false,-1);
    tracep->declBit(c+1028,"awready_o", false,-1);
    tracep->declBus(c+1724,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1725,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1726,"wlast_i", false,-1);
    tracep->declBit(c+1727,"wvalid_i", false,-1);
    tracep->declBit(c+1029,"wready_o", false,-1);
    tracep->declBus(c+1030,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1678,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1031,"bvalid_o", false,-1);
    tracep->declBit(c+1728,"bready_i", false,-1);
    tracep->declBit(c+1070,"ar_state", false,-1);
    tracep->declBit(c+1071,"r_state", false,-1);
    tracep->declBit(c+1072,"aw_state", false,-1);
    tracep->declBit(c+1073,"w_state", false,-1);
    tracep->declBit(c+1739,"b_state", false,-1);
    tracep->declBus(c+1074,"araddr", false,-1, 31,0);
    tracep->declBus(c+1075,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1076,"wdata", false,-1, 31,0);
    tracep->declBus(c+1077,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1740,"wvalid", false,-1);
    tracep->declBit(c+1078,"flag_waddr", false,-1);
    tracep->declBit(c+1079,"flag_wdata", false,-1);
    tracep->declBit(c+1080,"flag_rdata", false,-1);
    tracep->declBit(c+1081,"flag_raddr", false,-1);
    tracep->declBit(c+1741,"flag_write", false,-1);
    tracep->declBus(c+1082,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1083,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1084,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1085,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1086,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1087,"lfsr_in", false,-1);
    tracep->declBus(c+1088,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1089,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBit(c+1505,"reset_ifu", false,-1);
    tracep->declBus(c+1521,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1633,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1634,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1522,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1635,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1523,"a_in_src_i", false,-1);
    tracep->declBus(c+1524,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1525,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1526,"adder_a_src_i", false,-1);
    tracep->declBit(c+1527,"adder_out_src_i", false,-1);
    tracep->declBus(c+1528,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1529,"MemRead_i", false,-1);
    tracep->declBit(c+1530,"MemWrite_i", false,-1);
    tracep->declBus(c+1531,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1532,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1533,"wb_src_i", false,-1);
    tracep->declBit(c+1534,"csr_write_i", false,-1);
    tracep->declBit(c+1535,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1536,"reg_write_i", false,-1);
    tracep->declBus(c+1537,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1538,"exu_valid_i", false,-1);
    tracep->declBit(c+1032,"exu_ready_o", false,-1);
    tracep->declBus(c+1036,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1037,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1038,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1039,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1508,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1040,"MemRead_o", false,-1);
    tracep->declBit(c+1041,"MemWrite_o", false,-1);
    tracep->declBus(c+1042,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1043,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1044,"wb_src_o", false,-1);
    tracep->declBit(c+1045,"csr_write_o", false,-1);
    tracep->declBit(c+1046,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1047,"reg_write_o", false,-1);
    tracep->declBus(c+1048,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1049,"exu_valid_o", false,-1);
    tracep->declBit(c+1050,"exu_ready_i", false,-1);
    tracep->declBit(c+1051,"npc_valid", false,-1);
    tracep->declBit(c+1052,"rd_exu_valid", false,-1);
    tracep->declBus(c+1091,"pc", false,-1, 31,0);
    tracep->declBus(c+1037,"rs1", false,-1, 31,0);
    tracep->declBus(c+1038,"rs2", false,-1, 31,0);
    tracep->declBus(c+1092,"imm", false,-1, 31,0);
    tracep->declBus(c+1093,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1094,"a_in_src", false,-1);
    tracep->declBus(c+1095,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1096,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1097,"adder_a_src", false,-1);
    tracep->declBit(c+1098,"adder_out_src", false,-1);
    tracep->declBus(c+1099,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1100,"npc_flag", false,-1);
    tracep->declBus(c+1101,"a_in", false,-1, 31,0);
    tracep->declBus(c+1102,"b_in", false,-1, 31,0);
    tracep->declBus(c+1103,"a_out", false,-1, 31,0);
    tracep->declBus(c+1104,"add_out", false,-1, 31,0);
    tracep->declBus(c+1105,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1036,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1508,"npc", false,-1, 31,0);
    tracep->declBit(c+1106,"zero", false,-1);
    tracep->declBus(c+1677,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1742,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1743,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1107,"current_state", false,-1, 1,0);
    tracep->declBus(c+1542,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1101,"a", false,-1, 31,0);
    tracep->declBus(c+1102,"b", false,-1, 31,0);
    tracep->declBus(c+1099,"op", false,-1, 3,0);
    tracep->declBus(c+1036,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1106,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1744,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1037,"d0", false,-1, 31,0);
    tracep->declBus(c+1091,"d1", false,-1, 31,0);
    tracep->declBit(c+1094,"sel", false,-1);
    tracep->declBus(c+1101,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1744,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1038,"d0", false,-1, 31,0);
    tracep->declBus(c+1092,"d1", false,-1, 31,0);
    tracep->declBus(c+1745,"d2", false,-1, 31,0);
    tracep->declBus(c+1093,"d3", false,-1, 31,0);
    tracep->declBus(c+1095,"sel", false,-1, 1,0);
    tracep->declBus(c+1102,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1103,"a", false,-1, 31,0);
    tracep->declBus(c+1092,"b", false,-1, 31,0);
    tracep->declBus(c+1104,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1744,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1091,"d0", false,-1, 31,0);
    tracep->declBus(c+1037,"d1", false,-1, 31,0);
    tracep->declBit(c+1097,"sel", false,-1);
    tracep->declBus(c+1103,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1744,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1104,"d0", false,-1, 31,0);
    tracep->declBus(c+1093,"d1", false,-1, 31,0);
    tracep->declBit(c+1098,"sel", false,-1);
    tracep->declBus(c+1105,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1108,"pc4", false,-1, 31,0);
    tracep->declBus(c+1105,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1096,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1106,"zero", false,-1);
    tracep->declBus(c+1036,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1508,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBit(c+1505,"reset_ifu", false,-1);
    tracep->declBus(c+1519,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1520,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1633,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1634,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1262,"a5", false,-1, 31,0);
    tracep->declBus(c+1506,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1507,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1509,"idu_valid_i", false,-1);
    tracep->declBit(c+1510,"idu_ready_o", false,-1);
    tracep->declBus(c+1521,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1633,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1634,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1522,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1635,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1523,"a_in_src_o", false,-1);
    tracep->declBus(c+1524,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1525,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1526,"adder_a_src_o", false,-1);
    tracep->declBit(c+1527,"adder_out_src_o", false,-1);
    tracep->declBus(c+1528,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1529,"MemRead_o", false,-1);
    tracep->declBit(c+1530,"MemWrite_o", false,-1);
    tracep->declBus(c+1531,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1532,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1533,"wb_src_o", false,-1);
    tracep->declBit(c+1534,"csr_write_o", false,-1);
    tracep->declBit(c+1535,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1536,"reg_write_o", false,-1);
    tracep->declBus(c+1537,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1538,"idu_valid_o", false,-1);
    tracep->declBit(c+1032,"idu_ready_i", false,-1);
    tracep->declBit(c+1539,"csr_write_i", false,-1);
    tracep->declBus(c+1540,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1299+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1514,"fencei", false,-1);
    tracep->declBus(c+1109,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1110,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1111,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1521,"pc", false,-1, 31,0);
    tracep->declBus(c+1543,"inst", false,-1, 31,0);
    tracep->declBus(c+1544,"opcode", false,-1, 6,0);
    tracep->declBus(c+1545,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1546,"opcode_r", false,-1);
    tracep->declBit(c+1547,"opcode_i", false,-1);
    tracep->declBit(c+1548,"opcode_s", false,-1);
    tracep->declBit(c+1549,"opcode_sb", false,-1);
    tracep->declBit(c+1550,"opcode_u", false,-1);
    tracep->declBit(c+1551,"opcode_uj", false,-1);
    tracep->declBit(c+1638,"isRAW", false,-1);
    tracep->declBit(c+1552,"flag", false,-1);
    tracep->declBit(c+1639,"exu_raw", false,-1);
    tracep->declBit(c+1640,"lsu_raw", false,-1);
    tracep->declBit(c+1641,"wbu_raw", false,-1);
    tracep->declBus(c+1677,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1742,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1743,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1553,"current_state", false,-1, 1,0);
    tracep->declBus(c+1554,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1543,"inst", false,-1, 31,0);
    tracep->declBus(c+1528,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1544,"opcode", false,-1, 6,0);
    tracep->declBus(c+1555,"funct3", false,-1, 2,0);
    tracep->declBus(c+1556,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1539,"wen", false,-1);
    tracep->declBus(c+1543,"inst", false,-1, 31,0);
    tracep->declBus(c+1540,"wdata", false,-1, 31,0);
    tracep->declBus(c+1262,"NO", false,-1, 31,0);
    tracep->declBus(c+1521,"pc", false,-1, 31,0);
    tracep->declBus(c+1635,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1303+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1307,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1308,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1309,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1310,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1746,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1747,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1544,"opcode", false,-1, 6,0);
    tracep->declBus(c+1555,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1543,"inst", false,-1, 31,0);
    tracep->declBit(c+1523,"a_in_src", false,-1);
    tracep->declBus(c+1524,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1536,"reg_write", false,-1);
    tracep->declBus(c+1525,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1526,"adder_a_src", false,-1);
    tracep->declBit(c+1529,"MemRead", false,-1);
    tracep->declBit(c+1530,"MemWrite", false,-1);
    tracep->declBus(c+1545,"wmask", false,-1, 7,0);
    tracep->declBit(c+1533,"wb_src", false,-1);
    tracep->declBus(c+1532,"rmask", false,-1, 2,0);
    tracep->declBit(c+1534,"csr_write", false,-1);
    tracep->declBit(c+1527,"adder_out_src", false,-1);
    tracep->declBit(c+1535,"csr_wdata_src", false,-1);
    tracep->declBus(c+1544,"opcode", false,-1, 6,0);
    tracep->declBus(c+1555,"funct3", false,-1, 2,0);
    tracep->declBus(c+1556,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1744,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1543,"inst", false,-1, 31,0);
    tracep->declBus(c+1522,"data", false,-1, 31,0);
    tracep->declBus(c+1544,"opcode", false,-1, 6,0);
    tracep->declBus(c+1555,"funct3", false,-1, 2,0);
    tracep->declBus(c+1556,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+1511,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1678,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1679,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1670,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1677,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1512,"arvalid_o", false,-1);
    tracep->declBit(c+119,"arready_i", false,-1);
    tracep->declBus(c+120,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+121,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+122,"rlast_i", false,-1);
    tracep->declBus(c+123,"rid_i", false,-1, 3,0);
    tracep->declBit(c+124,"rvalid_i", false,-1);
    tracep->declBit(c+1513,"rready_o", false,-1);
    tracep->declBus(c+1508,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1051,"npc_valid", false,-1);
    tracep->declBit(c+1505,"reset_o", false,-1);
    tracep->declBus(c+1506,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1507,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1509,"ifu_valid_o", false,-1);
    tracep->declBit(c+1510,"ifu_ready_i", false,-1);
    tracep->declBit(c+1018,"bus_busy", false,-1);
    tracep->declBus(c+1557,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1669,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1666,"S_WAIT_R", false,-1, 2,0);
    tracep->declBus(c+1670,"S_OUT", false,-1, 2,0);
    tracep->declBus(c+1671,"S_FLUSH", false,-1, 2,0);
    tracep->declBus(c+1557,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1558,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1559,"inst_buf", false,-1, 31,0);
    tracep->declBus(c+1560,"state", false,-1, 2,0);
    tracep->declBit(c+1561,"ctrl_hazard", false,-1);
    tracep->declBit(c+1562,"ar_inflight", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+1036,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1037,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1038,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1039,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1040,"MemRead_i", false,-1);
    tracep->declBit(c+1041,"MemWrite_i", false,-1);
    tracep->declBus(c+1042,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1043,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1044,"wb_src_i", false,-1);
    tracep->declBit(c+1045,"csr_write_i", false,-1);
    tracep->declBit(c+1046,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1047,"reg_write_i", false,-1);
    tracep->declBus(c+1048,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1049,"lsu_valid_i", false,-1);
    tracep->declBit(c+1050,"lsu_ready_o", false,-1);
    tracep->declBus(c+1053,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1054,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1055,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1056,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1057,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1058,"wb_src_o", false,-1);
    tracep->declBit(c+1059,"csr_write_o", false,-1);
    tracep->declBit(c+1060,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1061,"reg_write_o", false,-1);
    tracep->declBus(c+1062,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1063,"lsu_valid_o", false,-1);
    tracep->declBit(c+1064,"lsu_ready_i", false,-1);
    tracep->declBus(c+1019,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1678,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1679,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1020,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1677,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1021,"arvalid_o", false,-1);
    tracep->declBit(c+125,"arready_i", false,-1);
    tracep->declBus(c+126,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+127,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+128,"rlast_i", false,-1);
    tracep->declBus(c+129,"rid_i", false,-1, 3,0);
    tracep->declBit(c+130,"rvalid_i", false,-1);
    tracep->declBit(c+1022,"rready_o", false,-1);
    tracep->declBus(c+1007,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1678,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1679,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1008,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1677,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1012,"awvalid_o", false,-1);
    tracep->declBit(c+111,"awready_i", false,-1);
    tracep->declBus(c+1009,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1010,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1011,"wlast_o", false,-1);
    tracep->declBit(c+1013,"wvalid_o", false,-1);
    tracep->declBit(c+1625,"wready_i", false,-1);
    tracep->declBus(c+1626,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1408,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1407,"bvalid_i", false,-1);
    tracep->declBit(c+1014,"bready_o", false,-1);
    tracep->declBit(c+1018,"bus_busy", false,-1);
    tracep->declBit(c+1065,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1053,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1054,"rs1", false,-1, 31,0);
    tracep->declBus(c+1748,"rs2", false,-1, 31,0);
    tracep->declBus(c+1749,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1057,"rmask", false,-1, 2,0);
    tracep->declBus(c+1112,"wmask", false,-1, 3,0);
    tracep->declBit(c+1113,"flag", false,-1);
    tracep->declBit(c+1750,"wvalid_tmp", false,-1);
    tracep->declBit(c+1114,"MemRead", false,-1);
    tracep->declBit(c+1115,"MemWrite", false,-1);
    tracep->declBit(c+1021,"arvalid", false,-1);
    tracep->declBus(c+1019,"araddr", false,-1, 31,0);
    tracep->declBit(c+1022,"rready", false,-1);
    tracep->declBus(c+1007,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1012,"awvalid", false,-1);
    tracep->declBus(c+1009,"wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"wvalid", false,-1);
    tracep->declBit(c+1014,"bready", false,-1);
    tracep->declBit(c+1116,"read_mem", false,-1);
    tracep->declBit(c+1117,"write_mem", false,-1);
    tracep->declBus(c+1677,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1742,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1743,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1118,"current_state", false,-1, 1,0);
    tracep->declBus(c+1642,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1751,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1744,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBus(c+1033,"wdata", false,-1, 31,0);
    tracep->declBus(c+1034,"waddr", false,-1, 4,0);
    tracep->declBit(c+1035,"wen", false,-1);
    tracep->declBus(c+1519,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1633,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1520,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1634,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1262,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1311+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1343+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+1053,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1054,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1055,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1056,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1057,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1058,"wb_src_i", false,-1);
    tracep->declBit(c+1059,"csr_write_i", false,-1);
    tracep->declBit(c+1060,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1061,"reg_write_i", false,-1);
    tracep->declBus(c+1062,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1063,"wbu_valid_i", false,-1);
    tracep->declBit(c+1064,"wbu_ready_o", false,-1);
    tracep->declBus(c+1540,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1033,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1539,"csr_write_o", false,-1);
    tracep->declBit(c+1035,"reg_write_o", false,-1);
    tracep->declBus(c+1034,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1066,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1119,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1120,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1121,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1122,"rs1", false,-1, 31,0);
    tracep->declBus(c+1123,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1124,"rmask", false,-1, 2,0);
    tracep->declBit(c+1125,"wb_src", false,-1);
    tracep->declBit(c+1126,"csr_wdata_src", false,-1);
    tracep->declBit(c+1127,"difftest_check", false,-1);
    tracep->declBit(c+1128,"difftest_check_flag", false,-1);
    tracep->declBus(c+1677,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1742,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1743,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1129,"current_state", false,-1, 1,0);
    tracep->declBus(c+1130,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1744,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1122,"d0", false,-1, 31,0);
    tracep->declBus(c+1123,"d1", false,-1, 31,0);
    tracep->declBit(c+1126,"sel", false,-1);
    tracep->declBus(c+1540,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1120,"read_data", false,-1, 31,0);
    tracep->declBus(c+1131,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1124,"rmask", false,-1, 2,0);
    tracep->declBus(c+1119,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1132,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1133,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1134,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1135,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1136,"byte3", false,-1, 31,0);
    tracep->declBus(c+1137,"byte2", false,-1, 31,0);
    tracep->declBus(c+1138,"byte1", false,-1, 31,0);
    tracep->declBus(c+1139,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1744,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1121,"d0", false,-1, 31,0);
    tracep->declBus(c+1119,"d1", false,-1, 31,0);
    tracep->declBit(c+1125,"sel", false,-1);
    tracep->declBus(c+1033,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1632,"rst_n", false,-1);
    tracep->declBus(c+1515,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1678,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1679,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1516,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1677,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1517,"axi_arvalid_i", false,-1);
    tracep->declBit(c+131,"axi_arready_o", false,-1);
    tracep->declBus(c+132,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+133,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+134,"axi_rlast_o", false,-1);
    tracep->declBus(c+135,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+136,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1518,"axi_rready_i", false,-1);
    tracep->declBus(c+1007,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1678,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1679,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1008,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1677,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1012,"axi_awvalid_i", false,-1);
    tracep->declBit(c+111,"axi_awready_o", false,-1);
    tracep->declBus(c+1009,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1010,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1011,"axi_wlast_i", false,-1);
    tracep->declBit(c+1013,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1625,"axi_wready_o", false,-1);
    tracep->declBus(c+1626,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1408,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1407,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1014,"axi_bready_i", false,-1);
    tracep->declBus(c+46,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+45,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+47,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+48,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+49,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+60,"sram_arvalid_o", false,-1);
    tracep->declBit(c+112,"sram_arready_i", false,-1);
    tracep->declBus(c+1627,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1628,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1411,"sram_rlast_i", false,-1);
    tracep->declBus(c+1410,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1409,"sram_rvalid_i", false,-1);
    tracep->declBit(c+61,"sram_rready_o", false,-1);
    tracep->declBus(c+1007,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1678,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1679,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1008,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1677,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1012,"sram_awvalid_o", false,-1);
    tracep->declBit(c+111,"sram_awready_i", false,-1);
    tracep->declBus(c+1009,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1010,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1011,"sram_wlast_o", false,-1);
    tracep->declBit(c+1013,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1625,"sram_wready_i", false,-1);
    tracep->declBus(c+1626,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1408,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1407,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1014,"sram_bready_o", false,-1);
    tracep->declBus(c+73,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+74,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+75,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+76,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+77,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+78,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1023,"clint_arready_i", false,-1);
    tracep->declBus(c+1024,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1025,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1026,"clint_rlast_i", false,-1);
    tracep->declBus(c+1678,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1027,"clint_rvalid_i", false,-1);
    tracep->declBit(c+79,"clint_rready_o", false,-1);
    tracep->declBus(c+1718,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1719,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1720,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1721,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1722,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1723,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1028,"clint_awready_i", false,-1);
    tracep->declBus(c+1724,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1725,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1726,"clint_wlast_o", false,-1);
    tracep->declBit(c+1727,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1029,"clint_wready_i", false,-1);
    tracep->declBus(c+1030,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1678,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1031,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1728,"clint_bready_o", false,-1);
    tracep->declBit(c+80,"ar_switch", false,-1);
    tracep->declBit(c+81,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"io_d", false,-1);
    tracep->declBit(c+604,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"io_d", false,-1);
    tracep->declBit(c+604,"io_q", false,-1);
    tracep->declBit(c+604,"sync_0", false,-1);
    tracep->declBit(c+605,"sync_1", false,-1);
    tracep->declBit(c+606,"sync_2", false,-1);
    tracep->declBit(c+607,"sync_3", false,-1);
    tracep->declBit(c+608,"sync_4", false,-1);
    tracep->declBit(c+609,"sync_5", false,-1);
    tracep->declBit(c+610,"sync_6", false,-1);
    tracep->declBit(c+611,"sync_7", false,-1);
    tracep->declBit(c+612,"sync_8", false,-1);
    tracep->declBit(c+613,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1225,"auto_in_psel", false,-1);
    tracep->declBit(c+1226,"auto_in_penable", false,-1);
    tracep->declBit(c+1215,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1214,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+708,"auto_in_pready", false,-1);
    tracep->declBit(c+1675,"auto_in_pslverr", false,-1);
    tracep->declBus(c+709,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1588,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1589,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1590,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1591,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1592,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1593,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1594,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1595,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1596,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1597,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1375,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1225,"in_psel", false,-1);
    tracep->declBit(c+1226,"in_penable", false,-1);
    tracep->declBus(c+1214,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1215,"in_pwrite", false,-1);
    tracep->declBus(c+1216,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+708,"in_pready", false,-1);
    tracep->declBus(c+709,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1675,"in_pslverr", false,-1);
    tracep->declBus(c+1588,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1589,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1590,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1591,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1592,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1593,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1594,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1595,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1596,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1597,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+718,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+709,"rdata", false,-1, 31,0);
    tracep->declBus(c+719,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+708,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+720,"num", false,-1, 3,0);
    tracep->declBus(c+1590,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+721,"num", false,-1, 3,0);
    tracep->declBus(c+1591,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+722,"num", false,-1, 3,0);
    tracep->declBus(c+1592,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+723,"num", false,-1, 3,0);
    tracep->declBus(c+1593,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+724,"num", false,-1, 3,0);
    tracep->declBus(c+1594,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+725,"num", false,-1, 3,0);
    tracep->declBus(c+1595,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+726,"num", false,-1, 3,0);
    tracep->declBus(c+1596,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+727,"num", false,-1, 3,0);
    tracep->declBus(c+1597,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1222,"auto_in_psel", false,-1);
    tracep->declBit(c+1223,"auto_in_penable", false,-1);
    tracep->declBit(c+1215,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1214,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+170,"auto_in_pready", false,-1);
    tracep->declBit(c+1675,"auto_in_pslverr", false,-1);
    tracep->declBus(c+171,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1598,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1599,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1375,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1222,"in_psel", false,-1);
    tracep->declBit(c+1223,"in_penable", false,-1);
    tracep->declBus(c+1214,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1215,"in_pwrite", false,-1);
    tracep->declBus(c+1216,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+170,"in_pready", false,-1);
    tracep->declBus(c+171,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1675,"in_pslverr", false,-1);
    tracep->declBit(c+1598,"ps2_clk", false,-1);
    tracep->declBit(c+1599,"ps2_data", false,-1);
    tracep->declBus(c+614,"data_r", false,-1, 7,0);
    tracep->declBus(c+615,"old_data", false,-1, 7,0);
    tracep->declBus(c+616,"data_asic", false,-1, 7,0);
    tracep->declBus(c+617,"buffer", false,-1, 7,0);
    tracep->declBit(c+618,"ready", false,-1);
    tracep->declBit(c+619,"nextdata_n", false,-1);
    tracep->declBit(c+620,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1643,"clrn", false,-1);
    tracep->declBit(c+1598,"ps2_clk", false,-1);
    tracep->declBit(c+1599,"ps2_data", false,-1);
    tracep->declBit(c+619,"nextdata_n", false,-1);
    tracep->declBus(c+617,"data", false,-1, 7,0);
    tracep->declBit(c+618,"ready", false,-1);
    tracep->declBit(c+620,"overflow", false,-1);
    tracep->declBus(c+621,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+622+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+630,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+631,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+632,"count", false,-1, 3,0);
    tracep->declBus(c+633,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+634,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1487,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1488,"auto_in_wvalid", false,-1);
    tracep->declBit(c+400,"auto_in_arready", false,-1);
    tracep->declBit(c+67,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+401,"auto_in_rvalid", false,-1);
    tracep->declBus(c+402,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+403,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+401,"state", false,-1);
    tracep->declBus(c+403,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+402,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+82,"raddr", false,-1, 31,0);
    tracep->declBit(c+83,"ren", false,-1);
    tracep->declBus(c+84,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1227,"auto_in_psel", false,-1);
    tracep->declBit(c+1228,"auto_in_penable", false,-1);
    tracep->declBit(c+1215,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1211,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1214,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_in_pready", false,-1);
    tracep->declBit(c+1675,"auto_in_pslverr", false,-1);
    tracep->declBus(c+172,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1609,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1580,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1610,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1211,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1227,"in_psel", false,-1);
    tracep->declBit(c+1228,"in_penable", false,-1);
    tracep->declBus(c+1214,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1215,"in_pwrite", false,-1);
    tracep->declBus(c+1216,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"in_pready", false,-1);
    tracep->declBus(c+172,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1675,"in_pslverr", false,-1);
    tracep->declBit(c+1609,"qspi_sck", false,-1);
    tracep->declBit(c+1580,"qspi_ce_n", false,-1);
    tracep->declBus(c+1610,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1610,"din", false,-1, 3,0);
    tracep->declBus(c+1644,"dout", false,-1, 3,0);
    tracep->declBus(c+1581,"douten", false,-1, 3,0);
    tracep->declBit(c+1645,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1586,"clk_i", false,-1);
    tracep->declBit(c+1587,"rst_i", false,-1);
    tracep->declBus(c+1211,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1216,"dat_i", false,-1, 31,0);
    tracep->declBus(c+172,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1217,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1227,"cyc_i", false,-1);
    tracep->declBit(c+1227,"stb_i", false,-1);
    tracep->declBit(c+1645,"ack_o", false,-1);
    tracep->declBit(c+1215,"we_i", false,-1);
    tracep->declBit(c+1609,"sck", false,-1);
    tracep->declBit(c+1580,"ce_n", false,-1);
    tracep->declBus(c+1610,"din", false,-1, 3,0);
    tracep->declBus(c+1644,"dout", false,-1, 3,0);
    tracep->declBus(c+1581,"douten", false,-1, 3,0);
    tracep->declBus(c+1677,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1742,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1743,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+728,"mr_sck", false,-1);
    tracep->declBit(c+729,"mr_ce_n", false,-1);
    tracep->declBus(c+1610,"mr_din", false,-1, 3,0);
    tracep->declBus(c+730,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+731,"mr_doe", false,-1);
    tracep->declBit(c+732,"mw_sck", false,-1);
    tracep->declBit(c+733,"mw_ce_n", false,-1);
    tracep->declBus(c+1610,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1429,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+734,"mw_doe", false,-1);
    tracep->declBit(c+1582,"mr_rd", false,-1);
    tracep->declBit(c+735,"mr_done", false,-1);
    tracep->declBit(c+1583,"mw_wr", false,-1);
    tracep->declBit(c+1430,"mw_done", false,-1);
    tracep->declBit(c+1227,"wb_valid", false,-1);
    tracep->declBit(c+1376,"wb_we", false,-1);
    tracep->declBit(c+1377,"wb_re", false,-1);
    tracep->declBus(c+1440,"state", false,-1, 1,0);
    tracep->declBus(c+1646,"nstate", false,-1, 1,0);
    tracep->declBus(c+1647,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1648,"qpi_sck", false,-1);
    tracep->declBus(c+1378,"size", false,-1, 2,0);
    tracep->declBus(c+1379,"byte0", false,-1, 7,0);
    tracep->declBus(c+1380,"byte1", false,-1, 7,0);
    tracep->declBus(c+1381,"byte2", false,-1, 7,0);
    tracep->declBus(c+1382,"byte3", false,-1, 7,0);
    tracep->declBus(c+1649,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1643,"rst_n", false,-1);
    tracep->declBus(c+1383,"addr", false,-1, 23,0);
    tracep->declBit(c+1582,"rd", false,-1);
    tracep->declBus(c+1672,"size", false,-1, 2,0);
    tracep->declBit(c+735,"done", false,-1);
    tracep->declBus(c+172,"line", false,-1, 31,0);
    tracep->declBit(c+728,"sck", false,-1);
    tracep->declBit(c+729,"ce_n", false,-1);
    tracep->declBus(c+1610,"din", false,-1, 3,0);
    tracep->declBus(c+730,"dout", false,-1, 3,0);
    tracep->declBit(c+731,"douten", false,-1);
    tracep->declBus(c+1737,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1738,"READ", false,-1, 0,0);
    tracep->declBus(c+1752,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+736,"state", false,-1);
    tracep->declBit(c+1584,"nstate", false,-1);
    tracep->declBus(c+737,"counter", false,-1, 7,0);
    tracep->declBus(c+738,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+635+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1753,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+739,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1643,"rst_n", false,-1);
    tracep->declBus(c+1384,"addr", false,-1, 23,0);
    tracep->declBus(c+1649,"line", false,-1, 31,0);
    tracep->declBus(c+1378,"size", false,-1, 2,0);
    tracep->declBit(c+1583,"wr", false,-1);
    tracep->declBit(c+1430,"done", false,-1);
    tracep->declBit(c+732,"sck", false,-1);
    tracep->declBit(c+733,"ce_n", false,-1);
    tracep->declBus(c+1610,"din", false,-1, 3,0);
    tracep->declBus(c+1429,"dout", false,-1, 3,0);
    tracep->declBit(c+734,"douten", false,-1);
    tracep->declBus(c+1737,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1738,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1385,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+740,"state", false,-1);
    tracep->declBit(c+1585,"nstate", false,-1);
    tracep->declBus(c+741,"counter", false,-1, 7,0);
    tracep->declBus(c+742,"saddr", false,-1, 23,0);
    tracep->declBus(c+1754,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+102,"auto_in_awready", false,-1);
    tracep->declBit(c+1464,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1678,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1679,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"auto_in_wready", false,-1);
    tracep->declBit(c+1465,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1009,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"auto_in_wlast", false,-1);
    tracep->declBit(c+1621,"auto_in_bready", false,-1);
    tracep->declBit(c+717,"auto_in_bvalid", false,-1);
    tracep->declBus(c+714,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1677,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+44,"auto_in_arvalid", false,-1);
    tracep->declBus(c+45,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1620,"auto_in_rready", false,-1);
    tracep->declBit(c+713,"auto_in_rvalid", false,-1);
    tracep->declBus(c+714,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+715,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1677,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+716,"auto_in_rlast", false,-1);
    tracep->declBit(c+1611,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1437,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+703,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+704,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+705,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+706,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1612,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1438,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1439,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1498,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+102,"in_awready", false,-1);
    tracep->declBit(c+1464,"in_awvalid", false,-1);
    tracep->declBus(c+1007,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1678,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1679,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1008,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1677,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+103,"in_wready", false,-1);
    tracep->declBit(c+1465,"in_wvalid", false,-1);
    tracep->declBus(c+1009,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1010,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"in_wlast", false,-1);
    tracep->declBit(c+1621,"in_bready", false,-1);
    tracep->declBit(c+717,"in_bvalid", false,-1);
    tracep->declBus(c+1677,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+714,"in_bid", false,-1, 3,0);
    tracep->declBit(c+101,"in_arready", false,-1);
    tracep->declBit(c+44,"in_arvalid", false,-1);
    tracep->declBus(c+46,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+45,"in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+48,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+49,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1620,"in_rready", false,-1);
    tracep->declBit(c+713,"in_rvalid", false,-1);
    tracep->declBus(c+1677,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+715,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+716,"in_rlast", false,-1);
    tracep->declBus(c+714,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1611,"sdram_clk", false,-1);
    tracep->declBit(c+1437,"sdram_cke", false,-1);
    tracep->declBit(c+703,"sdram_cs", false,-1);
    tracep->declBit(c+704,"sdram_ras", false,-1);
    tracep->declBit(c+705,"sdram_cas", false,-1);
    tracep->declBit(c+706,"sdram_we", false,-1);
    tracep->declBus(c+1612,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1438,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1439,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1498,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+743,"sdram_dout_en", false,-1);
    tracep->declBus(c+744,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1586,"clk_i", false,-1);
    tracep->declBit(c+1587,"rst_i", false,-1);
    tracep->declBit(c+1464,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1007,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1678,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1679,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1677,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1465,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1009,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1010,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1011,"inport_wlast_i", false,-1);
    tracep->declBit(c+1621,"inport_bready_i", false,-1);
    tracep->declBit(c+44,"inport_arvalid_i", false,-1);
    tracep->declBus(c+46,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+45,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+47,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+49,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1620,"inport_rready_i", false,-1);
    tracep->declBus(c+1498,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+102,"inport_awready_o", false,-1);
    tracep->declBit(c+103,"inport_wready_o", false,-1);
    tracep->declBit(c+717,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1677,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+714,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+101,"inport_arready_o", false,-1);
    tracep->declBit(c+713,"inport_rvalid_o", false,-1);
    tracep->declBus(c+715,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1677,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+714,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+716,"inport_rlast_o", false,-1);
    tracep->declBit(c+1611,"sdram_clk_o", false,-1);
    tracep->declBit(c+1437,"sdram_cke_o", false,-1);
    tracep->declBit(c+703,"sdram_cs_o", false,-1);
    tracep->declBit(c+704,"sdram_ras_o", false,-1);
    tracep->declBit(c+705,"sdram_cas_o", false,-1);
    tracep->declBit(c+706,"sdram_we_o", false,-1);
    tracep->declBus(c+1439,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1612,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1438,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+744,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+743,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1664,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1755,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1680,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1756,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+137,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+138,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_w", false,-1);
    tracep->declBit(c+1441,"ram_accept_w", false,-1);
    tracep->declBus(c+1009,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+745,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1650,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+746,"ram_ack_w", false,-1);
    tracep->declBit(c+1675,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1586,"clk_i", false,-1);
    tracep->declBit(c+1587,"rst_i", false,-1);
    tracep->declBit(c+1464,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1007,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1678,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1679,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1677,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1465,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1009,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1010,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1011,"axi_wlast_i", false,-1);
    tracep->declBit(c+1621,"axi_bready_i", false,-1);
    tracep->declBit(c+44,"axi_arvalid_i", false,-1);
    tracep->declBus(c+46,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+45,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+47,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+49,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1620,"axi_rready_i", false,-1);
    tracep->declBit(c+1441,"ram_accept_i", false,-1);
    tracep->declBit(c+746,"ram_ack_i", false,-1);
    tracep->declBit(c+1675,"ram_error_i", false,-1);
    tracep->declBus(c+745,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+102,"axi_awready_o", false,-1);
    tracep->declBit(c+103,"axi_wready_o", false,-1);
    tracep->declBit(c+717,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1677,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+714,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+101,"axi_arready_o", false,-1);
    tracep->declBit(c+713,"axi_rvalid_o", false,-1);
    tracep->declBus(c+715,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1677,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+714,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+716,"axi_rlast_o", false,-1);
    tracep->declBus(c+138,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_o", false,-1);
    tracep->declBus(c+1650,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+137,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1009,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+747,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+748,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+749,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+750,"req_rd_q", false,-1);
    tracep->declBit(c+751,"req_wr_q", false,-1);
    tracep->declBus(c+752,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+753,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+754,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+755,"req_prio_q", false,-1);
    tracep->declBit(c+756,"req_hold_rd_q", false,-1);
    tracep->declBit(c+757,"req_hold_wr_q", false,-1);
    tracep->declBit(c+758,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+140,"req_push_w", false,-1);
    tracep->declBus(c+1651,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+759,"req_out_valid_w", false,-1);
    tracep->declBus(c+760,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+141,"resp_accept_w", false,-1);
    tracep->declBit(c+761,"resp_is_write_w", false,-1);
    tracep->declBit(c+762,"resp_is_read_w", false,-1);
    tracep->declBit(c+716,"resp_is_last_w", false,-1);
    tracep->declBus(c+714,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+763,"resp_valid_w", false,-1);
    tracep->declBit(c+764,"write_prio_w", false,-1);
    tracep->declBit(c+765,"read_prio_w", false,-1);
    tracep->declBit(c+142,"write_active_w", false,-1);
    tracep->declBit(c+139,"read_active_w", false,-1);
    tracep->declBus(c+137,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1652,"wr_w", false,-1);
    tracep->declBit(c+139,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1757,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1758,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1756,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1586,"clk_i", false,-1);
    tracep->declBit(c+1587,"rst_i", false,-1);
    tracep->declBus(c+1651,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+140,"push_i", false,-1);
    tracep->declBit(c+141,"pop_i", false,-1);
    tracep->declBus(c+760,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+758,"accept_o", false,-1);
    tracep->declBit(c+759,"valid_o", false,-1);
    tracep->declBus(c+1759,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+766+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+770,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+771,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+772,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1744,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1758,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1756,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1586,"clk_i", false,-1);
    tracep->declBit(c+1587,"rst_i", false,-1);
    tracep->declBus(c+745,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+746,"push_i", false,-1);
    tracep->declBit(c+141,"pop_i", false,-1);
    tracep->declBus(c+715,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+773,"accept_o", false,-1);
    tracep->declBit(c+763,"valid_o", false,-1);
    tracep->declBus(c+1759,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+774+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+778,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+779,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+780,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1586,"clk_i", false,-1);
    tracep->declBit(c+1587,"rst_i", false,-1);
    tracep->declBus(c+138,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+139,"inport_rd_i", false,-1);
    tracep->declBus(c+1650,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+137,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1009,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1498,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1441,"inport_accept_o", false,-1);
    tracep->declBit(c+746,"inport_ack_o", false,-1);
    tracep->declBit(c+1675,"inport_error_o", false,-1);
    tracep->declBus(c+745,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1611,"sdram_clk_o", false,-1);
    tracep->declBit(c+1437,"sdram_cke_o", false,-1);
    tracep->declBit(c+703,"sdram_cs_o", false,-1);
    tracep->declBit(c+704,"sdram_ras_o", false,-1);
    tracep->declBit(c+705,"sdram_cas_o", false,-1);
    tracep->declBit(c+706,"sdram_we_o", false,-1);
    tracep->declBus(c+1439,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1612,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1438,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+744,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+743,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1664,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1755,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1680,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1756,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1756,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1758,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1758,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1760,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1761,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1762,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1763,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1758,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1764,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1765,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1766,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1767,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1768,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1769,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1770,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1678,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1771,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1758,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1678,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1770,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1769,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1765,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1767,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1766,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1768,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1764,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1772,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1773,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1774,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1774,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1744,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1774,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1756,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1756,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1757,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+137,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+138,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+139,"ram_rd_w", false,-1);
    tracep->declBit(c+1441,"ram_accept_w", false,-1);
    tracep->declBus(c+1009,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+745,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+746,"ram_ack_w", false,-1);
    tracep->declBit(c+143,"ram_req_w", false,-1);
    tracep->declBus(c+781,"command_q", false,-1, 3,0);
    tracep->declBus(c+1442,"addr_q", false,-1, 12,0);
    tracep->declBus(c+744,"data_q", false,-1, 31,0);
    tracep->declBit(c+782,"data_rd_en_q", false,-1);
    tracep->declBus(c+1439,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1437,"cke_q", false,-1);
    tracep->declBus(c+1438,"bank_q", false,-1, 1,0);
    tracep->declBus(c+745,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+783,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1498,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+784,"refresh_q", false,-1);
    tracep->declBus(c+785,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+786+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1443,"state_q", false,-1, 3,0);
    tracep->declBus(c+144,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+145,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+790,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+791,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+146,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+147,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+148,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1758,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+792,"delay_q", false,-1, 3,0);
    tracep->declBus(c+149,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1775,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1444,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+793,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+794,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+795,"idx", false,-1, 31,0);
    tracep->declBus(c+796,"rd_q", false,-1, 3,0);
    tracep->declBit(c+746,"ack_q", false,-1);
    tracep->declArray(c+1445,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1232,"auto_in_psel", false,-1);
    tracep->declBit(c+1233,"auto_in_penable", false,-1);
    tracep->declBit(c+1215,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1221,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1214,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+710,"auto_in_pready", false,-1);
    tracep->declBit(c+711,"auto_in_pslverr", false,-1);
    tracep->declBus(c+712,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+702,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1435,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1436,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1608,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1776,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1777,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1778,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1386,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1232,"in_psel", false,-1);
    tracep->declBit(c+1233,"in_penable", false,-1);
    tracep->declBus(c+1214,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1215,"in_pwrite", false,-1);
    tracep->declBus(c+1216,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+710,"in_pready", false,-1);
    tracep->declBus(c+712,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+711,"in_pslverr", false,-1);
    tracep->declBit(c+702,"spi_sck", false,-1);
    tracep->declBus(c+1435,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1436,"spi_mosi", false,-1);
    tracep->declBit(c+1608,"spi_miso", false,-1);
    tracep->declBit(c+797,"spi_irq_out", false,-1);
    tracep->declBus(c+1779,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1780,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1779,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1781,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1782,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1783,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1678,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1770,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1769,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1765,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1767,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1766,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1768,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1764,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1772,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1773,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1784,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+798,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1431,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+799,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+800,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+801,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+802,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+803,"wb_we_i", false,-1);
    tracep->declBit(c+804,"wb_stb_i", false,-1);
    tracep->declBit(c+805,"wb_cyc_i", false,-1);
    tracep->declBit(c+806,"wb_ack_o", false,-1);
    tracep->declBit(c+1675,"wb_err_o", false,-1);
    tracep->declBit(c+807,"wb_int_o", false,-1);
    tracep->declBit(c+808,"done", false,-1);
    tracep->declBus(c+809,"paddr", false,-1, 31,0);
    tracep->declQuad(c+810,"data", false,-1, 63,0);
    tracep->declBit(c+812,"is_flash_access", false,-1);
    tracep->declBus(c+813,"tmp", false,-1, 31,0);
    tracep->declQuad(c+814,"tmp64", false,-1, 63,0);
    tracep->declBus(c+816,"counter", false,-1, 7,0);
    tracep->declBit(c+817,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1785,"Tp", false,-1, 31,0);
    tracep->declBit(c+1586,"wb_clk_i", false,-1);
    tracep->declBit(c+1587,"wb_rst_i", false,-1);
    tracep->declBus(c+799,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+800,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+801,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+802,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+803,"wb_we_i", false,-1);
    tracep->declBit(c+804,"wb_stb_i", false,-1);
    tracep->declBit(c+805,"wb_cyc_i", false,-1);
    tracep->declBit(c+806,"wb_ack_o", false,-1);
    tracep->declBit(c+1675,"wb_err_o", false,-1);
    tracep->declBit(c+807,"wb_int_o", false,-1);
    tracep->declBus(c+1435,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+702,"sclk_pad_o", false,-1);
    tracep->declBit(c+1436,"mosi_pad_o", false,-1);
    tracep->declBit(c+1608,"miso_pad_i", false,-1);
    tracep->declBus(c+818,"divider", false,-1, 15,0);
    tracep->declBus(c+819,"ctrl", false,-1, 13,0);
    tracep->declBus(c+820,"ss", false,-1, 7,0);
    tracep->declBus(c+821,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+822,"rx", false,-1, 127,0);
    tracep->declBit(c+826,"rx_negedge", false,-1);
    tracep->declBit(c+827,"tx_negedge", false,-1);
    tracep->declBus(c+828,"char_len", false,-1, 6,0);
    tracep->declBit(c+829,"go", false,-1);
    tracep->declBit(c+830,"lsb", false,-1);
    tracep->declBit(c+831,"ie", false,-1);
    tracep->declBit(c+832,"ass", false,-1);
    tracep->declBit(c+833,"spi_divider_sel", false,-1);
    tracep->declBit(c+834,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+835,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+836,"spi_ss_sel", false,-1);
    tracep->declBit(c+837,"tip", false,-1);
    tracep->declBit(c+838,"pos_edge", false,-1);
    tracep->declBit(c+839,"neg_edge", false,-1);
    tracep->declBit(c+840,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1785,"Tp", false,-1, 31,0);
    tracep->declBit(c+1586,"clk_in", false,-1);
    tracep->declBit(c+1587,"rst", false,-1);
    tracep->declBit(c+837,"enable", false,-1);
    tracep->declBit(c+829,"go", false,-1);
    tracep->declBit(c+840,"last_clk", false,-1);
    tracep->declBus(c+818,"divider", false,-1, 15,0);
    tracep->declBit(c+702,"clk_out", false,-1);
    tracep->declBit(c+838,"pos_edge", false,-1);
    tracep->declBit(c+839,"neg_edge", false,-1);
    tracep->declBus(c+841,"cnt", false,-1, 15,0);
    tracep->declBit(c+842,"cnt_zero", false,-1);
    tracep->declBit(c+843,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1785,"Tp", false,-1, 31,0);
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1587,"rst", false,-1);
    tracep->declBus(c+844,"latch", false,-1, 3,0);
    tracep->declBus(c+802,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+828,"len", false,-1, 6,0);
    tracep->declBit(c+830,"lsb", false,-1);
    tracep->declBit(c+829,"go", false,-1);
    tracep->declBit(c+838,"pos_edge", false,-1);
    tracep->declBit(c+839,"neg_edge", false,-1);
    tracep->declBit(c+826,"rx_negedge", false,-1);
    tracep->declBit(c+827,"tx_negedge", false,-1);
    tracep->declBit(c+837,"tip", false,-1);
    tracep->declBit(c+840,"last", false,-1);
    tracep->declBus(c+800,"p_in", false,-1, 31,0);
    tracep->declArray(c+822,"p_out", false,-1, 127,0);
    tracep->declBit(c+702,"s_clk", false,-1);
    tracep->declBit(c+1608,"s_in", false,-1);
    tracep->declBit(c+1436,"s_out", false,-1);
    tracep->declBus(c+845,"cnt", false,-1, 7,0);
    tracep->declArray(c+822,"data", false,-1, 127,0);
    tracep->declBus(c+846,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+847,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+848,"rx_clk", false,-1);
    tracep->declBit(c+849,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1229,"auto_in_psel", false,-1);
    tracep->declBit(c+1230,"auto_in_penable", false,-1);
    tracep->declBit(c+1215,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1224,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1214,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1231,"auto_in_pready", false,-1);
    tracep->declBit(c+1675,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1617,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1606,"uart_rx", false,-1);
    tracep->declBit(c+1607,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1229,"in_psel", false,-1);
    tracep->declBit(c+1230,"in_penable", false,-1);
    tracep->declBus(c+1214,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1231,"in_pready", false,-1);
    tracep->declBit(c+1675,"in_pslverr", false,-1);
    tracep->declBus(c+1375,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1215,"in_pwrite", false,-1);
    tracep->declBus(c+1617,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1216,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1606,"uart_rx", false,-1);
    tracep->declBit(c+1607,"uart_tx", false,-1);
    tracep->declBit(c+850,"rtsn", false,-1);
    tracep->declBit(c+1675,"ctsn", false,-1);
    tracep->declBit(c+851,"dtr_pad_o", false,-1);
    tracep->declBit(c+1675,"dsr_pad_i", false,-1);
    tracep->declBit(c+1675,"ri_pad_i", false,-1);
    tracep->declBit(c+1675,"dcd_pad_i", false,-1);
    tracep->declBit(c+852,"interrupt", false,-1);
    tracep->declBit(c+1653,"reg_we", false,-1);
    tracep->declBit(c+1654,"reg_re", false,-1);
    tracep->declBus(c+1387,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1388,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+639,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1432,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+853,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1587,"wb_rst_i", false,-1);
    tracep->declBus(c+1387,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1389,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1432,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1653,"wb_we_i", false,-1);
    tracep->declBit(c+1654,"wb_re_i", false,-1);
    tracep->declBit(c+1607,"stx_pad_o", false,-1);
    tracep->declBit(c+1606,"srx_pad_i", false,-1);
    tracep->declBus(c+1772,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+853,"rts_pad_o", false,-1);
    tracep->declBit(c+851,"dtr_pad_o", false,-1);
    tracep->declBit(c+852,"int_o", false,-1);
    tracep->declBit(c+854,"enable", false,-1);
    tracep->declBit(c+855,"srx_pad", false,-1);
    tracep->declBus(c+856,"ier", false,-1, 3,0);
    tracep->declBus(c+857,"iir", false,-1, 3,0);
    tracep->declBus(c+858,"fcr", false,-1, 1,0);
    tracep->declBus(c+859,"mcr", false,-1, 4,0);
    tracep->declBus(c+860,"lcr", false,-1, 7,0);
    tracep->declBus(c+861,"msr", false,-1, 7,0);
    tracep->declBus(c+862,"dl", false,-1, 15,0);
    tracep->declBus(c+863,"scratch", false,-1, 7,0);
    tracep->declBit(c+864,"start_dlc", false,-1);
    tracep->declBit(c+865,"lsr_mask_d", false,-1);
    tracep->declBit(c+866,"msi_reset", false,-1);
    tracep->declBus(c+867,"dlc", false,-1, 15,0);
    tracep->declBus(c+868,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+869,"rx_reset", false,-1);
    tracep->declBit(c+870,"tx_reset", false,-1);
    tracep->declBit(c+871,"dlab", false,-1);
    tracep->declBit(c+1676,"cts_pad_i", false,-1);
    tracep->declBit(c+1675,"dsr_pad_i", false,-1);
    tracep->declBit(c+1675,"ri_pad_i", false,-1);
    tracep->declBit(c+1675,"dcd_pad_i", false,-1);
    tracep->declBit(c+872,"loopback", false,-1);
    tracep->declBit(c+1675,"cts", false,-1);
    tracep->declBit(c+1676,"dsr", false,-1);
    tracep->declBit(c+1676,"ri", false,-1);
    tracep->declBit(c+1676,"dcd", false,-1);
    tracep->declBit(c+873,"cts_c", false,-1);
    tracep->declBit(c+874,"dsr_c", false,-1);
    tracep->declBit(c+875,"ri_c", false,-1);
    tracep->declBit(c+876,"dcd_c", false,-1);
    tracep->declBus(c+877,"lsr", false,-1, 7,0);
    tracep->declBit(c+878,"lsr0", false,-1);
    tracep->declBit(c+879,"lsr1", false,-1);
    tracep->declBit(c+880,"lsr2", false,-1);
    tracep->declBit(c+881,"lsr3", false,-1);
    tracep->declBit(c+882,"lsr4", false,-1);
    tracep->declBit(c+883,"lsr5", false,-1);
    tracep->declBit(c+884,"lsr6", false,-1);
    tracep->declBit(c+885,"lsr7", false,-1);
    tracep->declBit(c+886,"lsr0r", false,-1);
    tracep->declBit(c+887,"lsr1r", false,-1);
    tracep->declBit(c+888,"lsr2r", false,-1);
    tracep->declBit(c+889,"lsr3r", false,-1);
    tracep->declBit(c+890,"lsr4r", false,-1);
    tracep->declBit(c+891,"lsr5r", false,-1);
    tracep->declBit(c+892,"lsr6r", false,-1);
    tracep->declBit(c+893,"lsr7r", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBit(c+894,"rls_int", false,-1);
    tracep->declBit(c+895,"rda_int", false,-1);
    tracep->declBit(c+896,"ti_int", false,-1);
    tracep->declBit(c+897,"thre_int", false,-1);
    tracep->declBit(c+898,"ms_int", false,-1);
    tracep->declBit(c+899,"tf_push", false,-1);
    tracep->declBit(c+900,"rf_pop", false,-1);
    tracep->declBus(c+1655,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+901,"rf_error_bit", false,-1);
    tracep->declBit(c+879,"rf_overrun", false,-1);
    tracep->declBit(c+902,"rf_push_pulse", false,-1);
    tracep->declBus(c+903,"rf_count", false,-1, 4,0);
    tracep->declBus(c+904,"tf_count", false,-1, 4,0);
    tracep->declBus(c+905,"tstate", false,-1, 2,0);
    tracep->declBus(c+906,"rstate", false,-1, 3,0);
    tracep->declBus(c+907,"counter_t", false,-1, 9,0);
    tracep->declBit(c+908,"thre_set_en", false,-1);
    tracep->declBus(c+909,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+910,"block_value", false,-1, 7,0);
    tracep->declBit(c+911,"serial_out", false,-1);
    tracep->declBit(c+912,"serial_in", false,-1);
    tracep->declBit(c+31,"lsr_mask_condition", false,-1);
    tracep->declBit(c+32,"iir_read", false,-1);
    tracep->declBit(c+33,"msr_read", false,-1);
    tracep->declBit(c+34,"fifo_read", false,-1);
    tracep->declBit(c+35,"fifo_write", false,-1);
    tracep->declBus(c+913,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+914,"lsr0_d", false,-1);
    tracep->declBit(c+915,"lsr1_d", false,-1);
    tracep->declBit(c+916,"lsr2_d", false,-1);
    tracep->declBit(c+917,"lsr3_d", false,-1);
    tracep->declBit(c+918,"lsr4_d", false,-1);
    tracep->declBit(c+919,"lsr5_d", false,-1);
    tracep->declBit(c+920,"lsr6_d", false,-1);
    tracep->declBit(c+921,"lsr7_d", false,-1);
    tracep->declBit(c+922,"rls_int_d", false,-1);
    tracep->declBit(c+923,"thre_int_d", false,-1);
    tracep->declBit(c+924,"ms_int_d", false,-1);
    tracep->declBit(c+925,"ti_int_d", false,-1);
    tracep->declBit(c+926,"rda_int_d", false,-1);
    tracep->declBit(c+927,"rls_int_rise", false,-1);
    tracep->declBit(c+928,"thre_int_rise", false,-1);
    tracep->declBit(c+929,"ms_int_rise", false,-1);
    tracep->declBit(c+930,"ti_int_rise", false,-1);
    tracep->declBit(c+931,"rda_int_rise", false,-1);
    tracep->declBit(c+932,"rls_int_pnd", false,-1);
    tracep->declBit(c+933,"rda_int_pnd", false,-1);
    tracep->declBit(c+934,"thre_int_pnd", false,-1);
    tracep->declBit(c+935,"ms_int_pnd", false,-1);
    tracep->declBit(c+936,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1785,"Tp", false,-1, 31,0);
    tracep->declBus(c+1785,"width", false,-1, 31,0);
    tracep->declBus(c+1738,"init_value", false,-1, 0,0);
    tracep->declBit(c+1587,"rst_i", false,-1);
    tracep->declBit(c+1586,"clk_i", false,-1);
    tracep->declBit(c+1675,"stage1_rst_i", false,-1);
    tracep->declBit(c+1676,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1606,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+855,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+937,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1587,"wb_rst_i", false,-1);
    tracep->declBus(c+860,"lcr", false,-1, 7,0);
    tracep->declBit(c+900,"rf_pop", false,-1);
    tracep->declBit(c+912,"srx_pad_i", false,-1);
    tracep->declBit(c+854,"enable", false,-1);
    tracep->declBit(c+869,"rx_reset", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBus(c+907,"counter_t", false,-1, 9,0);
    tracep->declBus(c+903,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1655,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+879,"rf_overrun", false,-1);
    tracep->declBit(c+901,"rf_error_bit", false,-1);
    tracep->declBus(c+906,"rstate", false,-1, 3,0);
    tracep->declBit(c+902,"rf_push_pulse", false,-1);
    tracep->declBus(c+938,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+939,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+940,"rshift", false,-1, 7,0);
    tracep->declBit(c+941,"rparity", false,-1);
    tracep->declBit(c+942,"rparity_error", false,-1);
    tracep->declBit(c+943,"rframing_error", false,-1);
    tracep->declBit(c+944,"rbit_in", false,-1);
    tracep->declBit(c+945,"rparity_xor", false,-1);
    tracep->declBus(c+946,"counter_b", false,-1, 7,0);
    tracep->declBit(c+947,"rf_push_q", false,-1);
    tracep->declBus(c+948,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+949,"rf_push", false,-1);
    tracep->declBit(c+950,"break_error", false,-1);
    tracep->declBit(c+951,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+952,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+953,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+954,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1678,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1770,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1769,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1765,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1767,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1766,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1768,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1764,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1772,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1773,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1786,"sr_push", false,-1, 3,0);
    tracep->declBus(c+955,"toc_value", false,-1, 9,0);
    tracep->declBus(c+956,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1787,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1788,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1758,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1751,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1587,"wb_rst_i", false,-1);
    tracep->declBit(c+902,"push", false,-1);
    tracep->declBit(c+900,"pop", false,-1);
    tracep->declBus(c+948,"data_in", false,-1, 10,0);
    tracep->declBit(c+869,"fifo_reset", false,-1);
    tracep->declBit(c+30,"reset_status", false,-1);
    tracep->declBus(c+1655,"data_out", false,-1, 10,0);
    tracep->declBit(c+879,"overrun", false,-1);
    tracep->declBus(c+903,"count", false,-1, 4,0);
    tracep->declBit(c+901,"error_bit", false,-1);
    tracep->declBus(c+1656,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+957+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+973,"top", false,-1, 3,0);
    tracep->declBus(c+974,"bottom", false,-1, 3,0);
    tracep->declBus(c+975,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+976,"word0", false,-1, 2,0);
    tracep->declBus(c+977,"word1", false,-1, 2,0);
    tracep->declBus(c+978,"word2", false,-1, 2,0);
    tracep->declBus(c+979,"word3", false,-1, 2,0);
    tracep->declBus(c+980,"word4", false,-1, 2,0);
    tracep->declBus(c+981,"word5", false,-1, 2,0);
    tracep->declBus(c+982,"word6", false,-1, 2,0);
    tracep->declBus(c+983,"word7", false,-1, 2,0);
    tracep->declBus(c+984,"word8", false,-1, 2,0);
    tracep->declBus(c+985,"word9", false,-1, 2,0);
    tracep->declBus(c+986,"word10", false,-1, 2,0);
    tracep->declBus(c+987,"word11", false,-1, 2,0);
    tracep->declBus(c+988,"word12", false,-1, 2,0);
    tracep->declBus(c+989,"word13", false,-1, 2,0);
    tracep->declBus(c+990,"word14", false,-1, 2,0);
    tracep->declBus(c+991,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1758,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1778,"data_width", false,-1, 31,0);
    tracep->declBus(c+1788,"depth", false,-1, 31,0);
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+902,"we", false,-1);
    tracep->declBus(c+973,"a", false,-1, 3,0);
    tracep->declBus(c+974,"dpra", false,-1, 3,0);
    tracep->declBus(c+992,"di", false,-1, 7,0);
    tracep->declBus(c+1656,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+640+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1587,"wb_rst_i", false,-1);
    tracep->declBus(c+860,"lcr", false,-1, 7,0);
    tracep->declBit(c+899,"tf_push", false,-1);
    tracep->declBus(c+1389,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+854,"enable", false,-1);
    tracep->declBit(c+870,"tx_reset", false,-1);
    tracep->declBit(c+30,"lsr_mask", false,-1);
    tracep->declBit(c+911,"stx_pad_o", false,-1);
    tracep->declBus(c+905,"tstate", false,-1, 2,0);
    tracep->declBus(c+904,"tf_count", false,-1, 4,0);
    tracep->declBus(c+993,"counter", false,-1, 4,0);
    tracep->declBus(c+994,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+995,"shift_out", false,-1, 6,0);
    tracep->declBit(c+996,"stx_o_tmp", false,-1);
    tracep->declBit(c+997,"parity_xor", false,-1);
    tracep->declBit(c+998,"tf_pop", false,-1);
    tracep->declBit(c+999,"bit_out", false,-1);
    tracep->declBus(c+1389,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1433,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1000,"tf_overrun", false,-1);
    tracep->declBus(c+1669,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1666,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1670,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1671,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1672,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1681,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1778,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1788,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1758,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1751,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+1587,"wb_rst_i", false,-1);
    tracep->declBit(c+899,"push", false,-1);
    tracep->declBit(c+998,"pop", false,-1);
    tracep->declBus(c+1389,"data_in", false,-1, 7,0);
    tracep->declBit(c+870,"fifo_reset", false,-1);
    tracep->declBit(c+30,"reset_status", false,-1);
    tracep->declBus(c+1433,"data_out", false,-1, 7,0);
    tracep->declBit(c+1000,"overrun", false,-1);
    tracep->declBus(c+904,"count", false,-1, 4,0);
    tracep->declBus(c+1001,"top", false,-1, 3,0);
    tracep->declBus(c+1002,"bottom", false,-1, 3,0);
    tracep->declBus(c+1003,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1758,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1778,"data_width", false,-1, 31,0);
    tracep->declBus(c+1788,"depth", false,-1, 31,0);
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+899,"we", false,-1);
    tracep->declBus(c+1001,"a", false,-1, 3,0);
    tracep->declBus(c+1002,"dpra", false,-1, 3,0);
    tracep->declBus(c+1389,"di", false,-1, 7,0);
    tracep->declBus(c+1433,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+656+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBit(c+1219,"auto_in_psel", false,-1);
    tracep->declBit(c+1220,"auto_in_penable", false,-1);
    tracep->declBit(c+1215,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1221,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1214,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1216,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+707,"auto_in_pready", false,-1);
    tracep->declBit(c+1673,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1674,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1600,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1601,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1602,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1603,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1604,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1605,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1586,"clock", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1386,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1219,"in_psel", false,-1);
    tracep->declBit(c+1220,"in_penable", false,-1);
    tracep->declBus(c+1214,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1215,"in_pwrite", false,-1);
    tracep->declBus(c+1216,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1217,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+707,"in_pready", false,-1);
    tracep->declBus(c+1674,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1673,"in_pslverr", false,-1);
    tracep->declBus(c+1600,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1601,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1602,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1603,"vga_hsync", false,-1);
    tracep->declBit(c+1604,"vga_vsync", false,-1);
    tracep->declBit(c+1605,"vga_valid", false,-1);
    tracep->declBus(c+1004,"h_addr", false,-1, 9,0);
    tracep->declBus(c+672,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1434,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1390,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+707,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1586,"pclk", false,-1);
    tracep->declBit(c+1587,"reset", false,-1);
    tracep->declBus(c+1434,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1004,"h_addr", false,-1, 9,0);
    tracep->declBus(c+672,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1603,"hsync", false,-1);
    tracep->declBit(c+1604,"vsync", false,-1);
    tracep->declBit(c+1605,"valid", false,-1);
    tracep->declBus(c+1600,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1601,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1602,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1789,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1790,"h_active", false,-1, 31,0);
    tracep->declBus(c+1791,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1792,"h_total", false,-1, 31,0);
    tracep->declBus(c+1756,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1793,"v_active", false,-1, 31,0);
    tracep->declBus(c+1794,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1795,"v_total", false,-1, 31,0);
    tracep->declBus(c+1005,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+673,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1006,"h_valid", false,-1);
    tracep->declBit(c+674,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+702,"sck", false,-1);
    tracep->declBit(c+1448,"ss", false,-1);
    tracep->declBit(c+1436,"mosi", false,-1);
    tracep->declBit(c+1206,"miso", false,-1);
    tracep->declBus(c+1207,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1208,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1657,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+702,"sck", false,-1);
    tracep->declBit(c+1449,"ss", false,-1);
    tracep->declBit(c+1436,"mosi", false,-1);
    tracep->declBit(c+1658,"miso", false,-1);
    tracep->declBit(c+1449,"reset", false,-1);
    tracep->declBus(c+1200,"state", false,-1, 2,0);
    tracep->declBus(c+1201,"counter", false,-1, 7,0);
    tracep->declBus(c+1202,"cmd", false,-1, 7,0);
    tracep->declBus(c+1203,"addr", false,-1, 23,0);
    tracep->declBus(c+1204,"data", false,-1, 31,0);
    tracep->declBit(c+1205,"ren", false,-1);
    tracep->declBus(c+1659,"rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"raddr", false,-1, 31,0);
    tracep->declBus(c+1209,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+702,"clock", false,-1);
    tracep->declBit(c+1205,"valid", false,-1);
    tracep->declBus(c+1202,"cmd", false,-1, 7,0);
    tracep->declBus(c+1660,"addr", false,-1, 31,0);
    tracep->declBus(c+1659,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1609,"sck", false,-1);
    tracep->declBit(c+1580,"ce_n", false,-1);
    tracep->declBus(c+1610,"dio", false,-1, 3,0);
    tracep->declBus(c+692,"dio_out", false,-1, 3,0);
    tracep->declBus(c+693,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1610,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1731,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1785,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1756,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1759,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1758,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1751,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+694,"state", false,-1, 2,0);
    tracep->declBus(c+1661,"next_state", false,-1, 2,0);
    tracep->declBus(c+695,"counter", false,-1, 7,0);
    tracep->declBus(c+696,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+697,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+698,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+699,"is_read_op", false,-1);
    tracep->declBit(c+700,"is_write_op", false,-1);
    tracep->declBus(c+701,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1662,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1611,"clk", false,-1);
    tracep->declBit(c+1437,"cke", false,-1);
    tracep->declBit(c+703,"cs", false,-1);
    tracep->declBit(c+704,"ras", false,-1);
    tracep->declBit(c+705,"cas", false,-1);
    tracep->declBit(c+706,"we", false,-1);
    tracep->declBus(c+1612,"a", false,-1, 13,0);
    tracep->declBus(c+1438,"ba", false,-1, 1,0);
    tracep->declBus(c+1439,"dqm", false,-1, 3,0);
    tracep->declBus(c+1498,"dq", false,-1, 31,0);
    tracep->declBit(c+22,"cs_0", false,-1);
    tracep->declBit(c+23,"ras_0", false,-1);
    tracep->declBit(c+24,"cas_0", false,-1);
    tracep->declBit(c+25,"we_0", false,-1);
    tracep->declBit(c+26,"cs_1", false,-1);
    tracep->declBit(c+27,"ras_1", false,-1);
    tracep->declBit(c+28,"cas_1", false,-1);
    tracep->declBit(c+29,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1611,"clk", false,-1);
    tracep->declBit(c+1437,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1442,"a", false,-1, 12,0);
    tracep->declBus(c+1438,"ba", false,-1, 1,0);
    tracep->declBus(c+1439,"dqm", false,-1, 3,0);
    tracep->declBus(c+1498,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1611,"clk", false,-1);
    tracep->declBit(c+1437,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1442,"a", false,-1, 12,0);
    tracep->declBus(c+1438,"ba", false,-1, 1,0);
    tracep->declBus(c+1450,"dqm", false,-1, 1,0);
    tracep->declBus(c+1499,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1770,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1796,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1765,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1766,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1767,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1678,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1140,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1141,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1142,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1143,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1451,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1144,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1500,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1145,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1146+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1797,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1150,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1798,"state", false,-1, 2,0);
    tracep->declBit(c+1151,"write_brust", false,-1);
    tracep->declBus(c+1152,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1153,"read_burst", false,-1);
    tracep->declBit(c+1799,"flag", false,-1);
    tracep->declBus(c+1154,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1611,"clk", false,-1);
    tracep->declBit(c+1437,"cke", false,-1);
    tracep->declBit(c+26,"cs", false,-1);
    tracep->declBit(c+27,"ras", false,-1);
    tracep->declBit(c+28,"cas", false,-1);
    tracep->declBit(c+29,"we", false,-1);
    tracep->declBus(c+1442,"a", false,-1, 12,0);
    tracep->declBus(c+1438,"ba", false,-1, 1,0);
    tracep->declBus(c+1452,"dqm", false,-1, 1,0);
    tracep->declBus(c+1501,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1770,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1796,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1765,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1766,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1767,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1678,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1155,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1156,"bl", false,-1, 2,0);
    tracep->declBus(c+150,"command", false,-1, 3,0);
    tracep->declBus(c+1157,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1158,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1451,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1159,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1502,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1160,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1161+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1800,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1165,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1801,"state", false,-1, 2,0);
    tracep->declBit(c+1166,"write_brust", false,-1);
    tracep->declBus(c+1167,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1168,"read_burst", false,-1);
    tracep->declBit(c+1802,"flag", false,-1);
    tracep->declBus(c+1169,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1611,"clk", false,-1);
    tracep->declBit(c+1437,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1442,"a", false,-1, 12,0);
    tracep->declBus(c+1438,"ba", false,-1, 1,0);
    tracep->declBus(c+1439,"dqm", false,-1, 3,0);
    tracep->declBus(c+1498,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1611,"clk", false,-1);
    tracep->declBit(c+1437,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1442,"a", false,-1, 12,0);
    tracep->declBus(c+1438,"ba", false,-1, 1,0);
    tracep->declBus(c+1450,"dqm", false,-1, 1,0);
    tracep->declBus(c+1499,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1770,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1796,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1765,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1766,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1767,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1678,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1170,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1171,"bl", false,-1, 2,0);
    tracep->declBus(c+151,"command", false,-1, 3,0);
    tracep->declBus(c+1172,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1173,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1451,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1174,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1503,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1175,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1176+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1803,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1180,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1804,"state", false,-1, 2,0);
    tracep->declBit(c+1181,"write_brust", false,-1);
    tracep->declBus(c+1182,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1183,"read_burst", false,-1);
    tracep->declBit(c+1805,"flag", false,-1);
    tracep->declBus(c+1184,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1611,"clk", false,-1);
    tracep->declBit(c+1437,"cke", false,-1);
    tracep->declBit(c+22,"cs", false,-1);
    tracep->declBit(c+23,"ras", false,-1);
    tracep->declBit(c+24,"cas", false,-1);
    tracep->declBit(c+25,"we", false,-1);
    tracep->declBus(c+1442,"a", false,-1, 12,0);
    tracep->declBus(c+1438,"ba", false,-1, 1,0);
    tracep->declBus(c+1452,"dqm", false,-1, 1,0);
    tracep->declBus(c+1501,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1770,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1796,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1765,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1766,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1767,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1678,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1185,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1186,"bl", false,-1, 2,0);
    tracep->declBus(c+151,"command", false,-1, 3,0);
    tracep->declBus(c+1187,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1188,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1451,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1189,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1504,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1190,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1191+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1806,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1195,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1807,"state", false,-1, 2,0);
    tracep->declBit(c+1196,"write_brust", false,-1);
    tracep->declBus(c+1197,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1198,"read_burst", false,-1);
    tracep->declBit(c+1808,"flag", false,-1);
    tracep->declBus(c+1199,"dout", false,-1, 15,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__b_switch));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+6,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+7,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+8,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+9,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+10,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+11,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+12,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+13,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+14,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+15,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+16,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+17,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+18,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+19,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+20,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+21,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+22,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 3U)))));
    bufp->fullBit(oldp+23,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 2U)))));
    bufp->fullBit(oldp+24,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                >> 1U)))));
    bufp->fullBit(oldp+25,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                   >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+26,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U)))));
    bufp->fullBit(oldp+27,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U)))));
    bufp->fullBit(oldp+28,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U)))));
    bufp->fullBit(oldp+29,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+42,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+52,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+58,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+59,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+64,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+68,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+72,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullIData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+82,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+86,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+87,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+88,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+89,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+90,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+91,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+93,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+94,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+95,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+96,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+97,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+98,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+99,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+100,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+146,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                        >> 2U))),13);
    bufp->fullSData(oldp+147,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+148,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+153,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (IData)(vlSelf->__VdfgTmp_h7fb30c92__0)
                                : 0U)),4);
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullIData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum),32);
    bufp->fullSData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles),16);
    bufp->fullIData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_prdata),32);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pslverr));
    bufp->fullIData(oldp+166,(((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum)),32);
    bufp->fullIData(oldp+167,((((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum) 
                               >> 9U)),32);
    bufp->fullIData(oldp+168,(((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles))),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_delay),32);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+172,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+175,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+176,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+177,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+178,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+180,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+181,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+188,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+189,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+190,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+191,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+195,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+202,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+210,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+211,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+214,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+215,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+216,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+217,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+226,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+239,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                   << 1U))))))),39);
    bufp->fullQData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+290,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+291,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+292,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+293,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+295,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+297,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+319,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+322,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+390,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+404,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+405,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+476,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+512,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+588,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+596,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+634,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+672,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+675,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+676,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+677,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+678,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+679,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+680,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+681,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+682,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+683,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+684,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+685,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+686,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+687,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+688,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+689,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+690,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+703,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+704,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+705,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+706,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+714,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+720,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+721,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+722,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+723,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+724,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+725,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+726,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+727,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+730,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (8U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0xcU)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+731,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+734,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+735,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+739,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+743,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+758,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+759,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+761,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+762,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+763,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+764,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+765,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+773,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+813,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+814,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+826,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+828,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+829,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+830,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+831,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+832,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+833,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+834,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+836,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+840,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+842,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+843,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+846,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+850,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+851,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+853,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+871,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+872,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+873,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+874,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+875,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+876,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+877,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+880,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+881,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+882,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+901,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+908,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+927,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+928,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+929,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+930,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+931,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+950,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+951,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+952,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+953,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+954,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+956,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+975,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+992,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1003,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1004,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1033,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1039,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_locked));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__current_master));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1087,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc_flag));
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1104,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1106,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullIData(oldp+1108,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemWrite));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1127,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1130,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullCData(oldp+1131,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1132,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1133,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1134,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1135,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1136,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1137,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1138,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1139,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1140,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1141,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1155,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1156,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1170,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1171,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1185,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1186,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1205,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1214,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),29);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1228,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1231,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1236,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1239,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1242,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                           << 0x1eU) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                              << 0x1cU) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                       << 0x16U) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                          << 0x14U) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                             << 0x12U) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                << 0x10U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                   << 0xeU) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                      << 0xcU) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                            << 8U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                << 1U)))))),2);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullSData(oldp+1261,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),32);
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullIData(oldp+1383,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1384,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1385,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1390,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1391,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1392,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1393,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1394,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1395,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1396,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1397,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1398,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1399,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1400,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1401,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1402,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1403,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1404,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1405,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1412,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1413,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1435,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullSData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1448,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1450,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1451,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1452,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1453,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1459,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1462,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1477,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1478,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1479,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1480,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1490,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1499,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1501,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc),32);
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullCData(oldp+1519,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1520,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1531,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1537,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant_next));
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1544,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1546,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1547,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1548,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1549,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1550,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1551,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__flag));
    bufp->fullCData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1555,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1556,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_fetch),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_out),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_buf),32);
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),3);
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ctrl_hazard));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ar_inflight));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1586,(vlSelf->clock));
    bufp->fullBit(oldp+1587,(vlSelf->reset));
    bufp->fullSData(oldp+1588,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1589,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1590,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1591,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1592,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1593,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1594,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1595,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1596,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1597,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1598,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1599,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1600,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1601,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1602,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1603,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1604,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1605,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1606,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1607,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1608,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1611,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1612,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1613,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                       | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                          | (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                    : 
                                                   (0x1cU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))) 
                                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                                | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))))))))))));
    bufp->fullIData(oldp+1614,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                 : 0U)
                                             : 0U) 
                                           | (((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))
                                                ? (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [3U] 
                                                    << 0x18U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [2U] 
                                                       << 0x10U) 
                                                      | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                          [1U] 
                                                          << 8U) 
                                                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                         [0U])))
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                      : 0U) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                        : 0U))))))),32);
    bufp->fullBit(oldp+1615,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+1616,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullQData(oldp+1618,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1620,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1622,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1623,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullBit(oldp+1624,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1625,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1626,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                 ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                          | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                              << 0x14U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                          << 0xcU) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                    << 1U)))))
                                 : 0U)),2);
    bufp->fullIData(oldp+1627,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                  ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 3U))
                                       : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                  : 0U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelf->__VdfgTmp_hf132a334__0 
                                                        >> 0x18U)
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                     << 0x18U) 
                                                    | ((0xff0000U 
                                                        & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                              ? 
                                                             (vlSelf->__VdfgTmp_hf132a334__0 
                                                              >> 0x10U)
                                                              : 0U)
                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                           << 0x10U)) 
                                                       | ((0xff00U 
                                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                ? 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                 ? 
                                                                (vlSelf->__VdfgTmp_hf132a334__0 
                                                                 >> 8U)
                                                                 : 0U)
                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                 ? 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                  ? vlSelf->__VdfgTmp_hf132a334__0
                                                                  : 0U)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                    : 0U)))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                                            : 0U))),32);
    bufp->fullCData(oldp+1628,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                 ? (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                            ? (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                       >> 1U))
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U)))
                                 : 0U)),2);
    bufp->fullBit(oldp+1629,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1630,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+1631,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1635,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
                                 ? ((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0xcU)))
                                     ? ((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                         : ((0x30200073U 
                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                             : 0U))
                                     : (((1U == (7U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                    >> 0xcU))) 
                                         | (2U == (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                      >> 0xcU))))
                                         ? ((0xf11U 
                                             == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U))
                                             ? 0x79737978U
                                             : ((0xf12U 
                                                 == 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0x14U))
                                                 ? 0x17e3c19U
                                                 : 
                                                ((0x300U 
                                                  == 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                    >> 0x14U))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                      >> 0x14U))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause
                                                     : 0U))))))
                                         : 0U)) : 0U)),32);
    bufp->fullBit(oldp+1636,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullBit(oldp+1637,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast)))));
    bufp->fullBit(oldp+1638,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0) 
                                     | (((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                     >> 0x14U)))))
                                     ? 1U : 0U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0)
                                                     ? 1U
                                                     : 0U))) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd)) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0x14U)))))
                                        ? 1U : 0U) : 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                     ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0)
                                              ? 1U : 0U))) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0) 
                                          | (((0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                    >> 0x14U)))))
                                          ? 1U : 0U)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                          ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0)
                                                   ? 1U
                                                   : 0U))))) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state)))));
    bufp->fullBit(oldp+1639,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0) 
                                         | (((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)))))
                                         ? 1U : 0U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb2cd5b05__0)
                                                  ? 1U
                                                  : 0U))))));
    bufp->fullBit(oldp+1640,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0) 
                                         | (((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)))))
                                         ? 1U : 0U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6cecb5c4__0)
                                                  ? 1U
                                                  : 0U))))));
    bufp->fullBit(oldp+1641,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0) 
                                         | (((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                                   >> 0x14U)))))
                                         ? 1U : 0U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h887fbabd__0)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha6e393a3__0)
                                                  ? 1U
                                                  : 0U))))));
    bufp->fullCData(oldp+1642,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu))
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu))
                                         ? 1U : 2U)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                     ? ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem)) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem)))
                                         ? 2U : 1U)
                                     : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                             ? 0U : 2U)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))))),2);
    bufp->fullBit(oldp+1643,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1644,((0xfU & vlSelf->__VdfgTmp_h9aa666fe__0)),4);
    bufp->fullBit(oldp+1645,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1646,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                                     | ((0x1cU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                     ? 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter))
                                                      ? 0U
                                                      : 2U)
                                                     : 0U)))),2);
    bufp->fullCData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullIData(oldp+1649,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1650,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+1651,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                     ? 0x10U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w) 
                                                 << 5U) 
                                                | (((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1652,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1655,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1658,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1660,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1663,(0x226U),32);
    bufp->fullIData(oldp+1664,(0x64U),32);
    bufp->fullIData(oldp+1665,(0x200U),32);
    bufp->fullCData(oldp+1666,(1U),3);
    bufp->fullIData(oldp+1667,(0xb00U),32);
    bufp->fullIData(oldp+1668,(9U),32);
    bufp->fullCData(oldp+1669,(0U),3);
    bufp->fullCData(oldp+1670,(2U),3);
    bufp->fullCData(oldp+1671,(3U),3);
    bufp->fullCData(oldp+1672,(4U),3);
    bufp->fullBit(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1675,(0U));
    bufp->fullBit(oldp+1676,(1U));
    bufp->fullCData(oldp+1677,(0U),2);
    bufp->fullCData(oldp+1678,(0U),4);
    bufp->fullCData(oldp+1679,(0U),8);
    bufp->fullIData(oldp+1680,(9U),32);
    bufp->fullCData(oldp+1681,(5U),3);
    bufp->fullCData(oldp+1682,(6U),3);
    bufp->fullCData(oldp+1683,(7U),3);
    bufp->fullSData(oldp+1684,(1U),16);
    bufp->fullBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1701,(0U),32);
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1731,(0U),32);
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1737,(0U));
    bufp->fullBit(oldp+1738,(1U));
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1742,(1U),2);
    bufp->fullCData(oldp+1743,(2U),2);
    bufp->fullIData(oldp+1744,(0x20U),32);
    bufp->fullIData(oldp+1745,(4U),32);
    bufp->fullIData(oldp+1746,(0x79737978U),32);
    bufp->fullIData(oldp+1747,(0x17e3c19U),32);
    bufp->fullIData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1751,(5U),32);
    bufp->fullCData(oldp+1752,(0x1bU),8);
    bufp->fullCData(oldp+1753,(0xebU),8);
    bufp->fullCData(oldp+1754,(0x38U),8);
    bufp->fullIData(oldp+1755,(0x18U),32);
    bufp->fullIData(oldp+1756,(2U),32);
    bufp->fullIData(oldp+1757,(6U),32);
    bufp->fullIData(oldp+1758,(4U),32);
    bufp->fullIData(oldp+1759,(3U),32);
    bufp->fullIData(oldp+1760,(0xdU),32);
    bufp->fullIData(oldp+1761,(0x2000U),32);
    bufp->fullIData(oldp+1762,(0x2710U),32);
    bufp->fullIData(oldp+1763,(0x30cU),32);
    bufp->fullCData(oldp+1764,(7U),4);
    bufp->fullCData(oldp+1765,(3U),4);
    bufp->fullCData(oldp+1766,(5U),4);
    bufp->fullCData(oldp+1767,(4U),4);
    bufp->fullCData(oldp+1768,(6U),4);
    bufp->fullCData(oldp+1769,(2U),4);
    bufp->fullCData(oldp+1770,(1U),4);
    bufp->fullSData(oldp+1771,(0x20U),13);
    bufp->fullCData(oldp+1772,(8U),4);
    bufp->fullCData(oldp+1773,(9U),4);
    bufp->fullIData(oldp+1774,(0xaU),32);
    bufp->fullIData(oldp+1775,(0x11U),32);
    bufp->fullIData(oldp+1776,(0x30000000U),32);
    bufp->fullIData(oldp+1777,(0x3fffffffU),32);
    bufp->fullIData(oldp+1778,(8U),32);
    bufp->fullCData(oldp+1779,(4U),5);
    bufp->fullCData(oldp+1780,(0U),5);
    bufp->fullCData(oldp+1781,(0x10U),5);
    bufp->fullCData(oldp+1782,(0x14U),5);
    bufp->fullCData(oldp+1783,(0x18U),5);
    bufp->fullIData(oldp+1784,(0x3000000U),32);
    bufp->fullIData(oldp+1785,(1U),32);
    bufp->fullCData(oldp+1786,(0xaU),4);
    bufp->fullIData(oldp+1787,(0xbU),32);
    bufp->fullIData(oldp+1788,(0x10U),32);
    bufp->fullIData(oldp+1789,(0x60U),32);
    bufp->fullIData(oldp+1790,(0x90U),32);
    bufp->fullIData(oldp+1791,(0x310U),32);
    bufp->fullIData(oldp+1792,(0x320U),32);
    bufp->fullIData(oldp+1793,(0x23U),32);
    bufp->fullIData(oldp+1794,(0x203U),32);
    bufp->fullIData(oldp+1795,(0x20dU),32);
    bufp->fullIData(oldp+1796,(0x400000U),32);
    bufp->fullCData(oldp+1797,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1798,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1802,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1803,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1805,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1806,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1808,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
