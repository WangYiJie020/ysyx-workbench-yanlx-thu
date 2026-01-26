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
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1655,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1656,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1657,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1658,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1659,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1660,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1661,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1662,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1663,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1664,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1665,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1666,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1667,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1668,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1669,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1670,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1671,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1672,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1673,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1674,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1655,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1656,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1657,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1658,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1659,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1660,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1661,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1662,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1663,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1664,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1665,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1666,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1667,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1668,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1669,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1670,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1671,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1672,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1673,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1674,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+648,"spi_sck", false,-1);
    tracep->declBus(c+1261,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1262,"spi_mosi", false,-1);
    tracep->declBit(c+1675,"spi_miso", false,-1);
    tracep->declBit(c+1673,"uart_rx", false,-1);
    tracep->declBit(c+1674,"uart_tx", false,-1);
    tracep->declBit(c+1676,"psram_sck", false,-1);
    tracep->declBit(c+1370,"psram_ce_n", false,-1);
    tracep->declBus(c+1677,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1678,"sdram_clk", false,-1);
    tracep->declBit(c+1263,"sdram_cke", false,-1);
    tracep->declBit(c+649,"sdram_cs", false,-1);
    tracep->declBit(c+650,"sdram_ras", false,-1);
    tracep->declBit(c+651,"sdram_cas", false,-1);
    tracep->declBit(c+652,"sdram_we", false,-1);
    tracep->declBus(c+1679,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1264,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1265,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1290,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1655,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1656,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1657,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1658,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1659,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1660,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1661,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1662,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1663,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1664,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1665,"ps2_clk", false,-1);
    tracep->declBit(c+1666,"ps2_data", false,-1);
    tracep->declBus(c+1667,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1668,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1670,"vga_hsync", false,-1);
    tracep->declBit(c+1671,"vga_vsync", false,-1);
    tracep->declBit(c+1672,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1717,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1718,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1719,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1091,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1092,"in_psel", false,-1);
    tracep->declBit(c+1093,"in_penable", false,-1);
    tracep->declBus(c+1720,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1094,"in_pwrite", false,-1);
    tracep->declBus(c+1095,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1096,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"in_pready", false,-1);
    tracep->declBus(c+1098,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1099,"in_pslverr", false,-1);
    tracep->declBus(c+1100,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1101,"out_psel", false,-1);
    tracep->declBit(c+1102,"out_penable", false,-1);
    tracep->declBus(c+1103,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1104,"out_pwrite", false,-1);
    tracep->declBus(c+1105,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1252,"out_pready", false,-1);
    tracep->declBus(c+1680,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1681,"out_pslverr", false,-1);
    tracep->declBus(c+1721,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1722,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1723,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1720,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1724,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1725,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1107,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1108,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1109,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1110,"state", false,-1, 2,0);
    tracep->declBus(c+1682,"next_state", false,-1, 2,0);
    tracep->declBit(c+1726,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1101,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1102,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1104,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1100,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1252,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1681,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1680,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1111,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1112,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1113,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1103,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+653,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1727,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1728,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1114,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1115,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1116,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1103,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+121,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1729,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+122,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1117,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1118,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1116,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1103,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+654,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1729,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+655,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1119,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1120,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1100,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1683,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1729,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+123,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1121,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1122,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1116,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1103,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1123,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1729,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1684,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1124,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1113,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1103,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+656,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+657,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+658,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1126,"sel_0", false,-1);
    tracep->declBit(c+1127,"sel_1", false,-1);
    tracep->declBit(c+1128,"sel_2", false,-1);
    tracep->declBit(c+1129,"sel_3", false,-1);
    tracep->declBit(c+1130,"sel_4", false,-1);
    tracep->declBit(c+1131,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1132,"auto_in_awready", false,-1);
    tracep->declBit(c+124,"auto_in_awvalid", false,-1);
    tracep->declBus(c+125,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+127,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+128,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1132,"auto_in_wready", false,-1);
    tracep->declBit(c+129,"auto_in_wvalid", false,-1);
    tracep->declBus(c+130,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+132,"auto_in_bready", false,-1);
    tracep->declBit(c+1133,"auto_in_bvalid", false,-1);
    tracep->declBus(c+133,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1135,"auto_in_arready", false,-1);
    tracep->declBit(c+134,"auto_in_arvalid", false,-1);
    tracep->declBus(c+135,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+137,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+138,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+139,"auto_in_rready", false,-1);
    tracep->declBit(c+1136,"auto_in_rvalid", false,-1);
    tracep->declBus(c+140,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+613,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1092,"auto_out_psel", false,-1);
    tracep->declBit(c+1093,"auto_out_penable", false,-1);
    tracep->declBit(c+1094,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1091,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"auto_out_pready", false,-1);
    tracep->declBit(c+1099,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1098,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1093,"nodeOut_penable", false,-1);
    tracep->declBus(c+1137,"state", false,-1, 1,0);
    tracep->declBit(c+1135,"accept_read", false,-1);
    tracep->declBit(c+1132,"accept_write", false,-1);
    tracep->declBit(c+141,"is_write_r", false,-1);
    tracep->declBit(c+1094,"is_write", false,-1);
    tracep->declBus(c+140,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+133,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+142,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+143,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+144,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+145,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1138,"resp", false,-1, 1,0);
    tracep->declBus(c+146,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1134,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1136,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+147,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1133,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+148,"auto_in_awready", false,-1);
    tracep->declBit(c+1556,"auto_in_awvalid", false,-1);
    tracep->declBus(c+149,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1558,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+150,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+151,"auto_in_wready", false,-1);
    tracep->declBit(c+1559,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1562,"auto_in_wlast", false,-1);
    tracep->declBit(c+619,"auto_in_bready", false,-1);
    tracep->declBit(c+152,"auto_in_bvalid", false,-1);
    tracep->declBus(c+153,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+154,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+155,"auto_in_arready", false,-1);
    tracep->declBit(c+28,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+156,"auto_in_rvalid", false,-1);
    tracep->declBus(c+157,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+159,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+160,"auto_in_rlast", false,-1);
    tracep->declBit(c+1132,"auto_out_awready", false,-1);
    tracep->declBit(c+124,"auto_out_awvalid", false,-1);
    tracep->declBus(c+125,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+127,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+128,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1132,"auto_out_wready", false,-1);
    tracep->declBit(c+129,"auto_out_wvalid", false,-1);
    tracep->declBus(c+130,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+132,"auto_out_bready", false,-1);
    tracep->declBit(c+1133,"auto_out_bvalid", false,-1);
    tracep->declBus(c+133,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1135,"auto_out_arready", false,-1);
    tracep->declBit(c+134,"auto_out_arvalid", false,-1);
    tracep->declBus(c+135,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+137,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+138,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+139,"auto_out_rready", false,-1);
    tracep->declBit(c+1136,"auto_out_rvalid", false,-1);
    tracep->declBus(c+140,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+613,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+132,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBus(c+133,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1134,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+619,"io_deq_ready", false,-1);
    tracep->declBit(c+152,"io_deq_valid", false,-1);
    tracep->declBus(c+153,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+154,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+161,"wrap", false,-1);
    tracep->declBit(c+162,"wrap_1", false,-1);
    tracep->declBit(c+163,"maybe_full", false,-1);
    tracep->declBit(c+164,"ptr_match", false,-1);
    tracep->declBit(c+165,"empty", false,-1);
    tracep->declBit(c+166,"full", false,-1);
    tracep->declBit(c+1139,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+162,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declBus(c+167,"R0_data", false,-1, 5,0);
    tracep->declBit(c+161,"W0_addr", false,-1);
    tracep->declBit(c+1139,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declBus(c+614,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+168+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+170,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+139,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBus(c+140,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+613,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1134,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+156,"io_deq_valid", false,-1);
    tracep->declBus(c+157,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+158,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+159,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+160,"io_deq_bits_last", false,-1);
    tracep->declBit(c+171,"wrap", false,-1);
    tracep->declBit(c+172,"wrap_1", false,-1);
    tracep->declBit(c+173,"maybe_full", false,-1);
    tracep->declBit(c+174,"ptr_match", false,-1);
    tracep->declBit(c+175,"empty", false,-1);
    tracep->declBit(c+176,"full", false,-1);
    tracep->declBit(c+1140,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+172,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declQuad(c+177,"R0_data", false,-1, 38,0);
    tracep->declBit(c+171,"W0_addr", false,-1);
    tracep->declBit(c+1140,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declQuad(c+615,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+179+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+183,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+155,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+30,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+31,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+32,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1135,"io_deq_ready", false,-1);
    tracep->declBit(c+134,"io_deq_valid", false,-1);
    tracep->declBus(c+135,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+136,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+137,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+138,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+184,"wrap", false,-1);
    tracep->declBit(c+185,"wrap_1", false,-1);
    tracep->declBit(c+186,"maybe_full", false,-1);
    tracep->declBit(c+187,"ptr_match", false,-1);
    tracep->declBit(c+188,"empty", false,-1);
    tracep->declBit(c+189,"full", false,-1);
    tracep->declBit(c+33,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+185,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declQuad(c+190,"R0_data", false,-1, 46,0);
    tracep->declBit(c+184,"W0_addr", false,-1);
    tracep->declBit(c+33,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declQuad(c+34,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+192+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+196,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+1556,"io_enq_valid", false,-1);
    tracep->declBus(c+149,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1557,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1558,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+150,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1132,"io_deq_ready", false,-1);
    tracep->declBit(c+124,"io_deq_valid", false,-1);
    tracep->declBus(c+125,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+126,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+127,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+128,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+197,"wrap", false,-1);
    tracep->declBit(c+198,"wrap_1", false,-1);
    tracep->declBit(c+199,"maybe_full", false,-1);
    tracep->declBit(c+200,"ptr_match", false,-1);
    tracep->declBit(c+201,"empty", false,-1);
    tracep->declBit(c+202,"full", false,-1);
    tracep->declBit(c+1563,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+198,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declQuad(c+203,"R0_data", false,-1, 46,0);
    tracep->declBit(c+197,"W0_addr", false,-1);
    tracep->declBit(c+1563,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declQuad(c+620,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+205+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+209,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+151,"io_enq_ready", false,-1);
    tracep->declBit(c+1559,"io_enq_valid", false,-1);
    tracep->declBus(c+1560,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1561,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1562,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1132,"io_deq_ready", false,-1);
    tracep->declBit(c+129,"io_deq_valid", false,-1);
    tracep->declBus(c+130,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+131,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+210,"wrap", false,-1);
    tracep->declBit(c+211,"wrap_1", false,-1);
    tracep->declBit(c+212,"maybe_full", false,-1);
    tracep->declBit(c+213,"ptr_match", false,-1);
    tracep->declBit(c+214,"empty", false,-1);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+1564,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+211,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declQuad(c+216,"R0_data", false,-1, 35,0);
    tracep->declBit(c+210,"W0_addr", false,-1);
    tracep->declBit(c+1564,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declQuad(c+1565,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+218+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1717,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1718,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1719,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1141,"in_arready", false,-1);
    tracep->declBit(c+36,"in_arvalid", false,-1);
    tracep->declBus(c+37,"in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"in_rready", false,-1);
    tracep->declBit(c+1142,"in_rvalid", false,-1);
    tracep->declBus(c+1143,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1144,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1145,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1146,"in_rlast", false,-1);
    tracep->declBit(c+1147,"in_awready", false,-1);
    tracep->declBit(c+1567,"in_awvalid", false,-1);
    tracep->declBus(c+1731,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1297,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1732,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1148,"in_wready", false,-1);
    tracep->declBit(c+1568,"in_wvalid", false,-1);
    tracep->declBus(c+1299,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"in_wlast", false,-1);
    tracep->declBit(c+1569,"in_bready", false,-1);
    tracep->declBit(c+1149,"in_bvalid", false,-1);
    tracep->declBus(c+1150,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1392,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1371,"out_arready", false,-1);
    tracep->declBit(c+1151,"out_arvalid", false,-1);
    tracep->declBus(c+1152,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1155,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1156,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1157,"out_rready", false,-1);
    tracep->declBit(c+1266,"out_rvalid", false,-1);
    tracep->declBus(c+1267,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1268,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1733,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1269,"out_rlast", false,-1);
    tracep->declBit(c+1372,"out_awready", false,-1);
    tracep->declBit(c+1158,"out_awvalid", false,-1);
    tracep->declBus(c+1159,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1160,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1161,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1162,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1163,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1373,"out_wready", false,-1);
    tracep->declBit(c+1164,"out_wvalid", false,-1);
    tracep->declBus(c+1165,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"out_wlast", false,-1);
    tracep->declBit(c+1168,"out_bready", false,-1);
    tracep->declBit(c+1270,"out_bvalid", false,-1);
    tracep->declBus(c+1267,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1733,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1721,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1722,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1723,"RD_IDLE", false,-1, 2,0);
    tracep->declBus(c+1720,"RD_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1724,"RD_DELAY", false,-1, 2,0);
    tracep->declBus(c+1725,"RD_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1734,"WT_IDLE", false,-1, 2,0);
    tracep->declBus(c+1735,"WT_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1736,"WT_DELAY", false,-1, 2,0);
    tracep->declBus(c+1737,"WT_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1169,"request_counter_rd", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1170+i*1,"wait_counter_rd", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1178+i*1,"rid", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1186+i*1,"rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1194+i*1,"rresp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1202+i*1,"rlast", true,(i+0));
    }
    tracep->declBus(c+1210,"arlen", false,-1, 7,0);
    tracep->declBus(c+1211,"arsize", false,-1, 2,0);
    tracep->declBus(c+1212,"arburst", false,-1, 1,0);
    tracep->declBus(c+1213,"r_counter", false,-1, 2,0);
    tracep->declBus(c+1214,"rlen", false,-1, 2,0);
    tracep->declBus(c+1215,"state_rd", false,-1, 2,0);
    tracep->declBus(c+1685,"next_state_rd", false,-1, 2,0);
    tracep->declBus(c+1216,"request_counter_wt", false,-1, 9,0);
    tracep->declBus(c+1217,"wait_counter_wt", false,-1, 31,0);
    tracep->declBit(c+1218,"bvalid", false,-1);
    tracep->declBus(c+1219,"bid", false,-1, 3,0);
    tracep->declBus(c+1220,"bresp", false,-1, 1,0);
    tracep->declBus(c+1221,"state_wt", false,-1, 2,0);
    tracep->declBus(c+1686,"next_state_wt", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+223,"auto_in_awready", false,-1);
    tracep->declBit(c+1570,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1731,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1297,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1732,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+224,"auto_in_wready", false,-1);
    tracep->declBit(c+1571,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_in_wlast", false,-1);
    tracep->declBit(c+1687,"auto_in_bready", false,-1);
    tracep->declBit(c+1393,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1394,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1395,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+225,"auto_in_arready", false,-1);
    tracep->declBit(c+43,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_rready", false,-1);
    tracep->declBit(c+226,"auto_in_rvalid", false,-1);
    tracep->declBus(c+227,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+230,"auto_in_rlast", false,-1);
    tracep->declBit(c+1572,"auto_out_awready", false,-1);
    tracep->declBit(c+1573,"auto_out_awvalid", false,-1);
    tracep->declBus(c+149,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1558,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+150,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+231,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1574,"auto_out_wready", false,-1);
    tracep->declBit(c+1575,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1562,"auto_out_wlast", false,-1);
    tracep->declBit(c+1576,"auto_out_bready", false,-1);
    tracep->declBit(c+232,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1394,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1396,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1397,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+45,"auto_out_arready", false,-1);
    tracep->declBit(c+46,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+44,"auto_out_rready", false,-1);
    tracep->declBit(c+226,"auto_out_rvalid", false,-1);
    tracep->declBus(c+227,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+234,"auto_out_rlast", false,-1);
    tracep->declBit(c+1575,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+235,"w_idle", false,-1);
    tracep->declBit(c+1577,"in_awready", false,-1);
    tracep->declBit(c+236,"busy", false,-1);
    tracep->declBus(c+237,"r_addr", false,-1, 31,0);
    tracep->declBus(c+238,"r_len", false,-1, 7,0);
    tracep->declBus(c+48,"len", false,-1, 7,0);
    tracep->declBus(c+49,"addr", false,-1, 31,0);
    tracep->declBit(c+239,"busy_1", false,-1);
    tracep->declBus(c+240,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+241,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+242,"len_1", false,-1, 7,0);
    tracep->declBus(c+1578,"addr_1", false,-1, 31,0);
    tracep->declBit(c+243,"wbeats_latched", false,-1);
    tracep->declBit(c+1573,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1579,"wbeats_valid", false,-1);
    tracep->declBus(c+244,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1580,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1562,"w_last", false,-1);
    tracep->declBit(c+1576,"nodeOut_bready", false,-1);
    tracep->declBus(c+1398,"error_0", false,-1, 1,0);
    tracep->declBus(c+1399,"error_1", false,-1, 1,0);
    tracep->declBus(c+1400,"error_2", false,-1, 1,0);
    tracep->declBus(c+1401,"error_3", false,-1, 1,0);
    tracep->declBus(c+1402,"error_4", false,-1, 1,0);
    tracep->declBus(c+1403,"error_5", false,-1, 1,0);
    tracep->declBus(c+1404,"error_6", false,-1, 1,0);
    tracep->declBus(c+1405,"error_7", false,-1, 1,0);
    tracep->declBus(c+1406,"error_8", false,-1, 1,0);
    tracep->declBus(c+1407,"error_9", false,-1, 1,0);
    tracep->declBus(c+1408,"error_10", false,-1, 1,0);
    tracep->declBus(c+1409,"error_11", false,-1, 1,0);
    tracep->declBus(c+1410,"error_12", false,-1, 1,0);
    tracep->declBus(c+1411,"error_13", false,-1, 1,0);
    tracep->declBus(c+1412,"error_14", false,-1, 1,0);
    tracep->declBus(c+1413,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+245,"ram", false,-1, 48,0);
    tracep->declBit(c+247,"full", false,-1);
    tracep->declBit(c+46,"io_deq_valid_0", false,-1);
    tracep->declBit(c+53,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1570,"io_enq_valid", false,-1);
    tracep->declBus(c+1731,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1297,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1732,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1298,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1733,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1581,"io_deq_ready", false,-1);
    tracep->declBit(c+1582,"io_deq_valid", false,-1);
    tracep->declBus(c+149,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1583,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+248,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1558,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+150,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+249,"ram", false,-1, 48,0);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+1582,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1584,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+1571,"io_enq_valid", false,-1);
    tracep->declBus(c+1299,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1300,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1301,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1585,"io_deq_ready", false,-1);
    tracep->declBit(c+1586,"io_deq_valid", false,-1);
    tracep->declBus(c+1560,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1561,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1688,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+252,"ram", false,-1, 36,0);
    tracep->declBit(c+254,"full", false,-1);
    tracep->declBit(c+1586,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1587,"do_enq", false,-1);
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
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1588,"auto_in_awready", false,-1);
    tracep->declBit(c+1589,"auto_in_awvalid", false,-1);
    tracep->declBus(c+149,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1590,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1591,"auto_in_wready", false,-1);
    tracep->declBit(c+1592,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1593,"auto_in_bready", false,-1);
    tracep->declBit(c+255,"auto_in_bvalid", false,-1);
    tracep->declBus(c+256,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+257,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"auto_in_arready", false,-1);
    tracep->declBit(c+55,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+56,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+57,"auto_in_rready", false,-1);
    tracep->declBit(c+258,"auto_in_rvalid", false,-1);
    tracep->declBus(c+259,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+261,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+54,"nodeIn_arready", false,-1);
    tracep->declBit(c+1588,"nodeIn_awready", false,-1);
    tracep->declBit(c+1594,"w_sel0", false,-1);
    tracep->declBit(c+255,"w_full", false,-1);
    tracep->declBus(c+256,"w_id", false,-1, 3,0);
    tracep->declBit(c+262,"r_sel1", false,-1);
    tracep->declBit(c+263,"w_sel1", false,-1);
    tracep->declBit(c+258,"r_full", false,-1);
    tracep->declBus(c+259,"r_id", false,-1, 3,0);
    tracep->declBit(c+58,"ren", false,-1);
    tracep->declBit(c+264,"rdata_REG", false,-1);
    tracep->declBus(c+265,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+266,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+267,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+268,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+59,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+58,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declBus(c+269,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1595,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1596,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declBus(c+1560,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1561,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1597,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1302,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1731,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1297,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1732,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1598,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1303,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1304,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1414,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1415,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1416,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+61,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1222,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1223,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+617,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+618,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1224,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1147,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1567,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1731,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1297,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1732,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1148,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1568,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1569,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+1149,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+1150,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1392,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1141,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1142,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1143,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1144,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1146,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+223,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1570,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1731,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1297,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1732,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+224,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1571,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1687,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1393,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1394,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1395,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+225,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+226,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+227,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+230,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1414,"in_0_bvalid", false,-1);
    tracep->declBit(c+1222,"in_0_rvalid", false,-1);
    tracep->declBit(c+1599,"in_0_wready", false,-1);
    tracep->declBit(c+1600,"in_0_awready", false,-1);
    tracep->declBit(c+1689,"in_0_arready", false,-1);
    tracep->declBit(c+1597,"anonIn_awready", false,-1);
    tracep->declBit(c+60,"anonIn_arready", false,-1);
    tracep->declBit(c+63,"requestARIO_0_0", false,-1);
    tracep->declBit(c+64,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1305,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1306,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+65,"arSel", false,-1, 15,0);
    tracep->declBus(c+1738,"awSel", false,-1, 15,0);
    tracep->declBus(c+1225,"rSel", false,-1, 15,0);
    tracep->declBus(c+1417,"bSel", false,-1, 15,0);
    tracep->declBus(c+270,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+271,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+272,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+273,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+274,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+275,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+276,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1739,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+277,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+278,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+279,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1740,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+280,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+281,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+282,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1741,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+283,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+284,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+285,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1742,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+286,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+287,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+288,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1743,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+289,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+290,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+291,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1744,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+292,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+293,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+294,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1745,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+295,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+296,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+297,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1746,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+298,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+299,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+300,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1747,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+301,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+302,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+303,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1748,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+304,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+305,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+306,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1749,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+307,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+308,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+309,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1750,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+310,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+311,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+312,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1751,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+313,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+314,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+315,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1752,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+316,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+317,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+318,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1753,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+66,"in_0_arvalid", false,-1);
    tracep->declBit(c+319,"latched", false,-1);
    tracep->declBit(c+1601,"in_0_awvalid", false,-1);
    tracep->declBit(c+1602,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1603,"in_0_wvalid", false,-1);
    tracep->declBit(c+320,"idle_2", false,-1);
    tracep->declBit(c+1226,"anyValid", false,-1);
    tracep->declBus(c+1227,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+321,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1228,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1229,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1230,"prefixOR_1", false,-1);
    tracep->declBit(c+1231,"winner_2_1", false,-1);
    tracep->declBit(c+322,"state_2_0", false,-1);
    tracep->declBit(c+323,"state_2_1", false,-1);
    tracep->declBit(c+1232,"muxState_2_0", false,-1);
    tracep->declBit(c+1233,"muxState_2_1", false,-1);
    tracep->declBit(c+324,"idle_3", false,-1);
    tracep->declBit(c+1418,"anyValid_1", false,-1);
    tracep->declBus(c+1419,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+325,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1420,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1421,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1422,"winner_3_0", false,-1);
    tracep->declBit(c+1423,"winner_3_1", false,-1);
    tracep->declBit(c+326,"state_3_0", false,-1);
    tracep->declBit(c+327,"state_3_1", false,-1);
    tracep->declBit(c+1424,"muxState_3_0", false,-1);
    tracep->declBit(c+1425,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+1602,"io_enq_valid", false,-1);
    tracep->declBus(c+1307,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1604,"io_deq_ready", false,-1);
    tracep->declBit(c+1605,"io_deq_valid", false,-1);
    tracep->declBus(c+1606,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+329,"wrap", false,-1);
    tracep->declBit(c+330,"wrap_1", false,-1);
    tracep->declBit(c+331,"maybe_full", false,-1);
    tracep->declBit(c+332,"ptr_match", false,-1);
    tracep->declBit(c+333,"empty", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+1605,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1607,"do_deq", false,-1);
    tracep->declBit(c+1608,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+330,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declBus(c+335,"R0_data", false,-1, 1,0);
    tracep->declBit(c+329,"W0_addr", false,-1);
    tracep->declBit(c+1608,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declBus(c+1307,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+336+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1609,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1610,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+149,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1558,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+150,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1574,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1575,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1562,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1576,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+232,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1394,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1396,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+68,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+226,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+227,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+234,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1588,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1589,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+149,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1590,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1591,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1592,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1593,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+255,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+256,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+257,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+55,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+56,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+57,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+258,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+259,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+261,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1611,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1612,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+338,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+69,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+339,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+340,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+341,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+148,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1556,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+149,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1558,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+150,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+151,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1559,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1562,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+619,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+152,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+153,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+154,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+155,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+28,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+156,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+157,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+159,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+160,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+232,"in_0_bvalid", false,-1);
    tracep->declBit(c+226,"in_0_rvalid", false,-1);
    tracep->declBit(c+1613,"in_0_wready", false,-1);
    tracep->declBit(c+1614,"in_0_awready", false,-1);
    tracep->declBit(c+67,"in_0_arready", false,-1);
    tracep->declBit(c+1609,"anonIn_awready", false,-1);
    tracep->declBit(c+71,"requestARIO_0_0", false,-1);
    tracep->declBit(c+72,"requestARIO_0_1", false,-1);
    tracep->declBit(c+73,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1615,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1616,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1617,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+74,"arSel", false,-1, 15,0);
    tracep->declBus(c+342,"awSel", false,-1, 15,0);
    tracep->declBus(c+343,"rSel", false,-1, 15,0);
    tracep->declBus(c+1426,"bSel", false,-1, 15,0);
    tracep->declBit(c+344,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+345,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+346,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+347,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+348,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+349,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+350,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+351,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+352,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+353,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+354,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+355,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+356,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+357,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+358,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+359,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+360,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+361,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+362,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+363,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+364,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+365,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+366,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+367,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+368,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+369,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+370,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+371,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+372,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+373,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+374,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+375,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+376,"latched", false,-1);
    tracep->declBit(c+1618,"in_0_awvalid", false,-1);
    tracep->declBit(c+1619,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1620,"in_0_wvalid", false,-1);
    tracep->declBit(c+377,"idle_3", false,-1);
    tracep->declBit(c+378,"anyValid", false,-1);
    tracep->declBus(c+379,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+380,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+381,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+382,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+383,"prefixOR_1", false,-1);
    tracep->declBit(c+384,"winner_3_1", false,-1);
    tracep->declBit(c+385,"winner_3_2", false,-1);
    tracep->declBit(c+386,"state_3_0", false,-1);
    tracep->declBit(c+387,"state_3_1", false,-1);
    tracep->declBit(c+388,"state_3_2", false,-1);
    tracep->declBit(c+389,"muxState_3_0", false,-1);
    tracep->declBit(c+390,"muxState_3_1", false,-1);
    tracep->declBit(c+391,"muxState_3_2", false,-1);
    tracep->declBit(c+392,"idle_4", false,-1);
    tracep->declBit(c+393,"anyValid_1", false,-1);
    tracep->declBus(c+394,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+395,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+396,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+397,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+398,"winner_4_0", false,-1);
    tracep->declBit(c+399,"winner_4_2", false,-1);
    tracep->declBit(c+400,"state_4_0", false,-1);
    tracep->declBit(c+401,"state_4_2", false,-1);
    tracep->declBit(c+402,"muxState_4_0", false,-1);
    tracep->declBit(c+403,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+404,"io_enq_ready", false,-1);
    tracep->declBit(c+1619,"io_enq_valid", false,-1);
    tracep->declBus(c+1621,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1622,"io_deq_ready", false,-1);
    tracep->declBit(c+1623,"io_deq_valid", false,-1);
    tracep->declBus(c+1624,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+405,"wrap", false,-1);
    tracep->declBit(c+406,"wrap_1", false,-1);
    tracep->declBit(c+407,"maybe_full", false,-1);
    tracep->declBit(c+408,"ptr_match", false,-1);
    tracep->declBit(c+409,"empty", false,-1);
    tracep->declBit(c+410,"full", false,-1);
    tracep->declBit(c+1623,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1625,"do_deq", false,-1);
    tracep->declBit(c+1626,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+406,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1653,"R0_clk", false,-1);
    tracep->declBus(c+411,"R0_data", false,-1, 2,0);
    tracep->declBit(c+405,"W0_addr", false,-1);
    tracep->declBit(c+1626,"W0_en", false,-1);
    tracep->declBit(c+1653,"W0_clk", false,-1);
    tracep->declBus(c+1621,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+412+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1572,"auto_in_awready", false,-1);
    tracep->declBit(c+1573,"auto_in_awvalid", false,-1);
    tracep->declBus(c+149,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1558,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+150,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+231,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1574,"auto_in_wready", false,-1);
    tracep->declBit(c+1575,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1562,"auto_in_wlast", false,-1);
    tracep->declBit(c+1576,"auto_in_bready", false,-1);
    tracep->declBit(c+232,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1394,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1396,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1397,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+45,"auto_in_arready", false,-1);
    tracep->declBit(c+46,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+47,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+44,"auto_in_rready", false,-1);
    tracep->declBit(c+226,"auto_in_rvalid", false,-1);
    tracep->declBus(c+227,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+234,"auto_in_rlast", false,-1);
    tracep->declBit(c+1609,"auto_out_awready", false,-1);
    tracep->declBit(c+1610,"auto_out_awvalid", false,-1);
    tracep->declBus(c+149,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1558,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+150,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1574,"auto_out_wready", false,-1);
    tracep->declBit(c+1575,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1560,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1562,"auto_out_wlast", false,-1);
    tracep->declBit(c+1576,"auto_out_bready", false,-1);
    tracep->declBit(c+232,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1394,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1396,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_out_arready", false,-1);
    tracep->declBit(c+68,"auto_out_arvalid", false,-1);
    tracep->declBus(c+29,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+30,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+32,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_out_rready", false,-1);
    tracep->declBit(c+226,"auto_out_rvalid", false,-1);
    tracep->declBus(c+227,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+229,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+234,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+415,"io_deq_valid", false,-1);
    tracep->declBit(c+416,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+415,"full", false,-1);
    tracep->declBit(c+416,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+417,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+418,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+419,"io_deq_valid", false,-1);
    tracep->declBit(c+420,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+419,"full", false,-1);
    tracep->declBit(c+420,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+421,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+77,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+423,"io_deq_valid", false,-1);
    tracep->declBit(c+424,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+423,"full", false,-1);
    tracep->declBit(c+424,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+425,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+426,"io_enq_ready", false,-1);
    tracep->declBit(c+78,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+427,"io_deq_valid", false,-1);
    tracep->declBit(c+428,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+427,"full", false,-1);
    tracep->declBit(c+428,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+429,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+430,"io_enq_ready", false,-1);
    tracep->declBit(c+79,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBit(c+432,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->declBit(c+432,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+433,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+435,"io_deq_valid", false,-1);
    tracep->declBit(c+436,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+435,"full", false,-1);
    tracep->declBit(c+436,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+437,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+439,"io_deq_valid", false,-1);
    tracep->declBit(c+440,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+439,"full", false,-1);
    tracep->declBit(c+440,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+441,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+442,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+443,"io_deq_valid", false,-1);
    tracep->declBit(c+444,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->declBit(c+444,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+445,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+622,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1540,"io_deq_ready", false,-1);
    tracep->declBit(c+447,"io_deq_valid", false,-1);
    tracep->declBit(c+448,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+447,"full", false,-1);
    tracep->declBit(c+448,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+449,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+623,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1541,"io_deq_ready", false,-1);
    tracep->declBit(c+451,"io_deq_valid", false,-1);
    tracep->declBit(c+452,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+451,"full", false,-1);
    tracep->declBit(c+452,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+453,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+624,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1542,"io_deq_ready", false,-1);
    tracep->declBit(c+455,"io_deq_valid", false,-1);
    tracep->declBit(c+456,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+455,"full", false,-1);
    tracep->declBit(c+456,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+457,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+458,"io_enq_ready", false,-1);
    tracep->declBit(c+625,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1543,"io_deq_ready", false,-1);
    tracep->declBit(c+459,"io_deq_valid", false,-1);
    tracep->declBit(c+460,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+459,"full", false,-1);
    tracep->declBit(c+460,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+461,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+463,"io_deq_valid", false,-1);
    tracep->declBit(c+464,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+463,"full", false,-1);
    tracep->declBit(c+464,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+465,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+626,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1544,"io_deq_ready", false,-1);
    tracep->declBit(c+467,"io_deq_valid", false,-1);
    tracep->declBit(c+468,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+467,"full", false,-1);
    tracep->declBit(c+468,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+469,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+627,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1545,"io_deq_ready", false,-1);
    tracep->declBit(c+471,"io_deq_valid", false,-1);
    tracep->declBit(c+472,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+471,"full", false,-1);
    tracep->declBit(c+472,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+473,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+628,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1546,"io_deq_ready", false,-1);
    tracep->declBit(c+475,"io_deq_valid", false,-1);
    tracep->declBit(c+476,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+475,"full", false,-1);
    tracep->declBit(c+476,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+477,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+478,"io_enq_ready", false,-1);
    tracep->declBit(c+629,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1547,"io_deq_ready", false,-1);
    tracep->declBit(c+479,"io_deq_valid", false,-1);
    tracep->declBit(c+480,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+479,"full", false,-1);
    tracep->declBit(c+480,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+481,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+482,"io_enq_ready", false,-1);
    tracep->declBit(c+630,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1548,"io_deq_ready", false,-1);
    tracep->declBit(c+483,"io_deq_valid", false,-1);
    tracep->declBit(c+484,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+483,"full", false,-1);
    tracep->declBit(c+484,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+485,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+486,"io_enq_ready", false,-1);
    tracep->declBit(c+631,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1549,"io_deq_ready", false,-1);
    tracep->declBit(c+487,"io_deq_valid", false,-1);
    tracep->declBit(c+488,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+487,"full", false,-1);
    tracep->declBit(c+488,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+489,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+490,"io_enq_ready", false,-1);
    tracep->declBit(c+632,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1550,"io_deq_ready", false,-1);
    tracep->declBit(c+491,"io_deq_valid", false,-1);
    tracep->declBit(c+492,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+491,"full", false,-1);
    tracep->declBit(c+492,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+493,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+494,"io_enq_ready", false,-1);
    tracep->declBit(c+633,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1551,"io_deq_ready", false,-1);
    tracep->declBit(c+495,"io_deq_valid", false,-1);
    tracep->declBit(c+496,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+495,"full", false,-1);
    tracep->declBit(c+496,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+497,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+498,"io_enq_ready", false,-1);
    tracep->declBit(c+634,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1552,"io_deq_ready", false,-1);
    tracep->declBit(c+499,"io_deq_valid", false,-1);
    tracep->declBit(c+500,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+499,"full", false,-1);
    tracep->declBit(c+500,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+501,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+502,"io_enq_ready", false,-1);
    tracep->declBit(c+635,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1553,"io_deq_ready", false,-1);
    tracep->declBit(c+503,"io_deq_valid", false,-1);
    tracep->declBit(c+504,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+503,"full", false,-1);
    tracep->declBit(c+504,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+505,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+506,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+507,"io_deq_valid", false,-1);
    tracep->declBit(c+508,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+507,"full", false,-1);
    tracep->declBit(c+508,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+509,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+510,"io_enq_ready", false,-1);
    tracep->declBit(c+636,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1554,"io_deq_ready", false,-1);
    tracep->declBit(c+511,"io_deq_valid", false,-1);
    tracep->declBit(c+512,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+511,"full", false,-1);
    tracep->declBit(c+512,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+513,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+514,"io_enq_ready", false,-1);
    tracep->declBit(c+637,"io_enq_valid", false,-1);
    tracep->declBit(c+231,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1555,"io_deq_ready", false,-1);
    tracep->declBit(c+515,"io_deq_valid", false,-1);
    tracep->declBit(c+516,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+515,"full", false,-1);
    tracep->declBit(c+516,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+517,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+518,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+519,"io_deq_valid", false,-1);
    tracep->declBit(c+520,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+519,"full", false,-1);
    tracep->declBit(c+520,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+521,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+522,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+523,"io_deq_valid", false,-1);
    tracep->declBit(c+524,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+523,"full", false,-1);
    tracep->declBit(c+524,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+525,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+526,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+527,"io_deq_valid", false,-1);
    tracep->declBit(c+528,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+527,"full", false,-1);
    tracep->declBit(c+528,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+529,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+530,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+531,"io_deq_valid", false,-1);
    tracep->declBit(c+532,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+531,"full", false,-1);
    tracep->declBit(c+532,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+533,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+534,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+535,"io_deq_valid", false,-1);
    tracep->declBit(c+536,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+535,"full", false,-1);
    tracep->declBit(c+536,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+537,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+538,"io_enq_ready", false,-1);
    tracep->declBit(c+90,"io_enq_valid", false,-1);
    tracep->declBit(c+47,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+539,"io_deq_valid", false,-1);
    tracep->declBit(c+540,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+539,"full", false,-1);
    tracep->declBit(c+540,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+541,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1690,"reset", false,-1);
    tracep->declBit(c+1597,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1302,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1731,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1297,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1732,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1598,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1303,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1304,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1414,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1415,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1416,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_master_out_arready", false,-1);
    tracep->declBit(c+61,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1222,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1223,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+617,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+618,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1224,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1690,"reset", false,-1);
    tracep->declBit(c+1729,"io_interrupt", false,-1);
    tracep->declBit(c+1597,"io_master_awready", false,-1);
    tracep->declBit(c+1302,"io_master_awvalid", false,-1);
    tracep->declBus(c+1297,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1731,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1732,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1598,"io_master_wready", false,-1);
    tracep->declBit(c+1303,"io_master_wvalid", false,-1);
    tracep->declBus(c+1299,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"io_master_wlast", false,-1);
    tracep->declBit(c+1304,"io_master_bready", false,-1);
    tracep->declBit(c+1414,"io_master_bvalid", false,-1);
    tracep->declBus(c+1416,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1415,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+60,"io_master_arready", false,-1);
    tracep->declBit(c+61,"io_master_arvalid", false,-1);
    tracep->declBus(c+38,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+37,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+39,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+41,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"io_master_rready", false,-1);
    tracep->declBit(c+1222,"io_master_rvalid", false,-1);
    tracep->declBus(c+618,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+617,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1224,"io_master_rlast", false,-1);
    tracep->declBus(c+1223,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1754,"io_slave_awready", false,-1);
    tracep->declBit(c+1729,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1755,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1731,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1732,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1723,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1756,"io_slave_wready", false,-1);
    tracep->declBit(c+1729,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1755,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1731,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1729,"io_slave_wlast", false,-1);
    tracep->declBit(c+1729,"io_slave_bready", false,-1);
    tracep->declBit(c+1757,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1758,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1759,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1760,"io_slave_arready", false,-1);
    tracep->declBit(c+1729,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1755,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1731,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1732,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1723,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1733,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1729,"io_slave_rready", false,-1);
    tracep->declBit(c+1761,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1762,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1763,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1764,"io_slave_rlast", false,-1);
    tracep->declBus(c+1765,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBit(c+1308,"reset_ifu", false,-1);
    tracep->declBus(c+948,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+949,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+1309,"npc", false,-1, 31,0);
    tracep->declBit(c+1766,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+1767,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+948,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+949,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+950,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+951,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+952,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1731,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1732,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1724,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1733,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+953,"ifu_arvalid", false,-1);
    tracep->declBit(c+91,"ifu_arready", false,-1);
    tracep->declBus(c+92,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+93,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+94,"ifu_rlast", false,-1);
    tracep->declBus(c+95,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+96,"ifu_rvalid", false,-1);
    tracep->declBit(c+954,"ifu_rready", false,-1);
    tracep->declBit(c+1768,"useless1", false,-1);
    tracep->declBit(c+1769,"useless2", false,-1);
    tracep->declBit(c+1770,"useless3", false,-1);
    tracep->declBit(c+1771,"useless4", false,-1);
    tracep->declBit(c+955,"fencei", false,-1);
    tracep->declBus(c+1310,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1731,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1732,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1311,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1733,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1312,"lsu_arvalid", false,-1);
    tracep->declBit(c+91,"lsu_arready", false,-1);
    tracep->declBus(c+97,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+98,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+99,"lsu_rlast", false,-1);
    tracep->declBus(c+100,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+101,"lsu_rvalid", false,-1);
    tracep->declBit(c+1313,"lsu_rready", false,-1);
    tracep->declBus(c+1297,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1731,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1732,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1302,"lsu_awvalid", false,-1);
    tracep->declBit(c+1597,"lsu_awready", false,-1);
    tracep->declBus(c+1299,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"lsu_wlast", false,-1);
    tracep->declBit(c+1303,"lsu_wvalid", false,-1);
    tracep->declBit(c+1598,"lsu_wready", false,-1);
    tracep->declBus(c+1416,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1415,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1414,"lsu_bvalid", false,-1);
    tracep->declBit(c+1304,"lsu_bready", false,-1);
    tracep->declBus(c+1314,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1731,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1732,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1315,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1733,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1316,"axi_arvalid", false,-1);
    tracep->declBit(c+102,"axi_arready", false,-1);
    tracep->declBus(c+103,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+105,"axi_rlast", false,-1);
    tracep->declBus(c+106,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+107,"axi_rvalid", false,-1);
    tracep->declBit(c+1317,"axi_rready", false,-1);
    tracep->declBus(c+1297,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1731,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1732,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1298,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1733,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1302,"axi_awvalid", false,-1);
    tracep->declBit(c+1597,"axi_awready", false,-1);
    tracep->declBus(c+1299,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"axi_wlast", false,-1);
    tracep->declBit(c+1303,"axi_wvalid", false,-1);
    tracep->declBit(c+1598,"axi_wready", false,-1);
    tracep->declBus(c+1416,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1415,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+1414,"axi_bvalid", false,-1);
    tracep->declBit(c+1304,"axi_bready", false,-1);
    tracep->declBus(c+108,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+109,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+110,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+111,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+112,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+113,"clint_arvalid", false,-1);
    tracep->declBit(c+956,"clint_arready", false,-1);
    tracep->declBus(c+957,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+958,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+959,"clint_rlast", false,-1);
    tracep->declBus(c+1731,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+960,"clint_rvalid", false,-1);
    tracep->declBit(c+114,"clint_rready", false,-1);
    tracep->declBus(c+1772,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1773,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1774,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1775,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1776,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1777,"clint_awvalid", false,-1);
    tracep->declBit(c+961,"clint_awready", false,-1);
    tracep->declBus(c+1778,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1779,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1780,"clint_wlast", false,-1);
    tracep->declBit(c+1781,"clint_wvalid", false,-1);
    tracep->declBit(c+962,"clint_wready", false,-1);
    tracep->declBus(c+963,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1731,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+964,"clint_bvalid", false,-1);
    tracep->declBit(c+1782,"clint_bready", false,-1);
    tracep->declBus(c+1627,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1628,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1692,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1693,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1427,"a5", false,-1, 31,0);
    tracep->declBus(c+1629,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1692,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1693,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1630,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1694,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1631,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1632,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1633,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1634,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1635,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1636,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1637,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1638,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1639,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1640,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1641,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1642,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1643,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1644,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1645,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+965,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+1318,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1646,"csr_write", false,-1);
    tracep->declBus(c+1647,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1428+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+966,"wdata", false,-1, 31,0);
    tracep->declBus(c+967,"waddr", false,-1, 4,0);
    tracep->declBit(c+968,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1432+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+1319,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1320,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1321,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1322,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+1783,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+1323,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+1324,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+1325,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+1326,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+1327,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1328,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+1329,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+1330,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+1331,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+1332,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+1333,"ready_exu_to_lsu", false,-1);
    tracep->declBit(c+1334,"npc_valid", false,-1);
    tracep->declBus(c+1335,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1336,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1337,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1338,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1784,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+1339,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+1340,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1341,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+1342,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+1343,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+1344,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+1345,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+969,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBus(c+952,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1731,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1732,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1724,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1733,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+953,"arvalid_i_a", false,-1);
    tracep->declBit(c+91,"arready_o_a", false,-1);
    tracep->declBus(c+92,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+93,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+94,"rlast_o_a", false,-1);
    tracep->declBus(c+95,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+96,"rvalid_o_a", false,-1);
    tracep->declBit(c+954,"rready_i_a", false,-1);
    tracep->declBus(c+1785,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1731,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1732,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1723,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1733,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1729,"awvalid_i_a", false,-1);
    tracep->declBit(c+1786,"awready_o_a", false,-1);
    tracep->declBus(c+1785,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1731,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1729,"wlast_i_a", false,-1);
    tracep->declBit(c+1729,"wvalid_i_a", false,-1);
    tracep->declBit(c+1787,"wready_o_a", false,-1);
    tracep->declBus(c+1788,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1789,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1790,"bvalid_o_a", false,-1);
    tracep->declBit(c+1729,"bready_i_a", false,-1);
    tracep->declBus(c+1310,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1731,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1732,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1311,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1733,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1312,"arvalid_i_b", false,-1);
    tracep->declBit(c+91,"arready_o_b", false,-1);
    tracep->declBus(c+97,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+98,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+99,"rlast_o_b", false,-1);
    tracep->declBus(c+100,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+101,"rvalid_o_b", false,-1);
    tracep->declBit(c+1313,"rready_i_b", false,-1);
    tracep->declBus(c+1297,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1731,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1732,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+1298,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1733,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+1302,"awvalid_i_b", false,-1);
    tracep->declBit(c+1597,"awready_o_b", false,-1);
    tracep->declBus(c+1299,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+1300,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+1301,"wlast_i_b", false,-1);
    tracep->declBit(c+1303,"wvalid_i_b", false,-1);
    tracep->declBit(c+1598,"wready_o_b", false,-1);
    tracep->declBus(c+1416,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1415,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1414,"bvalid_o_b", false,-1);
    tracep->declBit(c+1304,"bready_i_b", false,-1);
    tracep->declBus(c+1314,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1731,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1732,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1315,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1733,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1316,"arvalid_o", false,-1);
    tracep->declBit(c+102,"arready_i", false,-1);
    tracep->declBus(c+103,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+104,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+105,"rlast_i", false,-1);
    tracep->declBus(c+106,"rid_i", false,-1, 3,0);
    tracep->declBit(c+107,"rvalid_i", false,-1);
    tracep->declBit(c+1317,"rready_o", false,-1);
    tracep->declBus(c+1297,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1731,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1732,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1298,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1733,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1302,"awvalid_o", false,-1);
    tracep->declBit(c+1597,"awready_i", false,-1);
    tracep->declBus(c+1299,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1300,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1301,"wlast_o", false,-1);
    tracep->declBit(c+1303,"wvalid_o", false,-1);
    tracep->declBit(c+1598,"wready_i", false,-1);
    tracep->declBus(c+1416,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1415,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1414,"bvalid_i", false,-1);
    tracep->declBit(c+1304,"bready_o", false,-1);
    tracep->declBit(c+970,"ar_switch", false,-1);
    tracep->declBit(c+971,"r_switch", false,-1);
    tracep->declBit(c+972,"bus_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBus(c+108,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+109,"arid_i", false,-1, 3,0);
    tracep->declBus(c+110,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+111,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+112,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+113,"arvalid_i", false,-1);
    tracep->declBit(c+956,"arready_o", false,-1);
    tracep->declBus(c+957,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+958,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+959,"rlast_o", false,-1);
    tracep->declBus(c+1731,"rid_o", false,-1, 3,0);
    tracep->declBit(c+960,"rvalid_o", false,-1);
    tracep->declBit(c+114,"rready_i", false,-1);
    tracep->declBus(c+1772,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1773,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1774,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1775,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1776,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1777,"awvalid_i", false,-1);
    tracep->declBit(c+961,"awready_o", false,-1);
    tracep->declBus(c+1778,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1779,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1780,"wlast_i", false,-1);
    tracep->declBit(c+1781,"wvalid_i", false,-1);
    tracep->declBit(c+962,"wready_o", false,-1);
    tracep->declBus(c+963,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1731,"bid_o", false,-1, 3,0);
    tracep->declBit(c+964,"bvalid_o", false,-1);
    tracep->declBit(c+1782,"bready_i", false,-1);
    tracep->declBit(c+973,"ar_state", false,-1);
    tracep->declBit(c+974,"r_state", false,-1);
    tracep->declBit(c+975,"aw_state", false,-1);
    tracep->declBit(c+976,"w_state", false,-1);
    tracep->declBit(c+1791,"b_state", false,-1);
    tracep->declBus(c+977,"araddr", false,-1, 31,0);
    tracep->declBus(c+978,"awaddr", false,-1, 31,0);
    tracep->declBus(c+979,"wdata", false,-1, 31,0);
    tracep->declBus(c+980,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1792,"wvalid", false,-1);
    tracep->declBit(c+981,"flag_waddr", false,-1);
    tracep->declBit(c+982,"flag_wdata", false,-1);
    tracep->declBit(c+983,"flag_rdata", false,-1);
    tracep->declBit(c+984,"flag_raddr", false,-1);
    tracep->declBit(c+1793,"flag_write", false,-1);
    tracep->declBus(c+985,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+986,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+987,"w_delay", false,-1, 4,0);
    tracep->declBus(c+988,"r_delay", false,-1, 4,0);
    tracep->declBus(c+989,"LFSR", false,-1, 4,0);
    tracep->declBit(c+990,"lfsr_in", false,-1);
    tracep->declBus(c+991,"write_box", false,-1, 1,0);
    tracep->declQuad(c+992,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBit(c+1308,"reset_ifu", false,-1);
    tracep->declBus(c+1629,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1692,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1693,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1630,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1694,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1631,"a_in_src_i", false,-1);
    tracep->declBus(c+1632,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1633,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1634,"adder_a_src_i", false,-1);
    tracep->declBit(c+1635,"adder_out_src_i", false,-1);
    tracep->declBus(c+1636,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1637,"MemRead_i", false,-1);
    tracep->declBit(c+1638,"MemWrite_i", false,-1);
    tracep->declBus(c+1639,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1640,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1641,"wb_src_i", false,-1);
    tracep->declBit(c+1642,"csr_write_i", false,-1);
    tracep->declBit(c+1643,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1644,"reg_write_i", false,-1);
    tracep->declBus(c+1645,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+965,"exu_valid_i", false,-1);
    tracep->declBit(c+1318,"exu_ready_o", false,-1);
    tracep->declBus(c+1319,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1320,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1321,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1322,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1309,"npc_o", false,-1, 31,0);
    tracep->declBit(c+1323,"MemRead_o", false,-1);
    tracep->declBit(c+1324,"MemWrite_o", false,-1);
    tracep->declBus(c+1325,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1326,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1327,"wb_src_o", false,-1);
    tracep->declBit(c+1328,"csr_write_o", false,-1);
    tracep->declBit(c+1329,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1330,"reg_write_o", false,-1);
    tracep->declBus(c+1331,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1332,"exu_valid_o", false,-1);
    tracep->declBit(c+1333,"exu_ready_i", false,-1);
    tracep->declBit(c+1334,"npc_valid", false,-1);
    tracep->declBus(c+1346,"pc", false,-1, 31,0);
    tracep->declBus(c+1320,"rs1", false,-1, 31,0);
    tracep->declBus(c+1321,"rs2", false,-1, 31,0);
    tracep->declBus(c+1347,"imm", false,-1, 31,0);
    tracep->declBus(c+1348,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1349,"a_in_src", false,-1);
    tracep->declBus(c+1350,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1351,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1352,"adder_a_src", false,-1);
    tracep->declBit(c+1353,"adder_out_src", false,-1);
    tracep->declBus(c+1354,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1355,"a_in", false,-1, 31,0);
    tracep->declBus(c+1356,"b_in", false,-1, 31,0);
    tracep->declBus(c+1357,"a_out", false,-1, 31,0);
    tracep->declBus(c+1358,"add_out", false,-1, 31,0);
    tracep->declBus(c+1359,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1319,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1309,"npc", false,-1, 31,0);
    tracep->declBit(c+1360,"zero", false,-1);
    tracep->declBus(c+1733,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1794,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1795,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1361,"current_state", false,-1, 1,0);
    tracep->declBus(c+1362,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1355,"a", false,-1, 31,0);
    tracep->declBus(c+1356,"b", false,-1, 31,0);
    tracep->declBus(c+1354,"op", false,-1, 3,0);
    tracep->declBus(c+1319,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1360,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1320,"d0", false,-1, 31,0);
    tracep->declBus(c+1346,"d1", false,-1, 31,0);
    tracep->declBit(c+1349,"sel", false,-1);
    tracep->declBus(c+1355,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1321,"d0", false,-1, 31,0);
    tracep->declBus(c+1347,"d1", false,-1, 31,0);
    tracep->declBus(c+1797,"d2", false,-1, 31,0);
    tracep->declBus(c+1348,"d3", false,-1, 31,0);
    tracep->declBus(c+1350,"sel", false,-1, 1,0);
    tracep->declBus(c+1356,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1357,"a", false,-1, 31,0);
    tracep->declBus(c+1347,"b", false,-1, 31,0);
    tracep->declBus(c+1358,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1346,"d0", false,-1, 31,0);
    tracep->declBus(c+1320,"d1", false,-1, 31,0);
    tracep->declBit(c+1352,"sel", false,-1);
    tracep->declBus(c+1357,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1358,"d0", false,-1, 31,0);
    tracep->declBus(c+1348,"d1", false,-1, 31,0);
    tracep->declBit(c+1353,"sel", false,-1);
    tracep->declBus(c+1359,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1363,"pc4", false,-1, 31,0);
    tracep->declBus(c+1359,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1351,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1360,"zero", false,-1);
    tracep->declBus(c+1319,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1309,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBit(c+1308,"reset_ifu", false,-1);
    tracep->declBus(c+1627,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1628,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1692,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1693,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1427,"a5", false,-1, 31,0);
    tracep->declBus(c+948,"pc_i", false,-1, 31,0);
    tracep->declBus(c+949,"inst_i", false,-1, 31,0);
    tracep->declBit(c+950,"idu_valid_i", false,-1);
    tracep->declBit(c+951,"idu_ready_o", false,-1);
    tracep->declBus(c+1629,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1692,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1693,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1630,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1694,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1631,"a_in_src_o", false,-1);
    tracep->declBus(c+1632,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1633,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1634,"adder_a_src_o", false,-1);
    tracep->declBit(c+1635,"adder_out_src_o", false,-1);
    tracep->declBus(c+1636,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1637,"MemRead_o", false,-1);
    tracep->declBit(c+1638,"MemWrite_o", false,-1);
    tracep->declBus(c+1639,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1640,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1641,"wb_src_o", false,-1);
    tracep->declBit(c+1642,"csr_write_o", false,-1);
    tracep->declBit(c+1643,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1644,"reg_write_o", false,-1);
    tracep->declBus(c+1645,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+965,"idu_valid_o", false,-1);
    tracep->declBit(c+1318,"idu_ready_i", false,-1);
    tracep->declBit(c+1646,"csr_write_i", false,-1);
    tracep->declBus(c+1647,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1464+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+955,"fencei", false,-1);
    tracep->declBus(c+1629,"pc", false,-1, 31,0);
    tracep->declBus(c+1648,"inst", false,-1, 31,0);
    tracep->declBus(c+1649,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1733,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1794,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1795,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+994,"current_state", false,-1, 1,0);
    tracep->declBus(c+1364,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1648,"inst", false,-1, 31,0);
    tracep->declBus(c+1636,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1650,"opcode", false,-1, 6,0);
    tracep->declBus(c+1651,"funct3", false,-1, 2,0);
    tracep->declBus(c+1652,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1646,"wen", false,-1);
    tracep->declBus(c+1648,"inst", false,-1, 31,0);
    tracep->declBus(c+1647,"wdata", false,-1, 31,0);
    tracep->declBus(c+1427,"NO", false,-1, 31,0);
    tracep->declBus(c+1629,"pc", false,-1, 31,0);
    tracep->declBus(c+1694,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1468+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1472,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1473,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1474,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1475,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1798,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1799,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1650,"opcode", false,-1, 6,0);
    tracep->declBus(c+1651,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1648,"inst", false,-1, 31,0);
    tracep->declBit(c+1631,"a_in_src", false,-1);
    tracep->declBus(c+1632,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1644,"reg_write", false,-1);
    tracep->declBus(c+1633,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1634,"adder_a_src", false,-1);
    tracep->declBit(c+1637,"MemRead", false,-1);
    tracep->declBit(c+1638,"MemWrite", false,-1);
    tracep->declBus(c+1649,"wmask", false,-1, 7,0);
    tracep->declBit(c+1641,"wb_src", false,-1);
    tracep->declBus(c+1640,"rmask", false,-1, 2,0);
    tracep->declBit(c+1642,"csr_write", false,-1);
    tracep->declBit(c+1635,"adder_out_src", false,-1);
    tracep->declBit(c+1643,"csr_wdata_src", false,-1);
    tracep->declBus(c+1650,"opcode", false,-1, 6,0);
    tracep->declBus(c+1651,"funct3", false,-1, 2,0);
    tracep->declBus(c+1652,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1796,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1648,"inst", false,-1, 31,0);
    tracep->declBus(c+1630,"data", false,-1, 31,0);
    tracep->declBus(c+1650,"opcode", false,-1, 6,0);
    tracep->declBus(c+1651,"funct3", false,-1, 2,0);
    tracep->declBus(c+1652,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBus(c+952,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1731,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1732,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1724,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1733,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+953,"arvalid_o", false,-1);
    tracep->declBit(c+91,"arready_i", false,-1);
    tracep->declBus(c+92,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+93,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+94,"rlast_i", false,-1);
    tracep->declBus(c+95,"rid_i", false,-1, 3,0);
    tracep->declBit(c+96,"rvalid_i", false,-1);
    tracep->declBit(c+954,"rready_o", false,-1);
    tracep->declBus(c+1309,"npc_i", false,-1, 31,0);
    tracep->declBit(c+1334,"npc_valid", false,-1);
    tracep->declBit(c+1308,"reset_o", false,-1);
    tracep->declBus(c+948,"pc_o", false,-1, 31,0);
    tracep->declBus(c+949,"inst_o", false,-1, 31,0);
    tracep->declBit(c+950,"ifu_valid_o", false,-1);
    tracep->declBit(c+951,"ifu_ready_i", false,-1);
    tracep->declBus(c+995,"pc", false,-1, 31,0);
    tracep->declBus(c+1800,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1801,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1802,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1803,"lfsr_in", false,-1);
    tracep->declBit(c+953,"arvalid", false,-1);
    tracep->declBus(c+952,"araddr", false,-1, 31,0);
    tracep->declBus(c+996,"inst", false,-1, 31,0);
    tracep->declBit(c+954,"rready", false,-1);
    tracep->declBit(c+997,"skip", false,-1);
    tracep->declBus(c+1733,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1794,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1795,"S_ADD", false,-1, 1,0);
    tracep->declBus(c+998,"current_state", false,-1, 1,0);
    tracep->declBus(c+115,"next_state", false,-1, 1,0);
    tracep->declBit(c+1804,"ready_flag", false,-1);
    tracep->declBit(c+999,"arvalid_flag", false,-1);
    tracep->declBit(c+1000,"bus_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBus(c+1319,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1320,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1321,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1322,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBit(c+1323,"MemRead_i", false,-1);
    tracep->declBit(c+1324,"MemWrite_i", false,-1);
    tracep->declBus(c+1325,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1326,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1327,"wb_src_i", false,-1);
    tracep->declBit(c+1328,"csr_write_i", false,-1);
    tracep->declBit(c+1329,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1330,"reg_write_i", false,-1);
    tracep->declBus(c+1331,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1332,"lsu_valid_i", false,-1);
    tracep->declBit(c+1333,"lsu_ready_o", false,-1);
    tracep->declBus(c+1335,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+1336,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1337,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+1338,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+1339,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1340,"wb_src_o", false,-1);
    tracep->declBit(c+1341,"csr_write_o", false,-1);
    tracep->declBit(c+1342,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1343,"reg_write_o", false,-1);
    tracep->declBus(c+1344,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+1345,"lsu_valid_o", false,-1);
    tracep->declBit(c+969,"lsu_ready_i", false,-1);
    tracep->declBus(c+1310,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1731,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1732,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1311,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1733,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+1312,"arvalid_o", false,-1);
    tracep->declBit(c+91,"arready_i", false,-1);
    tracep->declBus(c+97,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+98,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+99,"rlast_i", false,-1);
    tracep->declBus(c+100,"rid_i", false,-1, 3,0);
    tracep->declBit(c+101,"rvalid_i", false,-1);
    tracep->declBit(c+1313,"rready_o", false,-1);
    tracep->declBus(c+1297,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1731,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1732,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+1298,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1733,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+1302,"awvalid_o", false,-1);
    tracep->declBit(c+1597,"awready_i", false,-1);
    tracep->declBus(c+1299,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+1300,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1301,"wlast_o", false,-1);
    tracep->declBit(c+1303,"wvalid_o", false,-1);
    tracep->declBit(c+1598,"wready_i", false,-1);
    tracep->declBus(c+1416,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1415,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1414,"bvalid_i", false,-1);
    tracep->declBit(c+1304,"bready_o", false,-1);
    tracep->declBus(c+1335,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1336,"rs1", false,-1, 31,0);
    tracep->declBus(c+1805,"rs2", false,-1, 31,0);
    tracep->declBus(c+1806,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1339,"rmask", false,-1, 2,0);
    tracep->declBus(c+1365,"wmask", false,-1, 3,0);
    tracep->declBit(c+1366,"flag", false,-1);
    tracep->declBit(c+1807,"wvalid_tmp", false,-1);
    tracep->declBit(c+1312,"arvalid", false,-1);
    tracep->declBus(c+1310,"araddr", false,-1, 31,0);
    tracep->declBit(c+1313,"rready", false,-1);
    tracep->declBus(c+1297,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1302,"awvalid", false,-1);
    tracep->declBus(c+1299,"wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1303,"wvalid", false,-1);
    tracep->declBit(c+1304,"bready", false,-1);
    tracep->declBit(c+1367,"read_mem", false,-1);
    tracep->declBit(c+1368,"write_mem", false,-1);
    tracep->declBus(c+1733,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1794,"S_MEM", false,-1, 1,0);
    tracep->declBus(c+1795,"S_OUT", false,-1, 1,0);
    tracep->declBus(c+1369,"current_state", false,-1, 1,0);
    tracep->declBus(c+1695,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1808,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1796,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBus(c+966,"wdata", false,-1, 31,0);
    tracep->declBus(c+967,"waddr", false,-1, 4,0);
    tracep->declBit(c+968,"wen", false,-1);
    tracep->declBus(c+1627,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1692,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1628,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1693,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1427,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1476+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1508+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBus(c+1335,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+1336,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1337,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+1338,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+1339,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1340,"wb_src_i", false,-1);
    tracep->declBit(c+1341,"csr_write_i", false,-1);
    tracep->declBit(c+1342,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1343,"reg_write_i", false,-1);
    tracep->declBus(c+1344,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+1345,"wbu_valid_i", false,-1);
    tracep->declBit(c+969,"wbu_ready_o", false,-1);
    tracep->declBus(c+1647,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+966,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1646,"csr_write_o", false,-1);
    tracep->declBit(c+968,"reg_write_o", false,-1);
    tracep->declBus(c+967,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1001,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1002,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1003,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1004,"rs1", false,-1, 31,0);
    tracep->declBus(c+1005,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1006,"rmask", false,-1, 2,0);
    tracep->declBit(c+1007,"wb_src", false,-1);
    tracep->declBit(c+1008,"csr_wdata_src", false,-1);
    tracep->declBit(c+1009,"difftest_check", false,-1);
    tracep->declBit(c+1010,"difftest_check_flag", false,-1);
    tracep->declBus(c+1733,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1794,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1795,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1011,"current_state", false,-1, 1,0);
    tracep->declBus(c+1696,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1004,"d0", false,-1, 31,0);
    tracep->declBus(c+1005,"d1", false,-1, 31,0);
    tracep->declBit(c+1008,"sel", false,-1);
    tracep->declBus(c+1647,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1002,"read_data", false,-1, 31,0);
    tracep->declBus(c+1012,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1006,"rmask", false,-1, 2,0);
    tracep->declBus(c+1001,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1013,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1014,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1015,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1016,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1017,"byte3", false,-1, 31,0);
    tracep->declBus(c+1018,"byte2", false,-1, 31,0);
    tracep->declBus(c+1019,"byte1", false,-1, 31,0);
    tracep->declBus(c+1020,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1003,"d0", false,-1, 31,0);
    tracep->declBus(c+1001,"d1", false,-1, 31,0);
    tracep->declBit(c+1007,"sel", false,-1);
    tracep->declBus(c+966,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1691,"rst_n", false,-1);
    tracep->declBus(c+1314,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1731,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1732,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1315,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1733,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1316,"axi_arvalid_i", false,-1);
    tracep->declBit(c+102,"axi_arready_o", false,-1);
    tracep->declBus(c+103,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+104,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+105,"axi_rlast_o", false,-1);
    tracep->declBus(c+106,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+107,"axi_rvalid_o", false,-1);
    tracep->declBit(c+1317,"axi_rready_i", false,-1);
    tracep->declBus(c+1297,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1731,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1732,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1298,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1733,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1302,"axi_awvalid_i", false,-1);
    tracep->declBit(c+1597,"axi_awready_o", false,-1);
    tracep->declBus(c+1299,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1300,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1301,"axi_wlast_i", false,-1);
    tracep->declBit(c+1303,"axi_wvalid_i", false,-1);
    tracep->declBit(c+1598,"axi_wready_o", false,-1);
    tracep->declBus(c+1416,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1415,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1414,"axi_bvalid_o", false,-1);
    tracep->declBit(c+1304,"axi_bready_i", false,-1);
    tracep->declBus(c+38,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+37,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+39,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+40,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+41,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+61,"sram_arvalid_o", false,-1);
    tracep->declBit(c+60,"sram_arready_i", false,-1);
    tracep->declBus(c+617,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+618,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1224,"sram_rlast_i", false,-1);
    tracep->declBus(c+1223,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+1222,"sram_rvalid_i", false,-1);
    tracep->declBit(c+62,"sram_rready_o", false,-1);
    tracep->declBus(c+1297,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1731,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1732,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1298,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1733,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1302,"sram_awvalid_o", false,-1);
    tracep->declBit(c+1597,"sram_awready_i", false,-1);
    tracep->declBus(c+1299,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1300,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1301,"sram_wlast_o", false,-1);
    tracep->declBit(c+1303,"sram_wvalid_o", false,-1);
    tracep->declBit(c+1598,"sram_wready_i", false,-1);
    tracep->declBus(c+1416,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1415,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+1414,"sram_bvalid_i", false,-1);
    tracep->declBit(c+1304,"sram_bready_o", false,-1);
    tracep->declBus(c+108,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+109,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+110,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+111,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+112,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+113,"clint_arvalid_o", false,-1);
    tracep->declBit(c+956,"clint_arready_i", false,-1);
    tracep->declBus(c+957,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+958,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+959,"clint_rlast_i", false,-1);
    tracep->declBus(c+1731,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+960,"clint_rvalid_i", false,-1);
    tracep->declBit(c+114,"clint_rready_o", false,-1);
    tracep->declBus(c+1772,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1773,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1774,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1775,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1776,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1777,"clint_awvalid_o", false,-1);
    tracep->declBit(c+961,"clint_awready_i", false,-1);
    tracep->declBus(c+1778,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1779,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1780,"clint_wlast_o", false,-1);
    tracep->declBit(c+1781,"clint_wvalid_o", false,-1);
    tracep->declBit(c+962,"clint_wready_i", false,-1);
    tracep->declBus(c+963,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1731,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+964,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1782,"clint_bready_o", false,-1);
    tracep->declBit(c+116,"ar_switch", false,-1);
    tracep->declBit(c+117,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"io_d", false,-1);
    tracep->declBit(c+542,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"io_d", false,-1);
    tracep->declBit(c+542,"io_q", false,-1);
    tracep->declBit(c+542,"sync_0", false,-1);
    tracep->declBit(c+543,"sync_1", false,-1);
    tracep->declBit(c+544,"sync_2", false,-1);
    tracep->declBit(c+545,"sync_3", false,-1);
    tracep->declBit(c+546,"sync_4", false,-1);
    tracep->declBit(c+547,"sync_5", false,-1);
    tracep->declBit(c+548,"sync_6", false,-1);
    tracep->declBit(c+549,"sync_7", false,-1);
    tracep->declBit(c+550,"sync_8", false,-1);
    tracep->declBit(c+551,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1117,"auto_in_psel", false,-1);
    tracep->declBit(c+1118,"auto_in_penable", false,-1);
    tracep->declBit(c+1104,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1116,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1103,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+654,"auto_in_pready", false,-1);
    tracep->declBit(c+1729,"auto_in_pslverr", false,-1);
    tracep->declBus(c+655,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1655,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1656,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1657,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1658,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1659,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1660,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1661,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1662,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1663,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1664,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1234,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1117,"in_psel", false,-1);
    tracep->declBit(c+1118,"in_penable", false,-1);
    tracep->declBus(c+1103,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1104,"in_pwrite", false,-1);
    tracep->declBus(c+1105,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+654,"in_pready", false,-1);
    tracep->declBus(c+655,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1729,"in_pslverr", false,-1);
    tracep->declBus(c+1655,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1656,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1657,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1658,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1659,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1660,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1661,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1662,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1663,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1664,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+659,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+655,"rdata", false,-1, 31,0);
    tracep->declBus(c+660,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+654,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+661,"num", false,-1, 3,0);
    tracep->declBus(c+1657,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+662,"num", false,-1, 3,0);
    tracep->declBus(c+1658,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+663,"num", false,-1, 3,0);
    tracep->declBus(c+1659,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+664,"num", false,-1, 3,0);
    tracep->declBus(c+1660,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+665,"num", false,-1, 3,0);
    tracep->declBus(c+1661,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+666,"num", false,-1, 3,0);
    tracep->declBus(c+1662,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+667,"num", false,-1, 3,0);
    tracep->declBus(c+1663,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+668,"num", false,-1, 3,0);
    tracep->declBus(c+1664,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1114,"auto_in_psel", false,-1);
    tracep->declBit(c+1115,"auto_in_penable", false,-1);
    tracep->declBit(c+1104,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1116,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1103,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+121,"auto_in_pready", false,-1);
    tracep->declBit(c+1729,"auto_in_pslverr", false,-1);
    tracep->declBus(c+122,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1665,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1666,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1234,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1114,"in_psel", false,-1);
    tracep->declBit(c+1115,"in_penable", false,-1);
    tracep->declBus(c+1103,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1104,"in_pwrite", false,-1);
    tracep->declBus(c+1105,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+121,"in_pready", false,-1);
    tracep->declBus(c+122,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1729,"in_pslverr", false,-1);
    tracep->declBit(c+1665,"ps2_clk", false,-1);
    tracep->declBit(c+1666,"ps2_data", false,-1);
    tracep->declBus(c+552,"data_r", false,-1, 7,0);
    tracep->declBus(c+553,"old_data", false,-1, 7,0);
    tracep->declBus(c+554,"data_asic", false,-1, 7,0);
    tracep->declBus(c+555,"buffer", false,-1, 7,0);
    tracep->declBit(c+556,"ready", false,-1);
    tracep->declBit(c+557,"nextdata_n", false,-1);
    tracep->declBit(c+558,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1697,"clrn", false,-1);
    tracep->declBit(c+1665,"ps2_clk", false,-1);
    tracep->declBit(c+1666,"ps2_data", false,-1);
    tracep->declBit(c+557,"nextdata_n", false,-1);
    tracep->declBus(c+555,"data", false,-1, 7,0);
    tracep->declBit(c+556,"ready", false,-1);
    tracep->declBit(c+558,"overflow", false,-1);
    tracep->declBus(c+559,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+560+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+568,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+569,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+570,"count", false,-1, 3,0);
    tracep->declBus(c+571,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+572,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1611,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1612,"auto_in_wvalid", false,-1);
    tracep->declBit(c+338,"auto_in_arready", false,-1);
    tracep->declBit(c+69,"auto_in_arvalid", false,-1);
    tracep->declBus(c+29,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+70,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+339,"auto_in_rvalid", false,-1);
    tracep->declBus(c+340,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+341,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+339,"state", false,-1);
    tracep->declBus(c+341,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+340,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+118,"raddr", false,-1, 31,0);
    tracep->declBit(c+119,"ren", false,-1);
    tracep->declBus(c+120,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1119,"auto_in_psel", false,-1);
    tracep->declBit(c+1120,"auto_in_penable", false,-1);
    tracep->declBit(c+1104,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1100,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1683,"auto_in_pready", false,-1);
    tracep->declBit(c+1729,"auto_in_pslverr", false,-1);
    tracep->declBus(c+123,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1676,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1370,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1677,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1100,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1119,"in_psel", false,-1);
    tracep->declBit(c+1120,"in_penable", false,-1);
    tracep->declBus(c+1103,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1104,"in_pwrite", false,-1);
    tracep->declBus(c+1105,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1683,"in_pready", false,-1);
    tracep->declBus(c+123,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1729,"in_pslverr", false,-1);
    tracep->declBit(c+1676,"qspi_sck", false,-1);
    tracep->declBit(c+1370,"qspi_ce_n", false,-1);
    tracep->declBus(c+1677,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1677,"din", false,-1, 3,0);
    tracep->declBus(c+1698,"dout", false,-1, 3,0);
    tracep->declBus(c+1374,"douten", false,-1, 3,0);
    tracep->declBit(c+1699,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1653,"clk_i", false,-1);
    tracep->declBit(c+1654,"rst_i", false,-1);
    tracep->declBus(c+1100,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1105,"dat_i", false,-1, 31,0);
    tracep->declBus(c+123,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1106,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1119,"cyc_i", false,-1);
    tracep->declBit(c+1119,"stb_i", false,-1);
    tracep->declBit(c+1699,"ack_o", false,-1);
    tracep->declBit(c+1104,"we_i", false,-1);
    tracep->declBit(c+1676,"sck", false,-1);
    tracep->declBit(c+1370,"ce_n", false,-1);
    tracep->declBus(c+1677,"din", false,-1, 3,0);
    tracep->declBus(c+1698,"dout", false,-1, 3,0);
    tracep->declBus(c+1374,"douten", false,-1, 3,0);
    tracep->declBus(c+1733,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1794,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1795,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+669,"mr_sck", false,-1);
    tracep->declBit(c+670,"mr_ce_n", false,-1);
    tracep->declBus(c+1677,"mr_din", false,-1, 3,0);
    tracep->declBus(c+671,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+672,"mr_doe", false,-1);
    tracep->declBit(c+673,"mw_sck", false,-1);
    tracep->declBit(c+674,"mw_ce_n", false,-1);
    tracep->declBus(c+1677,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1253,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+675,"mw_doe", false,-1);
    tracep->declBit(c+1375,"mr_rd", false,-1);
    tracep->declBit(c+676,"mr_done", false,-1);
    tracep->declBit(c+1376,"mw_wr", false,-1);
    tracep->declBit(c+1254,"mw_done", false,-1);
    tracep->declBit(c+1119,"wb_valid", false,-1);
    tracep->declBit(c+1235,"wb_we", false,-1);
    tracep->declBit(c+1236,"wb_re", false,-1);
    tracep->declBus(c+1271,"state", false,-1, 1,0);
    tracep->declBus(c+1700,"nstate", false,-1, 1,0);
    tracep->declBus(c+1701,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1702,"qpi_sck", false,-1);
    tracep->declBus(c+1237,"size", false,-1, 2,0);
    tracep->declBus(c+1238,"byte0", false,-1, 7,0);
    tracep->declBus(c+1239,"byte1", false,-1, 7,0);
    tracep->declBus(c+1240,"byte2", false,-1, 7,0);
    tracep->declBus(c+1241,"byte3", false,-1, 7,0);
    tracep->declBus(c+1242,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1697,"rst_n", false,-1);
    tracep->declBus(c+1243,"addr", false,-1, 23,0);
    tracep->declBit(c+1375,"rd", false,-1);
    tracep->declBus(c+1734,"size", false,-1, 2,0);
    tracep->declBit(c+676,"done", false,-1);
    tracep->declBus(c+123,"line", false,-1, 31,0);
    tracep->declBit(c+669,"sck", false,-1);
    tracep->declBit(c+670,"ce_n", false,-1);
    tracep->declBus(c+1677,"din", false,-1, 3,0);
    tracep->declBus(c+671,"dout", false,-1, 3,0);
    tracep->declBit(c+672,"douten", false,-1);
    tracep->declBus(c+1809,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1810,"READ", false,-1, 0,0);
    tracep->declBus(c+1811,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+677,"state", false,-1);
    tracep->declBit(c+1377,"nstate", false,-1);
    tracep->declBus(c+678,"counter", false,-1, 7,0);
    tracep->declBus(c+679,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+573+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1812,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+680,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1697,"rst_n", false,-1);
    tracep->declBus(c+1244,"addr", false,-1, 23,0);
    tracep->declBus(c+1242,"line", false,-1, 31,0);
    tracep->declBus(c+1237,"size", false,-1, 2,0);
    tracep->declBit(c+1376,"wr", false,-1);
    tracep->declBit(c+1254,"done", false,-1);
    tracep->declBit(c+673,"sck", false,-1);
    tracep->declBit(c+674,"ce_n", false,-1);
    tracep->declBus(c+1677,"din", false,-1, 3,0);
    tracep->declBus(c+1253,"dout", false,-1, 3,0);
    tracep->declBit(c+675,"douten", false,-1);
    tracep->declBus(c+1809,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1810,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1245,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+681,"state", false,-1);
    tracep->declBit(c+1378,"nstate", false,-1);
    tracep->declBus(c+682,"counter", false,-1, 7,0);
    tracep->declBus(c+683,"saddr", false,-1, 23,0);
    tracep->declBus(c+1813,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1372,"auto_in_awready", false,-1);
    tracep->declBit(c+1158,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1159,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1160,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1161,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1162,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1163,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1373,"auto_in_wready", false,-1);
    tracep->declBit(c+1164,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1165,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"auto_in_wlast", false,-1);
    tracep->declBit(c+1168,"auto_in_bready", false,-1);
    tracep->declBit(c+1270,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1267,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1733,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1371,"auto_in_arready", false,-1);
    tracep->declBit(c+1151,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1155,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1156,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1157,"auto_in_rready", false,-1);
    tracep->declBit(c+1266,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1267,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1268,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1733,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1269,"auto_in_rlast", false,-1);
    tracep->declBit(c+1678,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1263,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+649,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+650,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+651,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+652,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1679,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1264,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1265,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1290,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1372,"in_awready", false,-1);
    tracep->declBit(c+1158,"in_awvalid", false,-1);
    tracep->declBus(c+1160,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1161,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1162,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1163,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1373,"in_wready", false,-1);
    tracep->declBit(c+1164,"in_wvalid", false,-1);
    tracep->declBus(c+1165,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"in_wlast", false,-1);
    tracep->declBit(c+1168,"in_bready", false,-1);
    tracep->declBit(c+1270,"in_bvalid", false,-1);
    tracep->declBus(c+1733,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1267,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1371,"in_arready", false,-1);
    tracep->declBit(c+1151,"in_arvalid", false,-1);
    tracep->declBus(c+1153,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1152,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1154,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1155,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1156,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1157,"in_rready", false,-1);
    tracep->declBit(c+1266,"in_rvalid", false,-1);
    tracep->declBus(c+1733,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1268,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1269,"in_rlast", false,-1);
    tracep->declBus(c+1267,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1678,"sdram_clk", false,-1);
    tracep->declBit(c+1263,"sdram_cke", false,-1);
    tracep->declBit(c+649,"sdram_cs", false,-1);
    tracep->declBit(c+650,"sdram_ras", false,-1);
    tracep->declBit(c+651,"sdram_cas", false,-1);
    tracep->declBit(c+652,"sdram_we", false,-1);
    tracep->declBus(c+1679,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1264,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1265,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1290,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+684,"sdram_dout_en", false,-1);
    tracep->declBus(c+685,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1653,"clk_i", false,-1);
    tracep->declBit(c+1654,"rst_i", false,-1);
    tracep->declBit(c+1158,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1160,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1159,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1161,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1163,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1164,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1165,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1166,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1167,"inport_wlast_i", false,-1);
    tracep->declBit(c+1168,"inport_bready_i", false,-1);
    tracep->declBit(c+1151,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1153,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1152,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1154,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1156,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1157,"inport_rready_i", false,-1);
    tracep->declBus(c+1290,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1372,"inport_awready_o", false,-1);
    tracep->declBit(c+1373,"inport_wready_o", false,-1);
    tracep->declBit(c+1270,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1733,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1267,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1371,"inport_arready_o", false,-1);
    tracep->declBit(c+1266,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1268,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1733,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1267,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1269,"inport_rlast_o", false,-1);
    tracep->declBit(c+1678,"sdram_clk_o", false,-1);
    tracep->declBit(c+1263,"sdram_cke_o", false,-1);
    tracep->declBit(c+649,"sdram_cs_o", false,-1);
    tracep->declBit(c+650,"sdram_ras_o", false,-1);
    tracep->declBit(c+651,"sdram_cas_o", false,-1);
    tracep->declBit(c+652,"sdram_we_o", false,-1);
    tracep->declBus(c+1265,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1679,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1264,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+685,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+684,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1718,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1814,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1722,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1379,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1380,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1255,"ram_rd_w", false,-1);
    tracep->declBit(c+1272,"ram_accept_w", false,-1);
    tracep->declBus(c+1165,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+686,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1246,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+687,"ram_ack_w", false,-1);
    tracep->declBit(c+1729,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1653,"clk_i", false,-1);
    tracep->declBit(c+1654,"rst_i", false,-1);
    tracep->declBit(c+1158,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1160,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1159,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1161,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1163,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1164,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1165,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1166,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1167,"axi_wlast_i", false,-1);
    tracep->declBit(c+1168,"axi_bready_i", false,-1);
    tracep->declBit(c+1151,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1153,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1152,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1154,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1156,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1157,"axi_rready_i", false,-1);
    tracep->declBit(c+1272,"ram_accept_i", false,-1);
    tracep->declBit(c+687,"ram_ack_i", false,-1);
    tracep->declBit(c+1729,"ram_error_i", false,-1);
    tracep->declBus(c+686,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1372,"axi_awready_o", false,-1);
    tracep->declBit(c+1373,"axi_wready_o", false,-1);
    tracep->declBit(c+1270,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1733,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1267,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1371,"axi_arready_o", false,-1);
    tracep->declBit(c+1266,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1268,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1733,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1267,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1269,"axi_rlast_o", false,-1);
    tracep->declBus(c+1380,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1255,"ram_rd_o", false,-1);
    tracep->declBus(c+1246,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1379,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1165,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+688,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+689,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+690,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+691,"req_rd_q", false,-1);
    tracep->declBit(c+692,"req_wr_q", false,-1);
    tracep->declBus(c+693,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+694,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+695,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+696,"req_prio_q", false,-1);
    tracep->declBit(c+697,"req_hold_rd_q", false,-1);
    tracep->declBit(c+698,"req_hold_wr_q", false,-1);
    tracep->declBit(c+699,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1381,"req_push_w", false,-1);
    tracep->declBus(c+1703,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+700,"req_out_valid_w", false,-1);
    tracep->declBus(c+1273,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1382,"resp_accept_w", false,-1);
    tracep->declBit(c+1704,"resp_is_write_w", false,-1);
    tracep->declBit(c+1705,"resp_is_read_w", false,-1);
    tracep->declBit(c+1269,"resp_is_last_w", false,-1);
    tracep->declBus(c+1267,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+701,"resp_valid_w", false,-1);
    tracep->declBit(c+702,"write_prio_w", false,-1);
    tracep->declBit(c+703,"read_prio_w", false,-1);
    tracep->declBit(c+1256,"write_active_w", false,-1);
    tracep->declBit(c+1255,"read_active_w", false,-1);
    tracep->declBus(c+1379,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1706,"wr_w", false,-1);
    tracep->declBit(c+1255,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1816,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1817,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1815,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1653,"clk_i", false,-1);
    tracep->declBit(c+1654,"rst_i", false,-1);
    tracep->declBus(c+1703,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1381,"push_i", false,-1);
    tracep->declBit(c+1382,"pop_i", false,-1);
    tracep->declBus(c+1273,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+699,"accept_o", false,-1);
    tracep->declBit(c+700,"valid_o", false,-1);
    tracep->declBus(c+1818,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+704+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+708,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+709,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+710,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1796,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1817,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1815,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1653,"clk_i", false,-1);
    tracep->declBit(c+1654,"rst_i", false,-1);
    tracep->declBus(c+686,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+687,"push_i", false,-1);
    tracep->declBit(c+1382,"pop_i", false,-1);
    tracep->declBus(c+1268,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+711,"accept_o", false,-1);
    tracep->declBit(c+701,"valid_o", false,-1);
    tracep->declBus(c+1818,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1274+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1278,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+712,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+713,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1653,"clk_i", false,-1);
    tracep->declBit(c+1654,"rst_i", false,-1);
    tracep->declBus(c+1380,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1255,"inport_rd_i", false,-1);
    tracep->declBus(c+1246,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1379,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1165,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1290,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1272,"inport_accept_o", false,-1);
    tracep->declBit(c+687,"inport_ack_o", false,-1);
    tracep->declBit(c+1729,"inport_error_o", false,-1);
    tracep->declBus(c+686,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1678,"sdram_clk_o", false,-1);
    tracep->declBit(c+1263,"sdram_cke_o", false,-1);
    tracep->declBit(c+649,"sdram_cs_o", false,-1);
    tracep->declBit(c+650,"sdram_ras_o", false,-1);
    tracep->declBit(c+651,"sdram_cas_o", false,-1);
    tracep->declBit(c+652,"sdram_we_o", false,-1);
    tracep->declBus(c+1265,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1679,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1264,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+685,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+684,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1718,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1814,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1722,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1817,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1817,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1819,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1820,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1821,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1822,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1817,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1823,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1824,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1825,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1826,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1827,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1828,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1829,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1731,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1830,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1817,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1731,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1829,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1828,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1824,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1826,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1825,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1827,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1823,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1831,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1832,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1833,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1833,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1796,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1833,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1816,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1379,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1380,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1255,"ram_rd_w", false,-1);
    tracep->declBit(c+1272,"ram_accept_w", false,-1);
    tracep->declBus(c+1165,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+686,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+687,"ram_ack_w", false,-1);
    tracep->declBit(c+1383,"ram_req_w", false,-1);
    tracep->declBus(c+714,"command_q", false,-1, 3,0);
    tracep->declBus(c+1279,"addr_q", false,-1, 12,0);
    tracep->declBus(c+685,"data_q", false,-1, 31,0);
    tracep->declBit(c+715,"data_rd_en_q", false,-1);
    tracep->declBus(c+1265,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1263,"cke_q", false,-1);
    tracep->declBus(c+1264,"bank_q", false,-1, 1,0);
    tracep->declBus(c+686,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+716,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1290,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+717,"refresh_q", false,-1);
    tracep->declBus(c+718,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+719+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1280,"state_q", false,-1, 3,0);
    tracep->declBus(c+1384,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1385,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+723,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+724,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1386,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1387,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1388,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1817,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+725,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1389,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1834,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1281,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+726,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+727,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+728,"idx", false,-1, 31,0);
    tracep->declBus(c+729,"rd_q", false,-1, 3,0);
    tracep->declBit(c+687,"ack_q", false,-1);
    tracep->declArray(c+1282,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1124,"auto_in_psel", false,-1);
    tracep->declBit(c+1125,"auto_in_penable", false,-1);
    tracep->declBit(c+1104,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1113,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1103,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+656,"auto_in_pready", false,-1);
    tracep->declBit(c+657,"auto_in_pslverr", false,-1);
    tracep->declBus(c+658,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+648,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1261,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1262,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1675,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1835,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1836,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1837,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1247,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1124,"in_psel", false,-1);
    tracep->declBit(c+1125,"in_penable", false,-1);
    tracep->declBus(c+1103,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1104,"in_pwrite", false,-1);
    tracep->declBus(c+1105,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+656,"in_pready", false,-1);
    tracep->declBus(c+658,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+657,"in_pslverr", false,-1);
    tracep->declBit(c+648,"spi_sck", false,-1);
    tracep->declBus(c+1261,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1262,"spi_mosi", false,-1);
    tracep->declBit(c+1675,"spi_miso", false,-1);
    tracep->declBit(c+730,"spi_irq_out", false,-1);
    tracep->declBus(c+1838,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1839,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1838,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1840,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1841,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1842,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1731,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1829,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1828,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1824,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1826,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1825,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1827,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1823,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1831,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1832,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1843,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+731,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1257,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+732,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+733,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+734,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+735,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+736,"wb_we_i", false,-1);
    tracep->declBit(c+737,"wb_stb_i", false,-1);
    tracep->declBit(c+738,"wb_cyc_i", false,-1);
    tracep->declBit(c+739,"wb_ack_o", false,-1);
    tracep->declBit(c+1729,"wb_err_o", false,-1);
    tracep->declBit(c+740,"wb_int_o", false,-1);
    tracep->declBit(c+741,"done", false,-1);
    tracep->declBus(c+742,"paddr", false,-1, 31,0);
    tracep->declQuad(c+743,"data", false,-1, 63,0);
    tracep->declBit(c+745,"is_flash_access", false,-1);
    tracep->declBus(c+746,"tmp", false,-1, 31,0);
    tracep->declQuad(c+747,"tmp64", false,-1, 63,0);
    tracep->declBus(c+749,"counter", false,-1, 7,0);
    tracep->declBit(c+750,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1844,"Tp", false,-1, 31,0);
    tracep->declBit(c+1653,"wb_clk_i", false,-1);
    tracep->declBit(c+1654,"wb_rst_i", false,-1);
    tracep->declBus(c+732,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+733,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+734,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+735,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+736,"wb_we_i", false,-1);
    tracep->declBit(c+737,"wb_stb_i", false,-1);
    tracep->declBit(c+738,"wb_cyc_i", false,-1);
    tracep->declBit(c+739,"wb_ack_o", false,-1);
    tracep->declBit(c+1729,"wb_err_o", false,-1);
    tracep->declBit(c+740,"wb_int_o", false,-1);
    tracep->declBus(c+1261,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+648,"sclk_pad_o", false,-1);
    tracep->declBit(c+1262,"mosi_pad_o", false,-1);
    tracep->declBit(c+1675,"miso_pad_i", false,-1);
    tracep->declBus(c+751,"divider", false,-1, 15,0);
    tracep->declBus(c+752,"ctrl", false,-1, 13,0);
    tracep->declBus(c+753,"ss", false,-1, 7,0);
    tracep->declBus(c+754,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+755,"rx", false,-1, 127,0);
    tracep->declBit(c+759,"rx_negedge", false,-1);
    tracep->declBit(c+760,"tx_negedge", false,-1);
    tracep->declBus(c+761,"char_len", false,-1, 6,0);
    tracep->declBit(c+762,"go", false,-1);
    tracep->declBit(c+763,"lsb", false,-1);
    tracep->declBit(c+764,"ie", false,-1);
    tracep->declBit(c+765,"ass", false,-1);
    tracep->declBit(c+766,"spi_divider_sel", false,-1);
    tracep->declBit(c+767,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+768,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+769,"spi_ss_sel", false,-1);
    tracep->declBit(c+770,"tip", false,-1);
    tracep->declBit(c+771,"pos_edge", false,-1);
    tracep->declBit(c+772,"neg_edge", false,-1);
    tracep->declBit(c+773,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1844,"Tp", false,-1, 31,0);
    tracep->declBit(c+1653,"clk_in", false,-1);
    tracep->declBit(c+1654,"rst", false,-1);
    tracep->declBit(c+770,"enable", false,-1);
    tracep->declBit(c+762,"go", false,-1);
    tracep->declBit(c+773,"last_clk", false,-1);
    tracep->declBus(c+751,"divider", false,-1, 15,0);
    tracep->declBit(c+648,"clk_out", false,-1);
    tracep->declBit(c+771,"pos_edge", false,-1);
    tracep->declBit(c+772,"neg_edge", false,-1);
    tracep->declBus(c+774,"cnt", false,-1, 15,0);
    tracep->declBit(c+775,"cnt_zero", false,-1);
    tracep->declBit(c+776,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1844,"Tp", false,-1, 31,0);
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1654,"rst", false,-1);
    tracep->declBus(c+777,"latch", false,-1, 3,0);
    tracep->declBus(c+735,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+761,"len", false,-1, 6,0);
    tracep->declBit(c+763,"lsb", false,-1);
    tracep->declBit(c+762,"go", false,-1);
    tracep->declBit(c+771,"pos_edge", false,-1);
    tracep->declBit(c+772,"neg_edge", false,-1);
    tracep->declBit(c+759,"rx_negedge", false,-1);
    tracep->declBit(c+760,"tx_negedge", false,-1);
    tracep->declBit(c+770,"tip", false,-1);
    tracep->declBit(c+773,"last", false,-1);
    tracep->declBus(c+733,"p_in", false,-1, 31,0);
    tracep->declArray(c+755,"p_out", false,-1, 127,0);
    tracep->declBit(c+648,"s_clk", false,-1);
    tracep->declBit(c+1675,"s_in", false,-1);
    tracep->declBit(c+1262,"s_out", false,-1);
    tracep->declBus(c+778,"cnt", false,-1, 7,0);
    tracep->declArray(c+755,"data", false,-1, 127,0);
    tracep->declBus(c+779,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+780,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+781,"rx_clk", false,-1);
    tracep->declBit(c+782,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1121,"auto_in_psel", false,-1);
    tracep->declBit(c+1122,"auto_in_penable", false,-1);
    tracep->declBit(c+1104,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1116,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1103,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1123,"auto_in_pready", false,-1);
    tracep->declBit(c+1729,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1684,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1673,"uart_rx", false,-1);
    tracep->declBit(c+1674,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1121,"in_psel", false,-1);
    tracep->declBit(c+1122,"in_penable", false,-1);
    tracep->declBus(c+1103,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1123,"in_pready", false,-1);
    tracep->declBit(c+1729,"in_pslverr", false,-1);
    tracep->declBus(c+1234,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1104,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1105,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1673,"uart_rx", false,-1);
    tracep->declBit(c+1674,"uart_tx", false,-1);
    tracep->declBit(c+783,"rtsn", false,-1);
    tracep->declBit(c+1729,"ctsn", false,-1);
    tracep->declBit(c+784,"dtr_pad_o", false,-1);
    tracep->declBit(c+1729,"dsr_pad_i", false,-1);
    tracep->declBit(c+1729,"ri_pad_i", false,-1);
    tracep->declBit(c+1729,"dcd_pad_i", false,-1);
    tracep->declBit(c+785,"interrupt", false,-1);
    tracep->declBit(c+1707,"reg_we", false,-1);
    tracep->declBit(c+1708,"reg_re", false,-1);
    tracep->declBus(c+1248,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1249,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+577,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1258,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+786,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1654,"wb_rst_i", false,-1);
    tracep->declBus(c+1248,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1250,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1258,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1707,"wb_we_i", false,-1);
    tracep->declBit(c+1708,"wb_re_i", false,-1);
    tracep->declBit(c+1674,"stx_pad_o", false,-1);
    tracep->declBit(c+1673,"srx_pad_i", false,-1);
    tracep->declBus(c+1831,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+786,"rts_pad_o", false,-1);
    tracep->declBit(c+784,"dtr_pad_o", false,-1);
    tracep->declBit(c+785,"int_o", false,-1);
    tracep->declBit(c+787,"enable", false,-1);
    tracep->declBit(c+788,"srx_pad", false,-1);
    tracep->declBus(c+789,"ier", false,-1, 3,0);
    tracep->declBus(c+790,"iir", false,-1, 3,0);
    tracep->declBus(c+791,"fcr", false,-1, 1,0);
    tracep->declBus(c+792,"mcr", false,-1, 4,0);
    tracep->declBus(c+793,"lcr", false,-1, 7,0);
    tracep->declBus(c+794,"msr", false,-1, 7,0);
    tracep->declBus(c+795,"dl", false,-1, 15,0);
    tracep->declBus(c+796,"scratch", false,-1, 7,0);
    tracep->declBit(c+797,"start_dlc", false,-1);
    tracep->declBit(c+798,"lsr_mask_d", false,-1);
    tracep->declBit(c+799,"msi_reset", false,-1);
    tracep->declBus(c+800,"dlc", false,-1, 15,0);
    tracep->declBus(c+801,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+802,"rx_reset", false,-1);
    tracep->declBit(c+803,"tx_reset", false,-1);
    tracep->declBit(c+804,"dlab", false,-1);
    tracep->declBit(c+1730,"cts_pad_i", false,-1);
    tracep->declBit(c+1729,"dsr_pad_i", false,-1);
    tracep->declBit(c+1729,"ri_pad_i", false,-1);
    tracep->declBit(c+1729,"dcd_pad_i", false,-1);
    tracep->declBit(c+805,"loopback", false,-1);
    tracep->declBit(c+1729,"cts", false,-1);
    tracep->declBit(c+1730,"dsr", false,-1);
    tracep->declBit(c+1730,"ri", false,-1);
    tracep->declBit(c+1730,"dcd", false,-1);
    tracep->declBit(c+806,"cts_c", false,-1);
    tracep->declBit(c+807,"dsr_c", false,-1);
    tracep->declBit(c+808,"ri_c", false,-1);
    tracep->declBit(c+809,"dcd_c", false,-1);
    tracep->declBus(c+810,"lsr", false,-1, 7,0);
    tracep->declBit(c+811,"lsr0", false,-1);
    tracep->declBit(c+812,"lsr1", false,-1);
    tracep->declBit(c+813,"lsr2", false,-1);
    tracep->declBit(c+814,"lsr3", false,-1);
    tracep->declBit(c+815,"lsr4", false,-1);
    tracep->declBit(c+816,"lsr5", false,-1);
    tracep->declBit(c+817,"lsr6", false,-1);
    tracep->declBit(c+818,"lsr7", false,-1);
    tracep->declBit(c+819,"lsr0r", false,-1);
    tracep->declBit(c+820,"lsr1r", false,-1);
    tracep->declBit(c+821,"lsr2r", false,-1);
    tracep->declBit(c+822,"lsr3r", false,-1);
    tracep->declBit(c+823,"lsr4r", false,-1);
    tracep->declBit(c+824,"lsr5r", false,-1);
    tracep->declBit(c+825,"lsr6r", false,-1);
    tracep->declBit(c+826,"lsr7r", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+827,"rls_int", false,-1);
    tracep->declBit(c+828,"rda_int", false,-1);
    tracep->declBit(c+829,"ti_int", false,-1);
    tracep->declBit(c+830,"thre_int", false,-1);
    tracep->declBit(c+831,"ms_int", false,-1);
    tracep->declBit(c+832,"tf_push", false,-1);
    tracep->declBit(c+833,"rf_pop", false,-1);
    tracep->declBus(c+1709,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+834,"rf_error_bit", false,-1);
    tracep->declBit(c+812,"rf_overrun", false,-1);
    tracep->declBit(c+835,"rf_push_pulse", false,-1);
    tracep->declBus(c+836,"rf_count", false,-1, 4,0);
    tracep->declBus(c+837,"tf_count", false,-1, 4,0);
    tracep->declBus(c+838,"tstate", false,-1, 2,0);
    tracep->declBus(c+839,"rstate", false,-1, 3,0);
    tracep->declBus(c+840,"counter_t", false,-1, 9,0);
    tracep->declBit(c+841,"thre_set_en", false,-1);
    tracep->declBus(c+842,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+843,"block_value", false,-1, 7,0);
    tracep->declBit(c+844,"serial_out", false,-1);
    tracep->declBit(c+845,"serial_in", false,-1);
    tracep->declBit(c+23,"lsr_mask_condition", false,-1);
    tracep->declBit(c+24,"iir_read", false,-1);
    tracep->declBit(c+25,"msr_read", false,-1);
    tracep->declBit(c+26,"fifo_read", false,-1);
    tracep->declBit(c+27,"fifo_write", false,-1);
    tracep->declBus(c+846,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+847,"lsr0_d", false,-1);
    tracep->declBit(c+848,"lsr1_d", false,-1);
    tracep->declBit(c+849,"lsr2_d", false,-1);
    tracep->declBit(c+850,"lsr3_d", false,-1);
    tracep->declBit(c+851,"lsr4_d", false,-1);
    tracep->declBit(c+852,"lsr5_d", false,-1);
    tracep->declBit(c+853,"lsr6_d", false,-1);
    tracep->declBit(c+854,"lsr7_d", false,-1);
    tracep->declBit(c+855,"rls_int_d", false,-1);
    tracep->declBit(c+856,"thre_int_d", false,-1);
    tracep->declBit(c+857,"ms_int_d", false,-1);
    tracep->declBit(c+858,"ti_int_d", false,-1);
    tracep->declBit(c+859,"rda_int_d", false,-1);
    tracep->declBit(c+860,"rls_int_rise", false,-1);
    tracep->declBit(c+861,"thre_int_rise", false,-1);
    tracep->declBit(c+862,"ms_int_rise", false,-1);
    tracep->declBit(c+863,"ti_int_rise", false,-1);
    tracep->declBit(c+864,"rda_int_rise", false,-1);
    tracep->declBit(c+865,"rls_int_pnd", false,-1);
    tracep->declBit(c+866,"rda_int_pnd", false,-1);
    tracep->declBit(c+867,"thre_int_pnd", false,-1);
    tracep->declBit(c+868,"ms_int_pnd", false,-1);
    tracep->declBit(c+869,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1844,"Tp", false,-1, 31,0);
    tracep->declBus(c+1844,"width", false,-1, 31,0);
    tracep->declBus(c+1810,"init_value", false,-1, 0,0);
    tracep->declBit(c+1654,"rst_i", false,-1);
    tracep->declBit(c+1653,"clk_i", false,-1);
    tracep->declBit(c+1729,"stage1_rst_i", false,-1);
    tracep->declBit(c+1730,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1673,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+788,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+870,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1654,"wb_rst_i", false,-1);
    tracep->declBus(c+793,"lcr", false,-1, 7,0);
    tracep->declBit(c+833,"rf_pop", false,-1);
    tracep->declBit(c+845,"srx_pad_i", false,-1);
    tracep->declBit(c+787,"enable", false,-1);
    tracep->declBit(c+802,"rx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBus(c+840,"counter_t", false,-1, 9,0);
    tracep->declBus(c+836,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1709,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+812,"rf_overrun", false,-1);
    tracep->declBit(c+834,"rf_error_bit", false,-1);
    tracep->declBus(c+839,"rstate", false,-1, 3,0);
    tracep->declBit(c+835,"rf_push_pulse", false,-1);
    tracep->declBus(c+871,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+872,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+873,"rshift", false,-1, 7,0);
    tracep->declBit(c+874,"rparity", false,-1);
    tracep->declBit(c+875,"rparity_error", false,-1);
    tracep->declBit(c+876,"rframing_error", false,-1);
    tracep->declBit(c+877,"rbit_in", false,-1);
    tracep->declBit(c+878,"rparity_xor", false,-1);
    tracep->declBus(c+879,"counter_b", false,-1, 7,0);
    tracep->declBit(c+880,"rf_push_q", false,-1);
    tracep->declBus(c+881,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+882,"rf_push", false,-1);
    tracep->declBit(c+883,"break_error", false,-1);
    tracep->declBit(c+884,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+885,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+886,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+887,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1731,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1829,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1828,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1824,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1826,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1825,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1827,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1823,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1831,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1832,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1845,"sr_push", false,-1, 3,0);
    tracep->declBus(c+888,"toc_value", false,-1, 9,0);
    tracep->declBus(c+889,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1846,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1847,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1817,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1808,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1654,"wb_rst_i", false,-1);
    tracep->declBit(c+835,"push", false,-1);
    tracep->declBit(c+833,"pop", false,-1);
    tracep->declBus(c+881,"data_in", false,-1, 10,0);
    tracep->declBit(c+802,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1709,"data_out", false,-1, 10,0);
    tracep->declBit(c+812,"overrun", false,-1);
    tracep->declBus(c+836,"count", false,-1, 4,0);
    tracep->declBit(c+834,"error_bit", false,-1);
    tracep->declBus(c+1710,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+890+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+906,"top", false,-1, 3,0);
    tracep->declBus(c+907,"bottom", false,-1, 3,0);
    tracep->declBus(c+908,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+909,"word0", false,-1, 2,0);
    tracep->declBus(c+910,"word1", false,-1, 2,0);
    tracep->declBus(c+911,"word2", false,-1, 2,0);
    tracep->declBus(c+912,"word3", false,-1, 2,0);
    tracep->declBus(c+913,"word4", false,-1, 2,0);
    tracep->declBus(c+914,"word5", false,-1, 2,0);
    tracep->declBus(c+915,"word6", false,-1, 2,0);
    tracep->declBus(c+916,"word7", false,-1, 2,0);
    tracep->declBus(c+917,"word8", false,-1, 2,0);
    tracep->declBus(c+918,"word9", false,-1, 2,0);
    tracep->declBus(c+919,"word10", false,-1, 2,0);
    tracep->declBus(c+920,"word11", false,-1, 2,0);
    tracep->declBus(c+921,"word12", false,-1, 2,0);
    tracep->declBus(c+922,"word13", false,-1, 2,0);
    tracep->declBus(c+923,"word14", false,-1, 2,0);
    tracep->declBus(c+924,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1817,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1837,"data_width", false,-1, 31,0);
    tracep->declBus(c+1847,"depth", false,-1, 31,0);
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+835,"we", false,-1);
    tracep->declBus(c+906,"a", false,-1, 3,0);
    tracep->declBus(c+907,"dpra", false,-1, 3,0);
    tracep->declBus(c+925,"di", false,-1, 7,0);
    tracep->declBus(c+1710,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+578+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1654,"wb_rst_i", false,-1);
    tracep->declBus(c+793,"lcr", false,-1, 7,0);
    tracep->declBit(c+832,"tf_push", false,-1);
    tracep->declBus(c+1250,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+787,"enable", false,-1);
    tracep->declBit(c+803,"tx_reset", false,-1);
    tracep->declBit(c+22,"lsr_mask", false,-1);
    tracep->declBit(c+844,"stx_pad_o", false,-1);
    tracep->declBus(c+838,"tstate", false,-1, 2,0);
    tracep->declBus(c+837,"tf_count", false,-1, 4,0);
    tracep->declBus(c+926,"counter", false,-1, 4,0);
    tracep->declBus(c+927,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+928,"shift_out", false,-1, 6,0);
    tracep->declBit(c+929,"stx_o_tmp", false,-1);
    tracep->declBit(c+930,"parity_xor", false,-1);
    tracep->declBit(c+931,"tf_pop", false,-1);
    tracep->declBit(c+932,"bit_out", false,-1);
    tracep->declBus(c+1250,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1259,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+933,"tf_overrun", false,-1);
    tracep->declBus(c+1723,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1720,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1724,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1725,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1734,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1735,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1837,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1847,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1817,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1808,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+1654,"wb_rst_i", false,-1);
    tracep->declBit(c+832,"push", false,-1);
    tracep->declBit(c+931,"pop", false,-1);
    tracep->declBus(c+1250,"data_in", false,-1, 7,0);
    tracep->declBit(c+803,"fifo_reset", false,-1);
    tracep->declBit(c+22,"reset_status", false,-1);
    tracep->declBus(c+1259,"data_out", false,-1, 7,0);
    tracep->declBit(c+933,"overrun", false,-1);
    tracep->declBus(c+837,"count", false,-1, 4,0);
    tracep->declBus(c+934,"top", false,-1, 3,0);
    tracep->declBus(c+935,"bottom", false,-1, 3,0);
    tracep->declBus(c+936,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1817,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1837,"data_width", false,-1, 31,0);
    tracep->declBus(c+1847,"depth", false,-1, 31,0);
    tracep->declBit(c+1653,"clk", false,-1);
    tracep->declBit(c+832,"we", false,-1);
    tracep->declBus(c+934,"a", false,-1, 3,0);
    tracep->declBus(c+935,"dpra", false,-1, 3,0);
    tracep->declBus(c+1250,"di", false,-1, 7,0);
    tracep->declBus(c+1259,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+594+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBit(c+1111,"auto_in_psel", false,-1);
    tracep->declBit(c+1112,"auto_in_penable", false,-1);
    tracep->declBit(c+1104,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1113,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1103,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+653,"auto_in_pready", false,-1);
    tracep->declBit(c+1727,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1728,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1667,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1668,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1670,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1671,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1672,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1653,"clock", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1247,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1111,"in_psel", false,-1);
    tracep->declBit(c+1112,"in_penable", false,-1);
    tracep->declBus(c+1103,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1104,"in_pwrite", false,-1);
    tracep->declBus(c+1105,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1106,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+653,"in_pready", false,-1);
    tracep->declBus(c+1728,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1727,"in_pslverr", false,-1);
    tracep->declBus(c+1667,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1668,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1670,"vga_hsync", false,-1);
    tracep->declBit(c+1671,"vga_vsync", false,-1);
    tracep->declBit(c+1672,"vga_valid", false,-1);
    tracep->declBus(c+937,"h_addr", false,-1, 9,0);
    tracep->declBus(c+610,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1260,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1251,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+653,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1653,"pclk", false,-1);
    tracep->declBit(c+1654,"reset", false,-1);
    tracep->declBus(c+1260,"vga_data", false,-1, 23,0);
    tracep->declBus(c+937,"h_addr", false,-1, 9,0);
    tracep->declBus(c+610,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1670,"hsync", false,-1);
    tracep->declBit(c+1671,"vsync", false,-1);
    tracep->declBit(c+1672,"valid", false,-1);
    tracep->declBus(c+1667,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1668,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1669,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1848,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1849,"h_active", false,-1, 31,0);
    tracep->declBus(c+1850,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1851,"h_total", false,-1, 31,0);
    tracep->declBus(c+1815,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1852,"v_active", false,-1, 31,0);
    tracep->declBus(c+1853,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1854,"v_total", false,-1, 31,0);
    tracep->declBus(c+938,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+611,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+939,"h_valid", false,-1);
    tracep->declBit(c+612,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+648,"sck", false,-1);
    tracep->declBit(c+1285,"ss", false,-1);
    tracep->declBit(c+1262,"mosi", false,-1);
    tracep->declBit(c+1087,"miso", false,-1);
    tracep->declBus(c+1088,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1089,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1711,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+648,"sck", false,-1);
    tracep->declBit(c+1286,"ss", false,-1);
    tracep->declBit(c+1262,"mosi", false,-1);
    tracep->declBit(c+1712,"miso", false,-1);
    tracep->declBit(c+1286,"reset", false,-1);
    tracep->declBus(c+1081,"state", false,-1, 2,0);
    tracep->declBus(c+1082,"counter", false,-1, 7,0);
    tracep->declBus(c+1083,"cmd", false,-1, 7,0);
    tracep->declBus(c+1084,"addr", false,-1, 23,0);
    tracep->declBus(c+1085,"data", false,-1, 31,0);
    tracep->declBit(c+1086,"ren", false,-1);
    tracep->declBus(c+1713,"rdata", false,-1, 31,0);
    tracep->declBus(c+1714,"raddr", false,-1, 31,0);
    tracep->declBus(c+1090,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+648,"clock", false,-1);
    tracep->declBit(c+1086,"valid", false,-1);
    tracep->declBus(c+1083,"cmd", false,-1, 7,0);
    tracep->declBus(c+1714,"addr", false,-1, 31,0);
    tracep->declBus(c+1713,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1676,"sck", false,-1);
    tracep->declBit(c+1370,"ce_n", false,-1);
    tracep->declBus(c+1677,"dio", false,-1, 3,0);
    tracep->declBus(c+638,"dio_out", false,-1, 3,0);
    tracep->declBus(c+639,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1677,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1785,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1844,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1815,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1818,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1817,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1808,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+640,"state", false,-1, 2,0);
    tracep->declBus(c+1715,"next_state", false,-1, 2,0);
    tracep->declBus(c+641,"counter", false,-1, 7,0);
    tracep->declBus(c+642,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+643,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+644,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+645,"is_read_op", false,-1);
    tracep->declBit(c+646,"is_write_op", false,-1);
    tracep->declBus(c+647,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1716,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1678,"clk", false,-1);
    tracep->declBit(c+1263,"cke", false,-1);
    tracep->declBit(c+649,"cs", false,-1);
    tracep->declBit(c+650,"ras", false,-1);
    tracep->declBit(c+651,"cas", false,-1);
    tracep->declBit(c+652,"we", false,-1);
    tracep->declBus(c+1679,"a", false,-1, 13,0);
    tracep->declBus(c+1264,"ba", false,-1, 1,0);
    tracep->declBus(c+1265,"dqm", false,-1, 3,0);
    tracep->declBus(c+1290,"dq", false,-1, 31,0);
    tracep->declBit(c+940,"cs_0", false,-1);
    tracep->declBit(c+941,"ras_0", false,-1);
    tracep->declBit(c+942,"cas_0", false,-1);
    tracep->declBit(c+943,"we_0", false,-1);
    tracep->declBit(c+944,"cs_1", false,-1);
    tracep->declBit(c+945,"ras_1", false,-1);
    tracep->declBit(c+946,"cas_1", false,-1);
    tracep->declBit(c+947,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1678,"clk", false,-1);
    tracep->declBit(c+1263,"cke", false,-1);
    tracep->declBit(c+944,"cs", false,-1);
    tracep->declBit(c+945,"ras", false,-1);
    tracep->declBit(c+946,"cas", false,-1);
    tracep->declBit(c+947,"we", false,-1);
    tracep->declBus(c+1279,"a", false,-1, 12,0);
    tracep->declBus(c+1264,"ba", false,-1, 1,0);
    tracep->declBus(c+1265,"dqm", false,-1, 3,0);
    tracep->declBus(c+1290,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1678,"clk", false,-1);
    tracep->declBit(c+1263,"cke", false,-1);
    tracep->declBit(c+944,"cs", false,-1);
    tracep->declBit(c+945,"ras", false,-1);
    tracep->declBit(c+946,"cas", false,-1);
    tracep->declBit(c+947,"we", false,-1);
    tracep->declBus(c+1279,"a", false,-1, 12,0);
    tracep->declBus(c+1264,"ba", false,-1, 1,0);
    tracep->declBus(c+1287,"dqm", false,-1, 1,0);
    tracep->declBus(c+1291,"dq", false,-1, 15,0);
    tracep->declBus(c+1828,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1829,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1823,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1855,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1824,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1825,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1826,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1731,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1021,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1022,"bl", false,-1, 2,0);
    tracep->declBus(c+1390,"command", false,-1, 3,0);
    tracep->declBus(c+1023,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1024,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1288,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1025,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1292,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1026,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1027+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1856,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1031,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1857,"state", false,-1, 2,0);
    tracep->declBit(c+1032,"write_brust", false,-1);
    tracep->declBus(c+1033,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1034,"read_burst", false,-1);
    tracep->declBit(c+1858,"flag", false,-1);
    tracep->declBus(c+1035,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1678,"clk", false,-1);
    tracep->declBit(c+1263,"cke", false,-1);
    tracep->declBit(c+944,"cs", false,-1);
    tracep->declBit(c+945,"ras", false,-1);
    tracep->declBit(c+946,"cas", false,-1);
    tracep->declBit(c+947,"we", false,-1);
    tracep->declBus(c+1279,"a", false,-1, 12,0);
    tracep->declBus(c+1264,"ba", false,-1, 1,0);
    tracep->declBus(c+1289,"dqm", false,-1, 1,0);
    tracep->declBus(c+1293,"dq", false,-1, 15,0);
    tracep->declBus(c+1828,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1829,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1823,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1855,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1824,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1825,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1826,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1731,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1036,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1037,"bl", false,-1, 2,0);
    tracep->declBus(c+1390,"command", false,-1, 3,0);
    tracep->declBus(c+1038,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1039,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1288,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1040,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1294,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1041,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1042+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1859,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1046,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1860,"state", false,-1, 2,0);
    tracep->declBit(c+1047,"write_brust", false,-1);
    tracep->declBus(c+1048,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1049,"read_burst", false,-1);
    tracep->declBit(c+1861,"flag", false,-1);
    tracep->declBus(c+1050,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1678,"clk", false,-1);
    tracep->declBit(c+1263,"cke", false,-1);
    tracep->declBit(c+940,"cs", false,-1);
    tracep->declBit(c+941,"ras", false,-1);
    tracep->declBit(c+942,"cas", false,-1);
    tracep->declBit(c+943,"we", false,-1);
    tracep->declBus(c+1279,"a", false,-1, 12,0);
    tracep->declBus(c+1264,"ba", false,-1, 1,0);
    tracep->declBus(c+1265,"dqm", false,-1, 3,0);
    tracep->declBus(c+1290,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1678,"clk", false,-1);
    tracep->declBit(c+1263,"cke", false,-1);
    tracep->declBit(c+940,"cs", false,-1);
    tracep->declBit(c+941,"ras", false,-1);
    tracep->declBit(c+942,"cas", false,-1);
    tracep->declBit(c+943,"we", false,-1);
    tracep->declBus(c+1279,"a", false,-1, 12,0);
    tracep->declBus(c+1264,"ba", false,-1, 1,0);
    tracep->declBus(c+1287,"dqm", false,-1, 1,0);
    tracep->declBus(c+1291,"dq", false,-1, 15,0);
    tracep->declBus(c+1828,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1829,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1823,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1855,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1824,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1825,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1826,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1731,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1051,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1052,"bl", false,-1, 2,0);
    tracep->declBus(c+1391,"command", false,-1, 3,0);
    tracep->declBus(c+1053,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1054,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1288,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1055,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1295,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1056,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1057+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1862,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1061,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1863,"state", false,-1, 2,0);
    tracep->declBit(c+1062,"write_brust", false,-1);
    tracep->declBus(c+1063,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1064,"read_burst", false,-1);
    tracep->declBit(c+1864,"flag", false,-1);
    tracep->declBus(c+1065,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1678,"clk", false,-1);
    tracep->declBit(c+1263,"cke", false,-1);
    tracep->declBit(c+940,"cs", false,-1);
    tracep->declBit(c+941,"ras", false,-1);
    tracep->declBit(c+942,"cas", false,-1);
    tracep->declBit(c+943,"we", false,-1);
    tracep->declBus(c+1279,"a", false,-1, 12,0);
    tracep->declBus(c+1264,"ba", false,-1, 1,0);
    tracep->declBus(c+1289,"dqm", false,-1, 1,0);
    tracep->declBus(c+1293,"dq", false,-1, 15,0);
    tracep->declBus(c+1828,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1829,"CMD_AUTO_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1823,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1855,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1824,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1825,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1826,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1731,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1066,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1067,"bl", false,-1, 2,0);
    tracep->declBus(c+1391,"command", false,-1, 3,0);
    tracep->declBus(c+1068,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1069,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1288,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1070,"r_col_addr", false,-1, 8,0);
    tracep->declBus(c+1296,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1071,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1072+i*1,"bank_active_raw", true,(i+0), 12,0);
    }
    tracep->declBus(c+1865,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1076,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1866,"state", false,-1, 2,0);
    tracep->declBit(c+1077,"write_brust", false,-1);
    tracep->declBus(c+1078,"last_cmd", false,-1, 3,0);
    tracep->declBit(c+1079,"read_burst", false,-1);
    tracep->declBit(c+1867,"flag", false,-1);
    tracep->declBus(c+1080,"dout", false,-1, 15,0);
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
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+118,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+123,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+124,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+125,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+126,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+127,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+128,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+129,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+130,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+131,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+132,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+134,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+135,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+136,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+137,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+138,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+153,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+154,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+157,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+158,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+159,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+160,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+228,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+229,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+230,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+231,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+233,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+235,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+260,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+261,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+338,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+342,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+343,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+418,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+478,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+482,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+498,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+502,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+506,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+510,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+514,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+518,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+522,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+526,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+530,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+534,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+538,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+572,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullIData(oldp+613,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+614,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+615,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullIData(oldp+617,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+618,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+619,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+620,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+622,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+623,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+624,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+625,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+626,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+627,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+628,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+629,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+630,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+631,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+632,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+633,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+634,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+635,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+636,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+637,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+649,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+650,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+651,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+652,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+661,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+662,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+663,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+664,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+665,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+666,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+667,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+668,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+671,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+672,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+675,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+676,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+680,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+684,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+699,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+700,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+701,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+702,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+703,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+711,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+746,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+747,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+761,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+762,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+763,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+764,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+765,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+766,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+767,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+769,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+773,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+775,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+776,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+779,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+783,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+784,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+786,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+804,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+805,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+806,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+807,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+808,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+809,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+810,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+813,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+814,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+815,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+834,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+841,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+860,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+861,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+862,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+863,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+864,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+883,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+884,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+885,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+886,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+887,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+889,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+908,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+925,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+936,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+940,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+941,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+942,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+943,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullBit(oldp+944,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+945,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+946,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+947,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    bufp->fullIData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullIData(oldp+966,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bus_busy));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+990,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__skip));
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__bus_busy));
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1012,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1013,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1014,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1015,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1016,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1017,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1018,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1019,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1020,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1021,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1022,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1036,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1037,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1051,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1052,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__last_cmd),4);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1066,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1067,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),9);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),13);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),13);
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),13);
    bufp->fullSData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),13);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__last_cmd),4);
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1086,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1093,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1113,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1116,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1120,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1128,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1131,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1138,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize),3);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullSData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_rd),10);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[0]),32);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[1]),32);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[2]),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[3]),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[4]),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[5]),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[6]),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_rd[7]),32);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[0]),4);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[1]),4);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[2]),4);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[3]),4);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[4]),4);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[5]),4);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[6]),4);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid[7]),4);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[0]),32);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[1]),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[2]),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[3]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[4]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[5]),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[6]),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata[7]),32);
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[0]),2);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[1]),2);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[2]),2);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[3]),2);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[4]),2);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[5]),2);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[6]),2);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp[7]),2);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[0]));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[1]));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[2]));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[3]));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[4]));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[5]));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[6]));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast[7]));
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen),8);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize),3);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst),2);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_counter),3);
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlen),3);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd),3);
    bufp->fullSData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__request_counter_wt),10);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wait_counter_wt),32);
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid));
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid),4);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp),2);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt),3);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1225,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullIData(oldp+1234,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1240,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1241,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1242,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1243,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullIData(oldp+1244,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1245,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullIData(oldp+1247,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1248,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1251,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1267,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+1269,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullSData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1285,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1287,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1288,((0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),9);
    bufp->fullCData(oldp+1289,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1291,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1293,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr),32);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb),4);
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset_ifu));
    bufp->fullIData(oldp+1309,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+1322,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_valid));
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1357,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1358,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1360,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1363,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wmask),4);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__read_mem));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__write_mem));
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullCData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w),32);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1386,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1387,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1388,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+1395,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+1416,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullSData(oldp+1417,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid)))),16);
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullSData(oldp+1426,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullBit(oldp+1540,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1541,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1542,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1543,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1544,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1545,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1546,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1547,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1548,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1549,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1550,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1551,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1552,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1553,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1554,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1555,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1562,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1565,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1590,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1591,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1592,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1594,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1595,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1598,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1616,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+1627,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1628,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1639,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1645,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1650,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1651,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1652,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1653,(vlSelf->clock));
    bufp->fullBit(oldp+1654,(vlSelf->reset));
    bufp->fullSData(oldp+1655,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1656,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1657,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1658,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1659,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1660,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1661,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1662,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1663,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1664,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1665,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1666,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1667,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1668,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1669,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1670,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1671,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1672,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1673,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1674,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1675,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1676,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1678,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1679,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1680,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1681,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                              | (IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+1682,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullBit(oldp+1683,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1685,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_rd))
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
    bufp->fullCData(oldp+1686,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state_wt))
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
    bufp->fullBit(oldp+1687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast)))));
    bufp->fullBit(oldp+1689,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1690,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullIData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1694,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1695,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu))
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu))
                                         ? 1U : 2U)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                     ? (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast)) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready)))
                                         ? 2U : 1U)
                                     : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                             ? 0U : 2U)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state))))),2);
    bufp->fullCData(oldp+1696,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu))
                                     ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                     ? 2U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))
                                              ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state))))),2);
    bufp->fullBit(oldp+1697,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1698,((0xfU & vlSelf->__VdfgTmp_h81912a5e__0)),4);
    bufp->fullBit(oldp+1699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1700,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullCData(oldp+1703,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1704,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1705,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1709,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1712,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1713,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1714,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1717,(0x226U),32);
    bufp->fullIData(oldp+1718,(0x64U),32);
    bufp->fullIData(oldp+1719,(0x200U),32);
    bufp->fullCData(oldp+1720,(1U),3);
    bufp->fullIData(oldp+1721,(0xb00U),32);
    bufp->fullIData(oldp+1722,(9U),32);
    bufp->fullCData(oldp+1723,(0U),3);
    bufp->fullCData(oldp+1724,(2U),3);
    bufp->fullCData(oldp+1725,(3U),3);
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1729,(0U));
    bufp->fullBit(oldp+1730,(1U));
    bufp->fullCData(oldp+1731,(0U),4);
    bufp->fullCData(oldp+1732,(0U),8);
    bufp->fullCData(oldp+1733,(0U),2);
    bufp->fullCData(oldp+1734,(4U),3);
    bufp->fullCData(oldp+1735,(5U),3);
    bufp->fullCData(oldp+1736,(6U),3);
    bufp->fullCData(oldp+1737,(7U),3);
    bufp->fullSData(oldp+1738,(1U),16);
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1755,(0U),32);
    bufp->fullBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_exu_to_lsu),32);
    bufp->fullIData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullIData(oldp+1785,(0U),32);
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1794,(1U),2);
    bufp->fullCData(oldp+1795,(2U),2);
    bufp->fullIData(oldp+1796,(0x20U),32);
    bufp->fullIData(oldp+1797,(4U),32);
    bufp->fullIData(oldp+1798,(0x79737978U),32);
    bufp->fullIData(oldp+1799,(0x17e3c19U),32);
    bufp->fullCData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullBit(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullIData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+1808,(5U),32);
    bufp->fullBit(oldp+1809,(0U));
    bufp->fullBit(oldp+1810,(1U));
    bufp->fullCData(oldp+1811,(0x1bU),8);
    bufp->fullCData(oldp+1812,(0xebU),8);
    bufp->fullCData(oldp+1813,(0x38U),8);
    bufp->fullIData(oldp+1814,(0x18U),32);
    bufp->fullIData(oldp+1815,(2U),32);
    bufp->fullIData(oldp+1816,(6U),32);
    bufp->fullIData(oldp+1817,(4U),32);
    bufp->fullIData(oldp+1818,(3U),32);
    bufp->fullIData(oldp+1819,(0xdU),32);
    bufp->fullIData(oldp+1820,(0x2000U),32);
    bufp->fullIData(oldp+1821,(0x2710U),32);
    bufp->fullIData(oldp+1822,(0x30cU),32);
    bufp->fullCData(oldp+1823,(7U),4);
    bufp->fullCData(oldp+1824,(3U),4);
    bufp->fullCData(oldp+1825,(5U),4);
    bufp->fullCData(oldp+1826,(4U),4);
    bufp->fullCData(oldp+1827,(6U),4);
    bufp->fullCData(oldp+1828,(2U),4);
    bufp->fullCData(oldp+1829,(1U),4);
    bufp->fullSData(oldp+1830,(0x20U),13);
    bufp->fullCData(oldp+1831,(8U),4);
    bufp->fullCData(oldp+1832,(9U),4);
    bufp->fullIData(oldp+1833,(0xaU),32);
    bufp->fullIData(oldp+1834,(0x11U),32);
    bufp->fullIData(oldp+1835,(0x30000000U),32);
    bufp->fullIData(oldp+1836,(0x3fffffffU),32);
    bufp->fullIData(oldp+1837,(8U),32);
    bufp->fullCData(oldp+1838,(4U),5);
    bufp->fullCData(oldp+1839,(0U),5);
    bufp->fullCData(oldp+1840,(0x10U),5);
    bufp->fullCData(oldp+1841,(0x14U),5);
    bufp->fullCData(oldp+1842,(0x18U),5);
    bufp->fullIData(oldp+1843,(0x3000000U),32);
    bufp->fullIData(oldp+1844,(1U),32);
    bufp->fullCData(oldp+1845,(0xaU),4);
    bufp->fullIData(oldp+1846,(0xbU),32);
    bufp->fullIData(oldp+1847,(0x10U),32);
    bufp->fullIData(oldp+1848,(0x60U),32);
    bufp->fullIData(oldp+1849,(0x90U),32);
    bufp->fullIData(oldp+1850,(0x310U),32);
    bufp->fullIData(oldp+1851,(0x320U),32);
    bufp->fullIData(oldp+1852,(0x23U),32);
    bufp->fullIData(oldp+1853,(0x203U),32);
    bufp->fullIData(oldp+1854,(0x20dU),32);
    bufp->fullIData(oldp+1855,(0x400000U),32);
    bufp->fullCData(oldp+1856,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1858,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1859,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1860,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1861,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__flag));
    bufp->fullCData(oldp+1862,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1863,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullBit(oldp+1864,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__flag));
    bufp->fullCData(oldp+1865,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1866,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
    bufp->fullBit(oldp+1867,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__flag));
}
