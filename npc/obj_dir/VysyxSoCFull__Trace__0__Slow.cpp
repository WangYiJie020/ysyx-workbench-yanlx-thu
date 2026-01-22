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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1673,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1674,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1675,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1676,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1677,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1678,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1679,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1680,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1681,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1682,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1683,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1684,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1685,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1686,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1687,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1688,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1689,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1690,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1691,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1692,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1673,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1674,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1675,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1676,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1677,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1678,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1679,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1680,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1681,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1682,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1683,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1684,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1685,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1686,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1687,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1688,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1689,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1690,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1691,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1692,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+687,"spi_sck", false,-1);
    tracep->declBus(c+1511,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1512,"spi_mosi", false,-1);
    tracep->declBit(c+1693,"spi_miso", false,-1);
    tracep->declBit(c+1691,"uart_rx", false,-1);
    tracep->declBit(c+1692,"uart_tx", false,-1);
    tracep->declBit(c+1694,"psram_sck", false,-1);
    tracep->declBit(c+1581,"psram_ce_n", false,-1);
    tracep->declBus(c+1695,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1696,"sdram_clk", false,-1);
    tracep->declBit(c+1513,"sdram_cke", false,-1);
    tracep->declBit(c+688,"sdram_cs", false,-1);
    tracep->declBit(c+689,"sdram_ras", false,-1);
    tracep->declBit(c+690,"sdram_cas", false,-1);
    tracep->declBit(c+691,"sdram_we", false,-1);
    tracep->declBus(c+1697,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1514,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1515,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1540,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1673,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1674,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1675,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1676,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1677,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1678,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1680,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1681,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1682,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1683,"ps2_clk", false,-1);
    tracep->declBit(c+1684,"ps2_data", false,-1);
    tracep->declBus(c+1685,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1686,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1687,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1688,"vga_hsync", false,-1);
    tracep->declBit(c+1689,"vga_vsync", false,-1);
    tracep->declBit(c+1690,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1734,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1735,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1736,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1203,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1204,"in_psel", false,-1);
    tracep->declBit(c+1205,"in_penable", false,-1);
    tracep->declBus(c+1737,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1206,"in_pwrite", false,-1);
    tracep->declBus(c+1207,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1208,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1209,"in_pready", false,-1);
    tracep->declBus(c+1210,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1211,"in_pslverr", false,-1);
    tracep->declBus(c+1212,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1213,"out_psel", false,-1);
    tracep->declBit(c+1214,"out_penable", false,-1);
    tracep->declBus(c+1215,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1216,"out_pwrite", false,-1);
    tracep->declBus(c+1217,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1490,"out_pready", false,-1);
    tracep->declBus(c+1698,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1699,"out_pslverr", false,-1);
    tracep->declBus(c+1738,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1739,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1740,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1737,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1741,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1742,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1219,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1220,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1221,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1222,"state", false,-1, 2,0);
    tracep->declBus(c+1700,"next_state", false,-1, 2,0);
    tracep->declBit(c+1743,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1213,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1214,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1216,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1212,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1490,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1699,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1698,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1223,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1224,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1216,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1225,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1215,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+692,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1744,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1745,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1226,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1227,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1216,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1228,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1215,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+122,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1746,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+123,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1229,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1230,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1216,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1228,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1215,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1746,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+694,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1231,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1232,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1216,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1212,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1701,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1746,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+124,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1233,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1234,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1216,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1228,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1215,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1746,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1702,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1236,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1237,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1216,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1225,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1215,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+696,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+697,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1238,"sel_0", false,-1);
    tracep->declBit(c+1239,"sel_1", false,-1);
    tracep->declBit(c+1240,"sel_2", false,-1);
    tracep->declBit(c+1241,"sel_3", false,-1);
    tracep->declBit(c+1242,"sel_4", false,-1);
    tracep->declBit(c+1243,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1244,"auto_in_awready", false,-1);
    tracep->declBit(c+125,"auto_in_awvalid", false,-1);
    tracep->declBus(c+126,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+128,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+129,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1244,"auto_in_wready", false,-1);
    tracep->declBit(c+130,"auto_in_wvalid", false,-1);
    tracep->declBus(c+131,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+133,"auto_in_bready", false,-1);
    tracep->declBit(c+1245,"auto_in_bvalid", false,-1);
    tracep->declBus(c+134,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1246,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1247,"auto_in_arready", false,-1);
    tracep->declBit(c+135,"auto_in_arvalid", false,-1);
    tracep->declBus(c+136,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+138,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+139,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+140,"auto_in_rready", false,-1);
    tracep->declBit(c+1248,"auto_in_rvalid", false,-1);
    tracep->declBus(c+141,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+636,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1246,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1204,"auto_out_psel", false,-1);
    tracep->declBit(c+1205,"auto_out_penable", false,-1);
    tracep->declBit(c+1206,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1207,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1208,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1209,"auto_out_pready", false,-1);
    tracep->declBit(c+1211,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1210,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1205,"nodeOut_penable", false,-1);
    tracep->declBus(c+1249,"state", false,-1, 1,0);
    tracep->declBit(c+1247,"accept_read", false,-1);
    tracep->declBit(c+1244,"accept_write", false,-1);
    tracep->declBit(c+142,"is_write_r", false,-1);
    tracep->declBit(c+1206,"is_write", false,-1);
    tracep->declBus(c+141,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+134,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+143,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+144,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+145,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+146,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1250,"resp", false,-1, 1,0);
    tracep->declBus(c+147,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1246,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1248,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+148,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1245,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+149,"auto_in_awready", false,-1);
    tracep->declBit(c+1603,"auto_in_awvalid", false,-1);
    tracep->declBus(c+150,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1605,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+151,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+152,"auto_in_wready", false,-1);
    tracep->declBit(c+1606,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1609,"auto_in_wlast", false,-1);
    tracep->declBit(c+642,"auto_in_bready", false,-1);
    tracep->declBit(c+153,"auto_in_bvalid", false,-1);
    tracep->declBus(c+154,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+156,"auto_in_arready", false,-1);
    tracep->declBit(c+28,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+157,"auto_in_rvalid", false,-1);
    tracep->declBus(c+158,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_in_rlast", false,-1);
    tracep->declBit(c+1244,"auto_out_awready", false,-1);
    tracep->declBit(c+125,"auto_out_awvalid", false,-1);
    tracep->declBus(c+126,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+128,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+129,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1244,"auto_out_wready", false,-1);
    tracep->declBit(c+130,"auto_out_wvalid", false,-1);
    tracep->declBus(c+131,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+133,"auto_out_bready", false,-1);
    tracep->declBit(c+1245,"auto_out_bvalid", false,-1);
    tracep->declBus(c+134,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1246,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1247,"auto_out_arready", false,-1);
    tracep->declBit(c+135,"auto_out_arvalid", false,-1);
    tracep->declBus(c+136,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+138,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+139,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+140,"auto_out_rready", false,-1);
    tracep->declBit(c+1248,"auto_out_rvalid", false,-1);
    tracep->declBus(c+141,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+636,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1246,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+133,"io_enq_ready", false,-1);
    tracep->declBit(c+1245,"io_enq_valid", false,-1);
    tracep->declBus(c+134,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1246,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+642,"io_deq_ready", false,-1);
    tracep->declBit(c+153,"io_deq_valid", false,-1);
    tracep->declBus(c+154,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+155,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+162,"wrap", false,-1);
    tracep->declBit(c+163,"wrap_1", false,-1);
    tracep->declBit(c+164,"maybe_full", false,-1);
    tracep->declBit(c+165,"ptr_match", false,-1);
    tracep->declBit(c+166,"empty", false,-1);
    tracep->declBit(c+167,"full", false,-1);
    tracep->declBit(c+1251,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+163,"R0_addr", false,-1);
    tracep->declBit(c+1747,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declBus(c+168,"R0_data", false,-1, 5,0);
    tracep->declBit(c+162,"W0_addr", false,-1);
    tracep->declBit(c+1251,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declBus(c+637,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+169+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+171,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+1248,"io_enq_valid", false,-1);
    tracep->declBus(c+141,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+636,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1246,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+157,"io_deq_valid", false,-1);
    tracep->declBus(c+158,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+159,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+160,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+161,"io_deq_bits_last", false,-1);
    tracep->declBit(c+172,"wrap", false,-1);
    tracep->declBit(c+173,"wrap_1", false,-1);
    tracep->declBit(c+174,"maybe_full", false,-1);
    tracep->declBit(c+175,"ptr_match", false,-1);
    tracep->declBit(c+176,"empty", false,-1);
    tracep->declBit(c+177,"full", false,-1);
    tracep->declBit(c+1252,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+173,"R0_addr", false,-1);
    tracep->declBit(c+1747,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declQuad(c+178,"R0_data", false,-1, 38,0);
    tracep->declBit(c+172,"W0_addr", false,-1);
    tracep->declBit(c+1252,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declQuad(c+638,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+180+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+184,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+30,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+31,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
    tracep->declBit(c+135,"io_deq_valid", false,-1);
    tracep->declBus(c+136,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+137,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+138,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+139,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+185,"wrap", false,-1);
    tracep->declBit(c+186,"wrap_1", false,-1);
    tracep->declBit(c+187,"maybe_full", false,-1);
    tracep->declBit(c+188,"ptr_match", false,-1);
    tracep->declBit(c+189,"empty", false,-1);
    tracep->declBit(c+190,"full", false,-1);
    tracep->declBit(c+33,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+186,"R0_addr", false,-1);
    tracep->declBit(c+1747,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declQuad(c+191,"R0_data", false,-1, 46,0);
    tracep->declBit(c+185,"W0_addr", false,-1);
    tracep->declBit(c+33,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declQuad(c+34,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+193+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+197,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+149,"io_enq_ready", false,-1);
    tracep->declBit(c+1603,"io_enq_valid", false,-1);
    tracep->declBus(c+150,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1604,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1605,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+151,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+125,"io_deq_valid", false,-1);
    tracep->declBus(c+126,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+127,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+128,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+129,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+198,"wrap", false,-1);
    tracep->declBit(c+199,"wrap_1", false,-1);
    tracep->declBit(c+200,"maybe_full", false,-1);
    tracep->declBit(c+201,"ptr_match", false,-1);
    tracep->declBit(c+202,"empty", false,-1);
    tracep->declBit(c+203,"full", false,-1);
    tracep->declBit(c+1610,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+199,"R0_addr", false,-1);
    tracep->declBit(c+1747,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declQuad(c+204,"R0_data", false,-1, 46,0);
    tracep->declBit(c+198,"W0_addr", false,-1);
    tracep->declBit(c+1610,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declQuad(c+659,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+206+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+210,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+1606,"io_enq_valid", false,-1);
    tracep->declBus(c+1607,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1608,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1609,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+130,"io_deq_valid", false,-1);
    tracep->declBus(c+131,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+132,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+211,"wrap", false,-1);
    tracep->declBit(c+212,"wrap_1", false,-1);
    tracep->declBit(c+213,"maybe_full", false,-1);
    tracep->declBit(c+214,"ptr_match", false,-1);
    tracep->declBit(c+215,"empty", false,-1);
    tracep->declBit(c+216,"full", false,-1);
    tracep->declBit(c+1611,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+212,"R0_addr", false,-1);
    tracep->declBit(c+1747,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declQuad(c+217,"R0_data", false,-1, 35,0);
    tracep->declBit(c+211,"W0_addr", false,-1);
    tracep->declBit(c+1611,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declQuad(c+1612,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+219+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1734,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1735,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1736,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1253,"in_arready", false,-1);
    tracep->declBit(c+36,"in_arvalid", false,-1);
    tracep->declBus(c+37,"in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"in_rready", false,-1);
    tracep->declBit(c+1254,"in_rvalid", false,-1);
    tracep->declBus(c+1255,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1256,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1257,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1258,"in_rlast", false,-1);
    tracep->declBit(c+1259,"in_awready", false,-1);
    tracep->declBit(c+1614,"in_awvalid", false,-1);
    tracep->declBus(c+1748,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1547,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1749,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1260,"in_wready", false,-1);
    tracep->declBit(c+1615,"in_wvalid", false,-1);
    tracep->declBus(c+1549,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"in_wlast", false,-1);
    tracep->declBit(c+1499,"in_bready", false,-1);
    tracep->declBit(c+1261,"in_bvalid", false,-1);
    tracep->declBus(c+1262,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1263,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1582,"out_arready", false,-1);
    tracep->declBit(c+1264,"out_arvalid", false,-1);
    tracep->declBus(c+1265,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1266,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1267,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1268,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1269,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1270,"out_rready", false,-1);
    tracep->declBit(c+1516,"out_rvalid", false,-1);
    tracep->declBus(c+1517,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1518,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1750,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1519,"out_rlast", false,-1);
    tracep->declBit(c+1583,"out_awready", false,-1);
    tracep->declBit(c+1271,"out_awvalid", false,-1);
    tracep->declBus(c+1272,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1273,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1274,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1275,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1276,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1584,"out_wready", false,-1);
    tracep->declBit(c+1277,"out_wvalid", false,-1);
    tracep->declBus(c+1278,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1279,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1280,"out_wlast", false,-1);
    tracep->declBit(c+1281,"out_bready", false,-1);
    tracep->declBit(c+1520,"out_bvalid", false,-1);
    tracep->declBus(c+1517,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1750,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1738,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1739,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1740,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1737,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1741,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1742,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1751,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1752,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1753,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1754,"WT_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1282,"request_counter_rd", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1283+i*1,"wait_counter_rd", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1291+i*1,"rid", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1299+i*1,"rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1307+i*1,"rresp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1315+i*1,"rlast", true,(i+0));
    }
    tracep->declBus(c+1323,"arlen", false,-1, 7,0);
    tracep->declBus(c+1324,"arsize", false,-1, 2,0);
    tracep->declBus(c+1325,"arburst", false,-1, 1,0);
    tracep->declBus(c+1326,"r_counter", false,-1, 2,0);
    tracep->declBus(c+1327,"rlen", false,-1, 2,0);
    tracep->declBus(c+1328,"state_rd", false,-1, 2,0);
    tracep->declBus(c+1703,"next_state_rd", false,-1, 2,0);
    tracep->declBus(c+1329,"request_counter_wt", false,-1, 9,0);
    tracep->declBus(c+1330,"wait_counter_wt", false,-1, 31,0);
    tracep->declBit(c+1331,"bvalid", false,-1);
    tracep->declBus(c+1332,"bid", false,-1, 3,0);
    tracep->declBus(c+1333,"bresp", false,-1, 1,0);
    tracep->declBus(c+1334,"state_wt", false,-1, 2,0);
    tracep->declBus(c+1704,"next_state_wt", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+224,"auto_in_awready", false,-1);
    tracep->declBit(c+1616,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1748,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1749,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+225,"auto_in_wready", false,-1);
    tracep->declBit(c+1617,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1549,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"auto_in_wlast", false,-1);
    tracep->declBit(c+1705,"auto_in_bready", false,-1);
    tracep->declBit(c+226,"auto_in_bvalid", false,-1);
    tracep->declBus(c+227,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+229,"auto_in_arready", false,-1);
    tracep->declBit(c+43,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_rready", false,-1);
    tracep->declBit(c+230,"auto_in_rvalid", false,-1);
    tracep->declBus(c+231,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+233,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+234,"auto_in_rlast", false,-1);
    tracep->declBit(c+1618,"auto_out_awready", false,-1);
    tracep->declBit(c+1619,"auto_out_awvalid", false,-1);
    tracep->declBus(c+150,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1605,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+151,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+235,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1620,"auto_out_wready", false,-1);
    tracep->declBit(c+1621,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1609,"auto_out_wlast", false,-1);
    tracep->declBit(c+1500,"auto_out_bready", false,-1);
    tracep->declBit(c+236,"auto_out_bvalid", false,-1);
    tracep->declBus(c+227,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+238,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+45,"auto_out_arready", false,-1);
    tracep->declBit(c+46,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+44,"auto_out_rready", false,-1);
    tracep->declBit(c+230,"auto_out_rvalid", false,-1);
    tracep->declBus(c+231,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+233,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+239,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+240,"auto_out_rlast", false,-1);
    tracep->declBit(c+1621,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+241,"w_idle", false,-1);
    tracep->declBit(c+1622,"in_awready", false,-1);
    tracep->declBit(c+242,"busy", false,-1);
    tracep->declBus(c+243,"r_addr", false,-1, 31,0);
    tracep->declBus(c+244,"r_len", false,-1, 7,0);
    tracep->declBus(c+48,"len", false,-1, 7,0);
    tracep->declBus(c+49,"addr", false,-1, 31,0);
    tracep->declBit(c+245,"busy_1", false,-1);
    tracep->declBus(c+246,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+247,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+248,"len_1", false,-1, 7,0);
    tracep->declBus(c+1623,"addr_1", false,-1, 31,0);
    tracep->declBit(c+249,"wbeats_latched", false,-1);
    tracep->declBit(c+1619,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1624,"wbeats_valid", false,-1);
    tracep->declBus(c+250,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1625,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1609,"w_last", false,-1);
    tracep->declBit(c+1500,"nodeOut_bready", false,-1);
    tracep->declBus(c+251,"error_0", false,-1, 1,0);
    tracep->declBus(c+252,"error_1", false,-1, 1,0);
    tracep->declBus(c+253,"error_2", false,-1, 1,0);
    tracep->declBus(c+254,"error_3", false,-1, 1,0);
    tracep->declBus(c+255,"error_4", false,-1, 1,0);
    tracep->declBus(c+256,"error_5", false,-1, 1,0);
    tracep->declBus(c+257,"error_6", false,-1, 1,0);
    tracep->declBus(c+258,"error_7", false,-1, 1,0);
    tracep->declBus(c+259,"error_8", false,-1, 1,0);
    tracep->declBus(c+260,"error_9", false,-1, 1,0);
    tracep->declBus(c+261,"error_10", false,-1, 1,0);
    tracep->declBus(c+262,"error_11", false,-1, 1,0);
    tracep->declBus(c+263,"error_12", false,-1, 1,0);
    tracep->declBus(c+264,"error_13", false,-1, 1,0);
    tracep->declBus(c+265,"error_14", false,-1, 1,0);
    tracep->declBus(c+266,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+43,"io_enq_valid", false,-1);
    tracep->declBus(c+37,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+40,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+50,"io_deq_ready", false,-1);
    tracep->declBit(c+46,"io_deq_valid", false,-1);
    tracep->declBus(c+29,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+51,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+52,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+31,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+267,"ram", false,-1, 48,0);
    tracep->declBit(c+269,"full", false,-1);
    tracep->declBit(c+46,"io_deq_valid_0", false,-1);
    tracep->declBit(c+53,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+1616,"io_enq_valid", false,-1);
    tracep->declBus(c+1748,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1547,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1749,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1548,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1750,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1626,"io_deq_ready", false,-1);
    tracep->declBit(c+1627,"io_deq_valid", false,-1);
    tracep->declBus(c+150,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1628,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+270,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1605,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+151,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+271,"ram", false,-1, 48,0);
    tracep->declBit(c+273,"full", false,-1);
    tracep->declBit(c+1627,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1629,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1617,"io_enq_valid", false,-1);
    tracep->declBus(c+1549,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1550,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1551,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1630,"io_deq_ready", false,-1);
    tracep->declBit(c+1631,"io_deq_valid", false,-1);
    tracep->declBus(c+1607,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1608,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1706,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+274,"ram", false,-1, 36,0);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+1631,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1632,"do_enq", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1633,"auto_in_awready", false,-1);
    tracep->declBit(c+1634,"auto_in_awvalid", false,-1);
    tracep->declBus(c+150,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1635,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1707,"auto_in_wready", false,-1);
    tracep->declBit(c+1636,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1501,"auto_in_bready", false,-1);
    tracep->declBit(c+277,"auto_in_bvalid", false,-1);
    tracep->declBus(c+278,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+279,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"auto_in_arready", false,-1);
    tracep->declBit(c+55,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+56,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+57,"auto_in_rready", false,-1);
    tracep->declBit(c+280,"auto_in_rvalid", false,-1);
    tracep->declBus(c+281,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+282,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+283,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+54,"nodeIn_arready", false,-1);
    tracep->declBit(c+1633,"nodeIn_awready", false,-1);
    tracep->declBit(c+1637,"w_sel0", false,-1);
    tracep->declBit(c+277,"w_full", false,-1);
    tracep->declBus(c+278,"w_id", false,-1, 3,0);
    tracep->declBit(c+284,"r_sel1", false,-1);
    tracep->declBit(c+285,"w_sel1", false,-1);
    tracep->declBit(c+280,"r_full", false,-1);
    tracep->declBus(c+281,"r_id", false,-1, 3,0);
    tracep->declBit(c+58,"ren", false,-1);
    tracep->declBit(c+286,"rdata_REG", false,-1);
    tracep->declBus(c+287,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+288,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+289,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+290,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+59,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+58,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declBus(c+291,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1638,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1639,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declBus(c+1607,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1608,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1640,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+987,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1748,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1749,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1641,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+988,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1549,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+989,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1335,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1336,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+61,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1338,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1339,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+640,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+641,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1340,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1259,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1614,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1748,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1749,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1260,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1615,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1549,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1499,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1261,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1262,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1263,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1253,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1254,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1255,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1256,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1258,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+224,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1616,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1748,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1749,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+225,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1617,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1549,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1705,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+226,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+227,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+229,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+230,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+231,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+233,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+234,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1335,"in_0_bvalid", false,-1);
    tracep->declBit(c+1338,"in_0_rvalid", false,-1);
    tracep->declBit(c+1642,"in_0_wready", false,-1);
    tracep->declBit(c+1643,"in_0_awready", false,-1);
    tracep->declBit(c+1708,"in_0_arready", false,-1);
    tracep->declBit(c+1640,"anonIn_awready", false,-1);
    tracep->declBit(c+60,"anonIn_arready", false,-1);
    tracep->declBit(c+63,"requestARIO_0_0", false,-1);
    tracep->declBit(c+64,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1552,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1553,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+65,"arSel", false,-1, 15,0);
    tracep->declBus(c+1755,"awSel", false,-1, 15,0);
    tracep->declBus(c+1341,"rSel", false,-1, 15,0);
    tracep->declBus(c+1342,"bSel", false,-1, 15,0);
    tracep->declBus(c+292,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+293,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+294,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+295,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+296,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+297,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+298,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1756,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+299,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+300,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+301,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1757,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+302,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+303,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+304,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1758,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+305,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+306,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+307,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1759,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+308,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+309,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+310,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1760,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+311,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+312,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+313,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1761,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+314,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+315,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+316,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1762,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+317,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+318,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+319,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1763,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+320,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+321,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+322,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1764,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+323,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+324,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+325,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1765,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+326,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+327,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+328,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1766,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+329,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+330,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+331,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1767,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+332,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+333,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+334,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1768,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+335,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+336,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+337,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1769,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+338,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+339,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+340,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1770,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+66,"in_0_arvalid", false,-1);
    tracep->declBit(c+341,"latched", false,-1);
    tracep->declBit(c+1644,"in_0_awvalid", false,-1);
    tracep->declBit(c+1502,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1503,"in_0_wvalid", false,-1);
    tracep->declBit(c+342,"idle_2", false,-1);
    tracep->declBit(c+1343,"anyValid", false,-1);
    tracep->declBus(c+1344,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+343,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1345,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1346,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1347,"prefixOR_1", false,-1);
    tracep->declBit(c+1348,"winner_2_1", false,-1);
    tracep->declBit(c+344,"state_2_0", false,-1);
    tracep->declBit(c+345,"state_2_1", false,-1);
    tracep->declBit(c+1349,"muxState_2_0", false,-1);
    tracep->declBit(c+1350,"muxState_2_1", false,-1);
    tracep->declBit(c+346,"idle_3", false,-1);
    tracep->declBit(c+1351,"anyValid_1", false,-1);
    tracep->declBus(c+1352,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+347,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1353,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1354,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1355,"winner_3_0", false,-1);
    tracep->declBit(c+1356,"winner_3_1", false,-1);
    tracep->declBit(c+348,"state_3_0", false,-1);
    tracep->declBit(c+349,"state_3_1", false,-1);
    tracep->declBit(c+1357,"muxState_3_0", false,-1);
    tracep->declBit(c+1358,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+350,"io_enq_ready", false,-1);
    tracep->declBit(c+1502,"io_enq_valid", false,-1);
    tracep->declBus(c+1554,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1645,"io_deq_ready", false,-1);
    tracep->declBit(c+1504,"io_deq_valid", false,-1);
    tracep->declBus(c+1646,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+351,"wrap", false,-1);
    tracep->declBit(c+352,"wrap_1", false,-1);
    tracep->declBit(c+353,"maybe_full", false,-1);
    tracep->declBit(c+354,"ptr_match", false,-1);
    tracep->declBit(c+355,"empty", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+1504,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1647,"do_deq", false,-1);
    tracep->declBit(c+1648,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+352,"R0_addr", false,-1);
    tracep->declBit(c+1747,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declBus(c+357,"R0_data", false,-1, 1,0);
    tracep->declBit(c+351,"W0_addr", false,-1);
    tracep->declBit(c+1648,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declBus(c+1554,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+358+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1649,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1650,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1605,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+151,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1620,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1621,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1609,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1500,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+236,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+227,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+68,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+230,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+231,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+233,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+240,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1633,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1634,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1635,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1707,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1636,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1501,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+277,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+278,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+279,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+55,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+56,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+57,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+280,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+281,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+282,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+283,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1651,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1652,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+360,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+69,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+361,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+362,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+363,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+149,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1603,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1605,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+151,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+152,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1606,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1609,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+642,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+153,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+156,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+28,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+157,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+158,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+159,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+236,"in_0_bvalid", false,-1);
    tracep->declBit(c+230,"in_0_rvalid", false,-1);
    tracep->declBit(c+1653,"in_0_wready", false,-1);
    tracep->declBit(c+1654,"in_0_awready", false,-1);
    tracep->declBit(c+67,"in_0_arready", false,-1);
    tracep->declBit(c+1649,"anonIn_awready", false,-1);
    tracep->declBit(c+71,"requestARIO_0_0", false,-1);
    tracep->declBit(c+72,"requestARIO_0_1", false,-1);
    tracep->declBit(c+73,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1655,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1656,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1657,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+74,"arSel", false,-1, 15,0);
    tracep->declBus(c+364,"awSel", false,-1, 15,0);
    tracep->declBus(c+365,"rSel", false,-1, 15,0);
    tracep->declBus(c+366,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1658,"in_0_awvalid", false,-1);
    tracep->declBit(c+1659,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1660,"in_0_wvalid", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+427,"io_enq_ready", false,-1);
    tracep->declBit(c+1659,"io_enq_valid", false,-1);
    tracep->declBus(c+1661,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1662,"io_deq_ready", false,-1);
    tracep->declBit(c+1663,"io_deq_valid", false,-1);
    tracep->declBus(c+1664,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+428,"wrap", false,-1);
    tracep->declBit(c+429,"wrap_1", false,-1);
    tracep->declBit(c+430,"maybe_full", false,-1);
    tracep->declBit(c+431,"ptr_match", false,-1);
    tracep->declBit(c+432,"empty", false,-1);
    tracep->declBit(c+433,"full", false,-1);
    tracep->declBit(c+1663,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1665,"do_deq", false,-1);
    tracep->declBit(c+1666,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+429,"R0_addr", false,-1);
    tracep->declBit(c+1747,"R0_en", false,-1);
    tracep->declBit(c+1671,"R0_clk", false,-1);
    tracep->declBus(c+434,"R0_data", false,-1, 2,0);
    tracep->declBit(c+428,"W0_addr", false,-1);
    tracep->declBit(c+1666,"W0_en", false,-1);
    tracep->declBit(c+1671,"W0_clk", false,-1);
    tracep->declBus(c+1661,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1618,"auto_in_awready", false,-1);
    tracep->declBit(c+1619,"auto_in_awvalid", false,-1);
    tracep->declBus(c+150,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1605,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+151,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+235,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1620,"auto_in_wready", false,-1);
    tracep->declBit(c+1621,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1609,"auto_in_wlast", false,-1);
    tracep->declBit(c+1500,"auto_in_bready", false,-1);
    tracep->declBit(c+236,"auto_in_bvalid", false,-1);
    tracep->declBus(c+227,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+238,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+45,"auto_in_arready", false,-1);
    tracep->declBit(c+46,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+44,"auto_in_rready", false,-1);
    tracep->declBit(c+230,"auto_in_rvalid", false,-1);
    tracep->declBus(c+231,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+233,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+239,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+240,"auto_in_rlast", false,-1);
    tracep->declBit(c+1649,"auto_out_awready", false,-1);
    tracep->declBit(c+1650,"auto_out_awvalid", false,-1);
    tracep->declBus(c+150,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1605,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+151,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1620,"auto_out_wready", false,-1);
    tracep->declBit(c+1621,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1609,"auto_out_wlast", false,-1);
    tracep->declBit(c+1500,"auto_out_bready", false,-1);
    tracep->declBit(c+236,"auto_out_bvalid", false,-1);
    tracep->declBus(c+227,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+237,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_out_arready", false,-1);
    tracep->declBit(c+68,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_out_rready", false,-1);
    tracep->declBit(c+230,"auto_out_rvalid", false,-1);
    tracep->declBus(c+231,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+233,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+240,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+437,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+441,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+445,"io_enq_ready", false,-1);
    tracep->declBit(c+77,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+449,"io_enq_ready", false,-1);
    tracep->declBit(c+78,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+453,"io_enq_ready", false,-1);
    tracep->declBit(c+79,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+457,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+461,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+465,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+469,"io_enq_ready", false,-1);
    tracep->declBit(c+661,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+643,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+473,"io_enq_ready", false,-1);
    tracep->declBit(c+662,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+644,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+477,"io_enq_ready", false,-1);
    tracep->declBit(c+663,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+645,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+481,"io_enq_ready", false,-1);
    tracep->declBit(c+664,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+646,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+665,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+647,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+493,"io_enq_ready", false,-1);
    tracep->declBit(c+666,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+648,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+497,"io_enq_ready", false,-1);
    tracep->declBit(c+667,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+649,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+668,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+650,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+669,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+651,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+670,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+652,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+671,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+653,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+517,"io_enq_ready", false,-1);
    tracep->declBit(c+672,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+654,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+521,"io_enq_ready", false,-1);
    tracep->declBit(c+673,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+655,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+525,"io_enq_ready", false,-1);
    tracep->declBit(c+674,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+656,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+529,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+533,"io_enq_ready", false,-1);
    tracep->declBit(c+675,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+657,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+537,"io_enq_ready", false,-1);
    tracep->declBit(c+676,"io_enq_valid", false,-1);
    tracep->declBit(c+235,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+658,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+541,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+545,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+549,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+553,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+557,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1709,"reset", false,-1);
    tracep->declBit(c+1640,"auto_master_out_awready", false,-1);
    tracep->declBit(c+987,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1748,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1749,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1641,"auto_master_out_wready", false,-1);
    tracep->declBit(c+988,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1549,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+989,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1335,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1336,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_master_out_arready", false,-1);
    tracep->declBit(c+61,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1338,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1339,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+640,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+641,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1340,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1709,"reset", false,-1);
    tracep->declBit(c+1746,"io_interrupt", false,-1);
    tracep->declBit(c+1640,"io_master_awready", false,-1);
    tracep->declBit(c+987,"io_master_awvalid", false,-1);
    tracep->declBus(c+1547,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1748,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1749,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1641,"io_master_wready", false,-1);
    tracep->declBit(c+988,"io_master_wvalid", false,-1);
    tracep->declBus(c+1549,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"io_master_wlast", false,-1);
    tracep->declBit(c+989,"io_master_bready", false,-1);
    tracep->declBit(c+1335,"io_master_bvalid", false,-1);
    tracep->declBus(c+1337,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1336,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+60,"io_master_arready", false,-1);
    tracep->declBit(c+61,"io_master_arvalid", false,-1);
    tracep->declBus(c+38,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+37,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+39,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"io_master_rready", false,-1);
    tracep->declBit(c+1338,"io_master_rvalid", false,-1);
    tracep->declBus(c+641,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+640,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1340,"io_master_rlast", false,-1);
    tracep->declBus(c+1339,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1771,"io_slave_awready", false,-1);
    tracep->declBit(c+1746,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1772,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1748,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1749,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1740,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1773,"io_slave_wready", false,-1);
    tracep->declBit(c+1746,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1772,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1748,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1746,"io_slave_wlast", false,-1);
    tracep->declBit(c+1746,"io_slave_bready", false,-1);
    tracep->declBit(c+1774,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1775,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1776,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1777,"io_slave_arready", false,-1);
    tracep->declBit(c+1746,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1772,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1748,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1740,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1750,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1746,"io_slave_rready", false,-1);
    tracep->declBit(c+1778,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1779,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1780,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1781,"io_slave_rlast", false,-1);
    tracep->declBus(c+1782,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBit(c+990,"reset_ifu", false,-1);
    tracep->declBus(c+991,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+992,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+993,"npc", false,-1, 31,0);
    tracep->declBit(c+1783,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1784,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+991,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+992,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+994,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+995,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+996,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1748,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1741,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1750,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+997,"ifu_arvalid", false,-1);
    tracep->declBit(c+91,"ifu_arready", false,-1);
    tracep->declBus(c+92,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+93,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+94,"ifu_rlast", false,-1);
    tracep->declBus(c+95,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+96,"ifu_rvalid", false,-1);
    tracep->declBit(c+998,"ifu_rready", false,-1);
    tracep->declBit(c+1785,"useless1", false,-1);
    tracep->declBit(c+1786,"useless2", false,-1);
    tracep->declBit(c+1787,"useless3", false,-1);
    tracep->declBit(c+1788,"useless4", false,-1);
    tracep->declBit(c+999,"fencei", false,-1);
    tracep->declBus(c+1000,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1748,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1001,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1750,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1002,"lsu_arvalid", false,-1);
    tracep->declBit(c+97,"lsu_arready", false,-1);
    tracep->declBus(c+98,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+99,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+100,"lsu_rlast", false,-1);
    tracep->declBus(c+101,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+102,"lsu_rvalid", false,-1);
    tracep->declBit(c+1003,"lsu_rready", false,-1);
    tracep->declBus(c+1004,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1748,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1749,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1005,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1006,"lsu_awvalid", false,-1);
    tracep->declBit(c+1667,"lsu_awready", false,-1);
    tracep->declBus(c+1007,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1008,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1009,"lsu_wlast", false,-1);
    tracep->declBit(c+1010,"lsu_wvalid", false,-1);
    tracep->declBit(c+1668,"lsu_wready", false,-1);
    tracep->declBus(c+1505,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1506,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1507,"lsu_bvalid", false,-1);
    tracep->declBit(c+1011,"lsu_bready", false,-1);
    tracep->declBus(c+1012,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1748,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1013,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1750,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1014,"axi_arvalid", false,-1);
    tracep->declBit(c+103,"axi_arready", false,-1);
    tracep->declBus(c+104,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+105,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+106,"axi_rlast", false,-1);
    tracep->declBus(c+107,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+108,"axi_rvalid", false,-1);
    tracep->declBit(c+1015,"axi_rready", false,-1);
    tracep->declBus(c+1547,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1748,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1749,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1548,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1750,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+987,"axi_awvalid", false,-1);
    tracep->declBit(c+1640,"axi_awready", false,-1);
    tracep->declBus(c+1549,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1550,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1551,"axi_wlast", false,-1);
    tracep->declBit(c+988,"axi_wvalid", false,-1);
    tracep->declBit(c+1641,"axi_wready", false,-1);
    tracep->declBus(c+1337,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1336,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1335,"axi_bvalid", false,-1);
    tracep->declBit(c+989,"axi_bready", false,-1);
    tracep->declBus(c+109,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+110,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+111,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+112,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+113,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+114,"clint_arvalid", false,-1);
    tracep->declBit(c+1016,"clint_arready", false,-1);
    tracep->declBus(c+1017,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1018,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1019,"clint_rlast", false,-1);
    tracep->declBus(c+1748,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1020,"clint_rvalid", false,-1);
    tracep->declBit(c+115,"clint_rready", false,-1);
    tracep->declBus(c+1789,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1790,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1791,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1792,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1793,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1794,"clint_awvalid", false,-1);
    tracep->declBit(c+1021,"clint_awready", false,-1);
    tracep->declBus(c+1795,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1796,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1797,"clint_wlast", false,-1);
    tracep->declBit(c+1798,"clint_wvalid", false,-1);
    tracep->declBit(c+1022,"clint_wready", false,-1);
    tracep->declBus(c+1023,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1748,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1024,"clint_bvalid", false,-1);
    tracep->declBit(c+1799,"clint_bready", false,-1);
    tracep->declBus(c+1555,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1556,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1711,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1712,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1359,"a5", false,-1, 31,0);
    tracep->declBus(c+1557,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1711,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1712,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1558,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1713,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1559,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1560,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1561,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1562,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1563,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1564,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1565,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1566,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1567,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1568,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1569,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1570,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1571,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1572,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1573,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+1025,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1026,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1574,"csr_write", false,-1);
    tracep->declBus(c+1575,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1360+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1027,"wdata", false,-1, 31,0);
    tracep->declBus(c+1028,"waddr", false,-1, 4,0);
    tracep->declBit(c+1029,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1364+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1030,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1031,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1032,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1033,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1800,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1034,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1035,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1036,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1037,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1038,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1039,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1040,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1041,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1042,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1043,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1044,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1045,"npc_valid", false,-1);
    tracep->declBus(c+1046,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1047,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1048,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1049,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1801,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1050,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1051,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1052,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1053,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1054,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1055,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1056,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+1057,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+996,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1748,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1749,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1741,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1750,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+997,"arvalid_i_a", false,-1);
    tracep->declBit(c+91,"arready_o_a", false,-1);
    tracep->declBus(c+92,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+93,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+94,"rlast_o_a", false,-1);
    tracep->declBus(c+95,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+96,"rvalid_o_a", false,-1);
    tracep->declBit(c+998,"rready_i_a", false,-1);
    tracep->declBus(c+1802,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1748,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1749,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1740,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1750,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1746,"awvalid_i_a", false,-1);
    tracep->declBit(c+1669,"awready_o_a", false,-1);
    tracep->declBus(c+1802,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1748,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1746,"wlast_i_a", false,-1);
    tracep->declBit(c+1746,"wvalid_i_a", false,-1);
    tracep->declBit(c+1670,"wready_o_a", false,-1);
    tracep->declBus(c+1508,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1509,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1510,"bvalid_o_a", false,-1);
    tracep->declBit(c+1746,"bready_i_a", false,-1);
    tracep->declBus(c+1000,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1748,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1749,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1001,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1750,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1002,"arvalid_i_b", false,-1);
    tracep->declBit(c+97,"arready_o_b", false,-1);
    tracep->declBus(c+98,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+99,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+100,"rlast_o_b", false,-1);
    tracep->declBus(c+101,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+102,"rvalid_o_b", false,-1);
    tracep->declBit(c+1003,"rready_i_b", false,-1);
    tracep->declBus(c+1004,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1748,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1749,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1005,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1750,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1006,"awvalid_i_b", false,-1);
    tracep->declBit(c+1667,"awready_o_b", false,-1);
    tracep->declBus(c+1007,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1008,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1009,"wlast_i_b", false,-1);
    tracep->declBit(c+1010,"wvalid_i_b", false,-1);
    tracep->declBit(c+1668,"wready_o_b", false,-1);
    tracep->declBus(c+1505,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1506,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1507,"bvalid_o_b", false,-1);
    tracep->declBit(c+1011,"bready_i_b", false,-1);
    tracep->declBus(c+1012,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1748,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1749,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1013,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1750,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1014,"arvalid_o", false,-1);
    tracep->declBit(c+103,"arready_i", false,-1);
    tracep->declBus(c+104,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+105,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+106,"rlast_i", false,-1);
    tracep->declBus(c+107,"rid_i", false,-1, 3,0);
    tracep->declBit(c+108,"rvalid_i", false,-1);
    tracep->declBit(c+1015,"rready_o", false,-1);
    tracep->declBus(c+1547,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1748,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1749,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1548,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1750,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+987,"awvalid_o", false,-1);
    tracep->declBit(c+1640,"awready_i", false,-1);
    tracep->declBus(c+1549,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1550,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1551,"wlast_o", false,-1);
    tracep->declBit(c+988,"wvalid_o", false,-1);
    tracep->declBit(c+1641,"wready_i", false,-1);
    tracep->declBus(c+1337,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1336,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1335,"bvalid_i", false,-1);
    tracep->declBit(c+989,"bready_o", false,-1);
    tracep->declBit(c+1058,"ar_switch", false,-1);
    tracep->declBit(c+1059,"r_switch", false,-1);
    tracep->declBit(c+1060,"aw_switch", false,-1);
    tracep->declBit(c+1061,"w_switch", false,-1);
    tracep->declBit(c+1062,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+109,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+110,"arid_i", false,-1, 3,0);
    tracep->declBus(c+111,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+112,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+113,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+114,"arvalid_i", false,-1);
    tracep->declBit(c+1016,"arready_o", false,-1);
    tracep->declBus(c+1017,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+1018,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+1019,"rlast_o", false,-1);
    tracep->declBus(c+1748,"rid_o", false,-1, 3,0);
    tracep->declBit(c+1020,"rvalid_o", false,-1);
    tracep->declBit(c+115,"rready_i", false,-1);
    tracep->declBus(c+1789,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1790,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1791,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1792,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1793,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1794,"awvalid_i", false,-1);
    tracep->declBit(c+1021,"awready_o", false,-1);
    tracep->declBus(c+1795,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1796,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1797,"wlast_i", false,-1);
    tracep->declBit(c+1798,"wvalid_i", false,-1);
    tracep->declBit(c+1022,"wready_o", false,-1);
    tracep->declBus(c+1023,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1748,"bid_o", false,-1, 3,0);
    tracep->declBit(c+1024,"bvalid_o", false,-1);
    tracep->declBit(c+1799,"bready_i", false,-1);
    tracep->declBit(c+1063,"ar_state", false,-1);
    tracep->declBit(c+1064,"r_state", false,-1);
    tracep->declBit(c+1065,"aw_state", false,-1);
    tracep->declBit(c+1066,"w_state", false,-1);
    tracep->declBit(c+1803,"b_state", false,-1);
    tracep->declBus(c+1067,"araddr", false,-1, 31,0);
    tracep->declBus(c+1068,"awaddr", false,-1, 31,0);
    tracep->declBus(c+1069,"wdata", false,-1, 31,0);
    tracep->declBus(c+1070,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1804,"wvalid", false,-1);
    tracep->declBit(c+1071,"flag_waddr", false,-1);
    tracep->declBit(c+1072,"flag_wdata", false,-1);
    tracep->declBit(c+1073,"flag_rdata", false,-1);
    tracep->declBit(c+1074,"flag_raddr", false,-1);
    tracep->declBit(c+1805,"flag_write", false,-1);
    tracep->declBus(c+1075,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1076,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1077,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1078,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1079,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1080,"lfsr_in", false,-1);
    tracep->declBus(c+1081,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1082,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+1557,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1711,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1712,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1558,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1713,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1559,"a_in_src_i", false,-1);
    tracep->declBus(c+1560,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1561,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1562,"adder_a_src_i", false,-1);
    tracep->declBit(c+1563,"adder_out_src_i", false,-1);
    tracep->declBus(c+1564,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1565,"MemRead_i", false,-1);
    tracep->declBit(c+1566,"MemWrite_i", false,-1);
    tracep->declBus(c+1567,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1568,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1569,"wb_src_i", false,-1);
    tracep->declBit(c+1570,"csr_write_i", false,-1);
    tracep->declBit(c+1571,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1572,"reg_write_i", false,-1);
    tracep->declBus(c+1573,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1025,"exu_valid_i", false,-1);
    tracep->declBit(c+1026,"exu_ready_o", false,-1);
    tracep->declBus(c+1030,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1031,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1032,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1033,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+993,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1034,"MemRead_o", false,-1);
    tracep->declBit(c+1035,"MemWrite_o", false,-1);
    tracep->declBus(c+1036,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1037,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1038,"wb_src_o", false,-1);
    tracep->declBit(c+1039,"csr_write_o", false,-1);
    tracep->declBit(c+1040,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1041,"reg_write_o", false,-1);
    tracep->declBus(c+1042,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1043,"exu_valid_o", false,-1);
    tracep->declBit(c+1044,"exu_ready_i", false,-1);
    tracep->declBit(c+1045,"npc_valid", false,-1);
    tracep->declBus(c+1084,"pc", false,-1, 31,0);
    tracep->declBus(c+1031,"rs1", false,-1, 31,0);
    tracep->declBus(c+1032,"rs2", false,-1, 31,0);
    tracep->declBus(c+1085,"imm", false,-1, 31,0);
    tracep->declBus(c+1086,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1087,"a_in_src", false,-1);
    tracep->declBus(c+1088,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1089,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1090,"adder_a_src", false,-1);
    tracep->declBit(c+1091,"adder_out_src", false,-1);
    tracep->declBus(c+1092,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1093,"a_in", false,-1, 31,0);
    tracep->declBus(c+1094,"b_in", false,-1, 31,0);
    tracep->declBus(c+1095,"a_out", false,-1, 31,0);
    tracep->declBus(c+1096,"add_out", false,-1, 31,0);
    tracep->declBus(c+1097,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1030,"alu_result", false,-1, 31,0);
    tracep->declBus(c+993,"npc", false,-1, 31,0);
    tracep->declBit(c+1098,"zero", false,-1);
    tracep->declBus(c+1750,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1806,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1807,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1099,"current_state", false,-1, 1,0);
    tracep->declBus(c+1100,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1093,"a", false,-1, 31,0);
    tracep->declBus(c+1094,"b", false,-1, 31,0);
    tracep->declBus(c+1092,"op", false,-1, 3,0);
    tracep->declBus(c+1030,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1098,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1808,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1031,"d0", false,-1, 31,0);
    tracep->declBus(c+1084,"d1", false,-1, 31,0);
    tracep->declBit(c+1087,"sel", false,-1);
    tracep->declBus(c+1093,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1808,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"d0", false,-1, 31,0);
    tracep->declBus(c+1085,"d1", false,-1, 31,0);
    tracep->declBus(c+1809,"d2", false,-1, 31,0);
    tracep->declBus(c+1086,"d3", false,-1, 31,0);
    tracep->declBus(c+1088,"sel", false,-1, 1,0);
    tracep->declBus(c+1094,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1095,"a", false,-1, 31,0);
    tracep->declBus(c+1085,"b", false,-1, 31,0);
    tracep->declBus(c+1096,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1808,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1084,"d0", false,-1, 31,0);
    tracep->declBus(c+1031,"d1", false,-1, 31,0);
    tracep->declBit(c+1090,"sel", false,-1);
    tracep->declBus(c+1095,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1808,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1096,"d0", false,-1, 31,0);
    tracep->declBus(c+1086,"d1", false,-1, 31,0);
    tracep->declBit(c+1091,"sel", false,-1);
    tracep->declBus(c+1097,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1101,"pc4", false,-1, 31,0);
    tracep->declBus(c+1097,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1089,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1098,"zero", false,-1);
    tracep->declBus(c+1030,"alu_result", false,-1, 31,0);
    tracep->declBus(c+993,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBit(c+990,"reset_ifu", false,-1);
    tracep->declBus(c+1555,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1556,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1711,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1712,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1359,"a5", false,-1, 31,0);
    tracep->declBus(c+991,"pc_i", false,-1, 31,0);
    tracep->declBus(c+992,"inst_i", false,-1, 31,0);
    tracep->declBit(c+994,"idu_valid_i", false,-1);
    tracep->declBit(c+995,"idu_ready_o", false,-1);
    tracep->declBus(c+1557,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1711,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1712,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1558,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1713,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1559,"a_in_src_o", false,-1);
    tracep->declBus(c+1560,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1561,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1562,"adder_a_src_o", false,-1);
    tracep->declBit(c+1563,"adder_out_src_o", false,-1);
    tracep->declBus(c+1564,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1565,"MemRead_o", false,-1);
    tracep->declBit(c+1566,"MemWrite_o", false,-1);
    tracep->declBus(c+1567,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1568,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1569,"wb_src_o", false,-1);
    tracep->declBit(c+1570,"csr_write_o", false,-1);
    tracep->declBit(c+1571,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1572,"reg_write_o", false,-1);
    tracep->declBus(c+1573,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1025,"idu_valid_o", false,-1);
    tracep->declBit(c+1026,"idu_ready_i", false,-1);
    tracep->declBit(c+1574,"csr_write_i", false,-1);
    tracep->declBus(c+1575,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1396+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+999,"fencei", false,-1);
    tracep->declBus(c+1557,"pc", false,-1, 31,0);
    tracep->declBus(c+1576,"inst", false,-1, 31,0);
    tracep->declBus(c+1577,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1750,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1806,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1807,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1102,"current_state", false,-1, 1,0);
    tracep->declBus(c+1103,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1576,"inst", false,-1, 31,0);
    tracep->declBus(c+1564,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1578,"opcode", false,-1, 6,0);
    tracep->declBus(c+1579,"funct3", false,-1, 2,0);
    tracep->declBus(c+1580,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1574,"wen", false,-1);
    tracep->declBus(c+1576,"inst", false,-1, 31,0);
    tracep->declBus(c+1575,"wdata", false,-1, 31,0);
    tracep->declBus(c+1359,"NO", false,-1, 31,0);
    tracep->declBus(c+1557,"pc", false,-1, 31,0);
    tracep->declBus(c+1713,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1400+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1404,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1405,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1406,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1407,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1810,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1811,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1578,"opcode", false,-1, 6,0);
    tracep->declBus(c+1579,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1576,"inst", false,-1, 31,0);
    tracep->declBit(c+1559,"a_in_src", false,-1);
    tracep->declBus(c+1560,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1572,"reg_write", false,-1);
    tracep->declBus(c+1561,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1562,"adder_a_src", false,-1);
    tracep->declBit(c+1565,"MemRead", false,-1);
    tracep->declBit(c+1566,"MemWrite", false,-1);
    tracep->declBus(c+1577,"wmask", false,-1, 7,0);
    tracep->declBit(c+1569,"wb_src", false,-1);
    tracep->declBus(c+1568,"rmask", false,-1, 2,0);
    tracep->declBit(c+1570,"csr_write", false,-1);
    tracep->declBit(c+1563,"adder_out_src", false,-1);
    tracep->declBit(c+1571,"csr_wdata_src", false,-1);
    tracep->declBus(c+1578,"opcode", false,-1, 6,0);
    tracep->declBus(c+1579,"funct3", false,-1, 2,0);
    tracep->declBus(c+1580,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1808,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1576,"inst", false,-1, 31,0);
    tracep->declBus(c+1558,"data", false,-1, 31,0);
    tracep->declBus(c+1578,"opcode", false,-1, 6,0);
    tracep->declBus(c+1579,"funct3", false,-1, 2,0);
    tracep->declBus(c+1580,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+996,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1748,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1749,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1741,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1750,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+997,"arvalid_o", false,-1);
    tracep->declBit(c+91,"arready_i", false,-1);
    tracep->declBus(c+92,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+93,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+94,"rlast_i", false,-1);
    tracep->declBus(c+95,"rid_i", false,-1, 3,0);
    tracep->declBit(c+96,"rvalid_i", false,-1);
    tracep->declBit(c+998,"rready_o", false,-1);
    tracep->declBus(c+993,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1045,"npc_valid", false,-1);
    tracep->declBit(c+990,"reset_o", false,-1);
    tracep->declBus(c+991,"pc_o", false,-1, 31,0);
    tracep->declBus(c+992,"inst_o", false,-1, 31,0);
    tracep->declBit(c+994,"ifu_valid_o", false,-1);
    tracep->declBit(c+995,"ifu_ready_i", false,-1);
    tracep->declBus(c+1104,"pc", false,-1, 31,0);
    tracep->declBus(c+1812,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1813,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1814,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1815,"lfsr_in", false,-1);
    tracep->declBit(c+997,"arvalid", false,-1);
    tracep->declBus(c+996,"araddr", false,-1, 31,0);
    tracep->declBus(c+1105,"inst", false,-1, 31,0);
    tracep->declBit(c+998,"rready", false,-1);
    tracep->declBit(c+1106,"skip", false,-1);
    tracep->declBus(c+1750,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1806,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1807,"S_ADD", false,-1, 1,0);
    tracep->declBus(c+1107,"current_state", false,-1, 1,0);
    tracep->declBus(c+116,"next_state", false,-1, 1,0);
    tracep->declBit(c+1816,"ready_flag", false,-1);
    tracep->declBit(c+1108,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+1030,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1031,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1032,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1033,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1034,"MemRead_i", false,-1);
    tracep->declBit(c+1035,"MemWrite_i", false,-1);
    tracep->declBus(c+1036,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1037,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1038,"wb_src_i", false,-1);
    tracep->declBit(c+1039,"csr_write_i", false,-1);
    tracep->declBit(c+1040,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1041,"reg_write_i", false,-1);
    tracep->declBus(c+1042,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1043,"lsu_valid_i", false,-1);
    tracep->declBit(c+1044,"lsu_ready_o", false,-1);
    tracep->declBus(c+1046,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1047,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1048,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1049,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1050,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1051,"wb_src_o", false,-1);
    tracep->declBit(c+1052,"csr_write_o", false,-1);
    tracep->declBit(c+1053,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1054,"reg_write_o", false,-1);
    tracep->declBus(c+1055,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1056,"lsu_valid_o", false,-1);
    tracep->declBit(c+1057,"lsu_ready_i", false,-1);
    tracep->declBus(c+1000,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1748,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1749,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1001,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1750,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1002,"arvalid_o", false,-1);
    tracep->declBit(c+97,"arready_i", false,-1);
    tracep->declBus(c+98,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+99,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+100,"rlast_i", false,-1);
    tracep->declBus(c+101,"rid_i", false,-1, 3,0);
    tracep->declBit(c+102,"rvalid_i", false,-1);
    tracep->declBit(c+1003,"rready_o", false,-1);
    tracep->declBus(c+1004,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1748,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1749,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1005,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1750,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1006,"awvalid_o", false,-1);
    tracep->declBit(c+1667,"awready_i", false,-1);
    tracep->declBus(c+1007,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1008,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1009,"wlast_o", false,-1);
    tracep->declBit(c+1010,"wvalid_o", false,-1);
    tracep->declBit(c+1668,"wready_i", false,-1);
    tracep->declBus(c+1505,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1506,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1507,"bvalid_i", false,-1);
    tracep->declBit(c+1011,"bready_o", false,-1);
    tracep->declBus(c+1046,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1047,"rs1", false,-1, 31,0);
    tracep->declBus(c+1817,"rs2", false,-1, 31,0);
    tracep->declBus(c+1818,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1050,"rmask", false,-1, 2,0);
    tracep->declBit(c+1109,"flag", false,-1);
    tracep->declBit(c+1819,"wvalid_tmp", false,-1);
    tracep->declBus(c+1820,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1821,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1822,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1823,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1824,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1825,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1826,"lfsr_in", false,-1);
    tracep->declBit(c+1002,"arvalid", false,-1);
    tracep->declBus(c+1000,"araddr", false,-1, 31,0);
    tracep->declBit(c+1003,"rready", false,-1);
    tracep->declBus(c+1004,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1006,"awvalid", false,-1);
    tracep->declBus(c+1007,"wdata", false,-1, 31,0);
    tracep->declBus(c+1008,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1010,"wvalid", false,-1);
    tracep->declBit(c+1011,"bready", false,-1);
    tracep->declBus(c+1827,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1828+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1860,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1861,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1862+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1894,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1895+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1927+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1959,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1750,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1806,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1807,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1960,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1110,"current_state", false,-1, 1,0);
    tracep->declBus(c+1111,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1961,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1808,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBus(c+1027,"wdata", false,-1, 31,0);
    tracep->declBus(c+1028,"waddr", false,-1, 4,0);
    tracep->declBit(c+1029,"wen", false,-1);
    tracep->declBus(c+1555,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1711,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1556,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1712,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1359,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1408+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1440+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+1046,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1047,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1048,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1049,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1050,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1051,"wb_src_i", false,-1);
    tracep->declBit(c+1052,"csr_write_i", false,-1);
    tracep->declBit(c+1053,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1054,"reg_write_i", false,-1);
    tracep->declBus(c+1055,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1056,"wbu_valid_i", false,-1);
    tracep->declBit(c+1057,"wbu_ready_o", false,-1);
    tracep->declBus(c+1575,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1027,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1574,"csr_write_o", false,-1);
    tracep->declBit(c+1029,"reg_write_o", false,-1);
    tracep->declBus(c+1028,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1112,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1113,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1114,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1115,"rs1", false,-1, 31,0);
    tracep->declBus(c+1116,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1117,"rmask", false,-1, 2,0);
    tracep->declBit(c+1118,"wb_src", false,-1);
    tracep->declBit(c+1119,"csr_wdata_src", false,-1);
    tracep->declBit(c+1120,"difftest_check", false,-1);
    tracep->declBit(c+1121,"difftest_check_flag", false,-1);
    tracep->declBus(c+1750,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1806,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1807,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1122,"current_state", false,-1, 1,0);
    tracep->declBus(c+1123,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1808,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1115,"d0", false,-1, 31,0);
    tracep->declBus(c+1116,"d1", false,-1, 31,0);
    tracep->declBit(c+1119,"sel", false,-1);
    tracep->declBus(c+1575,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1113,"read_data", false,-1, 31,0);
    tracep->declBus(c+1124,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1117,"rmask", false,-1, 2,0);
    tracep->declBus(c+1112,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1125,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1126,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1127,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1128,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1129,"byte3", false,-1, 31,0);
    tracep->declBus(c+1130,"byte2", false,-1, 31,0);
    tracep->declBus(c+1131,"byte1", false,-1, 31,0);
    tracep->declBus(c+1132,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1808,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1114,"d0", false,-1, 31,0);
    tracep->declBus(c+1112,"d1", false,-1, 31,0);
    tracep->declBit(c+1118,"sel", false,-1);
    tracep->declBus(c+1027,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1710,"rst_n", false,-1);
    tracep->declBus(c+1012,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1748,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1749,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1013,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1750,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1014,"axi_arvalid_i", false,-1);
    tracep->declBit(c+103,"axi_arready_o", false,-1);
    tracep->declBus(c+104,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+105,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+106,"axi_rlast_o", false,-1);
    tracep->declBus(c+107,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+108,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1015,"axi_rready_i", false,-1);
    tracep->declBus(c+1547,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1748,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1749,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1548,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1750,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+987,"axi_awvalid_i", false,-1);
    tracep->declBit(c+1640,"axi_awready_o", false,-1);
    tracep->declBus(c+1549,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1550,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1551,"axi_wlast_i", false,-1);
    tracep->declBit(c+988,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1641,"axi_wready_o", false,-1);
    tracep->declBus(c+1337,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1336,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1335,"axi_bvalid_o", false,-1);
    tracep->declBit(c+989,"axi_bready_i", false,-1);
    tracep->declBus(c+38,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+37,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+39,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+40,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+41,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+61,"sram_arvalid_o", false,-1);
    tracep->declBit(c+60,"sram_arready_i", false,-1);
    tracep->declBus(c+640,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+641,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1340,"sram_rlast_i", false,-1);
    tracep->declBus(c+1339,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1338,"sram_rvalid_i", false,-1);
    tracep->declBit(c+62,"sram_rready_o", false,-1);
    tracep->declBus(c+1547,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1748,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1749,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1548,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1750,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+987,"sram_awvalid_o", false,-1);
    tracep->declBit(c+1640,"sram_awready_i", false,-1);
    tracep->declBus(c+1549,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1550,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1551,"sram_wlast_o", false,-1);
    tracep->declBit(c+988,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1641,"sram_wready_i", false,-1);
    tracep->declBus(c+1337,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1336,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1335,"sram_bvalid_i", false,-1);
    tracep->declBit(c+989,"sram_bready_o", false,-1);
    tracep->declBus(c+109,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+110,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+111,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+112,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+113,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+114,"clint_arvalid_o", false,-1);
    tracep->declBit(c+1016,"clint_arready_i", false,-1);
    tracep->declBus(c+1017,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1018,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1019,"clint_rlast_i", false,-1);
    tracep->declBus(c+1748,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+1020,"clint_rvalid_i", false,-1);
    tracep->declBit(c+115,"clint_rready_o", false,-1);
    tracep->declBus(c+1789,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1790,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1791,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1792,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1793,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1794,"clint_awvalid_o", false,-1);
    tracep->declBit(c+1021,"clint_awready_i", false,-1);
    tracep->declBus(c+1795,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1796,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1797,"clint_wlast_o", false,-1);
    tracep->declBit(c+1798,"clint_wvalid_o", false,-1);
    tracep->declBit(c+1022,"clint_wready_i", false,-1);
    tracep->declBus(c+1023,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1748,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+1024,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1799,"clint_bready_o", false,-1);
    tracep->declBit(c+117,"ar_switch", false,-1);
    tracep->declBit(c+118,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"io_d", false,-1);
    tracep->declBit(c+565,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"io_d", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1229,"auto_in_psel", false,-1);
    tracep->declBit(c+1230,"auto_in_penable", false,-1);
    tracep->declBit(c+1216,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1228,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1215,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"auto_in_pready", false,-1);
    tracep->declBit(c+1746,"auto_in_pslverr", false,-1);
    tracep->declBus(c+694,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1673,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1674,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1675,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1676,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1677,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1678,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1680,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1681,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1682,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1472,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1229,"in_psel", false,-1);
    tracep->declBit(c+1230,"in_penable", false,-1);
    tracep->declBus(c+1215,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1216,"in_pwrite", false,-1);
    tracep->declBus(c+1217,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+693,"in_pready", false,-1);
    tracep->declBus(c+694,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1746,"in_pslverr", false,-1);
    tracep->declBus(c+1673,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1674,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1675,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1676,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1677,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1678,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1679,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1680,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1681,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1682,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+698,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+694,"rdata", false,-1, 31,0);
    tracep->declBus(c+699,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+693,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+700,"num", false,-1, 3,0);
    tracep->declBus(c+1675,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+701,"num", false,-1, 3,0);
    tracep->declBus(c+1676,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+702,"num", false,-1, 3,0);
    tracep->declBus(c+1677,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+703,"num", false,-1, 3,0);
    tracep->declBus(c+1678,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+704,"num", false,-1, 3,0);
    tracep->declBus(c+1679,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+705,"num", false,-1, 3,0);
    tracep->declBus(c+1680,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+706,"num", false,-1, 3,0);
    tracep->declBus(c+1681,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+707,"num", false,-1, 3,0);
    tracep->declBus(c+1682,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1226,"auto_in_psel", false,-1);
    tracep->declBit(c+1227,"auto_in_penable", false,-1);
    tracep->declBit(c+1216,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1228,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1215,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+122,"auto_in_pready", false,-1);
    tracep->declBit(c+1746,"auto_in_pslverr", false,-1);
    tracep->declBus(c+123,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1683,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1684,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1472,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1226,"in_psel", false,-1);
    tracep->declBit(c+1227,"in_penable", false,-1);
    tracep->declBus(c+1215,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1216,"in_pwrite", false,-1);
    tracep->declBus(c+1217,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+122,"in_pready", false,-1);
    tracep->declBus(c+123,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1746,"in_pslverr", false,-1);
    tracep->declBit(c+1683,"ps2_clk", false,-1);
    tracep->declBit(c+1684,"ps2_data", false,-1);
    tracep->declBus(c+575,"data_r", false,-1, 7,0);
    tracep->declBus(c+576,"old_data", false,-1, 7,0);
    tracep->declBus(c+577,"data_asic", false,-1, 7,0);
    tracep->declBus(c+578,"buffer", false,-1, 7,0);
    tracep->declBit(c+579,"ready", false,-1);
    tracep->declBit(c+580,"nextdata_n", false,-1);
    tracep->declBit(c+581,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1714,"clrn", false,-1);
    tracep->declBit(c+1683,"ps2_clk", false,-1);
    tracep->declBit(c+1684,"ps2_data", false,-1);
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
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1651,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1652,"auto_in_wvalid", false,-1);
    tracep->declBit(c+360,"auto_in_arready", false,-1);
    tracep->declBit(c+69,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+361,"auto_in_rvalid", false,-1);
    tracep->declBus(c+362,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+363,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+361,"state", false,-1);
    tracep->declBus(c+363,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+362,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+119,"raddr", false,-1, 31,0);
    tracep->declBit(c+120,"ren", false,-1);
    tracep->declBus(c+121,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1231,"auto_in_psel", false,-1);
    tracep->declBit(c+1232,"auto_in_penable", false,-1);
    tracep->declBit(c+1216,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1212,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1701,"auto_in_pready", false,-1);
    tracep->declBit(c+1746,"auto_in_pslverr", false,-1);
    tracep->declBus(c+124,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1694,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1581,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1695,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1212,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1231,"in_psel", false,-1);
    tracep->declBit(c+1232,"in_penable", false,-1);
    tracep->declBus(c+1215,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1216,"in_pwrite", false,-1);
    tracep->declBus(c+1217,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1701,"in_pready", false,-1);
    tracep->declBus(c+124,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1746,"in_pslverr", false,-1);
    tracep->declBit(c+1694,"qspi_sck", false,-1);
    tracep->declBit(c+1581,"qspi_ce_n", false,-1);
    tracep->declBus(c+1695,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1695,"din", false,-1, 3,0);
    tracep->declBus(c+1715,"dout", false,-1, 3,0);
    tracep->declBus(c+1585,"douten", false,-1, 3,0);
    tracep->declBit(c+1716,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1671,"clk_i", false,-1);
    tracep->declBit(c+1672,"rst_i", false,-1);
    tracep->declBus(c+1212,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1217,"dat_i", false,-1, 31,0);
    tracep->declBus(c+124,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1218,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1231,"cyc_i", false,-1);
    tracep->declBit(c+1231,"stb_i", false,-1);
    tracep->declBit(c+1716,"ack_o", false,-1);
    tracep->declBit(c+1216,"we_i", false,-1);
    tracep->declBit(c+1694,"sck", false,-1);
    tracep->declBit(c+1581,"ce_n", false,-1);
    tracep->declBus(c+1695,"din", false,-1, 3,0);
    tracep->declBus(c+1715,"dout", false,-1, 3,0);
    tracep->declBus(c+1585,"douten", false,-1, 3,0);
    tracep->declBus(c+1750,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1806,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1807,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+708,"mr_sck", false,-1);
    tracep->declBit(c+709,"mr_ce_n", false,-1);
    tracep->declBus(c+1695,"mr_din", false,-1, 3,0);
    tracep->declBus(c+710,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+711,"mr_doe", false,-1);
    tracep->declBit(c+712,"mw_sck", false,-1);
    tracep->declBit(c+713,"mw_ce_n", false,-1);
    tracep->declBus(c+1695,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1491,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+714,"mw_doe", false,-1);
    tracep->declBit(c+1586,"mr_rd", false,-1);
    tracep->declBit(c+715,"mr_done", false,-1);
    tracep->declBit(c+1587,"mw_wr", false,-1);
    tracep->declBit(c+1492,"mw_done", false,-1);
    tracep->declBit(c+1231,"wb_valid", false,-1);
    tracep->declBit(c+1473,"wb_we", false,-1);
    tracep->declBit(c+1474,"wb_re", false,-1);
    tracep->declBus(c+1521,"state", false,-1, 1,0);
    tracep->declBus(c+1717,"nstate", false,-1, 1,0);
    tracep->declBus(c+1718,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1719,"qpi_sck", false,-1);
    tracep->declBus(c+1475,"size", false,-1, 2,0);
    tracep->declBus(c+1476,"byte0", false,-1, 7,0);
    tracep->declBus(c+1477,"byte1", false,-1, 7,0);
    tracep->declBus(c+1478,"byte2", false,-1, 7,0);
    tracep->declBus(c+1479,"byte3", false,-1, 7,0);
    tracep->declBus(c+1480,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1714,"rst_n", false,-1);
    tracep->declBus(c+1481,"addr", false,-1, 23,0);
    tracep->declBit(c+1586,"rd", false,-1);
    tracep->declBus(c+1751,"size", false,-1, 2,0);
    tracep->declBit(c+715,"done", false,-1);
    tracep->declBus(c+124,"line", false,-1, 31,0);
    tracep->declBit(c+708,"sck", false,-1);
    tracep->declBit(c+709,"ce_n", false,-1);
    tracep->declBus(c+1695,"din", false,-1, 3,0);
    tracep->declBus(c+710,"dout", false,-1, 3,0);
    tracep->declBit(c+711,"douten", false,-1);
    tracep->declBus(c+1962,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1963,"READ", false,-1, 0,0);
    tracep->declBus(c+1964,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+716,"state", false,-1);
    tracep->declBit(c+1588,"nstate", false,-1);
    tracep->declBus(c+717,"counter", false,-1, 7,0);
    tracep->declBus(c+718,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+596+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1965,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+719,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1714,"rst_n", false,-1);
    tracep->declBus(c+1482,"addr", false,-1, 23,0);
    tracep->declBus(c+1480,"line", false,-1, 31,0);
    tracep->declBus(c+1475,"size", false,-1, 2,0);
    tracep->declBit(c+1587,"wr", false,-1);
    tracep->declBit(c+1492,"done", false,-1);
    tracep->declBit(c+712,"sck", false,-1);
    tracep->declBit(c+713,"ce_n", false,-1);
    tracep->declBus(c+1695,"din", false,-1, 3,0);
    tracep->declBus(c+1491,"dout", false,-1, 3,0);
    tracep->declBit(c+714,"douten", false,-1);
    tracep->declBus(c+1962,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1963,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1483,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+720,"state", false,-1);
    tracep->declBit(c+1589,"nstate", false,-1);
    tracep->declBus(c+721,"counter", false,-1, 7,0);
    tracep->declBus(c+722,"saddr", false,-1, 23,0);
    tracep->declBus(c+1966,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1583,"auto_in_awready", false,-1);
    tracep->declBit(c+1271,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1272,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1273,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1274,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1275,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1276,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1584,"auto_in_wready", false,-1);
    tracep->declBit(c+1277,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1278,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1279,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1280,"auto_in_wlast", false,-1);
    tracep->declBit(c+1281,"auto_in_bready", false,-1);
    tracep->declBit(c+1520,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1517,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1750,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1582,"auto_in_arready", false,-1);
    tracep->declBit(c+1264,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1265,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1266,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1268,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1269,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1270,"auto_in_rready", false,-1);
    tracep->declBit(c+1516,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1517,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1518,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1750,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1519,"auto_in_rlast", false,-1);
    tracep->declBit(c+1696,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1513,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+688,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+689,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+690,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+691,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1697,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1514,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1515,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1540,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1583,"in_awready", false,-1);
    tracep->declBit(c+1271,"in_awvalid", false,-1);
    tracep->declBus(c+1273,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1272,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1274,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1275,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1276,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1584,"in_wready", false,-1);
    tracep->declBit(c+1277,"in_wvalid", false,-1);
    tracep->declBus(c+1278,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1279,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1280,"in_wlast", false,-1);
    tracep->declBit(c+1281,"in_bready", false,-1);
    tracep->declBit(c+1520,"in_bvalid", false,-1);
    tracep->declBus(c+1750,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1517,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1582,"in_arready", false,-1);
    tracep->declBit(c+1264,"in_arvalid", false,-1);
    tracep->declBus(c+1266,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1265,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1267,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1268,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1269,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1270,"in_rready", false,-1);
    tracep->declBit(c+1516,"in_rvalid", false,-1);
    tracep->declBus(c+1750,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1518,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1519,"in_rlast", false,-1);
    tracep->declBus(c+1517,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1696,"sdram_clk", false,-1);
    tracep->declBit(c+1513,"sdram_cke", false,-1);
    tracep->declBit(c+688,"sdram_cs", false,-1);
    tracep->declBit(c+689,"sdram_ras", false,-1);
    tracep->declBit(c+690,"sdram_cas", false,-1);
    tracep->declBit(c+691,"sdram_we", false,-1);
    tracep->declBus(c+1697,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1514,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1515,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1540,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+723,"sdram_dout_en", false,-1);
    tracep->declBus(c+724,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1671,"clk_i", false,-1);
    tracep->declBit(c+1672,"rst_i", false,-1);
    tracep->declBit(c+1271,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1273,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1272,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1274,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1276,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1277,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1278,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1279,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1280,"inport_wlast_i", false,-1);
    tracep->declBit(c+1281,"inport_bready_i", false,-1);
    tracep->declBit(c+1264,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1266,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1265,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1267,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1269,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1270,"inport_rready_i", false,-1);
    tracep->declBus(c+1540,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1583,"inport_awready_o", false,-1);
    tracep->declBit(c+1584,"inport_wready_o", false,-1);
    tracep->declBit(c+1520,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1750,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1517,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1582,"inport_arready_o", false,-1);
    tracep->declBit(c+1516,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1518,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1750,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1517,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1519,"inport_rlast_o", false,-1);
    tracep->declBit(c+1696,"sdram_clk_o", false,-1);
    tracep->declBit(c+1513,"sdram_cke_o", false,-1);
    tracep->declBit(c+688,"sdram_cs_o", false,-1);
    tracep->declBit(c+689,"sdram_ras_o", false,-1);
    tracep->declBit(c+690,"sdram_cas_o", false,-1);
    tracep->declBit(c+691,"sdram_we_o", false,-1);
    tracep->declBus(c+1515,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1697,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1514,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+724,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+723,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1735,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1967,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1739,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1590,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1591,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1493,"ram_rd_w", false,-1);
    tracep->declBit(c+1522,"ram_accept_w", false,-1);
    tracep->declBus(c+1278,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+725,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1484,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+726,"ram_ack_w", false,-1);
    tracep->declBit(c+1746,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1671,"clk_i", false,-1);
    tracep->declBit(c+1672,"rst_i", false,-1);
    tracep->declBit(c+1271,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1273,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1272,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1274,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1276,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1277,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1278,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1279,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1280,"axi_wlast_i", false,-1);
    tracep->declBit(c+1281,"axi_bready_i", false,-1);
    tracep->declBit(c+1264,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1266,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1265,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1267,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1269,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1270,"axi_rready_i", false,-1);
    tracep->declBit(c+1522,"ram_accept_i", false,-1);
    tracep->declBit(c+726,"ram_ack_i", false,-1);
    tracep->declBit(c+1746,"ram_error_i", false,-1);
    tracep->declBus(c+725,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1583,"axi_awready_o", false,-1);
    tracep->declBit(c+1584,"axi_wready_o", false,-1);
    tracep->declBit(c+1520,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1750,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1517,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1582,"axi_arready_o", false,-1);
    tracep->declBit(c+1516,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1518,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1750,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1517,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1519,"axi_rlast_o", false,-1);
    tracep->declBus(c+1591,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1493,"ram_rd_o", false,-1);
    tracep->declBus(c+1484,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1590,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1278,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+727,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+728,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+729,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+730,"req_rd_q", false,-1);
    tracep->declBit(c+731,"req_wr_q", false,-1);
    tracep->declBus(c+732,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+733,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+734,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+735,"req_prio_q", false,-1);
    tracep->declBit(c+736,"req_hold_rd_q", false,-1);
    tracep->declBit(c+737,"req_hold_wr_q", false,-1);
    tracep->declBit(c+738,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1592,"req_push_w", false,-1);
    tracep->declBus(c+1720,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+739,"req_out_valid_w", false,-1);
    tracep->declBus(c+1523,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1593,"resp_accept_w", false,-1);
    tracep->declBit(c+1721,"resp_is_write_w", false,-1);
    tracep->declBit(c+1722,"resp_is_read_w", false,-1);
    tracep->declBit(c+1519,"resp_is_last_w", false,-1);
    tracep->declBus(c+1517,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+740,"resp_valid_w", false,-1);
    tracep->declBit(c+741,"write_prio_w", false,-1);
    tracep->declBit(c+742,"read_prio_w", false,-1);
    tracep->declBit(c+1494,"write_active_w", false,-1);
    tracep->declBit(c+1493,"read_active_w", false,-1);
    tracep->declBus(c+1590,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1723,"wr_w", false,-1);
    tracep->declBit(c+1493,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1969,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1970,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1968,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1671,"clk_i", false,-1);
    tracep->declBit(c+1672,"rst_i", false,-1);
    tracep->declBus(c+1720,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1592,"push_i", false,-1);
    tracep->declBit(c+1593,"pop_i", false,-1);
    tracep->declBus(c+1523,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+738,"accept_o", false,-1);
    tracep->declBit(c+739,"valid_o", false,-1);
    tracep->declBus(c+1971,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+743+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+747,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+748,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+749,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1808,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1970,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1968,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1671,"clk_i", false,-1);
    tracep->declBit(c+1672,"rst_i", false,-1);
    tracep->declBus(c+725,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+726,"push_i", false,-1);
    tracep->declBit(c+1593,"pop_i", false,-1);
    tracep->declBus(c+1518,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+750,"accept_o", false,-1);
    tracep->declBit(c+740,"valid_o", false,-1);
    tracep->declBus(c+1971,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1524+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1528,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+751,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+752,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1671,"clk_i", false,-1);
    tracep->declBit(c+1672,"rst_i", false,-1);
    tracep->declBus(c+1591,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1493,"inport_rd_i", false,-1);
    tracep->declBus(c+1484,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1590,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1278,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1540,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1522,"inport_accept_o", false,-1);
    tracep->declBit(c+726,"inport_ack_o", false,-1);
    tracep->declBit(c+1746,"inport_error_o", false,-1);
    tracep->declBus(c+725,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1696,"sdram_clk_o", false,-1);
    tracep->declBit(c+1513,"sdram_cke_o", false,-1);
    tracep->declBit(c+688,"sdram_cs_o", false,-1);
    tracep->declBit(c+689,"sdram_ras_o", false,-1);
    tracep->declBit(c+690,"sdram_cas_o", false,-1);
    tracep->declBit(c+691,"sdram_we_o", false,-1);
    tracep->declBus(c+1515,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1697,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1514,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+724,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+723,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1735,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1967,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1739,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1970,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1970,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1972,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1973,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1974,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1975,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1970,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1976,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1977,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1978,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1979,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1980,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1981,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1982,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1748,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1983,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1970,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1748,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1982,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1981,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1977,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1979,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1978,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1980,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1976,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1984,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1985,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1986,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1986,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1808,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1986,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1969,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1590,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1591,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1493,"ram_rd_w", false,-1);
    tracep->declBit(c+1522,"ram_accept_w", false,-1);
    tracep->declBus(c+1278,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+725,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+726,"ram_ack_w", false,-1);
    tracep->declBit(c+1594,"ram_req_w", false,-1);
    tracep->declBus(c+753,"command_q", false,-1, 3,0);
    tracep->declBus(c+1529,"addr_q", false,-1, 12,0);
    tracep->declBus(c+724,"data_q", false,-1, 31,0);
    tracep->declBit(c+754,"data_rd_en_q", false,-1);
    tracep->declBus(c+1515,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1513,"cke_q", false,-1);
    tracep->declBus(c+1514,"bank_q", false,-1, 1,0);
    tracep->declBus(c+725,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+755,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1540,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+756,"refresh_q", false,-1);
    tracep->declBus(c+757,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+758+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1530,"state_q", false,-1, 3,0);
    tracep->declBus(c+1595,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1596,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+762,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+763,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1597,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1598,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1599,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1970,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+764,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1600,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1987,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1531,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+765,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+766,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+767,"idx", false,-1, 31,0);
    tracep->declBus(c+768,"rd_q", false,-1, 3,0);
    tracep->declBit(c+726,"ack_q", false,-1);
    tracep->declArray(c+1532,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1236,"auto_in_psel", false,-1);
    tracep->declBit(c+1237,"auto_in_penable", false,-1);
    tracep->declBit(c+1216,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1225,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1215,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"auto_in_pready", false,-1);
    tracep->declBit(c+696,"auto_in_pslverr", false,-1);
    tracep->declBus(c+697,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+687,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1511,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1512,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1693,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1988,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1989,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1990,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1485,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1236,"in_psel", false,-1);
    tracep->declBit(c+1237,"in_penable", false,-1);
    tracep->declBus(c+1215,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1216,"in_pwrite", false,-1);
    tracep->declBus(c+1217,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"in_pready", false,-1);
    tracep->declBus(c+697,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+696,"in_pslverr", false,-1);
    tracep->declBit(c+687,"spi_sck", false,-1);
    tracep->declBus(c+1511,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1512,"spi_mosi", false,-1);
    tracep->declBit(c+1693,"spi_miso", false,-1);
    tracep->declBit(c+769,"spi_irq_out", false,-1);
    tracep->declBus(c+1991,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1992,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1991,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1993,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1994,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1995,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1748,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1982,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1981,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1977,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1979,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1978,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1980,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1976,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1984,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1985,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1996,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+770,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1495,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+771,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+772,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+773,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+774,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+775,"wb_we_i", false,-1);
    tracep->declBit(c+776,"wb_stb_i", false,-1);
    tracep->declBit(c+777,"wb_cyc_i", false,-1);
    tracep->declBit(c+778,"wb_ack_o", false,-1);
    tracep->declBit(c+1746,"wb_err_o", false,-1);
    tracep->declBit(c+779,"wb_int_o", false,-1);
    tracep->declBit(c+780,"done", false,-1);
    tracep->declBus(c+781,"paddr", false,-1, 31,0);
    tracep->declQuad(c+782,"data", false,-1, 63,0);
    tracep->declBit(c+784,"is_flash_access", false,-1);
    tracep->declBus(c+785,"tmp", false,-1, 31,0);
    tracep->declQuad(c+786,"tmp64", false,-1, 63,0);
    tracep->declBus(c+788,"counter", false,-1, 7,0);
    tracep->declBit(c+789,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1997,"Tp", false,-1, 31,0);
    tracep->declBit(c+1671,"wb_clk_i", false,-1);
    tracep->declBit(c+1672,"wb_rst_i", false,-1);
    tracep->declBus(c+771,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+772,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+773,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+774,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+775,"wb_we_i", false,-1);
    tracep->declBit(c+776,"wb_stb_i", false,-1);
    tracep->declBit(c+777,"wb_cyc_i", false,-1);
    tracep->declBit(c+778,"wb_ack_o", false,-1);
    tracep->declBit(c+1746,"wb_err_o", false,-1);
    tracep->declBit(c+779,"wb_int_o", false,-1);
    tracep->declBus(c+1511,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+687,"sclk_pad_o", false,-1);
    tracep->declBit(c+1512,"mosi_pad_o", false,-1);
    tracep->declBit(c+1693,"miso_pad_i", false,-1);
    tracep->declBus(c+790,"divider", false,-1, 15,0);
    tracep->declBus(c+791,"ctrl", false,-1, 13,0);
    tracep->declBus(c+792,"ss", false,-1, 7,0);
    tracep->declBus(c+793,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+794,"rx", false,-1, 127,0);
    tracep->declBit(c+798,"rx_negedge", false,-1);
    tracep->declBit(c+799,"tx_negedge", false,-1);
    tracep->declBus(c+800,"char_len", false,-1, 6,0);
    tracep->declBit(c+801,"go", false,-1);
    tracep->declBit(c+802,"lsb", false,-1);
    tracep->declBit(c+803,"ie", false,-1);
    tracep->declBit(c+804,"ass", false,-1);
    tracep->declBit(c+805,"spi_divider_sel", false,-1);
    tracep->declBit(c+806,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+807,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+808,"spi_ss_sel", false,-1);
    tracep->declBit(c+809,"tip", false,-1);
    tracep->declBit(c+810,"pos_edge", false,-1);
    tracep->declBit(c+811,"neg_edge", false,-1);
    tracep->declBit(c+812,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1997,"Tp", false,-1, 31,0);
    tracep->declBit(c+1671,"clk_in", false,-1);
    tracep->declBit(c+1672,"rst", false,-1);
    tracep->declBit(c+809,"enable", false,-1);
    tracep->declBit(c+801,"go", false,-1);
    tracep->declBit(c+812,"last_clk", false,-1);
    tracep->declBus(c+790,"divider", false,-1, 15,0);
    tracep->declBit(c+687,"clk_out", false,-1);
    tracep->declBit(c+810,"pos_edge", false,-1);
    tracep->declBit(c+811,"neg_edge", false,-1);
    tracep->declBus(c+813,"cnt", false,-1, 15,0);
    tracep->declBit(c+814,"cnt_zero", false,-1);
    tracep->declBit(c+815,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1997,"Tp", false,-1, 31,0);
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1672,"rst", false,-1);
    tracep->declBus(c+816,"latch", false,-1, 3,0);
    tracep->declBus(c+774,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+800,"len", false,-1, 6,0);
    tracep->declBit(c+802,"lsb", false,-1);
    tracep->declBit(c+801,"go", false,-1);
    tracep->declBit(c+810,"pos_edge", false,-1);
    tracep->declBit(c+811,"neg_edge", false,-1);
    tracep->declBit(c+798,"rx_negedge", false,-1);
    tracep->declBit(c+799,"tx_negedge", false,-1);
    tracep->declBit(c+809,"tip", false,-1);
    tracep->declBit(c+812,"last", false,-1);
    tracep->declBus(c+772,"p_in", false,-1, 31,0);
    tracep->declArray(c+794,"p_out", false,-1, 127,0);
    tracep->declBit(c+687,"s_clk", false,-1);
    tracep->declBit(c+1693,"s_in", false,-1);
    tracep->declBit(c+1512,"s_out", false,-1);
    tracep->declBus(c+817,"cnt", false,-1, 7,0);
    tracep->declArray(c+794,"data", false,-1, 127,0);
    tracep->declBus(c+818,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+819,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+820,"rx_clk", false,-1);
    tracep->declBit(c+821,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1233,"auto_in_psel", false,-1);
    tracep->declBit(c+1234,"auto_in_penable", false,-1);
    tracep->declBit(c+1216,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1228,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1215,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"auto_in_pready", false,-1);
    tracep->declBit(c+1746,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1702,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1691,"uart_rx", false,-1);
    tracep->declBit(c+1692,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1233,"in_psel", false,-1);
    tracep->declBit(c+1234,"in_penable", false,-1);
    tracep->declBus(c+1215,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1235,"in_pready", false,-1);
    tracep->declBit(c+1746,"in_pslverr", false,-1);
    tracep->declBus(c+1472,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1216,"in_pwrite", false,-1);
    tracep->declBus(c+1702,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1217,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1691,"uart_rx", false,-1);
    tracep->declBit(c+1692,"uart_tx", false,-1);
    tracep->declBit(c+822,"rtsn", false,-1);
    tracep->declBit(c+1746,"ctsn", false,-1);
    tracep->declBit(c+823,"dtr_pad_o", false,-1);
    tracep->declBit(c+1746,"dsr_pad_i", false,-1);
    tracep->declBit(c+1746,"ri_pad_i", false,-1);
    tracep->declBit(c+1746,"dcd_pad_i", false,-1);
    tracep->declBit(c+824,"interrupt", false,-1);
    tracep->declBit(c+1724,"reg_we", false,-1);
    tracep->declBit(c+1725,"reg_re", false,-1);
    tracep->declBus(c+1486,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1487,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+600,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1496,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+825,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1672,"wb_rst_i", false,-1);
    tracep->declBus(c+1486,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1488,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1496,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1724,"wb_we_i", false,-1);
    tracep->declBit(c+1725,"wb_re_i", false,-1);
    tracep->declBit(c+1692,"stx_pad_o", false,-1);
    tracep->declBit(c+1691,"srx_pad_i", false,-1);
    tracep->declBus(c+1984,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+825,"rts_pad_o", false,-1);
    tracep->declBit(c+823,"dtr_pad_o", false,-1);
    tracep->declBit(c+824,"int_o", false,-1);
    tracep->declBit(c+826,"enable", false,-1);
    tracep->declBit(c+827,"srx_pad", false,-1);
    tracep->declBus(c+828,"ier", false,-1, 3,0);
    tracep->declBus(c+829,"iir", false,-1, 3,0);
    tracep->declBus(c+830,"fcr", false,-1, 1,0);
    tracep->declBus(c+831,"mcr", false,-1, 4,0);
    tracep->declBus(c+832,"lcr", false,-1, 7,0);
    tracep->declBus(c+833,"msr", false,-1, 7,0);
    tracep->declBus(c+834,"dl", false,-1, 15,0);
    tracep->declBus(c+835,"scratch", false,-1, 7,0);
    tracep->declBit(c+836,"start_dlc", false,-1);
    tracep->declBit(c+837,"lsr_mask_d", false,-1);
    tracep->declBit(c+838,"msi_reset", false,-1);
    tracep->declBus(c+839,"dlc", false,-1, 15,0);
    tracep->declBus(c+840,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+841,"rx_reset", false,-1);
    tracep->declBit(c+842,"tx_reset", false,-1);
    tracep->declBit(c+843,"dlab", false,-1);
    tracep->declBit(c+1747,"cts_pad_i", false,-1);
    tracep->declBit(c+1746,"dsr_pad_i", false,-1);
    tracep->declBit(c+1746,"ri_pad_i", false,-1);
    tracep->declBit(c+1746,"dcd_pad_i", false,-1);
    tracep->declBit(c+844,"loopback", false,-1);
    tracep->declBit(c+1746,"cts", false,-1);
    tracep->declBit(c+1747,"dsr", false,-1);
    tracep->declBit(c+1747,"ri", false,-1);
    tracep->declBit(c+1747,"dcd", false,-1);
    tracep->declBit(c+845,"cts_c", false,-1);
    tracep->declBit(c+846,"dsr_c", false,-1);
    tracep->declBit(c+847,"ri_c", false,-1);
    tracep->declBit(c+848,"dcd_c", false,-1);
    tracep->declBus(c+849,"lsr", false,-1, 7,0);
    tracep->declBit(c+850,"lsr0", false,-1);
    tracep->declBit(c+851,"lsr1", false,-1);
    tracep->declBit(c+852,"lsr2", false,-1);
    tracep->declBit(c+853,"lsr3", false,-1);
    tracep->declBit(c+854,"lsr4", false,-1);
    tracep->declBit(c+855,"lsr5", false,-1);
    tracep->declBit(c+856,"lsr6", false,-1);
    tracep->declBit(c+857,"lsr7", false,-1);
    tracep->declBit(c+858,"lsr0r", false,-1);
    tracep->declBit(c+859,"lsr1r", false,-1);
    tracep->declBit(c+860,"lsr2r", false,-1);
    tracep->declBit(c+861,"lsr3r", false,-1);
    tracep->declBit(c+862,"lsr4r", false,-1);
    tracep->declBit(c+863,"lsr5r", false,-1);
    tracep->declBit(c+864,"lsr6r", false,-1);
    tracep->declBit(c+865,"lsr7r", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+866,"rls_int", false,-1);
    tracep->declBit(c+867,"rda_int", false,-1);
    tracep->declBit(c+868,"ti_int", false,-1);
    tracep->declBit(c+869,"thre_int", false,-1);
    tracep->declBit(c+870,"ms_int", false,-1);
    tracep->declBit(c+871,"tf_push", false,-1);
    tracep->declBit(c+872,"rf_pop", false,-1);
    tracep->declBus(c+1726,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+873,"rf_error_bit", false,-1);
    tracep->declBit(c+851,"rf_overrun", false,-1);
    tracep->declBit(c+874,"rf_push_pulse", false,-1);
    tracep->declBus(c+875,"rf_count", false,-1, 4,0);
    tracep->declBus(c+876,"tf_count", false,-1, 4,0);
    tracep->declBus(c+877,"tstate", false,-1, 2,0);
    tracep->declBus(c+878,"rstate", false,-1, 3,0);
    tracep->declBus(c+879,"counter_t", false,-1, 9,0);
    tracep->declBit(c+880,"thre_set_en", false,-1);
    tracep->declBus(c+881,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+882,"block_value", false,-1, 7,0);
    tracep->declBit(c+883,"serial_out", false,-1);
    tracep->declBit(c+884,"serial_in", false,-1);
    tracep->declBit(c+23,"lsr_mask_condition", false,-1);
    tracep->declBit(c+24,"iir_read", false,-1);
    tracep->declBit(c+25,"msr_read", false,-1);
    tracep->declBit(c+26,"fifo_read", false,-1);
    tracep->declBit(c+27,"fifo_write", false,-1);
    tracep->declBus(c+885,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+886,"lsr0_d", false,-1);
    tracep->declBit(c+887,"lsr1_d", false,-1);
    tracep->declBit(c+888,"lsr2_d", false,-1);
    tracep->declBit(c+889,"lsr3_d", false,-1);
    tracep->declBit(c+890,"lsr4_d", false,-1);
    tracep->declBit(c+891,"lsr5_d", false,-1);
    tracep->declBit(c+892,"lsr6_d", false,-1);
    tracep->declBit(c+893,"lsr7_d", false,-1);
    tracep->declBit(c+894,"rls_int_d", false,-1);
    tracep->declBit(c+895,"thre_int_d", false,-1);
    tracep->declBit(c+896,"ms_int_d", false,-1);
    tracep->declBit(c+897,"ti_int_d", false,-1);
    tracep->declBit(c+898,"rda_int_d", false,-1);
    tracep->declBit(c+899,"rls_int_rise", false,-1);
    tracep->declBit(c+900,"thre_int_rise", false,-1);
    tracep->declBit(c+901,"ms_int_rise", false,-1);
    tracep->declBit(c+902,"ti_int_rise", false,-1);
    tracep->declBit(c+903,"rda_int_rise", false,-1);
    tracep->declBit(c+904,"rls_int_pnd", false,-1);
    tracep->declBit(c+905,"rda_int_pnd", false,-1);
    tracep->declBit(c+906,"thre_int_pnd", false,-1);
    tracep->declBit(c+907,"ms_int_pnd", false,-1);
    tracep->declBit(c+908,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1997,"Tp", false,-1, 31,0);
    tracep->declBus(c+1997,"width", false,-1, 31,0);
    tracep->declBus(c+1963,"init_value", false,-1, 0,0);
    tracep->declBit(c+1672,"rst_i", false,-1);
    tracep->declBit(c+1671,"clk_i", false,-1);
    tracep->declBit(c+1746,"stage1_rst_i", false,-1);
    tracep->declBit(c+1747,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1691,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+827,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+909,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1672,"wb_rst_i", false,-1);
    tracep->declBus(c+832,"lcr", false,-1, 7,0);
    tracep->declBit(c+872,"rf_pop", false,-1);
    tracep->declBit(c+884,"srx_pad_i", false,-1);
    tracep->declBit(c+826,"enable", false,-1);
    tracep->declBit(c+841,"rx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBus(c+879,"counter_t", false,-1, 9,0);
    tracep->declBus(c+875,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1726,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+851,"rf_overrun", false,-1);
    tracep->declBit(c+873,"rf_error_bit", false,-1);
    tracep->declBus(c+878,"rstate", false,-1, 3,0);
    tracep->declBit(c+874,"rf_push_pulse", false,-1);
    tracep->declBus(c+910,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+911,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+912,"rshift", false,-1, 7,0);
    tracep->declBit(c+913,"rparity", false,-1);
    tracep->declBit(c+914,"rparity_error", false,-1);
    tracep->declBit(c+915,"rframing_error", false,-1);
    tracep->declBit(c+916,"rbit_in", false,-1);
    tracep->declBit(c+917,"rparity_xor", false,-1);
    tracep->declBus(c+918,"counter_b", false,-1, 7,0);
    tracep->declBit(c+919,"rf_push_q", false,-1);
    tracep->declBus(c+920,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+921,"rf_push", false,-1);
    tracep->declBit(c+922,"break_error", false,-1);
    tracep->declBit(c+923,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+924,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+925,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+926,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1748,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1982,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1981,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1977,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1979,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1978,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1980,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1976,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1984,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1985,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1998,"sr_push", false,-1, 3,0);
    tracep->declBus(c+927,"toc_value", false,-1, 9,0);
    tracep->declBus(c+928,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1999,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2000,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1970,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1961,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1672,"wb_rst_i", false,-1);
    tracep->declBit(c+874,"push", false,-1);
    tracep->declBit(c+872,"pop", false,-1);
    tracep->declBus(c+920,"data_in", false,-1, 10,0);
    tracep->declBit(c+841,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1726,"data_out", false,-1, 10,0);
    tracep->declBit(c+851,"overrun", false,-1);
    tracep->declBus(c+875,"count", false,-1, 4,0);
    tracep->declBit(c+873,"error_bit", false,-1);
    tracep->declBus(c+1727,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+929+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+945,"top", false,-1, 3,0);
    tracep->declBus(c+946,"bottom", false,-1, 3,0);
    tracep->declBus(c+947,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+948,"word0", false,-1, 2,0);
    tracep->declBus(c+949,"word1", false,-1, 2,0);
    tracep->declBus(c+950,"word2", false,-1, 2,0);
    tracep->declBus(c+951,"word3", false,-1, 2,0);
    tracep->declBus(c+952,"word4", false,-1, 2,0);
    tracep->declBus(c+953,"word5", false,-1, 2,0);
    tracep->declBus(c+954,"word6", false,-1, 2,0);
    tracep->declBus(c+955,"word7", false,-1, 2,0);
    tracep->declBus(c+956,"word8", false,-1, 2,0);
    tracep->declBus(c+957,"word9", false,-1, 2,0);
    tracep->declBus(c+958,"word10", false,-1, 2,0);
    tracep->declBus(c+959,"word11", false,-1, 2,0);
    tracep->declBus(c+960,"word12", false,-1, 2,0);
    tracep->declBus(c+961,"word13", false,-1, 2,0);
    tracep->declBus(c+962,"word14", false,-1, 2,0);
    tracep->declBus(c+963,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1970,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1990,"data_width", false,-1, 31,0);
    tracep->declBus(c+2000,"depth", false,-1, 31,0);
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+874,"we", false,-1);
    tracep->declBus(c+945,"a", false,-1, 3,0);
    tracep->declBus(c+946,"dpra", false,-1, 3,0);
    tracep->declBus(c+964,"di", false,-1, 7,0);
    tracep->declBus(c+1727,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+601+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1672,"wb_rst_i", false,-1);
    tracep->declBus(c+832,"lcr", false,-1, 7,0);
    tracep->declBit(c+871,"tf_push", false,-1);
    tracep->declBus(c+1488,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+826,"enable", false,-1);
    tracep->declBit(c+842,"tx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+883,"stx_pad_o", false,-1);
    tracep->declBus(c+877,"tstate", false,-1, 2,0);
    tracep->declBus(c+876,"tf_count", false,-1, 4,0);
    tracep->declBus(c+965,"counter", false,-1, 4,0);
    tracep->declBus(c+966,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+967,"shift_out", false,-1, 6,0);
    tracep->declBit(c+968,"stx_o_tmp", false,-1);
    tracep->declBit(c+969,"parity_xor", false,-1);
    tracep->declBit(c+970,"tf_pop", false,-1);
    tracep->declBit(c+971,"bit_out", false,-1);
    tracep->declBus(c+1488,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1497,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+972,"tf_overrun", false,-1);
    tracep->declBus(c+1740,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1737,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1741,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1742,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1751,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1752,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1990,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2000,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1970,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1961,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+1672,"wb_rst_i", false,-1);
    tracep->declBit(c+871,"push", false,-1);
    tracep->declBit(c+970,"pop", false,-1);
    tracep->declBus(c+1488,"data_in", false,-1, 7,0);
    tracep->declBit(c+842,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1497,"data_out", false,-1, 7,0);
    tracep->declBit(c+972,"overrun", false,-1);
    tracep->declBus(c+876,"count", false,-1, 4,0);
    tracep->declBus(c+973,"top", false,-1, 3,0);
    tracep->declBus(c+974,"bottom", false,-1, 3,0);
    tracep->declBus(c+975,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1970,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1990,"data_width", false,-1, 31,0);
    tracep->declBus(c+2000,"depth", false,-1, 31,0);
    tracep->declBit(c+1671,"clk", false,-1);
    tracep->declBit(c+871,"we", false,-1);
    tracep->declBus(c+973,"a", false,-1, 3,0);
    tracep->declBus(c+974,"dpra", false,-1, 3,0);
    tracep->declBus(c+1488,"di", false,-1, 7,0);
    tracep->declBus(c+1497,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+617+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBit(c+1223,"auto_in_psel", false,-1);
    tracep->declBit(c+1224,"auto_in_penable", false,-1);
    tracep->declBit(c+1216,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1225,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1215,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1217,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+692,"auto_in_pready", false,-1);
    tracep->declBit(c+1744,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1745,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1685,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1686,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1687,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1688,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1689,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1690,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1671,"clock", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1485,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1223,"in_psel", false,-1);
    tracep->declBit(c+1224,"in_penable", false,-1);
    tracep->declBus(c+1215,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1216,"in_pwrite", false,-1);
    tracep->declBus(c+1217,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1218,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+692,"in_pready", false,-1);
    tracep->declBus(c+1745,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1744,"in_pslverr", false,-1);
    tracep->declBus(c+1685,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1686,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1687,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1688,"vga_hsync", false,-1);
    tracep->declBit(c+1689,"vga_vsync", false,-1);
    tracep->declBit(c+1690,"vga_valid", false,-1);
    tracep->declBus(c+976,"h_addr", false,-1, 9,0);
    tracep->declBus(c+633,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1498,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1489,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+692,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1671,"pclk", false,-1);
    tracep->declBit(c+1672,"reset", false,-1);
    tracep->declBus(c+1498,"vga_data", false,-1, 23,0);
    tracep->declBus(c+976,"h_addr", false,-1, 9,0);
    tracep->declBus(c+633,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1688,"hsync", false,-1);
    tracep->declBit(c+1689,"vsync", false,-1);
    tracep->declBit(c+1690,"valid", false,-1);
    tracep->declBus(c+1685,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1686,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1687,"vga_b", false,-1, 7,0);
    tracep->declBus(c+2001,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+2002,"h_active", false,-1, 31,0);
    tracep->declBus(c+2003,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+2004,"h_total", false,-1, 31,0);
    tracep->declBus(c+1968,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+2005,"v_active", false,-1, 31,0);
    tracep->declBus(c+2006,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+2007,"v_total", false,-1, 31,0);
    tracep->declBus(c+977,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+634,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+978,"h_valid", false,-1);
    tracep->declBit(c+635,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+687,"sck", false,-1);
    tracep->declBit(c+1535,"ss", false,-1);
    tracep->declBit(c+1512,"mosi", false,-1);
    tracep->declBit(c+1199,"miso", false,-1);
    tracep->declBus(c+1200,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1201,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1728,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+687,"sck", false,-1);
    tracep->declBit(c+1536,"ss", false,-1);
    tracep->declBit(c+1512,"mosi", false,-1);
    tracep->declBit(c+1729,"miso", false,-1);
    tracep->declBit(c+1536,"reset", false,-1);
    tracep->declBus(c+1193,"state", false,-1, 2,0);
    tracep->declBus(c+1194,"counter", false,-1, 7,0);
    tracep->declBus(c+1195,"cmd", false,-1, 7,0);
    tracep->declBus(c+1196,"addr", false,-1, 23,0);
    tracep->declBus(c+1197,"data", false,-1, 31,0);
    tracep->declBit(c+1198,"ren", false,-1);
    tracep->declBus(c+1730,"rdata", false,-1, 31,0);
    tracep->declBus(c+1731,"raddr", false,-1, 31,0);
    tracep->declBus(c+1202,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+687,"clock", false,-1);
    tracep->declBit(c+1198,"valid", false,-1);
    tracep->declBus(c+1195,"cmd", false,-1, 7,0);
    tracep->declBus(c+1731,"addr", false,-1, 31,0);
    tracep->declBus(c+1730,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1694,"sck", false,-1);
    tracep->declBit(c+1581,"ce_n", false,-1);
    tracep->declBus(c+1695,"dio", false,-1, 3,0);
    tracep->declBus(c+677,"dio_out", false,-1, 3,0);
    tracep->declBus(c+678,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1695,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1802,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1997,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1968,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1971,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1970,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1961,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+679,"state", false,-1, 2,0);
    tracep->declBus(c+1732,"next_state", false,-1, 2,0);
    tracep->declBus(c+680,"counter", false,-1, 7,0);
    tracep->declBus(c+681,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+682,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+683,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+684,"is_read_op", false,-1);
    tracep->declBit(c+685,"is_write_op", false,-1);
    tracep->declBus(c+686,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1733,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1696,"clk", false,-1);
    tracep->declBit(c+1513,"cke", false,-1);
    tracep->declBit(c+688,"cs", false,-1);
    tracep->declBit(c+689,"ras", false,-1);
    tracep->declBit(c+690,"cas", false,-1);
    tracep->declBit(c+691,"we", false,-1);
    tracep->declBus(c+1697,"a", false,-1, 13,0);
    tracep->declBus(c+1514,"ba", false,-1, 1,0);
    tracep->declBus(c+1515,"dqm", false,-1, 3,0);
    tracep->declBus(c+1540,"dq", false,-1, 31,0);
    tracep->declBit(c+979,"cs_0", false,-1);
    tracep->declBit(c+980,"ras_0", false,-1);
    tracep->declBit(c+981,"cas_0", false,-1);
    tracep->declBit(c+982,"we_0", false,-1);
    tracep->declBit(c+983,"cs_1", false,-1);
    tracep->declBit(c+984,"ras_1", false,-1);
    tracep->declBit(c+985,"cas_1", false,-1);
    tracep->declBit(c+986,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1696,"clk", false,-1);
    tracep->declBit(c+1513,"cke", false,-1);
    tracep->declBit(c+983,"cs", false,-1);
    tracep->declBit(c+984,"ras", false,-1);
    tracep->declBit(c+985,"cas", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+1529,"a", false,-1, 12,0);
    tracep->declBus(c+1514,"ba", false,-1, 1,0);
    tracep->declBus(c+1515,"dqm", false,-1, 3,0);
    tracep->declBus(c+1540,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1696,"clk", false,-1);
    tracep->declBit(c+1513,"cke", false,-1);
    tracep->declBit(c+983,"cs", false,-1);
    tracep->declBit(c+984,"ras", false,-1);
    tracep->declBit(c+985,"cas", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+1529,"a", false,-1, 12,0);
    tracep->declBus(c+1514,"ba", false,-1, 1,0);
    tracep->declBus(c+1537,"dqm", false,-1, 1,0);
    tracep->declBus(c+1541,"dq", false,-1, 15,0);
    tracep->declBus(c+1981,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1982,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2008,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1977,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1978,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1979,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1748,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1133,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1134,"bl", false,-1, 2,0);
    tracep->declBus(c+1601,"command", false,-1, 3,0);
    tracep->declBus(c+1135,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1136,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1538,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1137,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1542,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1138,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1139+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2009,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1143,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2010,"state", false,-1, 2,0);
    tracep->declBit(c+1144,"write_brust", false,-1);
    tracep->declBus(c+1145,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1146,"read_burst", false,-1);
    tracep->declBit(c+2011,"flag", false,-1);
    tracep->declBus(c+1147,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1696,"clk", false,-1);
    tracep->declBit(c+1513,"cke", false,-1);
    tracep->declBit(c+983,"cs", false,-1);
    tracep->declBit(c+984,"ras", false,-1);
    tracep->declBit(c+985,"cas", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+1529,"a", false,-1, 12,0);
    tracep->declBus(c+1514,"ba", false,-1, 1,0);
    tracep->declBus(c+1539,"dqm", false,-1, 1,0);
    tracep->declBus(c+1543,"dq", false,-1, 15,0);
    tracep->declBus(c+1981,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1982,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2008,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1977,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1978,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1979,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1748,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1148,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1149,"bl", false,-1, 2,0);
    tracep->declBus(c+1601,"command", false,-1, 3,0);
    tracep->declBus(c+1150,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1151,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1538,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1152,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1544,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1153,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1154+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2012,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1158,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2013,"state", false,-1, 2,0);
    tracep->declBit(c+1159,"write_brust", false,-1);
    tracep->declBus(c+1160,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1161,"read_burst", false,-1);
    tracep->declBit(c+2014,"flag", false,-1);
    tracep->declBus(c+1162,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1696,"clk", false,-1);
    tracep->declBit(c+1513,"cke", false,-1);
    tracep->declBit(c+979,"cs", false,-1);
    tracep->declBit(c+980,"ras", false,-1);
    tracep->declBit(c+981,"cas", false,-1);
    tracep->declBit(c+982,"we", false,-1);
    tracep->declBus(c+1529,"a", false,-1, 12,0);
    tracep->declBus(c+1514,"ba", false,-1, 1,0);
    tracep->declBus(c+1515,"dqm", false,-1, 3,0);
    tracep->declBus(c+1540,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1696,"clk", false,-1);
    tracep->declBit(c+1513,"cke", false,-1);
    tracep->declBit(c+979,"cs", false,-1);
    tracep->declBit(c+980,"ras", false,-1);
    tracep->declBit(c+981,"cas", false,-1);
    tracep->declBit(c+982,"we", false,-1);
    tracep->declBus(c+1529,"a", false,-1, 12,0);
    tracep->declBus(c+1514,"ba", false,-1, 1,0);
    tracep->declBus(c+1537,"dqm", false,-1, 1,0);
    tracep->declBus(c+1541,"dq", false,-1, 15,0);
    tracep->declBus(c+1981,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1982,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2008,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1977,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1978,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1979,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1748,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1163,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1164,"bl", false,-1, 2,0);
    tracep->declBus(c+1602,"command", false,-1, 3,0);
    tracep->declBus(c+1165,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1166,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1538,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1167,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1545,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1168,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1169+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2015,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1173,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2016,"state", false,-1, 2,0);
    tracep->declBit(c+1174,"write_brust", false,-1);
    tracep->declBus(c+1175,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1176,"read_burst", false,-1);
    tracep->declBit(c+2017,"flag", false,-1);
    tracep->declBus(c+1177,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1696,"clk", false,-1);
    tracep->declBit(c+1513,"cke", false,-1);
    tracep->declBit(c+979,"cs", false,-1);
    tracep->declBit(c+980,"ras", false,-1);
    tracep->declBit(c+981,"cas", false,-1);
    tracep->declBit(c+982,"we", false,-1);
    tracep->declBus(c+1529,"a", false,-1, 12,0);
    tracep->declBus(c+1514,"ba", false,-1, 1,0);
    tracep->declBus(c+1539,"dqm", false,-1, 1,0);
    tracep->declBus(c+1543,"dq", false,-1, 15,0);
    tracep->declBus(c+1981,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1982,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2008,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1977,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1978,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1979,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1748,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1178,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1179,"bl", false,-1, 2,0);
    tracep->declBus(c+1602,"command", false,-1, 3,0);
    tracep->declBus(c+1180,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1181,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1538,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1182,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1546,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1183,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1184+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+2018,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1188,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+2019,"state", false,-1, 2,0);
    tracep->declBit(c+1189,"write_brust", false,-1);
    tracep->declBus(c+1190,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1191,"read_burst", false,-1);
    tracep->declBit(c+2020,"flag", false,-1);
    tracep->declBus(c+1192,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+47,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+56,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+59,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+65,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid)))),16);
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+70,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+74,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+75,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+76,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+77,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+78,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+79,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+80,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+81,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+83,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+84,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+85,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+86,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+87,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+88,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+89,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+90,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arready));
    bufp->fullIData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+119,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+124,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+126,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+127,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+128,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+129,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+130,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+131,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+132,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+135,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+136,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+137,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+138,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+139,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+149,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+154,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+155,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+158,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+159,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+160,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+161,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+228,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+232,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+233,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+234,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+235,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+239,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+241,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+282,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+350,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+364,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+365,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+366,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
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
    bufp->fullIData(oldp+636,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+637,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+638,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullIData(oldp+640,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+641,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                       ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                            ? (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                       >> 1U))
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U)) : 0U) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                         : 0U)))),2);
    bufp->fullBit(oldp+642,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+643,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+644,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+645,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+646,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+647,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+648,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+649,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+650,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+651,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+652,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+653,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+654,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+655,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+656,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+657,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+658,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullQData(oldp+659,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+661,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+662,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+663,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+664,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+665,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+666,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+667,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+668,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+669,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+670,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+671,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+672,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+673,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+674,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+675,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+676,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+682,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+689,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+690,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+691,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+700,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+701,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+702,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+703,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+704,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+705,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+706,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+707,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+710,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+711,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+714,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+715,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+719,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+723,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+738,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+739,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+740,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+741,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+742,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+750,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+785,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+786,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+799,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+800,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+801,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+802,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+803,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+804,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+805,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+808,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+812,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+814,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+815,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+818,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+822,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+823,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+825,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+843,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+844,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+845,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+846,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+847,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+848,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+849,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+852,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+853,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+854,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+873,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+880,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+899,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+900,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+901,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+902,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+903,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+922,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+923,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+924,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+925,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+926,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+928,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+947,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+964,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+975,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+979,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+980,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+981,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+982,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+983,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+984,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+985,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+986,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+993,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))
                                        : ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)))
                                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))
                                        : ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))))
                                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? ((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                            : ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))
                                        : ((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result)
                                            ? ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)
                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new))
                                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new
                                        : ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc))))),32);
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1005,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                 ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1008,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1027,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1033,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1080,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1096,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1098,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1101,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__skip));
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1123,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 2U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                              ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))))),2);
    bufp->fullCData(oldp+1124,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1125,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1126,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1127,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1128,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1129,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1130,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1131,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1132,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1133,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1134,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1148,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1149,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1163,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1164,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1178,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1179,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1198,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1205,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1225,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1226,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1228,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1232,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1240,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1243,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize),3);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullSData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_rd),10);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[0]),32);
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[1]),32);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[2]),32);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[3]),32);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[4]),32);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[5]),32);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[6]),32);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[7]),32);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[0]),4);
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[1]),4);
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[2]),4);
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[3]),4);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[4]),4);
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[5]),4);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[6]),4);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[7]),4);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[0]),32);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[1]),32);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[2]),32);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[3]),32);
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[4]),32);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[5]),32);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[6]),32);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[7]),32);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[0]),2);
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[1]),2);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[2]),2);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[3]),2);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[4]),2);
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[5]),2);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[6]),2);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[7]),2);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[0]));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[1]));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[2]));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[3]));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[4]));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[5]));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[6]));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[7]));
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen),8);
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize),3);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst),2);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_counter),3);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen),3);
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd),3);
    bufp->fullSData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_wt),10);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_wt),32);
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid));
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid),4);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp),2);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt),3);
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1341,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1342,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+1472,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1478,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1479,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1480,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1481,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1482,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1483,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullIData(oldp+1485,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1486,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1489,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1517,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1519,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullSData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1535,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1537,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1538,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1539,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1541,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1543,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullCData(oldp+1555,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1556,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1567,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1573,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1578,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1579,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1580,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullCData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1597,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1598,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1599,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+1603,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1609,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1612,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1635,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1636,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1637,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1638,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awready));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wready));
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1651,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1652,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1656,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullBit(oldp+1671,(vlSelf->clock));
    bufp->fullBit(oldp+1672,(vlSelf->reset));
    bufp->fullSData(oldp+1673,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1674,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1675,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1676,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1677,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1678,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1679,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1680,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1681,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1682,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1683,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1684,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1685,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1686,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1687,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1688,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1689,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1690,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1691,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1692,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1693,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1696,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1697,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1698,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
                                                == 
                                                (3U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                    >> 0x1cU)))
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
                                                        == 
                                                        (3U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                            >> 0x1cU)))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                        : 0U))))))),32);
    bufp->fullBit(oldp+1699,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1700,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready)
                                                  ? 0U
                                                  : 3U)
                                              : ((0U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter)
                                                  ? 3U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready)
                                                  ? 2U
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)
                                                  ? 1U
                                                  : 0U))))),3);
    bufp->fullBit(oldp+1701,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1703,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready) 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast
                                                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen])
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast)))
                                                   ? 2U
                                                   : 3U))
                                              : ((0U 
                                                  == 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd
                                                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen])
                                                  ? 3U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                                     >> 4U))
                                                  ? 2U
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                                  ? 1U
                                                  : 0U))))),3);
    bufp->fullCData(oldp+1704,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready)
                                             ? 4U : 7U)
                                         : ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_wt)
                                             ? 7U : 6U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)
                                             ? 6U : 5U)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))
                                             ? 5U : 4U)))
                                 : 4U)),3);
    bufp->fullBit(oldp+1705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1706,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1708,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1709,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1713,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+1714,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1715,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1717,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1720,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1721,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1722,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1726,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1728,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1729,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1731,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1732,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1734,(0x226U),32);
    bufp->fullIData(oldp+1735,(0x64U),32);
    bufp->fullIData(oldp+1736,(0x200U),32);
    bufp->fullCData(oldp+1737,(1U),3);
    bufp->fullIData(oldp+1738,(0xb00U),32);
    bufp->fullIData(oldp+1739,(9U),32);
    bufp->fullCData(oldp+1740,(0U),3);
    bufp->fullCData(oldp+1741,(2U),3);
    bufp->fullCData(oldp+1742,(3U),3);
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1746,(0U));
    bufp->fullBit(oldp+1747,(1U));
    bufp->fullCData(oldp+1748,(0U),4);
    bufp->fullCData(oldp+1749,(0U),8);
    bufp->fullCData(oldp+1750,(0U),2);
    bufp->fullCData(oldp+1751,(4U),3);
    bufp->fullCData(oldp+1752,(5U),3);
    bufp->fullCData(oldp+1753,(6U),3);
    bufp->fullCData(oldp+1754,(7U),3);
    bufp->fullSData(oldp+1755,(1U),16);
    bufp->fullBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1772,(0U),32);
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1802,(0U),32);
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1806,(1U),2);
    bufp->fullCData(oldp+1807,(2U),2);
    bufp->fullIData(oldp+1808,(0x20U),32);
    bufp->fullIData(oldp+1809,(4U),32);
    bufp->fullIData(oldp+1810,(0x79737978U),32);
    bufp->fullIData(oldp+1811,(0x17e3c19U),32);
    bufp->fullCData(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullBit(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullIData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1960,(3U),2);
    bufp->fullIData(oldp+1961,(5U),32);
    bufp->fullBit(oldp+1962,(0U));
    bufp->fullBit(oldp+1963,(1U));
    bufp->fullCData(oldp+1964,(0x1bU),8);
    bufp->fullCData(oldp+1965,(0xebU),8);
    bufp->fullCData(oldp+1966,(0x38U),8);
    bufp->fullIData(oldp+1967,(0x18U),32);
    bufp->fullIData(oldp+1968,(2U),32);
    bufp->fullIData(oldp+1969,(6U),32);
    bufp->fullIData(oldp+1970,(4U),32);
    bufp->fullIData(oldp+1971,(3U),32);
    bufp->fullIData(oldp+1972,(0xdU),32);
    bufp->fullIData(oldp+1973,(0x2000U),32);
    bufp->fullIData(oldp+1974,(0x2710U),32);
    bufp->fullIData(oldp+1975,(0x30cU),32);
    bufp->fullCData(oldp+1976,(7U),4);
    bufp->fullCData(oldp+1977,(3U),4);
    bufp->fullCData(oldp+1978,(5U),4);
    bufp->fullCData(oldp+1979,(4U),4);
    bufp->fullCData(oldp+1980,(6U),4);
    bufp->fullCData(oldp+1981,(2U),4);
    bufp->fullCData(oldp+1982,(1U),4);
    bufp->fullSData(oldp+1983,(0x20U),13);
    bufp->fullCData(oldp+1984,(8U),4);
    bufp->fullCData(oldp+1985,(9U),4);
    bufp->fullIData(oldp+1986,(0xaU),32);
    bufp->fullIData(oldp+1987,(0x11U),32);
    bufp->fullIData(oldp+1988,(0x30000000U),32);
    bufp->fullIData(oldp+1989,(0x3fffffffU),32);
    bufp->fullIData(oldp+1990,(8U),32);
    bufp->fullCData(oldp+1991,(4U),5);
    bufp->fullCData(oldp+1992,(0U),5);
    bufp->fullCData(oldp+1993,(0x10U),5);
    bufp->fullCData(oldp+1994,(0x14U),5);
    bufp->fullCData(oldp+1995,(0x18U),5);
    bufp->fullIData(oldp+1996,(0x3000000U),32);
    bufp->fullIData(oldp+1997,(1U),32);
    bufp->fullCData(oldp+1998,(0xaU),4);
    bufp->fullIData(oldp+1999,(0xbU),32);
    bufp->fullIData(oldp+2000,(0x10U),32);
    bufp->fullIData(oldp+2001,(0x60U),32);
    bufp->fullIData(oldp+2002,(0x90U),32);
    bufp->fullIData(oldp+2003,(0x310U),32);
    bufp->fullIData(oldp+2004,(0x320U),32);
    bufp->fullIData(oldp+2005,(0x23U),32);
    bufp->fullIData(oldp+2006,(0x203U),32);
    bufp->fullIData(oldp+2007,(0x20dU),32);
    bufp->fullIData(oldp+2008,(0x400000U),32);
    bufp->fullCData(oldp+2009,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2010,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+2011,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+2012,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2013,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+2014,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+2015,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2016,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+2017,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+2018,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+2019,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+2020,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
