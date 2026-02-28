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
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1676,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1677,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1678,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1679,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1680,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1681,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1682,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1683,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1684,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1685,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1686,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1687,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1688,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1689,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1690,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1691,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1692,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1693,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1694,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1695,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1676,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1677,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1678,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1679,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1680,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1681,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1682,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1683,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1684,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1685,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1686,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1687,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1688,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1689,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1690,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1691,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1692,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1693,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1694,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1695,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+665,"spi_sck", false,-1);
    tracep->declBus(c+1252,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1253,"spi_mosi", false,-1);
    tracep->declBit(c+1696,"spi_miso", false,-1);
    tracep->declBit(c+1694,"uart_rx", false,-1);
    tracep->declBit(c+1695,"uart_tx", false,-1);
    tracep->declBit(c+1697,"psram_sck", false,-1);
    tracep->declBit(c+1361,"psram_ce_n", false,-1);
    tracep->declBus(c+1698,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1699,"sdram_clk", false,-1);
    tracep->declBit(c+1254,"sdram_cke", false,-1);
    tracep->declBit(c+666,"sdram_cs", false,-1);
    tracep->declBit(c+667,"sdram_ras", false,-1);
    tracep->declBit(c+668,"sdram_cas", false,-1);
    tracep->declBit(c+669,"sdram_we", false,-1);
    tracep->declBus(c+1700,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1256,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1281,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1676,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1677,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1678,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1680,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1681,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1682,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1683,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1684,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1685,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1686,"ps2_clk", false,-1);
    tracep->declBit(c+1687,"ps2_data", false,-1);
    tracep->declBus(c+1688,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1689,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1690,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1691,"vga_hsync", false,-1);
    tracep->declBit(c+1692,"vga_vsync", false,-1);
    tracep->declBit(c+1693,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1748,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1749,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1750,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1094,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+120,"in_psel", false,-1);
    tracep->declBit(c+121,"in_penable", false,-1);
    tracep->declBus(c+1751,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+122,"in_pwrite", false,-1);
    tracep->declBus(c+123,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+124,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+125,"in_pready", false,-1);
    tracep->declBus(c+126,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+127,"in_pslverr", false,-1);
    tracep->declBus(c+1095,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1096,"out_psel", false,-1);
    tracep->declBit(c+1097,"out_penable", false,-1);
    tracep->declBus(c+1098,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1099,"out_pwrite", false,-1);
    tracep->declBus(c+1100,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1701,"out_pready", false,-1);
    tracep->declBus(c+1702,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1703,"out_pslverr", false,-1);
    tracep->declBus(c+1752,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1753,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1754,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1751,"ST_FORWARD", false,-1, 2,0);
    tracep->declBus(c+1755,"ST_WAIT", false,-1, 2,0);
    tracep->declBus(c+1756,"ST_SKIP", false,-1, 2,0);
    tracep->declBus(c+1757,"ST_DONE", false,-1, 2,0);
    tracep->declBus(c+128,"state", false,-1, 2,0);
    tracep->declBus(c+129,"accum", false,-1, 31,0);
    tracep->declBus(c+130,"dev_cycles", false,-1, 15,0);
    tracep->declBus(c+131,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+132,"saved_prdata", false,-1, 31,0);
    tracep->declBit(c+133,"saved_pslverr", false,-1);
    tracep->declBit(c+1102,"fwd_active", false,-1);
    tracep->declBus(c+134,"accum_final", false,-1, 31,0);
    tracep->declBus(c+135,"total_cpu", false,-1, 31,0);
    tracep->declBus(c+136,"k_plus1", false,-1, 31,0);
    tracep->declBus(c+137,"extra_delay", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1096,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1097,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1099,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1095,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1701,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1703,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1702,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1103,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1105,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1098,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+670,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1758,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1759,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1106,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1108,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1098,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+138,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+139,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1109,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1110,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1108,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1098,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+671,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+672,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1111,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1112,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1095,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1704,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+140,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1113,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1114,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1108,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1098,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1115,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1705,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1116,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1117,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1105,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1098,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+673,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+674,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+675,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1118,"sel_0", false,-1);
    tracep->declBit(c+1119,"sel_1", false,-1);
    tracep->declBit(c+1120,"sel_2", false,-1);
    tracep->declBit(c+1121,"sel_3", false,-1);
    tracep->declBit(c+1122,"sel_4", false,-1);
    tracep->declBit(c+1123,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+141,"auto_in_awready", false,-1);
    tracep->declBit(c+142,"auto_in_awvalid", false,-1);
    tracep->declBus(c+143,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+145,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+146,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+141,"auto_in_wready", false,-1);
    tracep->declBit(c+147,"auto_in_wvalid", false,-1);
    tracep->declBus(c+148,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+149,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+150,"auto_in_bready", false,-1);
    tracep->declBit(c+151,"auto_in_bvalid", false,-1);
    tracep->declBus(c+152,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_in_arready", false,-1);
    tracep->declBit(c+155,"auto_in_arvalid", false,-1);
    tracep->declBus(c+156,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+158,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+159,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+160,"auto_in_rready", false,-1);
    tracep->declBit(c+161,"auto_in_rvalid", false,-1);
    tracep->declBus(c+162,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+163,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+153,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+120,"auto_out_psel", false,-1);
    tracep->declBit(c+121,"auto_out_penable", false,-1);
    tracep->declBit(c+122,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1094,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+123,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+124,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+125,"auto_out_pready", false,-1);
    tracep->declBit(c+127,"auto_out_pslverr", false,-1);
    tracep->declBus(c+126,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+121,"nodeOut_penable", false,-1);
    tracep->declBus(c+164,"state", false,-1, 1,0);
    tracep->declBit(c+154,"accept_read", false,-1);
    tracep->declBit(c+141,"accept_write", false,-1);
    tracep->declBit(c+165,"is_write_r", false,-1);
    tracep->declBit(c+122,"is_write", false,-1);
    tracep->declBus(c+162,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+152,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+166,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+167,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+168,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+169,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+170,"resp", false,-1, 1,0);
    tracep->declBus(c+171,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+153,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+161,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+172,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+151,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+173,"auto_in_awready", false,-1);
    tracep->declBit(c+1547,"auto_in_awvalid", false,-1);
    tracep->declBus(c+174,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+175,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+176,"auto_in_wready", false,-1);
    tracep->declBit(c+1550,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_in_wlast", false,-1);
    tracep->declBit(c+636,"auto_in_bready", false,-1);
    tracep->declBit(c+177,"auto_in_bvalid", false,-1);
    tracep->declBus(c+178,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+179,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_in_arready", false,-1);
    tracep->declBit(c+28,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+181,"auto_in_rvalid", false,-1);
    tracep->declBus(c+182,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+184,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+185,"auto_in_rlast", false,-1);
    tracep->declBit(c+141,"auto_out_awready", false,-1);
    tracep->declBit(c+142,"auto_out_awvalid", false,-1);
    tracep->declBus(c+143,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+145,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+146,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+141,"auto_out_wready", false,-1);
    tracep->declBit(c+147,"auto_out_wvalid", false,-1);
    tracep->declBus(c+148,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+149,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+150,"auto_out_bready", false,-1);
    tracep->declBit(c+151,"auto_out_bvalid", false,-1);
    tracep->declBus(c+152,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_out_arready", false,-1);
    tracep->declBit(c+155,"auto_out_arvalid", false,-1);
    tracep->declBus(c+156,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+158,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+159,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+160,"auto_out_rready", false,-1);
    tracep->declBit(c+161,"auto_out_rvalid", false,-1);
    tracep->declBus(c+162,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+163,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+153,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+150,"io_enq_ready", false,-1);
    tracep->declBit(c+151,"io_enq_valid", false,-1);
    tracep->declBus(c+152,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+153,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+636,"io_deq_ready", false,-1);
    tracep->declBit(c+177,"io_deq_valid", false,-1);
    tracep->declBus(c+178,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+179,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+186,"wrap", false,-1);
    tracep->declBit(c+187,"wrap_1", false,-1);
    tracep->declBit(c+188,"maybe_full", false,-1);
    tracep->declBit(c+189,"ptr_match", false,-1);
    tracep->declBit(c+190,"empty", false,-1);
    tracep->declBit(c+191,"full", false,-1);
    tracep->declBit(c+192,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+187,"R0_addr", false,-1);
    tracep->declBit(c+1761,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declBus(c+193,"R0_data", false,-1, 5,0);
    tracep->declBit(c+186,"W0_addr", false,-1);
    tracep->declBit(c+192,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declBus(c+194,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+195+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+197,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+161,"io_enq_valid", false,-1);
    tracep->declBus(c+162,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+163,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+153,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+181,"io_deq_valid", false,-1);
    tracep->declBus(c+182,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+183,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+184,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+185,"io_deq_bits_last", false,-1);
    tracep->declBit(c+198,"wrap", false,-1);
    tracep->declBit(c+199,"wrap_1", false,-1);
    tracep->declBit(c+200,"maybe_full", false,-1);
    tracep->declBit(c+201,"ptr_match", false,-1);
    tracep->declBit(c+202,"empty", false,-1);
    tracep->declBit(c+203,"full", false,-1);
    tracep->declBit(c+204,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+199,"R0_addr", false,-1);
    tracep->declBit(c+1761,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declQuad(c+205,"R0_data", false,-1, 38,0);
    tracep->declBit(c+198,"W0_addr", false,-1);
    tracep->declBit(c+204,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declQuad(c+207,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+209+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+213,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+30,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+31,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+154,"io_deq_ready", false,-1);
    tracep->declBit(c+155,"io_deq_valid", false,-1);
    tracep->declBus(c+156,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+157,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+158,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+159,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+214,"wrap", false,-1);
    tracep->declBit(c+215,"wrap_1", false,-1);
    tracep->declBit(c+216,"maybe_full", false,-1);
    tracep->declBit(c+217,"ptr_match", false,-1);
    tracep->declBit(c+218,"empty", false,-1);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+33,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+215,"R0_addr", false,-1);
    tracep->declBit(c+1761,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declQuad(c+220,"R0_data", false,-1, 46,0);
    tracep->declBit(c+214,"W0_addr", false,-1);
    tracep->declBit(c+33,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declQuad(c+34,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+222+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+173,"io_enq_ready", false,-1);
    tracep->declBit(c+1547,"io_enq_valid", false,-1);
    tracep->declBus(c+174,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1548,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1549,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+175,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+141,"io_deq_ready", false,-1);
    tracep->declBit(c+142,"io_deq_valid", false,-1);
    tracep->declBus(c+143,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+144,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+145,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+146,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+227,"wrap", false,-1);
    tracep->declBit(c+228,"wrap_1", false,-1);
    tracep->declBit(c+229,"maybe_full", false,-1);
    tracep->declBit(c+230,"ptr_match", false,-1);
    tracep->declBit(c+231,"empty", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->declBit(c+1554,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+228,"R0_addr", false,-1);
    tracep->declBit(c+1761,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declQuad(c+233,"R0_data", false,-1, 46,0);
    tracep->declBit(c+227,"W0_addr", false,-1);
    tracep->declBit(c+1554,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declQuad(c+637,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+235+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+1550,"io_enq_valid", false,-1);
    tracep->declBus(c+1551,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1552,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1553,"io_enq_bits_last", false,-1);
    tracep->declBit(c+141,"io_deq_ready", false,-1);
    tracep->declBit(c+147,"io_deq_valid", false,-1);
    tracep->declBus(c+148,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+149,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+240,"wrap", false,-1);
    tracep->declBit(c+241,"wrap_1", false,-1);
    tracep->declBit(c+242,"maybe_full", false,-1);
    tracep->declBit(c+243,"ptr_match", false,-1);
    tracep->declBit(c+244,"empty", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->declBit(c+1555,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+241,"R0_addr", false,-1);
    tracep->declBit(c+1761,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declQuad(c+246,"R0_data", false,-1, 35,0);
    tracep->declBit(c+240,"W0_addr", false,-1);
    tracep->declBit(c+1555,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declQuad(c+1556,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+248+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1748,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1749,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1750,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1124,"in_arready", false,-1);
    tracep->declBit(c+36,"in_arvalid", false,-1);
    tracep->declBus(c+37,"in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1706,"in_rready", false,-1);
    tracep->declBit(c+1125,"in_rvalid", false,-1);
    tracep->declBus(c+1126,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1127,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1128,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1129,"in_rlast", false,-1);
    tracep->declBit(c+1130,"in_awready", false,-1);
    tracep->declBit(c+1707,"in_awvalid", false,-1);
    tracep->declBus(c+1762,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1763,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1131,"in_wready", false,-1);
    tracep->declBit(c+1558,"in_wvalid", false,-1);
    tracep->declBus(c+1290,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"in_wlast", false,-1);
    tracep->declBit(c+1708,"in_bready", false,-1);
    tracep->declBit(c+1132,"in_bvalid", false,-1);
    tracep->declBus(c+1133,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1383,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1362,"out_arready", false,-1);
    tracep->declBit(c+1134,"out_arvalid", false,-1);
    tracep->declBus(c+1135,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1136,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1137,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1138,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1139,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1140,"out_rready", false,-1);
    tracep->declBit(c+1257,"out_rvalid", false,-1);
    tracep->declBus(c+1258,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1259,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1764,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1260,"out_rlast", false,-1);
    tracep->declBit(c+1363,"out_awready", false,-1);
    tracep->declBit(c+1141,"out_awvalid", false,-1);
    tracep->declBus(c+1142,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1364,"out_wready", false,-1);
    tracep->declBit(c+1147,"out_wvalid", false,-1);
    tracep->declBus(c+1148,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"out_wlast", false,-1);
    tracep->declBit(c+1151,"out_bready", false,-1);
    tracep->declBit(c+1261,"out_bvalid", false,-1);
    tracep->declBus(c+1258,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1764,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1752,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1753,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1765,"MAX_BEATS", false,-1, 31,0);
    tracep->declBus(c+1754,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1751,"RD_AR_WAIT", false,-1, 2,0);
    tracep->declBus(c+1755,"RD_R_RECV", false,-1, 2,0);
    tracep->declBus(c+1756,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1757,"RD_SEND", false,-1, 2,0);
    tracep->declBus(c+1152,"rd_state", false,-1, 2,0);
    tracep->declBus(c+1153,"rd_cycle_cnt", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1154+i*1,"rd_buf_id", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1162+i*1,"rd_buf_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1170+i*1,"rd_buf_resp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1178+i*1,"rd_buf_last", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1186+i*1,"rd_beat_cycle", true,(i+0), 31,0);
    }
    tracep->declBus(c+1194,"rd_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1195,"rd_recv_cnt", false,-1, 2,0);
    tracep->declBus(c+1196,"rd_send_idx", false,-1, 2,0);
    tracep->declBus(c+1197,"rd_arlen_saved", false,-1, 2,0);
    tracep->declBus(c+253,"i", false,-1, 31,0);
    tracep->declBus(c+1754,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1751,"WT_AW_WAIT", false,-1, 2,0);
    tracep->declBus(c+1755,"WT_W_FWD", false,-1, 2,0);
    tracep->declBus(c+1756,"WT_B_RECV", false,-1, 2,0);
    tracep->declBus(c+1757,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1766,"WT_SEND", false,-1, 2,0);
    tracep->declBus(c+1198,"wt_state", false,-1, 2,0);
    tracep->declBus(c+1199,"wt_cycle_cnt", false,-1, 31,0);
    tracep->declBus(c+1200,"wt_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1201,"wt_buf_bid", false,-1, 3,0);
    tracep->declBus(c+1202,"wt_buf_bresp", false,-1, 1,0);
    tracep->declBus(c+1203,"wt_wdata_saved", false,-1, 31,0);
    tracep->declBus(c+1204,"wt_wstrb_saved", false,-1, 3,0);
    tracep->declBit(c+1205,"wt_wlast_saved", false,-1);
    tracep->declBit(c+1206,"wt_w_latched", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+254,"auto_in_awready", false,-1);
    tracep->declBit(c+1559,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1762,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1763,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+255,"auto_in_wready", false,-1);
    tracep->declBit(c+1560,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1290,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_in_wlast", false,-1);
    tracep->declBit(c+1709,"auto_in_bready", false,-1);
    tracep->declBit(c+1384,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1386,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+256,"auto_in_arready", false,-1);
    tracep->declBit(c+42,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_in_rready", false,-1);
    tracep->declBit(c+257,"auto_in_rvalid", false,-1);
    tracep->declBus(c+258,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_in_rlast", false,-1);
    tracep->declBit(c+1561,"auto_out_awready", false,-1);
    tracep->declBit(c+1562,"auto_out_awvalid", false,-1);
    tracep->declBus(c+174,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+175,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+262,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1563,"auto_out_wready", false,-1);
    tracep->declBit(c+1564,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_out_wlast", false,-1);
    tracep->declBit(c+1565,"auto_out_bready", false,-1);
    tracep->declBit(c+263,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+44,"auto_out_arready", false,-1);
    tracep->declBit(c+45,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+43,"auto_out_rready", false,-1);
    tracep->declBit(c+257,"auto_out_rvalid", false,-1);
    tracep->declBus(c+258,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+264,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+265,"auto_out_rlast", false,-1);
    tracep->declBit(c+1564,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+266,"w_idle", false,-1);
    tracep->declBit(c+1566,"in_awready", false,-1);
    tracep->declBit(c+267,"busy", false,-1);
    tracep->declBus(c+268,"r_addr", false,-1, 31,0);
    tracep->declBus(c+269,"r_len", false,-1, 7,0);
    tracep->declBus(c+47,"len", false,-1, 7,0);
    tracep->declBus(c+48,"addr", false,-1, 31,0);
    tracep->declBit(c+270,"busy_1", false,-1);
    tracep->declBus(c+271,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+272,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+273,"len_1", false,-1, 7,0);
    tracep->declBus(c+1567,"addr_1", false,-1, 31,0);
    tracep->declBit(c+274,"wbeats_latched", false,-1);
    tracep->declBit(c+1562,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1568,"wbeats_valid", false,-1);
    tracep->declBus(c+275,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1569,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1553,"w_last", false,-1);
    tracep->declBit(c+1565,"nodeOut_bready", false,-1);
    tracep->declBus(c+1389,"error_0", false,-1, 1,0);
    tracep->declBus(c+1390,"error_1", false,-1, 1,0);
    tracep->declBus(c+1391,"error_2", false,-1, 1,0);
    tracep->declBus(c+1392,"error_3", false,-1, 1,0);
    tracep->declBus(c+1393,"error_4", false,-1, 1,0);
    tracep->declBus(c+1394,"error_5", false,-1, 1,0);
    tracep->declBus(c+1395,"error_6", false,-1, 1,0);
    tracep->declBus(c+1396,"error_7", false,-1, 1,0);
    tracep->declBus(c+1397,"error_8", false,-1, 1,0);
    tracep->declBus(c+1398,"error_9", false,-1, 1,0);
    tracep->declBus(c+1399,"error_10", false,-1, 1,0);
    tracep->declBus(c+1400,"error_11", false,-1, 1,0);
    tracep->declBus(c+1401,"error_12", false,-1, 1,0);
    tracep->declBus(c+1402,"error_13", false,-1, 1,0);
    tracep->declBus(c+1403,"error_14", false,-1, 1,0);
    tracep->declBus(c+1404,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+42,"io_enq_valid", false,-1);
    tracep->declBus(c+37,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+40,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+49,"io_deq_ready", false,-1);
    tracep->declBit(c+45,"io_deq_valid", false,-1);
    tracep->declBus(c+29,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+50,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+51,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+31,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+276,"ram", false,-1, 48,0);
    tracep->declBit(c+278,"full", false,-1);
    tracep->declBit(c+45,"io_deq_valid_0", false,-1);
    tracep->declBit(c+52,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+254,"io_enq_ready", false,-1);
    tracep->declBit(c+1559,"io_enq_valid", false,-1);
    tracep->declBus(c+1762,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1288,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1763,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1289,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1764,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1570,"io_deq_ready", false,-1);
    tracep->declBit(c+1571,"io_deq_valid", false,-1);
    tracep->declBus(c+174,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1572,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+279,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1549,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+175,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+280,"ram", false,-1, 48,0);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBit(c+1571,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1573,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+1560,"io_enq_valid", false,-1);
    tracep->declBus(c+1290,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1291,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1292,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1574,"io_deq_ready", false,-1);
    tracep->declBit(c+1575,"io_deq_valid", false,-1);
    tracep->declBus(c+1551,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1552,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1710,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+283,"ram", false,-1, 36,0);
    tracep->declBit(c+285,"full", false,-1);
    tracep->declBit(c+1575,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1576,"do_enq", false,-1);
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
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1577,"auto_in_awready", false,-1);
    tracep->declBit(c+1578,"auto_in_awvalid", false,-1);
    tracep->declBus(c+174,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1579,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1580,"auto_in_wready", false,-1);
    tracep->declBit(c+1581,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1582,"auto_in_bready", false,-1);
    tracep->declBit(c+286,"auto_in_bvalid", false,-1);
    tracep->declBus(c+287,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+53,"auto_in_arready", false,-1);
    tracep->declBit(c+54,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+56,"auto_in_rready", false,-1);
    tracep->declBit(c+289,"auto_in_rvalid", false,-1);
    tracep->declBus(c+290,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+291,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+292,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+53,"nodeIn_arready", false,-1);
    tracep->declBit(c+1577,"nodeIn_awready", false,-1);
    tracep->declBit(c+1583,"w_sel0", false,-1);
    tracep->declBit(c+286,"w_full", false,-1);
    tracep->declBus(c+287,"w_id", false,-1, 3,0);
    tracep->declBit(c+293,"r_sel1", false,-1);
    tracep->declBit(c+294,"w_sel1", false,-1);
    tracep->declBit(c+289,"r_full", false,-1);
    tracep->declBus(c+290,"r_id", false,-1, 3,0);
    tracep->declBit(c+57,"ren", false,-1);
    tracep->declBit(c+295,"rdata_REG", false,-1);
    tracep->declBus(c+296,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+297,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+298,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+299,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+58,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+57,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declBus(c+300,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1584,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1585,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declBus(c+1551,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1552,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1586,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1293,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1762,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1763,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1587,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1294,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1290,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1295,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1405,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1406,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+59,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1207,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1208,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1711,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1712,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1209,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1130,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1707,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1762,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1763,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1131,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1558,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1290,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1708,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1133,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1383,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1124,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1706,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1126,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1127,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1128,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1129,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+254,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1559,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1762,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1763,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+255,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1560,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1290,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1709,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1384,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1386,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+256,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+42,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+257,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+258,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1405,"in_0_bvalid", false,-1);
    tracep->declBit(c+1207,"in_0_rvalid", false,-1);
    tracep->declBit(c+1588,"in_0_wready", false,-1);
    tracep->declBit(c+1589,"in_0_awready", false,-1);
    tracep->declBit(c+1713,"in_0_arready", false,-1);
    tracep->declBit(c+1586,"anonIn_awready", false,-1);
    tracep->declBit(c+59,"anonIn_arready", false,-1);
    tracep->declBit(c+62,"requestARIO_0_0", false,-1);
    tracep->declBit(c+63,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1296,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1297,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+64,"arSel", false,-1, 15,0);
    tracep->declBus(c+1767,"awSel", false,-1, 15,0);
    tracep->declBus(c+1210,"rSel", false,-1, 15,0);
    tracep->declBus(c+1408,"bSel", false,-1, 15,0);
    tracep->declBus(c+301,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+302,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+303,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+304,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+305,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+306,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+307,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1768,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+308,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+309,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+310,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1769,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+311,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+312,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+313,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1770,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+314,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+315,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+316,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1771,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+317,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+318,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+319,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1772,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+320,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+321,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+322,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1773,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+323,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+324,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+325,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1774,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+326,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+327,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+328,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1775,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+329,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+330,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+331,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1776,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+332,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+333,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+334,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1777,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+335,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+336,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+337,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1778,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+338,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+339,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+340,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1779,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+341,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+342,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+343,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1780,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+344,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+345,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+346,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1781,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+347,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+348,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+349,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1782,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+65,"in_0_arvalid", false,-1);
    tracep->declBit(c+350,"latched", false,-1);
    tracep->declBit(c+1590,"in_0_awvalid", false,-1);
    tracep->declBit(c+1591,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1592,"in_0_wvalid", false,-1);
    tracep->declBit(c+1211,"idle_2", false,-1);
    tracep->declBit(c+1212,"anyValid", false,-1);
    tracep->declBus(c+1213,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+1214,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1215,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1216,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1217,"prefixOR_1", false,-1);
    tracep->declBit(c+1218,"winner_2_1", false,-1);
    tracep->declBit(c+1219,"state_2_0", false,-1);
    tracep->declBit(c+1220,"state_2_1", false,-1);
    tracep->declBit(c+1221,"muxState_2_0", false,-1);
    tracep->declBit(c+1222,"muxState_2_1", false,-1);
    tracep->declBit(c+1223,"idle_3", false,-1);
    tracep->declBit(c+1409,"anyValid_1", false,-1);
    tracep->declBus(c+1410,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+1224,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1411,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1412,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1413,"winner_3_0", false,-1);
    tracep->declBit(c+1414,"winner_3_1", false,-1);
    tracep->declBit(c+1225,"state_3_0", false,-1);
    tracep->declBit(c+1226,"state_3_1", false,-1);
    tracep->declBit(c+1415,"muxState_3_0", false,-1);
    tracep->declBit(c+1416,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+1591,"io_enq_valid", false,-1);
    tracep->declBus(c+1298,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1593,"io_deq_ready", false,-1);
    tracep->declBit(c+1594,"io_deq_valid", false,-1);
    tracep->declBus(c+1595,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+352,"wrap", false,-1);
    tracep->declBit(c+353,"wrap_1", false,-1);
    tracep->declBit(c+354,"maybe_full", false,-1);
    tracep->declBit(c+355,"ptr_match", false,-1);
    tracep->declBit(c+356,"empty", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+1594,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1596,"do_deq", false,-1);
    tracep->declBit(c+1597,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+353,"R0_addr", false,-1);
    tracep->declBit(c+1761,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declBus(c+358,"R0_data", false,-1, 1,0);
    tracep->declBit(c+352,"W0_addr", false,-1);
    tracep->declBit(c+1597,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declBus(c+1298,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+359+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1598,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1599,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+174,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+175,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1563,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1564,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1565,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+263,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+67,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+257,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+258,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+265,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1577,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1578,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+174,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1579,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1580,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1581,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1582,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+286,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+53,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+56,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+289,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+290,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+291,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+292,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1600,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1601,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+361,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+68,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+362,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+363,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+364,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+173,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1547,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+174,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+175,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+176,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1550,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+636,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+177,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+178,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+179,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+180,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+28,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+181,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+184,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+185,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+263,"in_0_bvalid", false,-1);
    tracep->declBit(c+257,"in_0_rvalid", false,-1);
    tracep->declBit(c+1602,"in_0_wready", false,-1);
    tracep->declBit(c+1603,"in_0_awready", false,-1);
    tracep->declBit(c+66,"in_0_arready", false,-1);
    tracep->declBit(c+1598,"anonIn_awready", false,-1);
    tracep->declBit(c+70,"requestARIO_0_0", false,-1);
    tracep->declBit(c+71,"requestARIO_0_1", false,-1);
    tracep->declBit(c+72,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1604,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1605,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1606,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+73,"arSel", false,-1, 15,0);
    tracep->declBus(c+365,"awSel", false,-1, 15,0);
    tracep->declBus(c+366,"rSel", false,-1, 15,0);
    tracep->declBus(c+1417,"bSel", false,-1, 15,0);
    tracep->declBit(c+367,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+368,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+369,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+370,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+371,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+372,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+373,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+374,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+375,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+376,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+377,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+378,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+379,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+380,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+381,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+382,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+383,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+384,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+385,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+386,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+387,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+388,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+389,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+390,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+391,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+392,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+393,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+394,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+395,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+396,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+397,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+398,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+399,"latched", false,-1);
    tracep->declBit(c+1607,"in_0_awvalid", false,-1);
    tracep->declBit(c+1608,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1609,"in_0_wvalid", false,-1);
    tracep->declBit(c+400,"idle_3", false,-1);
    tracep->declBit(c+401,"anyValid", false,-1);
    tracep->declBus(c+402,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+403,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+404,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+405,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+406,"prefixOR_1", false,-1);
    tracep->declBit(c+407,"winner_3_1", false,-1);
    tracep->declBit(c+408,"winner_3_2", false,-1);
    tracep->declBit(c+409,"state_3_0", false,-1);
    tracep->declBit(c+410,"state_3_1", false,-1);
    tracep->declBit(c+411,"state_3_2", false,-1);
    tracep->declBit(c+412,"muxState_3_0", false,-1);
    tracep->declBit(c+413,"muxState_3_1", false,-1);
    tracep->declBit(c+414,"muxState_3_2", false,-1);
    tracep->declBit(c+415,"idle_4", false,-1);
    tracep->declBit(c+416,"anyValid_1", false,-1);
    tracep->declBus(c+417,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+418,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+419,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+420,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+421,"winner_4_0", false,-1);
    tracep->declBit(c+422,"winner_4_2", false,-1);
    tracep->declBit(c+423,"state_4_0", false,-1);
    tracep->declBit(c+424,"state_4_2", false,-1);
    tracep->declBit(c+425,"muxState_4_0", false,-1);
    tracep->declBit(c+426,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+427,"io_enq_ready", false,-1);
    tracep->declBit(c+1608,"io_enq_valid", false,-1);
    tracep->declBus(c+1610,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1611,"io_deq_ready", false,-1);
    tracep->declBit(c+1612,"io_deq_valid", false,-1);
    tracep->declBus(c+1613,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+428,"wrap", false,-1);
    tracep->declBit(c+429,"wrap_1", false,-1);
    tracep->declBit(c+430,"maybe_full", false,-1);
    tracep->declBit(c+431,"ptr_match", false,-1);
    tracep->declBit(c+432,"empty", false,-1);
    tracep->declBit(c+433,"full", false,-1);
    tracep->declBit(c+1612,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1614,"do_deq", false,-1);
    tracep->declBit(c+1615,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+429,"R0_addr", false,-1);
    tracep->declBit(c+1761,"R0_en", false,-1);
    tracep->declBit(c+1674,"R0_clk", false,-1);
    tracep->declBus(c+434,"R0_data", false,-1, 2,0);
    tracep->declBit(c+428,"W0_addr", false,-1);
    tracep->declBit(c+1615,"W0_en", false,-1);
    tracep->declBit(c+1674,"W0_clk", false,-1);
    tracep->declBus(c+1610,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+435+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1561,"auto_in_awready", false,-1);
    tracep->declBit(c+1562,"auto_in_awvalid", false,-1);
    tracep->declBus(c+174,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+175,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+262,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1563,"auto_in_wready", false,-1);
    tracep->declBit(c+1564,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_in_wlast", false,-1);
    tracep->declBit(c+1565,"auto_in_bready", false,-1);
    tracep->declBit(c+263,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+44,"auto_in_arready", false,-1);
    tracep->declBit(c+45,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+43,"auto_in_rready", false,-1);
    tracep->declBit(c+257,"auto_in_rvalid", false,-1);
    tracep->declBus(c+258,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+264,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+265,"auto_in_rlast", false,-1);
    tracep->declBit(c+1598,"auto_out_awready", false,-1);
    tracep->declBit(c+1599,"auto_out_awvalid", false,-1);
    tracep->declBus(c+174,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+175,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1563,"auto_out_wready", false,-1);
    tracep->declBit(c+1564,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1551,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1552,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"auto_out_wlast", false,-1);
    tracep->declBit(c+1565,"auto_out_bready", false,-1);
    tracep->declBit(c+263,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_out_arready", false,-1);
    tracep->declBit(c+67,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_out_rready", false,-1);
    tracep->declBit(c+257,"auto_out_rvalid", false,-1);
    tracep->declBus(c+258,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+265,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+437,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+438,"io_deq_valid", false,-1);
    tracep->declBit(c+439,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+438,"full", false,-1);
    tracep->declBit(c+439,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+440,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+441,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+442,"io_deq_valid", false,-1);
    tracep->declBit(c+443,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+442,"full", false,-1);
    tracep->declBit(c+443,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+444,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+445,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+446,"io_deq_valid", false,-1);
    tracep->declBit(c+447,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+446,"full", false,-1);
    tracep->declBit(c+447,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+448,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+449,"io_enq_ready", false,-1);
    tracep->declBit(c+77,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+450,"io_deq_valid", false,-1);
    tracep->declBit(c+451,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+450,"full", false,-1);
    tracep->declBit(c+451,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+452,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+453,"io_enq_ready", false,-1);
    tracep->declBit(c+78,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+454,"io_deq_valid", false,-1);
    tracep->declBit(c+455,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+454,"full", false,-1);
    tracep->declBit(c+455,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+456,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+457,"io_enq_ready", false,-1);
    tracep->declBit(c+79,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+458,"io_deq_valid", false,-1);
    tracep->declBit(c+459,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+458,"full", false,-1);
    tracep->declBit(c+459,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+460,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+461,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+462,"io_deq_valid", false,-1);
    tracep->declBit(c+463,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+462,"full", false,-1);
    tracep->declBit(c+463,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+464,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+465,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+466,"io_deq_valid", false,-1);
    tracep->declBit(c+467,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+466,"full", false,-1);
    tracep->declBit(c+467,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+468,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+469,"io_enq_ready", false,-1);
    tracep->declBit(c+639,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1531,"io_deq_ready", false,-1);
    tracep->declBit(c+470,"io_deq_valid", false,-1);
    tracep->declBit(c+471,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+470,"full", false,-1);
    tracep->declBit(c+471,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+472,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+473,"io_enq_ready", false,-1);
    tracep->declBit(c+640,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1532,"io_deq_ready", false,-1);
    tracep->declBit(c+474,"io_deq_valid", false,-1);
    tracep->declBit(c+475,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+474,"full", false,-1);
    tracep->declBit(c+475,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+476,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+477,"io_enq_ready", false,-1);
    tracep->declBit(c+641,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1533,"io_deq_ready", false,-1);
    tracep->declBit(c+478,"io_deq_valid", false,-1);
    tracep->declBit(c+479,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+478,"full", false,-1);
    tracep->declBit(c+479,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+480,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+481,"io_enq_ready", false,-1);
    tracep->declBit(c+642,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1534,"io_deq_ready", false,-1);
    tracep->declBit(c+482,"io_deq_valid", false,-1);
    tracep->declBit(c+483,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+482,"full", false,-1);
    tracep->declBit(c+483,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+484,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+486,"io_deq_valid", false,-1);
    tracep->declBit(c+487,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+486,"full", false,-1);
    tracep->declBit(c+487,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+488,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+643,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1535,"io_deq_ready", false,-1);
    tracep->declBit(c+490,"io_deq_valid", false,-1);
    tracep->declBit(c+491,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+490,"full", false,-1);
    tracep->declBit(c+491,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+492,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+493,"io_enq_ready", false,-1);
    tracep->declBit(c+644,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1536,"io_deq_ready", false,-1);
    tracep->declBit(c+494,"io_deq_valid", false,-1);
    tracep->declBit(c+495,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+494,"full", false,-1);
    tracep->declBit(c+495,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+496,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+497,"io_enq_ready", false,-1);
    tracep->declBit(c+645,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1537,"io_deq_ready", false,-1);
    tracep->declBit(c+498,"io_deq_valid", false,-1);
    tracep->declBit(c+499,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+498,"full", false,-1);
    tracep->declBit(c+499,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+500,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+646,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1538,"io_deq_ready", false,-1);
    tracep->declBit(c+502,"io_deq_valid", false,-1);
    tracep->declBit(c+503,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+502,"full", false,-1);
    tracep->declBit(c+503,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+504,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+647,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1539,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBit(c+507,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+506,"full", false,-1);
    tracep->declBit(c+507,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+508,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+648,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1540,"io_deq_ready", false,-1);
    tracep->declBit(c+510,"io_deq_valid", false,-1);
    tracep->declBit(c+511,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->declBit(c+511,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+512,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+649,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1541,"io_deq_ready", false,-1);
    tracep->declBit(c+514,"io_deq_valid", false,-1);
    tracep->declBit(c+515,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+514,"full", false,-1);
    tracep->declBit(c+515,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+516,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+517,"io_enq_ready", false,-1);
    tracep->declBit(c+650,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1542,"io_deq_ready", false,-1);
    tracep->declBit(c+518,"io_deq_valid", false,-1);
    tracep->declBit(c+519,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+518,"full", false,-1);
    tracep->declBit(c+519,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+520,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+521,"io_enq_ready", false,-1);
    tracep->declBit(c+651,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1543,"io_deq_ready", false,-1);
    tracep->declBit(c+522,"io_deq_valid", false,-1);
    tracep->declBit(c+523,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+522,"full", false,-1);
    tracep->declBit(c+523,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+524,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+525,"io_enq_ready", false,-1);
    tracep->declBit(c+652,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1544,"io_deq_ready", false,-1);
    tracep->declBit(c+526,"io_deq_valid", false,-1);
    tracep->declBit(c+527,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+526,"full", false,-1);
    tracep->declBit(c+527,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+528,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+529,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+530,"io_deq_valid", false,-1);
    tracep->declBit(c+531,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+530,"full", false,-1);
    tracep->declBit(c+531,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+532,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+533,"io_enq_ready", false,-1);
    tracep->declBit(c+653,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1545,"io_deq_ready", false,-1);
    tracep->declBit(c+534,"io_deq_valid", false,-1);
    tracep->declBit(c+535,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+534,"full", false,-1);
    tracep->declBit(c+535,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+536,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+537,"io_enq_ready", false,-1);
    tracep->declBit(c+654,"io_enq_valid", false,-1);
    tracep->declBit(c+262,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1546,"io_deq_ready", false,-1);
    tracep->declBit(c+538,"io_deq_valid", false,-1);
    tracep->declBit(c+539,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+538,"full", false,-1);
    tracep->declBit(c+539,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+540,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+541,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+542,"io_deq_valid", false,-1);
    tracep->declBit(c+543,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+542,"full", false,-1);
    tracep->declBit(c+543,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+544,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+545,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+546,"io_deq_valid", false,-1);
    tracep->declBit(c+547,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+546,"full", false,-1);
    tracep->declBit(c+547,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+548,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+549,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+550,"io_deq_valid", false,-1);
    tracep->declBit(c+551,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+550,"full", false,-1);
    tracep->declBit(c+551,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+552,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+553,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+554,"io_deq_valid", false,-1);
    tracep->declBit(c+555,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+554,"full", false,-1);
    tracep->declBit(c+555,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+556,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+557,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+558,"io_deq_valid", false,-1);
    tracep->declBit(c+559,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+558,"full", false,-1);
    tracep->declBit(c+559,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+560,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+46,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+562,"io_deq_valid", false,-1);
    tracep->declBit(c+563,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+562,"full", false,-1);
    tracep->declBit(c+563,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+564,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1714,"reset", false,-1);
    tracep->declBit(c+1586,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1293,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1762,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1763,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1587,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1294,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1290,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1295,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1405,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1406,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1407,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+59,"auto_master_out_arready", false,-1);
    tracep->declBit(c+60,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1207,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1208,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1711,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1712,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1209,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1714,"reset", false,-1);
    tracep->declBit(c+1760,"io_interrupt", false,-1);
    tracep->declBit(c+1586,"io_master_awready", false,-1);
    tracep->declBit(c+1293,"io_master_awvalid", false,-1);
    tracep->declBus(c+1288,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1762,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1763,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1587,"io_master_wready", false,-1);
    tracep->declBit(c+1294,"io_master_wvalid", false,-1);
    tracep->declBus(c+1290,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"io_master_wlast", false,-1);
    tracep->declBit(c+1295,"io_master_bready", false,-1);
    tracep->declBit(c+1405,"io_master_bvalid", false,-1);
    tracep->declBus(c+1407,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1406,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+59,"io_master_arready", false,-1);
    tracep->declBit(c+60,"io_master_arvalid", false,-1);
    tracep->declBus(c+38,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+37,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+39,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+61,"io_master_rready", false,-1);
    tracep->declBit(c+1207,"io_master_rvalid", false,-1);
    tracep->declBus(c+1712,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1711,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1209,"io_master_rlast", false,-1);
    tracep->declBus(c+1208,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1783,"io_slave_awready", false,-1);
    tracep->declBit(c+1760,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1784,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1762,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1763,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1754,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1785,"io_slave_wready", false,-1);
    tracep->declBit(c+1760,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1784,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1762,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1760,"io_slave_wlast", false,-1);
    tracep->declBit(c+1760,"io_slave_bready", false,-1);
    tracep->declBit(c+1786,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1787,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1788,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1789,"io_slave_arready", false,-1);
    tracep->declBit(c+1760,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1784,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1762,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1763,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1754,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1764,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1760,"io_slave_rready", false,-1);
    tracep->declBit(c+1790,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1791,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1792,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1793,"io_slave_rlast", false,-1);
    tracep->declBus(c+1794,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBit(c+1616,"reset_ifu", false,-1);
    tracep->declBus(c+1617,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1618,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1619,"npc", false,-1, 31,0);
    tracep->declBit(c+1795,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1796,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1617,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1618,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+1620,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1621,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1622,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1762,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1763,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1755,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1764,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1623,"ifu_arvalid", false,-1);
    tracep->declBit(c+90,"ifu_arready", false,-1);
    tracep->declBus(c+91,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"ifu_rlast", false,-1);
    tracep->declBus(c+94,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+95,"ifu_rvalid", false,-1);
    tracep->declBit(c+1624,"ifu_rready", false,-1);
    tracep->declBit(c+965,"bus_busy", false,-1);
    tracep->declBit(c+1797,"useless1", false,-1);
    tracep->declBit(c+1798,"useless2", false,-1);
    tracep->declBit(c+1799,"useless3", false,-1);
    tracep->declBit(c+1800,"useless4", false,-1);
    tracep->declBit(c+1625,"fencei", false,-1);
    tracep->declBus(c+1299,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1762,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1763,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1300,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1764,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1301,"lsu_arvalid", false,-1);
    tracep->declBit(c+96,"lsu_arready", false,-1);
    tracep->declBus(c+97,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+98,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+99,"lsu_rlast", false,-1);
    tracep->declBus(c+100,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+101,"lsu_rvalid", false,-1);
    tracep->declBit(c+1302,"lsu_rready", false,-1);
    tracep->declBus(c+1288,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1762,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1763,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1293,"lsu_awvalid", false,-1);
    tracep->declBit(c+1586,"lsu_awready", false,-1);
    tracep->declBus(c+1290,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"lsu_wlast", false,-1);
    tracep->declBit(c+1294,"lsu_wvalid", false,-1);
    tracep->declBit(c+1587,"lsu_wready", false,-1);
    tracep->declBus(c+1407,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1406,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1405,"lsu_bvalid", false,-1);
    tracep->declBit(c+1295,"lsu_bready", false,-1);
    tracep->declBus(c+1626,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1762,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1763,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1627,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1764,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1628,"axi_arvalid", false,-1);
    tracep->declBit(c+102,"axi_arready", false,-1);
    tracep->declBus(c+103,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+105,"axi_rlast", false,-1);
    tracep->declBus(c+106,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+107,"axi_rvalid", false,-1);
    tracep->declBit(c+1629,"axi_rready", false,-1);
    tracep->declBus(c+1288,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1762,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1763,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1289,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1764,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1293,"axi_awvalid", false,-1);
    tracep->declBit(c+1586,"axi_awready", false,-1);
    tracep->declBus(c+1290,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"axi_wlast", false,-1);
    tracep->declBit(c+1294,"axi_wvalid", false,-1);
    tracep->declBit(c+1587,"axi_wready", false,-1);
    tracep->declBus(c+1407,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1406,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1405,"axi_bvalid", false,-1);
    tracep->declBit(c+1295,"axi_bready", false,-1);
    tracep->declBus(c+108,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+109,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+110,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+111,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+112,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+113,"clint_arvalid", false,-1);
    tracep->declBit(c+966,"clint_arready", false,-1);
    tracep->declBus(c+967,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+968,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+969,"clint_rlast", false,-1);
    tracep->declBus(c+1762,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+970,"clint_rvalid", false,-1);
    tracep->declBit(c+114,"clint_rready", false,-1);
    tracep->declBus(c+1801,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1802,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1803,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1804,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1805,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1806,"clint_awvalid", false,-1);
    tracep->declBit(c+971,"clint_awready", false,-1);
    tracep->declBus(c+1807,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1808,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1809,"clint_wlast", false,-1);
    tracep->declBit(c+1810,"clint_wvalid", false,-1);
    tracep->declBit(c+972,"clint_wready", false,-1);
    tracep->declBus(c+973,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1762,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+974,"clint_bvalid", false,-1);
    tracep->declBit(c+1811,"clint_bready", false,-1);
    tracep->declBus(c+1630,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1631,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1716,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1717,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1418,"a5", false,-1, 31,0);
    tracep->declBus(c+1632,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1716,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1717,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1633,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1718,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1634,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1635,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1636,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1637,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1638,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1639,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1640,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1641,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1642,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1643,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1644,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1645,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1646,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1647,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1648,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1649,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1303,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1650,"csr_write", false,-1);
    tracep->declBus(c+1651,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1419+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+975,"wdata", false,-1, 31,0);
    tracep->declBus(c+976,"waddr", false,-1, 4,0);
    tracep->declBit(c+977,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1423+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1304,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1305,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1306,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1307,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1812,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1308,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1309,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1310,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1311,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1312,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1313,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1314,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1315,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1316,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1317,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1318,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1319,"npc_valid", false,-1);
    tracep->declBit(c+1320,"rd_exu_valid", false,-1);
    tracep->declBus(c+1321,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1322,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1323,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1324,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1813,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1325,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1326,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1327,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1328,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1329,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1330,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1331,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1332,"ready_lsu_to_wbu", false,-1);
    tracep->declBit(c+1333,"rd_lsu_valid", false,-1);
    tracep->declBit(c+978,"rd_wbu_valid", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBus(c+1622,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1762,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1763,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1755,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1764,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1623,"arvalid_i_a", false,-1);
    tracep->declBit(c+90,"arready_o_a", false,-1);
    tracep->declBus(c+91,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+92,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+93,"rlast_o_a", false,-1);
    tracep->declBus(c+94,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+95,"rvalid_o_a", false,-1);
    tracep->declBit(c+1624,"rready_i_a", false,-1);
    tracep->declBus(c+1814,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1762,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1763,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1754,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1764,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1760,"awvalid_i_a", false,-1);
    tracep->declBit(c+1815,"awready_o_a", false,-1);
    tracep->declBus(c+1814,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1762,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1760,"wlast_i_a", false,-1);
    tracep->declBit(c+1760,"wvalid_i_a", false,-1);
    tracep->declBit(c+1816,"wready_o_a", false,-1);
    tracep->declBus(c+1817,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1818,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1819,"bvalid_o_a", false,-1);
    tracep->declBit(c+1760,"bready_i_a", false,-1);
    tracep->declBus(c+1299,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1762,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1763,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1300,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1764,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1301,"arvalid_i_b", false,-1);
    tracep->declBit(c+96,"arready_o_b", false,-1);
    tracep->declBus(c+97,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+98,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+99,"rlast_o_b", false,-1);
    tracep->declBus(c+100,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+101,"rvalid_o_b", false,-1);
    tracep->declBit(c+1302,"rready_i_b", false,-1);
    tracep->declBus(c+1288,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1762,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1763,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1289,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1764,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1293,"awvalid_i_b", false,-1);
    tracep->declBit(c+1586,"awready_o_b", false,-1);
    tracep->declBus(c+1290,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1291,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1292,"wlast_i_b", false,-1);
    tracep->declBit(c+1294,"wvalid_i_b", false,-1);
    tracep->declBit(c+1587,"wready_o_b", false,-1);
    tracep->declBus(c+1407,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1406,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1405,"bvalid_o_b", false,-1);
    tracep->declBit(c+1295,"bready_i_b", false,-1);
    tracep->declBus(c+1626,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1762,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1763,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1627,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1764,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1628,"arvalid_o", false,-1);
    tracep->declBit(c+102,"arready_i", false,-1);
    tracep->declBus(c+103,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+104,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+105,"rlast_i", false,-1);
    tracep->declBus(c+106,"rid_i", false,-1, 3,0);
    tracep->declBit(c+107,"rvalid_i", false,-1);
    tracep->declBit(c+1629,"rready_o", false,-1);
    tracep->declBus(c+1288,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1762,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1763,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1289,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1764,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1293,"awvalid_o", false,-1);
    tracep->declBit(c+1586,"awready_i", false,-1);
    tracep->declBus(c+1290,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1291,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1292,"wlast_o", false,-1);
    tracep->declBit(c+1294,"wvalid_o", false,-1);
    tracep->declBit(c+1587,"wready_i", false,-1);
    tracep->declBus(c+1407,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1406,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1405,"bvalid_i", false,-1);
    tracep->declBit(c+1295,"bready_o", false,-1);
    tracep->declBit(c+965,"bus_busy", false,-1);
    tracep->declBus(c+1820,"MASTER_A", false,-1, 0,0);
    tracep->declBus(c+1821,"MASTER_B", false,-1, 0,0);
    tracep->declBit(c+979,"arb_grant", false,-1);
    tracep->declBit(c+980,"arb_locked", false,-1);
    tracep->declBit(c+981,"current_master", false,-1);
    tracep->declBit(c+1719,"ar_handshake", false,-1);
    tracep->declBit(c+1720,"r_last_handshake", false,-1);
    tracep->declBit(c+1652,"arb_grant_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBus(c+108,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+109,"arid_i", false,-1, 3,0);
    tracep->declBus(c+110,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+111,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+112,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+113,"arvalid_i", false,-1);
    tracep->declBit(c+966,"arready_o", false,-1);
    tracep->declBus(c+967,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+968,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+969,"rlast_o", false,-1);
    tracep->declBus(c+1762,"rid_o", false,-1, 3,0);
    tracep->declBit(c+970,"rvalid_o", false,-1);
    tracep->declBit(c+114,"rready_i", false,-1);
    tracep->declBus(c+1801,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1802,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1803,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1804,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1805,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1806,"awvalid_i", false,-1);
    tracep->declBit(c+971,"awready_o", false,-1);
    tracep->declBus(c+1807,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1808,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1809,"wlast_i", false,-1);
    tracep->declBit(c+1810,"wvalid_i", false,-1);
    tracep->declBit(c+972,"wready_o", false,-1);
    tracep->declBus(c+973,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1762,"bid_o", false,-1, 3,0);
    tracep->declBit(c+974,"bvalid_o", false,-1);
    tracep->declBit(c+1811,"bready_i", false,-1);
    tracep->declBit(c+982,"ar_state", false,-1);
    tracep->declBit(c+983,"r_state", false,-1);
    tracep->declBit(c+984,"aw_state", false,-1);
    tracep->declBit(c+985,"w_state", false,-1);
    tracep->declBit(c+1822,"b_state", false,-1);
    tracep->declBus(c+986,"araddr", false,-1, 31,0);
    tracep->declBus(c+987,"awaddr", false,-1, 31,0);
    tracep->declBus(c+988,"wdata", false,-1, 31,0);
    tracep->declBus(c+989,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1823,"wvalid", false,-1);
    tracep->declBit(c+990,"flag_waddr", false,-1);
    tracep->declBit(c+991,"flag_wdata", false,-1);
    tracep->declBit(c+992,"flag_rdata", false,-1);
    tracep->declBit(c+993,"flag_raddr", false,-1);
    tracep->declBit(c+1824,"flag_write", false,-1);
    tracep->declBus(c+994,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+995,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+996,"w_delay", false,-1, 4,0);
    tracep->declBus(c+997,"r_delay", false,-1, 4,0);
    tracep->declBus(c+998,"LFSR", false,-1, 4,0);
    tracep->declBit(c+999,"lfsr_in", false,-1);
    tracep->declBus(c+1000,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1001,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBit(c+1616,"reset_ifu", false,-1);
    tracep->declBus(c+1632,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1716,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1717,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1633,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1718,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1634,"a_in_src_i", false,-1);
    tracep->declBus(c+1635,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1636,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1637,"adder_a_src_i", false,-1);
    tracep->declBit(c+1638,"adder_out_src_i", false,-1);
    tracep->declBus(c+1639,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1640,"MemRead_i", false,-1);
    tracep->declBit(c+1641,"MemWrite_i", false,-1);
    tracep->declBus(c+1642,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1643,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1644,"wb_src_i", false,-1);
    tracep->declBit(c+1645,"csr_write_i", false,-1);
    tracep->declBit(c+1646,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1647,"reg_write_i", false,-1);
    tracep->declBus(c+1648,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1649,"exu_valid_i", false,-1);
    tracep->declBit(c+1303,"exu_ready_o", false,-1);
    tracep->declBus(c+1304,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1305,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1306,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1307,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1619,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1308,"MemRead_o", false,-1);
    tracep->declBit(c+1309,"MemWrite_o", false,-1);
    tracep->declBus(c+1310,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1311,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1312,"wb_src_o", false,-1);
    tracep->declBit(c+1313,"csr_write_o", false,-1);
    tracep->declBit(c+1314,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1315,"reg_write_o", false,-1);
    tracep->declBus(c+1316,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1317,"exu_valid_o", false,-1);
    tracep->declBit(c+1318,"exu_ready_i", false,-1);
    tracep->declBit(c+1319,"npc_valid", false,-1);
    tracep->declBit(c+1320,"rd_exu_valid", false,-1);
    tracep->declBus(c+1334,"pc", false,-1, 31,0);
    tracep->declBus(c+1305,"rs1", false,-1, 31,0);
    tracep->declBus(c+1306,"rs2", false,-1, 31,0);
    tracep->declBus(c+1335,"imm", false,-1, 31,0);
    tracep->declBus(c+1336,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1337,"a_in_src", false,-1);
    tracep->declBus(c+1338,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1339,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1340,"adder_a_src", false,-1);
    tracep->declBit(c+1341,"adder_out_src", false,-1);
    tracep->declBus(c+1342,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1343,"npc_flag", false,-1);
    tracep->declBus(c+1344,"a_in", false,-1, 31,0);
    tracep->declBus(c+1345,"b_in", false,-1, 31,0);
    tracep->declBus(c+1346,"a_out", false,-1, 31,0);
    tracep->declBus(c+1347,"add_out", false,-1, 31,0);
    tracep->declBus(c+1348,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1304,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1619,"npc", false,-1, 31,0);
    tracep->declBit(c+1349,"zero", false,-1);
    tracep->declBus(c+1764,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1825,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1826,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1350,"current_state", false,-1, 1,0);
    tracep->declBus(c+1653,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1344,"a", false,-1, 31,0);
    tracep->declBus(c+1345,"b", false,-1, 31,0);
    tracep->declBus(c+1342,"op", false,-1, 3,0);
    tracep->declBus(c+1304,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1349,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1827,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1305,"d0", false,-1, 31,0);
    tracep->declBus(c+1334,"d1", false,-1, 31,0);
    tracep->declBit(c+1337,"sel", false,-1);
    tracep->declBus(c+1344,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1827,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1306,"d0", false,-1, 31,0);
    tracep->declBus(c+1335,"d1", false,-1, 31,0);
    tracep->declBus(c+1828,"d2", false,-1, 31,0);
    tracep->declBus(c+1336,"d3", false,-1, 31,0);
    tracep->declBus(c+1338,"sel", false,-1, 1,0);
    tracep->declBus(c+1345,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1346,"a", false,-1, 31,0);
    tracep->declBus(c+1335,"b", false,-1, 31,0);
    tracep->declBus(c+1347,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1827,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1334,"d0", false,-1, 31,0);
    tracep->declBus(c+1305,"d1", false,-1, 31,0);
    tracep->declBit(c+1340,"sel", false,-1);
    tracep->declBus(c+1346,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1827,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1347,"d0", false,-1, 31,0);
    tracep->declBus(c+1336,"d1", false,-1, 31,0);
    tracep->declBit(c+1341,"sel", false,-1);
    tracep->declBus(c+1348,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1351,"pc4", false,-1, 31,0);
    tracep->declBus(c+1348,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1339,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1349,"zero", false,-1);
    tracep->declBus(c+1304,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1619,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBit(c+1616,"reset_ifu", false,-1);
    tracep->declBus(c+1630,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1631,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1716,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1717,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1418,"a5", false,-1, 31,0);
    tracep->declBus(c+1617,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1618,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1620,"idu_valid_i", false,-1);
    tracep->declBit(c+1621,"idu_ready_o", false,-1);
    tracep->declBus(c+1632,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1716,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1717,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1633,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1718,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1634,"a_in_src_o", false,-1);
    tracep->declBus(c+1635,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1636,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1637,"adder_a_src_o", false,-1);
    tracep->declBit(c+1638,"adder_out_src_o", false,-1);
    tracep->declBus(c+1639,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1640,"MemRead_o", false,-1);
    tracep->declBit(c+1641,"MemWrite_o", false,-1);
    tracep->declBus(c+1642,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1643,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1644,"wb_src_o", false,-1);
    tracep->declBit(c+1645,"csr_write_o", false,-1);
    tracep->declBit(c+1646,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1647,"reg_write_o", false,-1);
    tracep->declBus(c+1648,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1649,"idu_valid_o", false,-1);
    tracep->declBit(c+1303,"idu_ready_i", false,-1);
    tracep->declBit(c+1650,"csr_write_i", false,-1);
    tracep->declBus(c+1651,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1455+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1625,"fencei", false,-1);
    tracep->declBus(c+1352,"exu_rd", false,-1, 4,0);
    tracep->declBus(c+1353,"lsu_rd", false,-1, 4,0);
    tracep->declBus(c+1003,"wbu_rd", false,-1, 4,0);
    tracep->declBus(c+1632,"pc", false,-1, 31,0);
    tracep->declBus(c+1654,"inst", false,-1, 31,0);
    tracep->declBus(c+1655,"opcode", false,-1, 6,0);
    tracep->declBus(c+1656,"wmask_tmp", false,-1, 7,0);
    tracep->declBit(c+1657,"opcode_r", false,-1);
    tracep->declBit(c+1658,"opcode_i", false,-1);
    tracep->declBit(c+1659,"opcode_s", false,-1);
    tracep->declBit(c+1660,"opcode_sb", false,-1);
    tracep->declBit(c+1661,"opcode_u", false,-1);
    tracep->declBit(c+1662,"opcode_uj", false,-1);
    tracep->declBit(c+1721,"isRAW", false,-1);
    tracep->declBit(c+1663,"flag", false,-1);
    tracep->declBit(c+1722,"exu_raw", false,-1);
    tracep->declBit(c+1723,"lsu_raw", false,-1);
    tracep->declBit(c+1724,"wbu_raw", false,-1);
    tracep->declBus(c+1764,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1825,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1826,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1664,"current_state", false,-1, 1,0);
    tracep->declBus(c+1665,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1654,"inst", false,-1, 31,0);
    tracep->declBus(c+1639,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1655,"opcode", false,-1, 6,0);
    tracep->declBus(c+1666,"funct3", false,-1, 2,0);
    tracep->declBus(c+1667,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1650,"wen", false,-1);
    tracep->declBus(c+1654,"inst", false,-1, 31,0);
    tracep->declBus(c+1651,"wdata", false,-1, 31,0);
    tracep->declBus(c+1418,"NO", false,-1, 31,0);
    tracep->declBus(c+1632,"pc", false,-1, 31,0);
    tracep->declBus(c+1718,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1459+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1463,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1464,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1465,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1466,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1829,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1830,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1655,"opcode", false,-1, 6,0);
    tracep->declBus(c+1666,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1654,"inst", false,-1, 31,0);
    tracep->declBit(c+1634,"a_in_src", false,-1);
    tracep->declBus(c+1635,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1647,"reg_write", false,-1);
    tracep->declBus(c+1636,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1637,"adder_a_src", false,-1);
    tracep->declBit(c+1640,"MemRead", false,-1);
    tracep->declBit(c+1641,"MemWrite", false,-1);
    tracep->declBus(c+1656,"wmask", false,-1, 7,0);
    tracep->declBit(c+1644,"wb_src", false,-1);
    tracep->declBus(c+1643,"rmask", false,-1, 2,0);
    tracep->declBit(c+1645,"csr_write", false,-1);
    tracep->declBit(c+1638,"adder_out_src", false,-1);
    tracep->declBit(c+1646,"csr_wdata_src", false,-1);
    tracep->declBus(c+1655,"opcode", false,-1, 6,0);
    tracep->declBus(c+1666,"funct3", false,-1, 2,0);
    tracep->declBus(c+1667,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1827,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1654,"inst", false,-1, 31,0);
    tracep->declBus(c+1633,"data", false,-1, 31,0);
    tracep->declBus(c+1655,"opcode", false,-1, 6,0);
    tracep->declBus(c+1666,"funct3", false,-1, 2,0);
    tracep->declBus(c+1667,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBus(c+1622,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1762,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1763,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1755,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1764,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1623,"arvalid_o", false,-1);
    tracep->declBit(c+90,"arready_i", false,-1);
    tracep->declBus(c+91,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+92,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+93,"rlast_i", false,-1);
    tracep->declBus(c+94,"rid_i", false,-1, 3,0);
    tracep->declBit(c+95,"rvalid_i", false,-1);
    tracep->declBit(c+1624,"rready_o", false,-1);
    tracep->declBus(c+1619,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1319,"npc_valid", false,-1);
    tracep->declBit(c+1616,"reset_o", false,-1);
    tracep->declBus(c+1617,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1618,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1620,"ifu_valid_o", false,-1);
    tracep->declBit(c+1621,"ifu_ready_i", false,-1);
    tracep->declBit(c+965,"bus_busy", false,-1);
    tracep->declBus(c+1668,"pc_dbg", false,-1, 31,0);
    tracep->declBus(c+1754,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1751,"S_WAIT_R", false,-1, 2,0);
    tracep->declBus(c+1755,"S_OUT", false,-1, 2,0);
    tracep->declBus(c+1756,"S_FLUSH", false,-1, 2,0);
    tracep->declBus(c+1668,"pc_fetch", false,-1, 31,0);
    tracep->declBus(c+1669,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1670,"inst_buf", false,-1, 31,0);
    tracep->declBus(c+1671,"state", false,-1, 2,0);
    tracep->declBit(c+1672,"ctrl_hazard", false,-1);
    tracep->declBit(c+1673,"ar_inflight", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBus(c+1304,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1305,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1306,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1307,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1308,"MemRead_i", false,-1);
    tracep->declBit(c+1309,"MemWrite_i", false,-1);
    tracep->declBus(c+1310,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1311,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1312,"wb_src_i", false,-1);
    tracep->declBit(c+1313,"csr_write_i", false,-1);
    tracep->declBit(c+1314,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1315,"reg_write_i", false,-1);
    tracep->declBus(c+1316,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1317,"lsu_valid_i", false,-1);
    tracep->declBit(c+1318,"lsu_ready_o", false,-1);
    tracep->declBus(c+1321,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1322,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1323,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1324,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1325,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1326,"wb_src_o", false,-1);
    tracep->declBit(c+1327,"csr_write_o", false,-1);
    tracep->declBit(c+1328,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1329,"reg_write_o", false,-1);
    tracep->declBus(c+1330,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1331,"lsu_valid_o", false,-1);
    tracep->declBit(c+1332,"lsu_ready_i", false,-1);
    tracep->declBus(c+1299,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1762,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1763,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1300,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1764,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1301,"arvalid_o", false,-1);
    tracep->declBit(c+96,"arready_i", false,-1);
    tracep->declBus(c+97,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+98,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+99,"rlast_i", false,-1);
    tracep->declBus(c+100,"rid_i", false,-1, 3,0);
    tracep->declBit(c+101,"rvalid_i", false,-1);
    tracep->declBit(c+1302,"rready_o", false,-1);
    tracep->declBus(c+1288,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1762,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1763,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1289,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1764,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1293,"awvalid_o", false,-1);
    tracep->declBit(c+1586,"awready_i", false,-1);
    tracep->declBus(c+1290,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1291,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1292,"wlast_o", false,-1);
    tracep->declBit(c+1294,"wvalid_o", false,-1);
    tracep->declBit(c+1587,"wready_i", false,-1);
    tracep->declBus(c+1407,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1406,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1405,"bvalid_i", false,-1);
    tracep->declBit(c+1295,"bready_o", false,-1);
    tracep->declBit(c+965,"bus_busy", false,-1);
    tracep->declBit(c+1333,"rd_lsu_valid", false,-1);
    tracep->declBus(c+1321,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1322,"rs1", false,-1, 31,0);
    tracep->declBus(c+1831,"rs2", false,-1, 31,0);
    tracep->declBus(c+1832,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1325,"rmask", false,-1, 2,0);
    tracep->declBus(c+1354,"wmask", false,-1, 3,0);
    tracep->declBit(c+1355,"flag", false,-1);
    tracep->declBit(c+1833,"wvalid_tmp", false,-1);
    tracep->declBit(c+1356,"MemRead", false,-1);
    tracep->declBit(c+1357,"MemWrite", false,-1);
    tracep->declBit(c+1301,"arvalid", false,-1);
    tracep->declBus(c+1299,"araddr", false,-1, 31,0);
    tracep->declBit(c+1302,"rready", false,-1);
    tracep->declBus(c+1288,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1293,"awvalid", false,-1);
    tracep->declBus(c+1290,"wdata", false,-1, 31,0);
    tracep->declBus(c+1291,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"wvalid", false,-1);
    tracep->declBit(c+1295,"bready", false,-1);
    tracep->declBit(c+1358,"read_mem", false,-1);
    tracep->declBit(c+1359,"write_mem", false,-1);
    tracep->declBus(c+1764,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1825,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1826,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1360,"current_state", false,-1, 1,0);
    tracep->declBus(c+1725,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1834,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1827,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBus(c+975,"wdata", false,-1, 31,0);
    tracep->declBus(c+976,"waddr", false,-1, 4,0);
    tracep->declBit(c+977,"wen", false,-1);
    tracep->declBus(c+1630,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1716,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1631,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1717,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1418,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1467+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1499+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBus(c+1321,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1322,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1323,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1324,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1325,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1326,"wb_src_i", false,-1);
    tracep->declBit(c+1327,"csr_write_i", false,-1);
    tracep->declBit(c+1328,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1329,"reg_write_i", false,-1);
    tracep->declBus(c+1330,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1331,"wbu_valid_i", false,-1);
    tracep->declBit(c+1332,"wbu_ready_o", false,-1);
    tracep->declBus(c+1651,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+975,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1650,"csr_write_o", false,-1);
    tracep->declBit(c+977,"reg_write_o", false,-1);
    tracep->declBus(c+976,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+978,"rd_wbu_valid", false,-1);
    tracep->declBus(c+1004,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1005,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1006,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1007,"rs1", false,-1, 31,0);
    tracep->declBus(c+1008,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1009,"rmask", false,-1, 2,0);
    tracep->declBit(c+1010,"wb_src", false,-1);
    tracep->declBit(c+1011,"csr_wdata_src", false,-1);
    tracep->declBit(c+1012,"difftest_check", false,-1);
    tracep->declBit(c+1013,"difftest_check_flag", false,-1);
    tracep->declBus(c+1764,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1825,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1826,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1014,"current_state", false,-1, 1,0);
    tracep->declBus(c+1726,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1827,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1007,"d0", false,-1, 31,0);
    tracep->declBus(c+1008,"d1", false,-1, 31,0);
    tracep->declBit(c+1011,"sel", false,-1);
    tracep->declBus(c+1651,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1005,"read_data", false,-1, 31,0);
    tracep->declBus(c+1015,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1009,"rmask", false,-1, 2,0);
    tracep->declBus(c+1004,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1016,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1017,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1018,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1019,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1020,"byte3", false,-1, 31,0);
    tracep->declBus(c+1021,"byte2", false,-1, 31,0);
    tracep->declBus(c+1022,"byte1", false,-1, 31,0);
    tracep->declBus(c+1023,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1827,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1006,"d0", false,-1, 31,0);
    tracep->declBus(c+1004,"d1", false,-1, 31,0);
    tracep->declBit(c+1010,"sel", false,-1);
    tracep->declBus(c+975,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1715,"rst_n", false,-1);
    tracep->declBus(c+1626,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1762,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1763,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1627,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1764,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1628,"axi_arvalid_i", false,-1);
    tracep->declBit(c+102,"axi_arready_o", false,-1);
    tracep->declBus(c+103,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+104,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+105,"axi_rlast_o", false,-1);
    tracep->declBus(c+106,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+107,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1629,"axi_rready_i", false,-1);
    tracep->declBus(c+1288,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1762,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1763,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1289,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1764,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1293,"axi_awvalid_i", false,-1);
    tracep->declBit(c+1586,"axi_awready_o", false,-1);
    tracep->declBus(c+1290,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1291,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1292,"axi_wlast_i", false,-1);
    tracep->declBit(c+1294,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1587,"axi_wready_o", false,-1);
    tracep->declBus(c+1407,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1406,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1405,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1295,"axi_bready_i", false,-1);
    tracep->declBus(c+38,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+37,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+39,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+40,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+41,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+60,"sram_arvalid_o", false,-1);
    tracep->declBit(c+59,"sram_arready_i", false,-1);
    tracep->declBus(c+1711,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1712,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1209,"sram_rlast_i", false,-1);
    tracep->declBus(c+1208,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1207,"sram_rvalid_i", false,-1);
    tracep->declBit(c+61,"sram_rready_o", false,-1);
    tracep->declBus(c+1288,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1762,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1763,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1289,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1764,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1293,"sram_awvalid_o", false,-1);
    tracep->declBit(c+1586,"sram_awready_i", false,-1);
    tracep->declBus(c+1290,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1291,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1292,"sram_wlast_o", false,-1);
    tracep->declBit(c+1294,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1587,"sram_wready_i", false,-1);
    tracep->declBus(c+1407,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1406,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1405,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1295,"sram_bready_o", false,-1);
    tracep->declBus(c+108,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+109,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+110,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+111,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+112,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+113,"clint_arvalid_o", false,-1);
    tracep->declBit(c+966,"clint_arready_i", false,-1);
    tracep->declBus(c+967,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+968,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+969,"clint_rlast_i", false,-1);
    tracep->declBus(c+1762,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+970,"clint_rvalid_i", false,-1);
    tracep->declBit(c+114,"clint_rready_o", false,-1);
    tracep->declBus(c+1801,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1802,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1803,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1804,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1805,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1806,"clint_awvalid_o", false,-1);
    tracep->declBit(c+971,"clint_awready_i", false,-1);
    tracep->declBus(c+1807,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1808,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1809,"clint_wlast_o", false,-1);
    tracep->declBit(c+1810,"clint_wvalid_o", false,-1);
    tracep->declBit(c+972,"clint_wready_i", false,-1);
    tracep->declBus(c+973,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1762,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+974,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1811,"clint_bready_o", false,-1);
    tracep->declBit(c+115,"ar_switch", false,-1);
    tracep->declBit(c+116,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"io_d", false,-1);
    tracep->declBit(c+565,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"io_d", false,-1);
    tracep->declBit(c+565,"io_q", false,-1);
    tracep->declBit(c+565,"sync_0", false,-1);
    tracep->declBit(c+566,"sync_1", false,-1);
    tracep->declBit(c+567,"sync_2", false,-1);
    tracep->declBit(c+568,"sync_3", false,-1);
    tracep->declBit(c+569,"sync_4", false,-1);
    tracep->declBit(c+570,"sync_5", false,-1);
    tracep->declBit(c+571,"sync_6", false,-1);
    tracep->declBit(c+572,"sync_7", false,-1);
    tracep->declBit(c+573,"sync_8", false,-1);
    tracep->declBit(c+574,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1109,"auto_in_psel", false,-1);
    tracep->declBit(c+1110,"auto_in_penable", false,-1);
    tracep->declBit(c+1099,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1108,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1098,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+671,"auto_in_pready", false,-1);
    tracep->declBit(c+1760,"auto_in_pslverr", false,-1);
    tracep->declBus(c+672,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1676,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1677,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1678,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1680,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1681,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1682,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1683,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1684,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1685,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1227,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1109,"in_psel", false,-1);
    tracep->declBit(c+1110,"in_penable", false,-1);
    tracep->declBus(c+1098,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1099,"in_pwrite", false,-1);
    tracep->declBus(c+1100,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+671,"in_pready", false,-1);
    tracep->declBus(c+672,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1760,"in_pslverr", false,-1);
    tracep->declBus(c+1676,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1677,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1678,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1680,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1681,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1682,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1683,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1684,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1685,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+676,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+672,"rdata", false,-1, 31,0);
    tracep->declBus(c+677,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+671,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+678,"num", false,-1, 3,0);
    tracep->declBus(c+1678,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+679,"num", false,-1, 3,0);
    tracep->declBus(c+1679,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+680,"num", false,-1, 3,0);
    tracep->declBus(c+1680,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+681,"num", false,-1, 3,0);
    tracep->declBus(c+1681,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+682,"num", false,-1, 3,0);
    tracep->declBus(c+1682,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+683,"num", false,-1, 3,0);
    tracep->declBus(c+1683,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+684,"num", false,-1, 3,0);
    tracep->declBus(c+1684,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+685,"num", false,-1, 3,0);
    tracep->declBus(c+1685,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1106,"auto_in_psel", false,-1);
    tracep->declBit(c+1107,"auto_in_penable", false,-1);
    tracep->declBit(c+1099,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1108,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1098,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+138,"auto_in_pready", false,-1);
    tracep->declBit(c+1760,"auto_in_pslverr", false,-1);
    tracep->declBus(c+139,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1686,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1687,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1227,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1106,"in_psel", false,-1);
    tracep->declBit(c+1107,"in_penable", false,-1);
    tracep->declBus(c+1098,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1099,"in_pwrite", false,-1);
    tracep->declBus(c+1100,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+138,"in_pready", false,-1);
    tracep->declBus(c+139,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1760,"in_pslverr", false,-1);
    tracep->declBit(c+1686,"ps2_clk", false,-1);
    tracep->declBit(c+1687,"ps2_data", false,-1);
    tracep->declBus(c+575,"data_r", false,-1, 7,0);
    tracep->declBus(c+576,"old_data", false,-1, 7,0);
    tracep->declBus(c+577,"data_asic", false,-1, 7,0);
    tracep->declBus(c+578,"buffer", false,-1, 7,0);
    tracep->declBit(c+579,"ready", false,-1);
    tracep->declBit(c+580,"nextdata_n", false,-1);
    tracep->declBit(c+581,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1727,"clrn", false,-1);
    tracep->declBit(c+1686,"ps2_clk", false,-1);
    tracep->declBit(c+1687,"ps2_data", false,-1);
    tracep->declBit(c+580,"nextdata_n", false,-1);
    tracep->declBus(c+578,"data", false,-1, 7,0);
    tracep->declBit(c+579,"ready", false,-1);
    tracep->declBit(c+581,"overflow", false,-1);
    tracep->declBus(c+582,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+583+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+591,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+592,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+593,"count", false,-1, 3,0);
    tracep->declBus(c+594,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+595,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1600,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1601,"auto_in_wvalid", false,-1);
    tracep->declBit(c+361,"auto_in_arready", false,-1);
    tracep->declBit(c+68,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+362,"auto_in_rvalid", false,-1);
    tracep->declBus(c+363,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+364,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+362,"state", false,-1);
    tracep->declBus(c+364,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+363,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+117,"raddr", false,-1, 31,0);
    tracep->declBit(c+118,"ren", false,-1);
    tracep->declBus(c+119,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1111,"auto_in_psel", false,-1);
    tracep->declBit(c+1112,"auto_in_penable", false,-1);
    tracep->declBit(c+1099,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1095,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1704,"auto_in_pready", false,-1);
    tracep->declBit(c+1760,"auto_in_pslverr", false,-1);
    tracep->declBus(c+140,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1697,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1361,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1698,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1095,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1111,"in_psel", false,-1);
    tracep->declBit(c+1112,"in_penable", false,-1);
    tracep->declBus(c+1098,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1099,"in_pwrite", false,-1);
    tracep->declBus(c+1100,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1704,"in_pready", false,-1);
    tracep->declBus(c+140,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1760,"in_pslverr", false,-1);
    tracep->declBit(c+1697,"qspi_sck", false,-1);
    tracep->declBit(c+1361,"qspi_ce_n", false,-1);
    tracep->declBus(c+1698,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1698,"din", false,-1, 3,0);
    tracep->declBus(c+1728,"dout", false,-1, 3,0);
    tracep->declBus(c+1365,"douten", false,-1, 3,0);
    tracep->declBit(c+1729,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1674,"clk_i", false,-1);
    tracep->declBit(c+1675,"rst_i", false,-1);
    tracep->declBus(c+1095,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1100,"dat_i", false,-1, 31,0);
    tracep->declBus(c+140,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1101,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1111,"cyc_i", false,-1);
    tracep->declBit(c+1111,"stb_i", false,-1);
    tracep->declBit(c+1729,"ack_o", false,-1);
    tracep->declBit(c+1099,"we_i", false,-1);
    tracep->declBit(c+1697,"sck", false,-1);
    tracep->declBit(c+1361,"ce_n", false,-1);
    tracep->declBus(c+1698,"din", false,-1, 3,0);
    tracep->declBus(c+1728,"dout", false,-1, 3,0);
    tracep->declBus(c+1365,"douten", false,-1, 3,0);
    tracep->declBus(c+1764,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1825,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1826,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+686,"mr_sck", false,-1);
    tracep->declBit(c+687,"mr_ce_n", false,-1);
    tracep->declBus(c+1698,"mr_din", false,-1, 3,0);
    tracep->declBus(c+688,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+689,"mr_doe", false,-1);
    tracep->declBit(c+690,"mw_sck", false,-1);
    tracep->declBit(c+691,"mw_ce_n", false,-1);
    tracep->declBus(c+1698,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1244,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+692,"mw_doe", false,-1);
    tracep->declBit(c+1366,"mr_rd", false,-1);
    tracep->declBit(c+693,"mr_done", false,-1);
    tracep->declBit(c+1367,"mw_wr", false,-1);
    tracep->declBit(c+1245,"mw_done", false,-1);
    tracep->declBit(c+1111,"wb_valid", false,-1);
    tracep->declBit(c+1228,"wb_we", false,-1);
    tracep->declBit(c+1229,"wb_re", false,-1);
    tracep->declBus(c+1262,"state", false,-1, 1,0);
    tracep->declBus(c+1730,"nstate", false,-1, 1,0);
    tracep->declBus(c+1731,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1732,"qpi_sck", false,-1);
    tracep->declBus(c+1230,"size", false,-1, 2,0);
    tracep->declBus(c+1231,"byte0", false,-1, 7,0);
    tracep->declBus(c+1232,"byte1", false,-1, 7,0);
    tracep->declBus(c+1233,"byte2", false,-1, 7,0);
    tracep->declBus(c+1234,"byte3", false,-1, 7,0);
    tracep->declBus(c+1733,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1727,"rst_n", false,-1);
    tracep->declBus(c+1235,"addr", false,-1, 23,0);
    tracep->declBit(c+1366,"rd", false,-1);
    tracep->declBus(c+1757,"size", false,-1, 2,0);
    tracep->declBit(c+693,"done", false,-1);
    tracep->declBus(c+140,"line", false,-1, 31,0);
    tracep->declBit(c+686,"sck", false,-1);
    tracep->declBit(c+687,"ce_n", false,-1);
    tracep->declBus(c+1698,"din", false,-1, 3,0);
    tracep->declBus(c+688,"dout", false,-1, 3,0);
    tracep->declBit(c+689,"douten", false,-1);
    tracep->declBus(c+1820,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1821,"READ", false,-1, 0,0);
    tracep->declBus(c+1835,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+694,"state", false,-1);
    tracep->declBit(c+1368,"nstate", false,-1);
    tracep->declBus(c+695,"counter", false,-1, 7,0);
    tracep->declBus(c+696,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+596+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1836,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+697,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1727,"rst_n", false,-1);
    tracep->declBus(c+1236,"addr", false,-1, 23,0);
    tracep->declBus(c+1733,"line", false,-1, 31,0);
    tracep->declBus(c+1230,"size", false,-1, 2,0);
    tracep->declBit(c+1367,"wr", false,-1);
    tracep->declBit(c+1245,"done", false,-1);
    tracep->declBit(c+690,"sck", false,-1);
    tracep->declBit(c+691,"ce_n", false,-1);
    tracep->declBus(c+1698,"din", false,-1, 3,0);
    tracep->declBus(c+1244,"dout", false,-1, 3,0);
    tracep->declBit(c+692,"douten", false,-1);
    tracep->declBus(c+1820,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1821,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1237,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+698,"state", false,-1);
    tracep->declBit(c+1369,"nstate", false,-1);
    tracep->declBus(c+699,"counter", false,-1, 7,0);
    tracep->declBus(c+700,"saddr", false,-1, 23,0);
    tracep->declBus(c+1837,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1363,"auto_in_awready", false,-1);
    tracep->declBit(c+1141,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1142,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1364,"auto_in_wready", false,-1);
    tracep->declBit(c+1147,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"auto_in_wlast", false,-1);
    tracep->declBit(c+1151,"auto_in_bready", false,-1);
    tracep->declBit(c+1261,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1258,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1764,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1362,"auto_in_arready", false,-1);
    tracep->declBit(c+1134,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1135,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1136,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1138,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1139,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1140,"auto_in_rready", false,-1);
    tracep->declBit(c+1257,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1258,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1259,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1764,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1260,"auto_in_rlast", false,-1);
    tracep->declBit(c+1699,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1254,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+666,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+667,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+668,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+669,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1700,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1256,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1281,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1363,"in_awready", false,-1);
    tracep->declBit(c+1141,"in_awvalid", false,-1);
    tracep->declBus(c+1143,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1142,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1144,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1364,"in_wready", false,-1);
    tracep->declBit(c+1147,"in_wvalid", false,-1);
    tracep->declBus(c+1148,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"in_wlast", false,-1);
    tracep->declBit(c+1151,"in_bready", false,-1);
    tracep->declBit(c+1261,"in_bvalid", false,-1);
    tracep->declBus(c+1764,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1258,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1362,"in_arready", false,-1);
    tracep->declBit(c+1134,"in_arvalid", false,-1);
    tracep->declBus(c+1136,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1135,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1138,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1139,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1140,"in_rready", false,-1);
    tracep->declBit(c+1257,"in_rvalid", false,-1);
    tracep->declBus(c+1764,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1259,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1260,"in_rlast", false,-1);
    tracep->declBus(c+1258,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1699,"sdram_clk", false,-1);
    tracep->declBit(c+1254,"sdram_cke", false,-1);
    tracep->declBit(c+666,"sdram_cs", false,-1);
    tracep->declBit(c+667,"sdram_ras", false,-1);
    tracep->declBit(c+668,"sdram_cas", false,-1);
    tracep->declBit(c+669,"sdram_we", false,-1);
    tracep->declBus(c+1700,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1256,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1281,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+701,"sdram_dout_en", false,-1);
    tracep->declBus(c+702,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1674,"clk_i", false,-1);
    tracep->declBit(c+1675,"rst_i", false,-1);
    tracep->declBit(c+1141,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1143,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1142,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1144,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1146,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1147,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1148,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1149,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1150,"inport_wlast_i", false,-1);
    tracep->declBit(c+1151,"inport_bready_i", false,-1);
    tracep->declBit(c+1134,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1136,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1135,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1137,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1139,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1140,"inport_rready_i", false,-1);
    tracep->declBus(c+1281,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1363,"inport_awready_o", false,-1);
    tracep->declBit(c+1364,"inport_wready_o", false,-1);
    tracep->declBit(c+1261,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1764,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1258,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1362,"inport_arready_o", false,-1);
    tracep->declBit(c+1257,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1259,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1764,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1258,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1260,"inport_rlast_o", false,-1);
    tracep->declBit(c+1699,"sdram_clk_o", false,-1);
    tracep->declBit(c+1254,"sdram_cke_o", false,-1);
    tracep->declBit(c+666,"sdram_cs_o", false,-1);
    tracep->declBit(c+667,"sdram_ras_o", false,-1);
    tracep->declBit(c+668,"sdram_cas_o", false,-1);
    tracep->declBit(c+669,"sdram_we_o", false,-1);
    tracep->declBus(c+1256,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1700,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+702,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+701,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1749,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1838,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1839,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1370,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1371,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1246,"ram_rd_w", false,-1);
    tracep->declBit(c+1263,"ram_accept_w", false,-1);
    tracep->declBus(c+1148,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+703,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1238,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+704,"ram_ack_w", false,-1);
    tracep->declBit(c+1760,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1674,"clk_i", false,-1);
    tracep->declBit(c+1675,"rst_i", false,-1);
    tracep->declBit(c+1141,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1143,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1142,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1144,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1146,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1147,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1148,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1149,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1150,"axi_wlast_i", false,-1);
    tracep->declBit(c+1151,"axi_bready_i", false,-1);
    tracep->declBit(c+1134,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1136,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1135,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1137,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1139,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1140,"axi_rready_i", false,-1);
    tracep->declBit(c+1263,"ram_accept_i", false,-1);
    tracep->declBit(c+704,"ram_ack_i", false,-1);
    tracep->declBit(c+1760,"ram_error_i", false,-1);
    tracep->declBus(c+703,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1363,"axi_awready_o", false,-1);
    tracep->declBit(c+1364,"axi_wready_o", false,-1);
    tracep->declBit(c+1261,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1764,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1258,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1362,"axi_arready_o", false,-1);
    tracep->declBit(c+1257,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1259,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1764,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1258,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1260,"axi_rlast_o", false,-1);
    tracep->declBus(c+1371,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1246,"ram_rd_o", false,-1);
    tracep->declBus(c+1238,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1370,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1148,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+705,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+706,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+707,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+708,"req_rd_q", false,-1);
    tracep->declBit(c+709,"req_wr_q", false,-1);
    tracep->declBus(c+710,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+711,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+712,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+713,"req_prio_q", false,-1);
    tracep->declBit(c+714,"req_hold_rd_q", false,-1);
    tracep->declBit(c+715,"req_hold_wr_q", false,-1);
    tracep->declBit(c+716,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1372,"req_push_w", false,-1);
    tracep->declBus(c+1734,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+717,"req_out_valid_w", false,-1);
    tracep->declBus(c+1264,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1373,"resp_accept_w", false,-1);
    tracep->declBit(c+1735,"resp_is_write_w", false,-1);
    tracep->declBit(c+1736,"resp_is_read_w", false,-1);
    tracep->declBit(c+1260,"resp_is_last_w", false,-1);
    tracep->declBus(c+1258,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+718,"resp_valid_w", false,-1);
    tracep->declBit(c+719,"write_prio_w", false,-1);
    tracep->declBit(c+720,"read_prio_w", false,-1);
    tracep->declBit(c+1247,"write_active_w", false,-1);
    tracep->declBit(c+1246,"read_active_w", false,-1);
    tracep->declBus(c+1370,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1737,"wr_w", false,-1);
    tracep->declBit(c+1246,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1841,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1842,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1840,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1674,"clk_i", false,-1);
    tracep->declBit(c+1675,"rst_i", false,-1);
    tracep->declBus(c+1734,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1372,"push_i", false,-1);
    tracep->declBit(c+1373,"pop_i", false,-1);
    tracep->declBus(c+1264,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+716,"accept_o", false,-1);
    tracep->declBit(c+717,"valid_o", false,-1);
    tracep->declBus(c+1843,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+721+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+725,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+726,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+727,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1827,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1842,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1840,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1674,"clk_i", false,-1);
    tracep->declBit(c+1675,"rst_i", false,-1);
    tracep->declBus(c+703,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+704,"push_i", false,-1);
    tracep->declBit(c+1373,"pop_i", false,-1);
    tracep->declBus(c+1259,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+728,"accept_o", false,-1);
    tracep->declBit(c+718,"valid_o", false,-1);
    tracep->declBus(c+1843,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1265+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1269,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+729,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+730,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1674,"clk_i", false,-1);
    tracep->declBit(c+1675,"rst_i", false,-1);
    tracep->declBus(c+1371,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1246,"inport_rd_i", false,-1);
    tracep->declBus(c+1238,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1370,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1148,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1281,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1263,"inport_accept_o", false,-1);
    tracep->declBit(c+704,"inport_ack_o", false,-1);
    tracep->declBit(c+1760,"inport_error_o", false,-1);
    tracep->declBus(c+703,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1699,"sdram_clk_o", false,-1);
    tracep->declBit(c+1254,"sdram_cke_o", false,-1);
    tracep->declBit(c+666,"sdram_cs_o", false,-1);
    tracep->declBit(c+667,"sdram_ras_o", false,-1);
    tracep->declBit(c+668,"sdram_cas_o", false,-1);
    tracep->declBit(c+669,"sdram_we_o", false,-1);
    tracep->declBus(c+1256,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1700,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1255,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+702,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+701,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1749,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1838,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1839,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1842,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1842,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1844,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1845,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1846,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1847,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1842,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1848,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1849,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1850,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1852,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1853,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1854,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1762,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1855,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1842,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1762,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1854,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1853,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1849,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1851,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1850,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1852,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1848,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1856,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1857,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1858,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1858,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1827,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1858,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1840,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1370,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1371,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1246,"ram_rd_w", false,-1);
    tracep->declBit(c+1263,"ram_accept_w", false,-1);
    tracep->declBus(c+1148,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+703,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+704,"ram_ack_w", false,-1);
    tracep->declBit(c+1374,"ram_req_w", false,-1);
    tracep->declBus(c+731,"command_q", false,-1, 3,0);
    tracep->declBus(c+1270,"addr_q", false,-1, 12,0);
    tracep->declBus(c+702,"data_q", false,-1, 31,0);
    tracep->declBit(c+732,"data_rd_en_q", false,-1);
    tracep->declBus(c+1256,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1254,"cke_q", false,-1);
    tracep->declBus(c+1255,"bank_q", false,-1, 1,0);
    tracep->declBus(c+703,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+733,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1281,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+734,"refresh_q", false,-1);
    tracep->declBus(c+735,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+736+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1271,"state_q", false,-1, 3,0);
    tracep->declBus(c+1375,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1376,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+740,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+741,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1377,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1378,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1379,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1842,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+742,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1380,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1859,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1272,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+743,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+744,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+745,"idx", false,-1, 31,0);
    tracep->declBus(c+746,"rd_q", false,-1, 3,0);
    tracep->declBit(c+704,"ack_q", false,-1);
    tracep->declArray(c+1273,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1116,"auto_in_psel", false,-1);
    tracep->declBit(c+1117,"auto_in_penable", false,-1);
    tracep->declBit(c+1099,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1105,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1098,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+673,"auto_in_pready", false,-1);
    tracep->declBit(c+674,"auto_in_pslverr", false,-1);
    tracep->declBus(c+675,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+665,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1252,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1253,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1696,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1860,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1861,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1765,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1239,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1116,"in_psel", false,-1);
    tracep->declBit(c+1117,"in_penable", false,-1);
    tracep->declBus(c+1098,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1099,"in_pwrite", false,-1);
    tracep->declBus(c+1100,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+673,"in_pready", false,-1);
    tracep->declBus(c+675,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+674,"in_pslverr", false,-1);
    tracep->declBit(c+665,"spi_sck", false,-1);
    tracep->declBus(c+1252,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1253,"spi_mosi", false,-1);
    tracep->declBit(c+1696,"spi_miso", false,-1);
    tracep->declBit(c+747,"spi_irq_out", false,-1);
    tracep->declBus(c+1862,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1863,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1862,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1864,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1865,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1866,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1762,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1854,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1853,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1849,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1851,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1850,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1852,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1848,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1856,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1857,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1867,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+748,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1248,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+749,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+750,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+751,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+752,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+753,"wb_we_i", false,-1);
    tracep->declBit(c+754,"wb_stb_i", false,-1);
    tracep->declBit(c+755,"wb_cyc_i", false,-1);
    tracep->declBit(c+756,"wb_ack_o", false,-1);
    tracep->declBit(c+1760,"wb_err_o", false,-1);
    tracep->declBit(c+757,"wb_int_o", false,-1);
    tracep->declBit(c+758,"done", false,-1);
    tracep->declBus(c+759,"paddr", false,-1, 31,0);
    tracep->declQuad(c+760,"data", false,-1, 63,0);
    tracep->declBit(c+762,"is_flash_access", false,-1);
    tracep->declBus(c+763,"tmp", false,-1, 31,0);
    tracep->declQuad(c+764,"tmp64", false,-1, 63,0);
    tracep->declBus(c+766,"counter", false,-1, 7,0);
    tracep->declBit(c+767,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1868,"Tp", false,-1, 31,0);
    tracep->declBit(c+1674,"wb_clk_i", false,-1);
    tracep->declBit(c+1675,"wb_rst_i", false,-1);
    tracep->declBus(c+749,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+750,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+751,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+752,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+753,"wb_we_i", false,-1);
    tracep->declBit(c+754,"wb_stb_i", false,-1);
    tracep->declBit(c+755,"wb_cyc_i", false,-1);
    tracep->declBit(c+756,"wb_ack_o", false,-1);
    tracep->declBit(c+1760,"wb_err_o", false,-1);
    tracep->declBit(c+757,"wb_int_o", false,-1);
    tracep->declBus(c+1252,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+665,"sclk_pad_o", false,-1);
    tracep->declBit(c+1253,"mosi_pad_o", false,-1);
    tracep->declBit(c+1696,"miso_pad_i", false,-1);
    tracep->declBus(c+768,"divider", false,-1, 15,0);
    tracep->declBus(c+769,"ctrl", false,-1, 13,0);
    tracep->declBus(c+770,"ss", false,-1, 7,0);
    tracep->declBus(c+771,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+772,"rx", false,-1, 127,0);
    tracep->declBit(c+776,"rx_negedge", false,-1);
    tracep->declBit(c+777,"tx_negedge", false,-1);
    tracep->declBus(c+778,"char_len", false,-1, 6,0);
    tracep->declBit(c+779,"go", false,-1);
    tracep->declBit(c+780,"lsb", false,-1);
    tracep->declBit(c+781,"ie", false,-1);
    tracep->declBit(c+782,"ass", false,-1);
    tracep->declBit(c+783,"spi_divider_sel", false,-1);
    tracep->declBit(c+784,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+785,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+786,"spi_ss_sel", false,-1);
    tracep->declBit(c+787,"tip", false,-1);
    tracep->declBit(c+788,"pos_edge", false,-1);
    tracep->declBit(c+789,"neg_edge", false,-1);
    tracep->declBit(c+790,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1868,"Tp", false,-1, 31,0);
    tracep->declBit(c+1674,"clk_in", false,-1);
    tracep->declBit(c+1675,"rst", false,-1);
    tracep->declBit(c+787,"enable", false,-1);
    tracep->declBit(c+779,"go", false,-1);
    tracep->declBit(c+790,"last_clk", false,-1);
    tracep->declBus(c+768,"divider", false,-1, 15,0);
    tracep->declBit(c+665,"clk_out", false,-1);
    tracep->declBit(c+788,"pos_edge", false,-1);
    tracep->declBit(c+789,"neg_edge", false,-1);
    tracep->declBus(c+791,"cnt", false,-1, 15,0);
    tracep->declBit(c+792,"cnt_zero", false,-1);
    tracep->declBit(c+793,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1868,"Tp", false,-1, 31,0);
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1675,"rst", false,-1);
    tracep->declBus(c+794,"latch", false,-1, 3,0);
    tracep->declBus(c+752,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+778,"len", false,-1, 6,0);
    tracep->declBit(c+780,"lsb", false,-1);
    tracep->declBit(c+779,"go", false,-1);
    tracep->declBit(c+788,"pos_edge", false,-1);
    tracep->declBit(c+789,"neg_edge", false,-1);
    tracep->declBit(c+776,"rx_negedge", false,-1);
    tracep->declBit(c+777,"tx_negedge", false,-1);
    tracep->declBit(c+787,"tip", false,-1);
    tracep->declBit(c+790,"last", false,-1);
    tracep->declBus(c+750,"p_in", false,-1, 31,0);
    tracep->declArray(c+772,"p_out", false,-1, 127,0);
    tracep->declBit(c+665,"s_clk", false,-1);
    tracep->declBit(c+1696,"s_in", false,-1);
    tracep->declBit(c+1253,"s_out", false,-1);
    tracep->declBus(c+795,"cnt", false,-1, 7,0);
    tracep->declArray(c+772,"data", false,-1, 127,0);
    tracep->declBus(c+796,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+797,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+798,"rx_clk", false,-1);
    tracep->declBit(c+799,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1113,"auto_in_psel", false,-1);
    tracep->declBit(c+1114,"auto_in_penable", false,-1);
    tracep->declBit(c+1099,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1108,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1098,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1115,"auto_in_pready", false,-1);
    tracep->declBit(c+1760,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1705,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1694,"uart_rx", false,-1);
    tracep->declBit(c+1695,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1113,"in_psel", false,-1);
    tracep->declBit(c+1114,"in_penable", false,-1);
    tracep->declBus(c+1098,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1115,"in_pready", false,-1);
    tracep->declBit(c+1760,"in_pslverr", false,-1);
    tracep->declBus(c+1227,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1099,"in_pwrite", false,-1);
    tracep->declBus(c+1705,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1100,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1694,"uart_rx", false,-1);
    tracep->declBit(c+1695,"uart_tx", false,-1);
    tracep->declBit(c+800,"rtsn", false,-1);
    tracep->declBit(c+1760,"ctsn", false,-1);
    tracep->declBit(c+801,"dtr_pad_o", false,-1);
    tracep->declBit(c+1760,"dsr_pad_i", false,-1);
    tracep->declBit(c+1760,"ri_pad_i", false,-1);
    tracep->declBit(c+1760,"dcd_pad_i", false,-1);
    tracep->declBit(c+802,"interrupt", false,-1);
    tracep->declBit(c+1738,"reg_we", false,-1);
    tracep->declBit(c+1739,"reg_re", false,-1);
    tracep->declBus(c+1240,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1241,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+600,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1249,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+803,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1675,"wb_rst_i", false,-1);
    tracep->declBus(c+1240,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1242,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1249,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1738,"wb_we_i", false,-1);
    tracep->declBit(c+1739,"wb_re_i", false,-1);
    tracep->declBit(c+1695,"stx_pad_o", false,-1);
    tracep->declBit(c+1694,"srx_pad_i", false,-1);
    tracep->declBus(c+1856,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+803,"rts_pad_o", false,-1);
    tracep->declBit(c+801,"dtr_pad_o", false,-1);
    tracep->declBit(c+802,"int_o", false,-1);
    tracep->declBit(c+804,"enable", false,-1);
    tracep->declBit(c+805,"srx_pad", false,-1);
    tracep->declBus(c+806,"ier", false,-1, 3,0);
    tracep->declBus(c+807,"iir", false,-1, 3,0);
    tracep->declBus(c+808,"fcr", false,-1, 1,0);
    tracep->declBus(c+809,"mcr", false,-1, 4,0);
    tracep->declBus(c+810,"lcr", false,-1, 7,0);
    tracep->declBus(c+811,"msr", false,-1, 7,0);
    tracep->declBus(c+812,"dl", false,-1, 15,0);
    tracep->declBus(c+813,"scratch", false,-1, 7,0);
    tracep->declBit(c+814,"start_dlc", false,-1);
    tracep->declBit(c+815,"lsr_mask_d", false,-1);
    tracep->declBit(c+816,"msi_reset", false,-1);
    tracep->declBus(c+817,"dlc", false,-1, 15,0);
    tracep->declBus(c+818,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+819,"rx_reset", false,-1);
    tracep->declBit(c+820,"tx_reset", false,-1);
    tracep->declBit(c+821,"dlab", false,-1);
    tracep->declBit(c+1761,"cts_pad_i", false,-1);
    tracep->declBit(c+1760,"dsr_pad_i", false,-1);
    tracep->declBit(c+1760,"ri_pad_i", false,-1);
    tracep->declBit(c+1760,"dcd_pad_i", false,-1);
    tracep->declBit(c+822,"loopback", false,-1);
    tracep->declBit(c+1760,"cts", false,-1);
    tracep->declBit(c+1761,"dsr", false,-1);
    tracep->declBit(c+1761,"ri", false,-1);
    tracep->declBit(c+1761,"dcd", false,-1);
    tracep->declBit(c+823,"cts_c", false,-1);
    tracep->declBit(c+824,"dsr_c", false,-1);
    tracep->declBit(c+825,"ri_c", false,-1);
    tracep->declBit(c+826,"dcd_c", false,-1);
    tracep->declBus(c+827,"lsr", false,-1, 7,0);
    tracep->declBit(c+828,"lsr0", false,-1);
    tracep->declBit(c+829,"lsr1", false,-1);
    tracep->declBit(c+830,"lsr2", false,-1);
    tracep->declBit(c+831,"lsr3", false,-1);
    tracep->declBit(c+832,"lsr4", false,-1);
    tracep->declBit(c+833,"lsr5", false,-1);
    tracep->declBit(c+834,"lsr6", false,-1);
    tracep->declBit(c+835,"lsr7", false,-1);
    tracep->declBit(c+836,"lsr0r", false,-1);
    tracep->declBit(c+837,"lsr1r", false,-1);
    tracep->declBit(c+838,"lsr2r", false,-1);
    tracep->declBit(c+839,"lsr3r", false,-1);
    tracep->declBit(c+840,"lsr4r", false,-1);
    tracep->declBit(c+841,"lsr5r", false,-1);
    tracep->declBit(c+842,"lsr6r", false,-1);
    tracep->declBit(c+843,"lsr7r", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+844,"rls_int", false,-1);
    tracep->declBit(c+845,"rda_int", false,-1);
    tracep->declBit(c+846,"ti_int", false,-1);
    tracep->declBit(c+847,"thre_int", false,-1);
    tracep->declBit(c+848,"ms_int", false,-1);
    tracep->declBit(c+849,"tf_push", false,-1);
    tracep->declBit(c+850,"rf_pop", false,-1);
    tracep->declBus(c+1740,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+851,"rf_error_bit", false,-1);
    tracep->declBit(c+829,"rf_overrun", false,-1);
    tracep->declBit(c+852,"rf_push_pulse", false,-1);
    tracep->declBus(c+853,"rf_count", false,-1, 4,0);
    tracep->declBus(c+854,"tf_count", false,-1, 4,0);
    tracep->declBus(c+855,"tstate", false,-1, 2,0);
    tracep->declBus(c+856,"rstate", false,-1, 3,0);
    tracep->declBus(c+857,"counter_t", false,-1, 9,0);
    tracep->declBit(c+858,"thre_set_en", false,-1);
    tracep->declBus(c+859,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+860,"block_value", false,-1, 7,0);
    tracep->declBit(c+861,"serial_out", false,-1);
    tracep->declBit(c+862,"serial_in", false,-1);
    tracep->declBit(c+23,"lsr_mask_condition", false,-1);
    tracep->declBit(c+24,"iir_read", false,-1);
    tracep->declBit(c+25,"msr_read", false,-1);
    tracep->declBit(c+26,"fifo_read", false,-1);
    tracep->declBit(c+27,"fifo_write", false,-1);
    tracep->declBus(c+863,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+864,"lsr0_d", false,-1);
    tracep->declBit(c+865,"lsr1_d", false,-1);
    tracep->declBit(c+866,"lsr2_d", false,-1);
    tracep->declBit(c+867,"lsr3_d", false,-1);
    tracep->declBit(c+868,"lsr4_d", false,-1);
    tracep->declBit(c+869,"lsr5_d", false,-1);
    tracep->declBit(c+870,"lsr6_d", false,-1);
    tracep->declBit(c+871,"lsr7_d", false,-1);
    tracep->declBit(c+872,"rls_int_d", false,-1);
    tracep->declBit(c+873,"thre_int_d", false,-1);
    tracep->declBit(c+874,"ms_int_d", false,-1);
    tracep->declBit(c+875,"ti_int_d", false,-1);
    tracep->declBit(c+876,"rda_int_d", false,-1);
    tracep->declBit(c+877,"rls_int_rise", false,-1);
    tracep->declBit(c+878,"thre_int_rise", false,-1);
    tracep->declBit(c+879,"ms_int_rise", false,-1);
    tracep->declBit(c+880,"ti_int_rise", false,-1);
    tracep->declBit(c+881,"rda_int_rise", false,-1);
    tracep->declBit(c+882,"rls_int_pnd", false,-1);
    tracep->declBit(c+883,"rda_int_pnd", false,-1);
    tracep->declBit(c+884,"thre_int_pnd", false,-1);
    tracep->declBit(c+885,"ms_int_pnd", false,-1);
    tracep->declBit(c+886,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1868,"Tp", false,-1, 31,0);
    tracep->declBus(c+1868,"width", false,-1, 31,0);
    tracep->declBus(c+1821,"init_value", false,-1, 0,0);
    tracep->declBit(c+1675,"rst_i", false,-1);
    tracep->declBit(c+1674,"clk_i", false,-1);
    tracep->declBit(c+1760,"stage1_rst_i", false,-1);
    tracep->declBit(c+1761,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1694,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+805,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+887,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1675,"wb_rst_i", false,-1);
    tracep->declBus(c+810,"lcr", false,-1, 7,0);
    tracep->declBit(c+850,"rf_pop", false,-1);
    tracep->declBit(c+862,"srx_pad_i", false,-1);
    tracep->declBit(c+804,"enable", false,-1);
    tracep->declBit(c+819,"rx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBus(c+857,"counter_t", false,-1, 9,0);
    tracep->declBus(c+853,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1740,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+829,"rf_overrun", false,-1);
    tracep->declBit(c+851,"rf_error_bit", false,-1);
    tracep->declBus(c+856,"rstate", false,-1, 3,0);
    tracep->declBit(c+852,"rf_push_pulse", false,-1);
    tracep->declBus(c+888,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+889,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+890,"rshift", false,-1, 7,0);
    tracep->declBit(c+891,"rparity", false,-1);
    tracep->declBit(c+892,"rparity_error", false,-1);
    tracep->declBit(c+893,"rframing_error", false,-1);
    tracep->declBit(c+894,"rbit_in", false,-1);
    tracep->declBit(c+895,"rparity_xor", false,-1);
    tracep->declBus(c+896,"counter_b", false,-1, 7,0);
    tracep->declBit(c+897,"rf_push_q", false,-1);
    tracep->declBus(c+898,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+899,"rf_push", false,-1);
    tracep->declBit(c+900,"break_error", false,-1);
    tracep->declBit(c+901,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+902,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+903,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+904,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1762,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1854,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1853,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1849,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1851,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1850,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1852,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1848,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1856,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1857,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1869,"sr_push", false,-1, 3,0);
    tracep->declBus(c+905,"toc_value", false,-1, 9,0);
    tracep->declBus(c+906,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1870,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1871,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1842,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1834,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1675,"wb_rst_i", false,-1);
    tracep->declBit(c+852,"push", false,-1);
    tracep->declBit(c+850,"pop", false,-1);
    tracep->declBus(c+898,"data_in", false,-1, 10,0);
    tracep->declBit(c+819,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1740,"data_out", false,-1, 10,0);
    tracep->declBit(c+829,"overrun", false,-1);
    tracep->declBus(c+853,"count", false,-1, 4,0);
    tracep->declBit(c+851,"error_bit", false,-1);
    tracep->declBus(c+1741,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+907+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+923,"top", false,-1, 3,0);
    tracep->declBus(c+924,"bottom", false,-1, 3,0);
    tracep->declBus(c+925,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+926,"word0", false,-1, 2,0);
    tracep->declBus(c+927,"word1", false,-1, 2,0);
    tracep->declBus(c+928,"word2", false,-1, 2,0);
    tracep->declBus(c+929,"word3", false,-1, 2,0);
    tracep->declBus(c+930,"word4", false,-1, 2,0);
    tracep->declBus(c+931,"word5", false,-1, 2,0);
    tracep->declBus(c+932,"word6", false,-1, 2,0);
    tracep->declBus(c+933,"word7", false,-1, 2,0);
    tracep->declBus(c+934,"word8", false,-1, 2,0);
    tracep->declBus(c+935,"word9", false,-1, 2,0);
    tracep->declBus(c+936,"word10", false,-1, 2,0);
    tracep->declBus(c+937,"word11", false,-1, 2,0);
    tracep->declBus(c+938,"word12", false,-1, 2,0);
    tracep->declBus(c+939,"word13", false,-1, 2,0);
    tracep->declBus(c+940,"word14", false,-1, 2,0);
    tracep->declBus(c+941,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1842,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1765,"data_width", false,-1, 31,0);
    tracep->declBus(c+1871,"depth", false,-1, 31,0);
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+852,"we", false,-1);
    tracep->declBus(c+923,"a", false,-1, 3,0);
    tracep->declBus(c+924,"dpra", false,-1, 3,0);
    tracep->declBus(c+942,"di", false,-1, 7,0);
    tracep->declBus(c+1741,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+601+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1675,"wb_rst_i", false,-1);
    tracep->declBus(c+810,"lcr", false,-1, 7,0);
    tracep->declBit(c+849,"tf_push", false,-1);
    tracep->declBus(c+1242,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+804,"enable", false,-1);
    tracep->declBit(c+820,"tx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+861,"stx_pad_o", false,-1);
    tracep->declBus(c+855,"tstate", false,-1, 2,0);
    tracep->declBus(c+854,"tf_count", false,-1, 4,0);
    tracep->declBus(c+943,"counter", false,-1, 4,0);
    tracep->declBus(c+944,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+945,"shift_out", false,-1, 6,0);
    tracep->declBit(c+946,"stx_o_tmp", false,-1);
    tracep->declBit(c+947,"parity_xor", false,-1);
    tracep->declBit(c+948,"tf_pop", false,-1);
    tracep->declBit(c+949,"bit_out", false,-1);
    tracep->declBus(c+1242,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1250,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+950,"tf_overrun", false,-1);
    tracep->declBus(c+1754,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1751,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1755,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1756,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1757,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1766,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1765,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1871,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1842,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1834,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+1675,"wb_rst_i", false,-1);
    tracep->declBit(c+849,"push", false,-1);
    tracep->declBit(c+948,"pop", false,-1);
    tracep->declBus(c+1242,"data_in", false,-1, 7,0);
    tracep->declBit(c+820,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1250,"data_out", false,-1, 7,0);
    tracep->declBit(c+950,"overrun", false,-1);
    tracep->declBus(c+854,"count", false,-1, 4,0);
    tracep->declBus(c+951,"top", false,-1, 3,0);
    tracep->declBus(c+952,"bottom", false,-1, 3,0);
    tracep->declBus(c+953,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1842,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1765,"data_width", false,-1, 31,0);
    tracep->declBus(c+1871,"depth", false,-1, 31,0);
    tracep->declBit(c+1674,"clk", false,-1);
    tracep->declBit(c+849,"we", false,-1);
    tracep->declBus(c+951,"a", false,-1, 3,0);
    tracep->declBus(c+952,"dpra", false,-1, 3,0);
    tracep->declBus(c+1242,"di", false,-1, 7,0);
    tracep->declBus(c+1250,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+617+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBit(c+1103,"auto_in_psel", false,-1);
    tracep->declBit(c+1104,"auto_in_penable", false,-1);
    tracep->declBit(c+1099,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1105,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1098,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+670,"auto_in_pready", false,-1);
    tracep->declBit(c+1758,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1759,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1688,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1689,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1690,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1691,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1692,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1693,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1674,"clock", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1239,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1103,"in_psel", false,-1);
    tracep->declBit(c+1104,"in_penable", false,-1);
    tracep->declBus(c+1098,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1099,"in_pwrite", false,-1);
    tracep->declBus(c+1100,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1101,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+670,"in_pready", false,-1);
    tracep->declBus(c+1759,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1758,"in_pslverr", false,-1);
    tracep->declBus(c+1688,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1689,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1690,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1691,"vga_hsync", false,-1);
    tracep->declBit(c+1692,"vga_vsync", false,-1);
    tracep->declBit(c+1693,"vga_valid", false,-1);
    tracep->declBus(c+954,"h_addr", false,-1, 9,0);
    tracep->declBus(c+633,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1251,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1243,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+670,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1674,"pclk", false,-1);
    tracep->declBit(c+1675,"reset", false,-1);
    tracep->declBus(c+1251,"vga_data", false,-1, 23,0);
    tracep->declBus(c+954,"h_addr", false,-1, 9,0);
    tracep->declBus(c+633,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1691,"hsync", false,-1);
    tracep->declBit(c+1692,"vsync", false,-1);
    tracep->declBit(c+1693,"valid", false,-1);
    tracep->declBus(c+1688,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1689,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1690,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1872,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1873,"h_active", false,-1, 31,0);
    tracep->declBus(c+1874,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1875,"h_total", false,-1, 31,0);
    tracep->declBus(c+1840,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1876,"v_active", false,-1, 31,0);
    tracep->declBus(c+1877,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1878,"v_total", false,-1, 31,0);
    tracep->declBus(c+955,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+634,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+956,"h_valid", false,-1);
    tracep->declBit(c+635,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+665,"sck", false,-1);
    tracep->declBit(c+1276,"ss", false,-1);
    tracep->declBit(c+1253,"mosi", false,-1);
    tracep->declBit(c+1090,"miso", false,-1);
    tracep->declBus(c+1091,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1092,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1742,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+665,"sck", false,-1);
    tracep->declBit(c+1277,"ss", false,-1);
    tracep->declBit(c+1253,"mosi", false,-1);
    tracep->declBit(c+1743,"miso", false,-1);
    tracep->declBit(c+1277,"reset", false,-1);
    tracep->declBus(c+1084,"state", false,-1, 2,0);
    tracep->declBus(c+1085,"counter", false,-1, 7,0);
    tracep->declBus(c+1086,"cmd", false,-1, 7,0);
    tracep->declBus(c+1087,"addr", false,-1, 23,0);
    tracep->declBus(c+1088,"data", false,-1, 31,0);
    tracep->declBit(c+1089,"ren", false,-1);
    tracep->declBus(c+1744,"rdata", false,-1, 31,0);
    tracep->declBus(c+1745,"raddr", false,-1, 31,0);
    tracep->declBus(c+1093,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+665,"clock", false,-1);
    tracep->declBit(c+1089,"valid", false,-1);
    tracep->declBus(c+1086,"cmd", false,-1, 7,0);
    tracep->declBus(c+1745,"addr", false,-1, 31,0);
    tracep->declBus(c+1744,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1697,"sck", false,-1);
    tracep->declBit(c+1361,"ce_n", false,-1);
    tracep->declBus(c+1698,"dio", false,-1, 3,0);
    tracep->declBus(c+655,"dio_out", false,-1, 3,0);
    tracep->declBus(c+656,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1698,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1814,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1868,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1840,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1843,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1842,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1834,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+657,"state", false,-1, 2,0);
    tracep->declBus(c+1746,"next_state", false,-1, 2,0);
    tracep->declBus(c+658,"counter", false,-1, 7,0);
    tracep->declBus(c+659,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+660,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+661,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+662,"is_read_op", false,-1);
    tracep->declBit(c+663,"is_write_op", false,-1);
    tracep->declBus(c+664,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1747,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1699,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+666,"cs", false,-1);
    tracep->declBit(c+667,"ras", false,-1);
    tracep->declBit(c+668,"cas", false,-1);
    tracep->declBit(c+669,"we", false,-1);
    tracep->declBus(c+1700,"a", false,-1, 13,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1256,"dqm", false,-1, 3,0);
    tracep->declBus(c+1281,"dq", false,-1, 31,0);
    tracep->declBit(c+957,"cs_0", false,-1);
    tracep->declBit(c+958,"ras_0", false,-1);
    tracep->declBit(c+959,"cas_0", false,-1);
    tracep->declBit(c+960,"we_0", false,-1);
    tracep->declBit(c+961,"cs_1", false,-1);
    tracep->declBit(c+962,"ras_1", false,-1);
    tracep->declBit(c+963,"cas_1", false,-1);
    tracep->declBit(c+964,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1699,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+961,"cs", false,-1);
    tracep->declBit(c+962,"ras", false,-1);
    tracep->declBit(c+963,"cas", false,-1);
    tracep->declBit(c+964,"we", false,-1);
    tracep->declBus(c+1270,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1256,"dqm", false,-1, 3,0);
    tracep->declBus(c+1281,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1699,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+961,"cs", false,-1);
    tracep->declBit(c+962,"ras", false,-1);
    tracep->declBit(c+963,"cas", false,-1);
    tracep->declBit(c+964,"we", false,-1);
    tracep->declBus(c+1270,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1278,"dqm", false,-1, 1,0);
    tracep->declBus(c+1282,"dq", false,-1, 15,0);
    tracep->declBus(c+1853,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1854,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1848,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1879,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1849,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1850,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1762,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1024,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1025,"bl", false,-1, 2,0);
    tracep->declBus(c+1381,"command", false,-1, 3,0);
    tracep->declBus(c+1026,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1027,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1279,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1028,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1283,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1029,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1030+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1880,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1034,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1881,"state", false,-1, 2,0);
    tracep->declBit(c+1035,"write_brust", false,-1);
    tracep->declBus(c+1036,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1037,"read_burst", false,-1);
    tracep->declBit(c+1882,"flag", false,-1);
    tracep->declBus(c+1038,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1699,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+961,"cs", false,-1);
    tracep->declBit(c+962,"ras", false,-1);
    tracep->declBit(c+963,"cas", false,-1);
    tracep->declBit(c+964,"we", false,-1);
    tracep->declBus(c+1270,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1280,"dqm", false,-1, 1,0);
    tracep->declBus(c+1284,"dq", false,-1, 15,0);
    tracep->declBus(c+1853,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1854,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1848,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1879,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1849,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1850,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1762,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1039,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1040,"bl", false,-1, 2,0);
    tracep->declBus(c+1381,"command", false,-1, 3,0);
    tracep->declBus(c+1041,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1042,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1279,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1043,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1285,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1044,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1045+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1883,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1049,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1884,"state", false,-1, 2,0);
    tracep->declBit(c+1050,"write_brust", false,-1);
    tracep->declBus(c+1051,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1052,"read_burst", false,-1);
    tracep->declBit(c+1885,"flag", false,-1);
    tracep->declBus(c+1053,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1699,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+957,"cs", false,-1);
    tracep->declBit(c+958,"ras", false,-1);
    tracep->declBit(c+959,"cas", false,-1);
    tracep->declBit(c+960,"we", false,-1);
    tracep->declBus(c+1270,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1256,"dqm", false,-1, 3,0);
    tracep->declBus(c+1281,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1699,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+957,"cs", false,-1);
    tracep->declBit(c+958,"ras", false,-1);
    tracep->declBit(c+959,"cas", false,-1);
    tracep->declBit(c+960,"we", false,-1);
    tracep->declBus(c+1270,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1278,"dqm", false,-1, 1,0);
    tracep->declBus(c+1282,"dq", false,-1, 15,0);
    tracep->declBus(c+1853,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1854,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1848,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1879,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1849,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1850,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1762,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1054,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1055,"bl", false,-1, 2,0);
    tracep->declBus(c+1382,"command", false,-1, 3,0);
    tracep->declBus(c+1056,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1057,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1279,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1058,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1286,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1059,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1060+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1886,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1064,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1887,"state", false,-1, 2,0);
    tracep->declBit(c+1065,"write_brust", false,-1);
    tracep->declBus(c+1066,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1067,"read_burst", false,-1);
    tracep->declBit(c+1888,"flag", false,-1);
    tracep->declBus(c+1068,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1699,"clk", false,-1);
    tracep->declBit(c+1254,"cke", false,-1);
    tracep->declBit(c+957,"cs", false,-1);
    tracep->declBit(c+958,"ras", false,-1);
    tracep->declBit(c+959,"cas", false,-1);
    tracep->declBit(c+960,"we", false,-1);
    tracep->declBus(c+1270,"a", false,-1, 12,0);
    tracep->declBus(c+1255,"ba", false,-1, 1,0);
    tracep->declBus(c+1280,"dqm", false,-1, 1,0);
    tracep->declBus(c+1284,"dq", false,-1, 15,0);
    tracep->declBus(c+1853,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1854,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1848,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1879,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1849,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1850,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1851,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1762,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1069,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1070,"bl", false,-1, 2,0);
    tracep->declBus(c+1382,"command", false,-1, 3,0);
    tracep->declBus(c+1071,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1072,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1279,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1073,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1287,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1074,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1075+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1889,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1079,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1890,"state", false,-1, 2,0);
    tracep->declBit(c+1080,"write_brust", false,-1);
    tracep->declBus(c+1081,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1082,"read_burst", false,-1);
    tracep->declBit(c+1891,"flag", false,-1);
    tracep->declBus(c+1083,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+34,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+46,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+55,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+58,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+64,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+69,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+73,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+75,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+76,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+77,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+78,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+79,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+80,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+82,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+83,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+84,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+85,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+86,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+87,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+88,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+89,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+117,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+121,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (IData)(vlSelf->__VdfgTmp_h7fb30c92__0)
                                : 0U)),4);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum),32);
    bufp->fullSData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles),16);
    bufp->fullIData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_prdata),32);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pslverr));
    bufp->fullIData(oldp+134,(((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum)),32);
    bufp->fullIData(oldp+135,((((IData)(0xb00U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum) 
                               >> 9U)),32);
    bufp->fullIData(oldp+136,(((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__dev_cycles))),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_delay),32);
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+140,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+142,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+143,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+144,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+145,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+146,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+148,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+149,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+156,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+157,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+158,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+159,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+163,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+170,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+177,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+178,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+179,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+180,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+182,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+183,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+184,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+185,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+194,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+207,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullIData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
    bufp->fullBit(oldp+254,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+259,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+260,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+261,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+262,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+264,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+266,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+291,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+361,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+365,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+366,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+427,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+437,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+441,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+445,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+449,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+453,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+477,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+497,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+509,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+513,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+517,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+525,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+529,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+533,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+537,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+541,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+545,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+549,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+553,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+595,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+633,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+636,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+637,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+639,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+640,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+641,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+642,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+643,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+644,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+645,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+646,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+647,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+648,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+649,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+650,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+651,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+652,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+653,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+654,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+660,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+666,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+667,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+668,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+669,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+678,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+679,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+680,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+681,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+682,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+683,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+684,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+685,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+688,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+689,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+692,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+693,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+697,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+701,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+716,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+717,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+718,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+719,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+720,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+728,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+763,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+764,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+776,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+777,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+778,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+779,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+781,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+782,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+783,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+784,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+786,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+790,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+792,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+793,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+796,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+800,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+801,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+803,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+821,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+822,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+823,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+824,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+825,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+826,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+827,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+830,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+831,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+832,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+851,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+858,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+877,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+878,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+879,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+880,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+881,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+900,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+901,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+902,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+903,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+904,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+906,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+925,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+942,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+953,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+957,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+958,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+959,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+960,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+961,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+962,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+963,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+964,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_busy));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullIData(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu_valid));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_locked));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__current_master));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+999,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__wbu_rd),5);
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1012,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1015,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1016,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1017,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1018,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1019,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1020,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1021,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1022,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1023,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1024,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1025,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1039,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1040,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1054,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1055,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1069,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1070,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1089,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1098,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),29);
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1112,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1120,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1123,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize),3);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_state),3);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cycle_cnt),32);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[0]),4);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[1]),4);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[2]),4);
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[3]),4);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[4]),4);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[5]),4);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[6]),4);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_id[7]),4);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[0]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[1]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[2]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[3]),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[4]),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[5]),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[6]),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_data[7]),32);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[0]),2);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[1]),2);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[2]),2);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[3]),2);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[4]),2);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[5]),2);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[6]),2);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_resp[7]),2);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[0]));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[1]));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[2]));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[3]));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[4]));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[5]));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[6]));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_buf_last[7]));
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[0]),32);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[1]),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[2]),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[3]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[4]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[5]),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[6]),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_beat_cycle[7]),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_delay_cnt),32);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_recv_cnt),3);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_send_idx),3);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arlen_saved),3);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_state),3);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_cycle_cnt),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_delay_cnt),32);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_buf_bid),4);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_buf_bresp),2);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_wdata_saved),32);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_wstrb_saved),4);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_wlast_saved));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wt_w_latched));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1210,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr),32);
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullIData(oldp+1235,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1237,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullIData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1243,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1258,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1260,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullSData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1276,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1278,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1279,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1280,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1282,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1284,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1307,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu_valid));
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_lsu_valid));
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc_flag));
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1346,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1347,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1349,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullIData(oldp+1351,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__exu_rd),5);
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__lsu_rd),5);
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__MemWrite));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1377,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1378,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1379,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1386,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+1407,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                     << 1U))))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))),2);
    bufp->fullSData(oldp+1408,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullSData(oldp+1417,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullBit(oldp+1531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1532,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1533,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1534,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1535,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1536,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1537,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1538,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1539,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1540,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1541,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1542,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1543,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1544,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1545,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1553,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1556,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1579,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1580,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1581,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1583,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1584,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1587,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1601,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1605,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__npc),32);
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullCData(oldp+1630,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1631,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1642,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1648,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__arb_grant_next));
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1655,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullBit(oldp+1657,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1658,(((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))))));
    bufp->fullBit(oldp+1659,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1660,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1661,(((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)))));
    bufp->fullBit(oldp+1662,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))));
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__flag));
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1666,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1667,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_fetch),32);
    bufp->fullIData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_out),32);
    bufp->fullIData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_buf),32);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),3);
    bufp->fullBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ctrl_hazard));
    bufp->fullBit(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ar_inflight));
    bufp->fullBit(oldp+1674,(vlSelf->clock));
    bufp->fullBit(oldp+1675,(vlSelf->reset));
    bufp->fullSData(oldp+1676,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1677,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1678,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1679,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1680,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1681,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1682,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1683,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1684,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1685,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1686,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1687,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1688,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1689,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1690,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1691,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1692,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1693,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1694,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1695,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1696,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1699,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1700,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1701,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
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
    bufp->fullIData(oldp+1702,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1703,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+1704,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))));
    bufp->fullBit(oldp+1708,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+1709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1710,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullIData(oldp+1711,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                            : 0U))),32);
    bufp->fullCData(oldp+1712,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                        ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                             ? (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                        >> 1U))
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                                  : 0U)))),2);
    bufp->fullBit(oldp+1713,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1714,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1718,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready))));
    bufp->fullBit(oldp+1720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast)))));
    bufp->fullBit(oldp+1721,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1722,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1723,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullBit(oldp+1724,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6695b557__0)
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
    bufp->fullCData(oldp+1725,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
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
    bufp->fullCData(oldp+1726,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state)))),2);
    bufp->fullBit(oldp+1727,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1728,((0xfU & vlSelf->__VdfgTmp_h9aa666fe__0)),4);
    bufp->fullBit(oldp+1729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1730,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullIData(oldp+1733,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__fwd_active)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1734,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)) 
                                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid))
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1735,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1736,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1740,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1743,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1745,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1748,(0x226U),32);
    bufp->fullIData(oldp+1749,(0x64U),32);
    bufp->fullIData(oldp+1750,(0x200U),32);
    bufp->fullCData(oldp+1751,(1U),3);
    bufp->fullIData(oldp+1752,(0xb00U),32);
    bufp->fullIData(oldp+1753,(9U),32);
    bufp->fullCData(oldp+1754,(0U),3);
    bufp->fullCData(oldp+1755,(2U),3);
    bufp->fullCData(oldp+1756,(3U),3);
    bufp->fullCData(oldp+1757,(4U),3);
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1760,(0U));
    bufp->fullBit(oldp+1761,(1U));
    bufp->fullCData(oldp+1762,(0U),4);
    bufp->fullCData(oldp+1763,(0U),8);
    bufp->fullCData(oldp+1764,(0U),2);
    bufp->fullIData(oldp+1765,(8U),32);
    bufp->fullCData(oldp+1766,(5U),3);
    bufp->fullSData(oldp+1767,(1U),16);
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1784,(0U),32);
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1814,(0U),32);
    bufp->fullBit(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1820,(0U));
    bufp->fullBit(oldp+1821,(1U));
    bufp->fullBit(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1825,(1U),2);
    bufp->fullCData(oldp+1826,(2U),2);
    bufp->fullIData(oldp+1827,(0x20U),32);
    bufp->fullIData(oldp+1828,(4U),32);
    bufp->fullIData(oldp+1829,(0x79737978U),32);
    bufp->fullIData(oldp+1830,(0x17e3c19U),32);
    bufp->fullIData(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1834,(5U),32);
    bufp->fullCData(oldp+1835,(0x1bU),8);
    bufp->fullCData(oldp+1836,(0xebU),8);
    bufp->fullCData(oldp+1837,(0x38U),8);
    bufp->fullIData(oldp+1838,(0x18U),32);
    bufp->fullIData(oldp+1839,(9U),32);
    bufp->fullIData(oldp+1840,(2U),32);
    bufp->fullIData(oldp+1841,(6U),32);
    bufp->fullIData(oldp+1842,(4U),32);
    bufp->fullIData(oldp+1843,(3U),32);
    bufp->fullIData(oldp+1844,(0xdU),32);
    bufp->fullIData(oldp+1845,(0x2000U),32);
    bufp->fullIData(oldp+1846,(0x2710U),32);
    bufp->fullIData(oldp+1847,(0x30cU),32);
    bufp->fullCData(oldp+1848,(7U),4);
    bufp->fullCData(oldp+1849,(3U),4);
    bufp->fullCData(oldp+1850,(5U),4);
    bufp->fullCData(oldp+1851,(4U),4);
    bufp->fullCData(oldp+1852,(6U),4);
    bufp->fullCData(oldp+1853,(2U),4);
    bufp->fullCData(oldp+1854,(1U),4);
    bufp->fullSData(oldp+1855,(0x20U),13);
    bufp->fullCData(oldp+1856,(8U),4);
    bufp->fullCData(oldp+1857,(9U),4);
    bufp->fullIData(oldp+1858,(0xaU),32);
    bufp->fullIData(oldp+1859,(0x11U),32);
    bufp->fullIData(oldp+1860,(0x30000000U),32);
    bufp->fullIData(oldp+1861,(0x3fffffffU),32);
    bufp->fullCData(oldp+1862,(4U),5);
    bufp->fullCData(oldp+1863,(0U),5);
    bufp->fullCData(oldp+1864,(0x10U),5);
    bufp->fullCData(oldp+1865,(0x14U),5);
    bufp->fullCData(oldp+1866,(0x18U),5);
    bufp->fullIData(oldp+1867,(0x3000000U),32);
    bufp->fullIData(oldp+1868,(1U),32);
    bufp->fullCData(oldp+1869,(0xaU),4);
    bufp->fullIData(oldp+1870,(0xbU),32);
    bufp->fullIData(oldp+1871,(0x10U),32);
    bufp->fullIData(oldp+1872,(0x60U),32);
    bufp->fullIData(oldp+1873,(0x90U),32);
    bufp->fullIData(oldp+1874,(0x310U),32);
    bufp->fullIData(oldp+1875,(0x320U),32);
    bufp->fullIData(oldp+1876,(0x23U),32);
    bufp->fullIData(oldp+1877,(0x203U),32);
    bufp->fullIData(oldp+1878,(0x20dU),32);
    bufp->fullIData(oldp+1879,(0x400000U),32);
    bufp->fullCData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1881,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1882,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1884,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1885,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1887,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1888,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1890,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1891,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
