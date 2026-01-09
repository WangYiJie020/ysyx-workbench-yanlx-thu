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
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1486,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1487,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1488,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1489,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1490,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1491,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1492,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1493,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1494,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1495,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1496,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1497,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1498,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1499,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1500,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1501,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1502,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1503,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1504,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1505,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1486,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1487,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1488,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1489,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1490,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1491,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1492,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1493,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1494,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1495,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1496,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1497,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1498,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1499,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1500,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1501,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1502,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1503,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1504,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1505,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+591,"spi_sck", false,-1);
    tracep->declBus(c+1326,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1327,"spi_mosi", false,-1);
    tracep->declBit(c+1506,"spi_miso", false,-1);
    tracep->declBit(c+1504,"uart_rx", false,-1);
    tracep->declBit(c+1505,"uart_tx", false,-1);
    tracep->declBit(c+1507,"psram_sck", false,-1);
    tracep->declBit(c+1465,"psram_ce_n", false,-1);
    tracep->declBus(c+1508,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1509,"sdram_clk", false,-1);
    tracep->declBit(c+1328,"sdram_cke", false,-1);
    tracep->declBit(c+592,"sdram_cs", false,-1);
    tracep->declBit(c+593,"sdram_ras", false,-1);
    tracep->declBit(c+594,"sdram_cas", false,-1);
    tracep->declBit(c+595,"sdram_we", false,-1);
    tracep->declBus(c+1510,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1329,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1330,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1481,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1486,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1487,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1488,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1489,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1490,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1491,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1492,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1493,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1494,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1495,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1496,"ps2_clk", false,-1);
    tracep->declBit(c+1497,"ps2_data", false,-1);
    tracep->declBus(c+1498,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1499,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1500,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1501,"vga_hsync", false,-1);
    tracep->declBit(c+1502,"vga_vsync", false,-1);
    tracep->declBit(c+1503,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1545,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1546,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1547,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1370,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1371,"in_psel", false,-1);
    tracep->declBit(c+1372,"in_penable", false,-1);
    tracep->declBus(c+1548,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1373,"in_pwrite", false,-1);
    tracep->declBus(c+1374,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1375,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1376,"in_pready", false,-1);
    tracep->declBus(c+1377,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1378,"in_pslverr", false,-1);
    tracep->declBus(c+1379,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1380,"out_psel", false,-1);
    tracep->declBit(c+1381,"out_penable", false,-1);
    tracep->declBus(c+1382,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1383,"out_pwrite", false,-1);
    tracep->declBus(c+1384,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1466,"out_pready", false,-1);
    tracep->declBus(c+1511,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+851,"out_pslverr", false,-1);
    tracep->declBus(c+1549,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1550,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1551,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1548,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1552,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+1553,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1386,"reg_prdata", false,-1, 31,0);
    tracep->declBus(c+1387,"request_counter", false,-1, 9,0);
    tracep->declBus(c+1388,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1389,"state", false,-1, 2,0);
    tracep->declBus(c+1512,"next_state", false,-1, 2,0);
    tracep->declBit(c+1554,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1380,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1381,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1466,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+851,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1511,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1390,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1391,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+596,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1555,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+1459,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1392,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1393,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1394,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+597,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1556,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1557,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1395,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1396,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1397,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+109,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1555,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1398,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1399,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1400,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1397,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+598,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1555,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1460,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1401,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1402,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1513,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1555,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1403,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1404,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1405,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1397,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1406,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1555,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1514,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1407,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1408,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1394,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+599,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+600,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1461,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1409,"sel_0", false,-1);
    tracep->declBit(c+1410,"sel_1", false,-1);
    tracep->declBit(c+1411,"sel_2", false,-1);
    tracep->declBit(c+1412,"sel_3", false,-1);
    tracep->declBit(c+1413,"sel_4", false,-1);
    tracep->declBit(c+1414,"sel_5", false,-1);
    tracep->declBit(c+1415,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1416,"auto_in_awready", false,-1);
    tracep->declBit(c+110,"auto_in_awvalid", false,-1);
    tracep->declBus(c+111,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+112,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+113,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+114,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1416,"auto_in_wready", false,-1);
    tracep->declBit(c+115,"auto_in_wvalid", false,-1);
    tracep->declBus(c+116,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+118,"auto_in_bready", false,-1);
    tracep->declBit(c+1417,"auto_in_bvalid", false,-1);
    tracep->declBus(c+119,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1418,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1419,"auto_in_arready", false,-1);
    tracep->declBit(c+120,"auto_in_arvalid", false,-1);
    tracep->declBus(c+121,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+123,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+124,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+125,"auto_in_rready", false,-1);
    tracep->declBit(c+1420,"auto_in_rvalid", false,-1);
    tracep->declBus(c+126,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1515,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1418,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1371,"auto_out_psel", false,-1);
    tracep->declBit(c+1372,"auto_out_penable", false,-1);
    tracep->declBit(c+1373,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1374,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1375,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1376,"auto_out_pready", false,-1);
    tracep->declBit(c+1378,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1377,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1372,"nodeOut_penable", false,-1);
    tracep->declBus(c+1421,"state", false,-1, 1,0);
    tracep->declBit(c+1419,"accept_read", false,-1);
    tracep->declBit(c+1416,"accept_write", false,-1);
    tracep->declBit(c+127,"is_write_r", false,-1);
    tracep->declBit(c+1373,"is_write", false,-1);
    tracep->declBus(c+126,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+119,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+128,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+129,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+130,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+131,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1422,"resp", false,-1, 1,0);
    tracep->declBus(c+132,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1418,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1420,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+133,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1417,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+134,"auto_in_awready", false,-1);
    tracep->declBit(c+1262,"auto_in_awvalid", false,-1);
    tracep->declBus(c+135,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1263,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1264,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+137,"auto_in_wready", false,-1);
    tracep->declBit(c+1265,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"auto_in_wlast", false,-1);
    tracep->declBit(c+546,"auto_in_bready", false,-1);
    tracep->declBit(c+138,"auto_in_bvalid", false,-1);
    tracep->declBus(c+139,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_in_arready", false,-1);
    tracep->declBit(c+22,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+142,"auto_in_rvalid", false,-1);
    tracep->declBus(c+143,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+145,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+146,"auto_in_rlast", false,-1);
    tracep->declBit(c+1416,"auto_out_awready", false,-1);
    tracep->declBit(c+110,"auto_out_awvalid", false,-1);
    tracep->declBus(c+111,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+112,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+113,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+114,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1416,"auto_out_wready", false,-1);
    tracep->declBit(c+115,"auto_out_wvalid", false,-1);
    tracep->declBus(c+116,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+117,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+118,"auto_out_bready", false,-1);
    tracep->declBit(c+1417,"auto_out_bvalid", false,-1);
    tracep->declBus(c+119,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1418,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1419,"auto_out_arready", false,-1);
    tracep->declBit(c+120,"auto_out_arvalid", false,-1);
    tracep->declBus(c+121,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+123,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+124,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+125,"auto_out_rready", false,-1);
    tracep->declBit(c+1420,"auto_out_rvalid", false,-1);
    tracep->declBus(c+126,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1515,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1418,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+118,"io_enq_ready", false,-1);
    tracep->declBit(c+1417,"io_enq_valid", false,-1);
    tracep->declBus(c+119,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1418,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+546,"io_deq_ready", false,-1);
    tracep->declBit(c+138,"io_deq_valid", false,-1);
    tracep->declBus(c+139,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+140,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+147,"wrap", false,-1);
    tracep->declBit(c+148,"wrap_1", false,-1);
    tracep->declBit(c+149,"maybe_full", false,-1);
    tracep->declBit(c+150,"ptr_match", false,-1);
    tracep->declBit(c+151,"empty", false,-1);
    tracep->declBit(c+152,"full", false,-1);
    tracep->declBit(c+1423,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+148,"R0_addr", false,-1);
    tracep->declBit(c+1558,"R0_en", false,-1);
    tracep->declBit(c+1484,"R0_clk", false,-1);
    tracep->declBus(c+153,"R0_data", false,-1, 5,0);
    tracep->declBit(c+147,"W0_addr", false,-1);
    tracep->declBit(c+1423,"W0_en", false,-1);
    tracep->declBit(c+1484,"W0_clk", false,-1);
    tracep->declBus(c+1516,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+154+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+156,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+125,"io_enq_ready", false,-1);
    tracep->declBit(c+1420,"io_enq_valid", false,-1);
    tracep->declBus(c+126,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1515,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1418,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+142,"io_deq_valid", false,-1);
    tracep->declBus(c+143,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+144,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+145,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+146,"io_deq_bits_last", false,-1);
    tracep->declBit(c+157,"wrap", false,-1);
    tracep->declBit(c+158,"wrap_1", false,-1);
    tracep->declBit(c+159,"maybe_full", false,-1);
    tracep->declBit(c+160,"ptr_match", false,-1);
    tracep->declBit(c+161,"empty", false,-1);
    tracep->declBit(c+162,"full", false,-1);
    tracep->declBit(c+1424,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+158,"R0_addr", false,-1);
    tracep->declBit(c+1558,"R0_en", false,-1);
    tracep->declBit(c+1484,"R0_clk", false,-1);
    tracep->declQuad(c+163,"R0_data", false,-1, 38,0);
    tracep->declBit(c+157,"W0_addr", false,-1);
    tracep->declBit(c+1424,"W0_en", false,-1);
    tracep->declBit(c+1484,"W0_clk", false,-1);
    tracep->declQuad(c+1517,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+165+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+169,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+141,"io_enq_ready", false,-1);
    tracep->declBit(c+22,"io_enq_valid", false,-1);
    tracep->declBus(c+23,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+24,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+25,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+26,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1419,"io_deq_ready", false,-1);
    tracep->declBit(c+120,"io_deq_valid", false,-1);
    tracep->declBus(c+121,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+122,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+123,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+124,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+170,"wrap", false,-1);
    tracep->declBit(c+171,"wrap_1", false,-1);
    tracep->declBit(c+172,"maybe_full", false,-1);
    tracep->declBit(c+173,"ptr_match", false,-1);
    tracep->declBit(c+174,"empty", false,-1);
    tracep->declBit(c+175,"full", false,-1);
    tracep->declBit(c+27,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+171,"R0_addr", false,-1);
    tracep->declBit(c+1558,"R0_en", false,-1);
    tracep->declBit(c+1484,"R0_clk", false,-1);
    tracep->declQuad(c+176,"R0_data", false,-1, 46,0);
    tracep->declBit(c+170,"W0_addr", false,-1);
    tracep->declBit(c+27,"W0_en", false,-1);
    tracep->declBit(c+1484,"W0_clk", false,-1);
    tracep->declQuad(c+28,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+178+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+182,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+134,"io_enq_ready", false,-1);
    tracep->declBit(c+1262,"io_enq_valid", false,-1);
    tracep->declBus(c+135,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1263,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1264,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+136,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1416,"io_deq_ready", false,-1);
    tracep->declBit(c+110,"io_deq_valid", false,-1);
    tracep->declBus(c+111,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+112,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+113,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+114,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+183,"wrap", false,-1);
    tracep->declBit(c+184,"wrap_1", false,-1);
    tracep->declBit(c+185,"maybe_full", false,-1);
    tracep->declBit(c+186,"ptr_match", false,-1);
    tracep->declBit(c+187,"empty", false,-1);
    tracep->declBit(c+188,"full", false,-1);
    tracep->declBit(c+1269,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+184,"R0_addr", false,-1);
    tracep->declBit(c+1558,"R0_en", false,-1);
    tracep->declBit(c+1484,"R0_clk", false,-1);
    tracep->declQuad(c+189,"R0_data", false,-1, 46,0);
    tracep->declBit(c+183,"W0_addr", false,-1);
    tracep->declBit(c+1269,"W0_en", false,-1);
    tracep->declBit(c+1484,"W0_clk", false,-1);
    tracep->declQuad(c+547,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+191+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+195,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+137,"io_enq_ready", false,-1);
    tracep->declBit(c+1265,"io_enq_valid", false,-1);
    tracep->declBus(c+1266,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1267,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1268,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1416,"io_deq_ready", false,-1);
    tracep->declBit(c+115,"io_deq_valid", false,-1);
    tracep->declBus(c+116,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+117,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+196,"wrap", false,-1);
    tracep->declBit(c+197,"wrap_1", false,-1);
    tracep->declBit(c+198,"maybe_full", false,-1);
    tracep->declBit(c+199,"ptr_match", false,-1);
    tracep->declBit(c+200,"empty", false,-1);
    tracep->declBit(c+201,"full", false,-1);
    tracep->declBit(c+1270,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+197,"R0_addr", false,-1);
    tracep->declBit(c+1558,"R0_en", false,-1);
    tracep->declBit(c+1484,"R0_clk", false,-1);
    tracep->declQuad(c+202,"R0_data", false,-1, 35,0);
    tracep->declBit(c+196,"W0_addr", false,-1);
    tracep->declBit(c+1270,"W0_en", false,-1);
    tracep->declBit(c+1484,"W0_clk", false,-1);
    tracep->declQuad(c+1271,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+204+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+208,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+209,"auto_in_awready", false,-1);
    tracep->declBit(c+860,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1559,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+861,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+862,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_in_wready", false,-1);
    tracep->declBit(c+863,"auto_in_wvalid", false,-1);
    tracep->declBus(c+864,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+865,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_in_wlast", false,-1);
    tracep->declBit(c+867,"auto_in_bready", false,-1);
    tracep->declBit(c+211,"auto_in_bvalid", false,-1);
    tracep->declBus(c+212,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1147,"auto_in_arready", false,-1);
    tracep->declBit(c+30,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_in_rready", false,-1);
    tracep->declBit(c+214,"auto_in_rvalid", false,-1);
    tracep->declBus(c+215,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+218,"auto_in_rlast", false,-1);
    tracep->declBit(c+1273,"auto_out_awready", false,-1);
    tracep->declBit(c+1274,"auto_out_awvalid", false,-1);
    tracep->declBus(c+135,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1263,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1264,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1275,"auto_out_wready", false,-1);
    tracep->declBit(c+1276,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"auto_out_wlast", false,-1);
    tracep->declBit(c+1277,"auto_out_bready", false,-1);
    tracep->declBit(c+220,"auto_out_bvalid", false,-1);
    tracep->declBus(c+212,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+222,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+37,"auto_out_arready", false,-1);
    tracep->declBit(c+38,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+36,"auto_out_rready", false,-1);
    tracep->declBit(c+214,"auto_out_rvalid", false,-1);
    tracep->declBus(c+215,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+223,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+224,"auto_out_rlast", false,-1);
    tracep->declBit(c+1276,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+225,"w_idle", false,-1);
    tracep->declBit(c+1278,"in_awready", false,-1);
    tracep->declBit(c+226,"busy", false,-1);
    tracep->declBus(c+227,"r_addr", false,-1, 31,0);
    tracep->declBus(c+228,"r_len", false,-1, 7,0);
    tracep->declBus(c+40,"len", false,-1, 7,0);
    tracep->declBus(c+41,"addr", false,-1, 31,0);
    tracep->declBit(c+229,"busy_1", false,-1);
    tracep->declBus(c+230,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+231,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+232,"len_1", false,-1, 7,0);
    tracep->declBus(c+1279,"addr_1", false,-1, 31,0);
    tracep->declBit(c+233,"wbeats_latched", false,-1);
    tracep->declBit(c+1274,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1280,"wbeats_valid", false,-1);
    tracep->declBus(c+234,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1281,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1268,"w_last", false,-1);
    tracep->declBit(c+1277,"nodeOut_bready", false,-1);
    tracep->declBus(c+235,"error_0", false,-1, 1,0);
    tracep->declBus(c+236,"error_1", false,-1, 1,0);
    tracep->declBus(c+237,"error_2", false,-1, 1,0);
    tracep->declBus(c+238,"error_3", false,-1, 1,0);
    tracep->declBus(c+239,"error_4", false,-1, 1,0);
    tracep->declBus(c+240,"error_5", false,-1, 1,0);
    tracep->declBus(c+241,"error_6", false,-1, 1,0);
    tracep->declBus(c+242,"error_7", false,-1, 1,0);
    tracep->declBus(c+243,"error_8", false,-1, 1,0);
    tracep->declBus(c+244,"error_9", false,-1, 1,0);
    tracep->declBus(c+245,"error_10", false,-1, 1,0);
    tracep->declBus(c+246,"error_11", false,-1, 1,0);
    tracep->declBus(c+247,"error_12", false,-1, 1,0);
    tracep->declBus(c+248,"error_13", false,-1, 1,0);
    tracep->declBus(c+249,"error_14", false,-1, 1,0);
    tracep->declBus(c+250,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1147,"io_enq_ready", false,-1);
    tracep->declBit(c+30,"io_enq_valid", false,-1);
    tracep->declBus(c+31,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+32,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+33,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+34,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+35,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+42,"io_deq_ready", false,-1);
    tracep->declBit(c+38,"io_deq_valid", false,-1);
    tracep->declBus(c+23,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+43,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+44,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+25,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+26,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+251,"ram", false,-1, 48,0);
    tracep->declBit(c+1148,"full", false,-1);
    tracep->declBit(c+38,"io_deq_valid_0", false,-1);
    tracep->declBit(c+45,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+209,"io_enq_ready", false,-1);
    tracep->declBit(c+860,"io_enq_valid", false,-1);
    tracep->declBus(c+1559,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+861,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1560,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+862,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1561,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1282,"io_deq_ready", false,-1);
    tracep->declBit(c+1283,"io_deq_valid", false,-1);
    tracep->declBus(c+135,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1284,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+253,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1264,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+136,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+254,"ram", false,-1, 48,0);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+1283,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1285,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+863,"io_enq_valid", false,-1);
    tracep->declBus(c+864,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+865,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+866,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1286,"io_deq_ready", false,-1);
    tracep->declBit(c+1287,"io_deq_valid", false,-1);
    tracep->declBus(c+1266,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1267,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1519,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+257,"ram", false,-1, 36,0);
    tracep->declBit(c+259,"full", false,-1);
    tracep->declBit(c+1287,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1288,"do_enq", false,-1);
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
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1289,"auto_in_awready", false,-1);
    tracep->declBit(c+1290,"auto_in_awvalid", false,-1);
    tracep->declBus(c+135,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1291,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1292,"auto_in_wready", false,-1);
    tracep->declBit(c+1293,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_in_bready", false,-1);
    tracep->declBit(c+260,"auto_in_bvalid", false,-1);
    tracep->declBus(c+261,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+262,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+49,"auto_in_rready", false,-1);
    tracep->declBit(c+263,"auto_in_rvalid", false,-1);
    tracep->declBus(c+264,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"nodeIn_arready", false,-1);
    tracep->declBit(c+1289,"nodeIn_awready", false,-1);
    tracep->declBit(c+1295,"w_sel0", false,-1);
    tracep->declBit(c+260,"w_full", false,-1);
    tracep->declBus(c+261,"w_id", false,-1, 3,0);
    tracep->declBit(c+267,"r_sel1", false,-1);
    tracep->declBit(c+268,"w_sel1", false,-1);
    tracep->declBit(c+263,"r_full", false,-1);
    tracep->declBus(c+264,"r_id", false,-1, 3,0);
    tracep->declBit(c+50,"ren", false,-1);
    tracep->declBit(c+269,"rdata_REG", false,-1);
    tracep->declBus(c+270,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+271,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+272,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+273,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+51,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+50,"R0_en", false,-1);
    tracep->declBit(c+1484,"R0_clk", false,-1);
    tracep->declBus(c+274,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1296,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1297,"W0_en", false,-1);
    tracep->declBit(c+1484,"W0_clk", false,-1);
    tracep->declBus(c+1266,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1267,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+209,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+860,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1559,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+861,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+862,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+863,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+864,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+865,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+867,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+211,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+212,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1147,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+214,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+215,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+218,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+209,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+860,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1559,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+861,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+862,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+863,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+864,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+865,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+867,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+211,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+212,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1147,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+214,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+215,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+218,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1298,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1299,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+135,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1263,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1264,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1275,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1276,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1277,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+220,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+212,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+53,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+214,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+215,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+224,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1289,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1290,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+135,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1291,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1292,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1293,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+260,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+261,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+262,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+47,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+49,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+263,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+264,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1300,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1301,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+275,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+276,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+277,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+278,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+134,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1262,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+135,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1263,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1264,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+137,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1265,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+546,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+138,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+139,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+142,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+143,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+145,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+146,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+220,"in_0_bvalid", false,-1);
    tracep->declBit(c+214,"in_0_rvalid", false,-1);
    tracep->declBit(c+1302,"in_0_wready", false,-1);
    tracep->declBit(c+1303,"in_0_awready", false,-1);
    tracep->declBit(c+52,"in_0_arready", false,-1);
    tracep->declBit(c+1298,"anonIn_awready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+58,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1304,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1305,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1306,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+59,"arSel", false,-1, 15,0);
    tracep->declBus(c+279,"awSel", false,-1, 15,0);
    tracep->declBus(c+280,"rSel", false,-1, 15,0);
    tracep->declBus(c+281,"bSel", false,-1, 15,0);
    tracep->declBit(c+282,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+283,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+284,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+285,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+286,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+287,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+288,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+289,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+290,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+291,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+292,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+293,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+294,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+295,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+296,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+297,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+298,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+299,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+300,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+301,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+302,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+303,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+304,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+305,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+306,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+307,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+308,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+309,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+310,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+311,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+312,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+313,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+314,"latched", false,-1);
    tracep->declBit(c+1307,"in_0_awvalid", false,-1);
    tracep->declBit(c+1308,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1309,"in_0_wvalid", false,-1);
    tracep->declBit(c+315,"idle_3", false,-1);
    tracep->declBit(c+316,"anyValid", false,-1);
    tracep->declBus(c+317,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+318,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+319,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+320,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+321,"prefixOR_1", false,-1);
    tracep->declBit(c+322,"winner_3_1", false,-1);
    tracep->declBit(c+323,"winner_3_2", false,-1);
    tracep->declBit(c+324,"state_3_0", false,-1);
    tracep->declBit(c+325,"state_3_1", false,-1);
    tracep->declBit(c+326,"state_3_2", false,-1);
    tracep->declBit(c+327,"muxState_3_0", false,-1);
    tracep->declBit(c+328,"muxState_3_1", false,-1);
    tracep->declBit(c+329,"muxState_3_2", false,-1);
    tracep->declBit(c+330,"idle_4", false,-1);
    tracep->declBit(c+331,"anyValid_1", false,-1);
    tracep->declBus(c+332,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+333,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+334,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+335,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+336,"winner_4_0", false,-1);
    tracep->declBit(c+337,"winner_4_2", false,-1);
    tracep->declBit(c+338,"state_4_0", false,-1);
    tracep->declBit(c+339,"state_4_2", false,-1);
    tracep->declBit(c+340,"muxState_4_0", false,-1);
    tracep->declBit(c+341,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+342,"io_enq_ready", false,-1);
    tracep->declBit(c+1308,"io_enq_valid", false,-1);
    tracep->declBus(c+1310,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1311,"io_deq_ready", false,-1);
    tracep->declBit(c+1312,"io_deq_valid", false,-1);
    tracep->declBus(c+1313,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+343,"wrap", false,-1);
    tracep->declBit(c+344,"wrap_1", false,-1);
    tracep->declBit(c+345,"maybe_full", false,-1);
    tracep->declBit(c+346,"ptr_match", false,-1);
    tracep->declBit(c+347,"empty", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+1312,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1314,"do_deq", false,-1);
    tracep->declBit(c+1315,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+344,"R0_addr", false,-1);
    tracep->declBit(c+1558,"R0_en", false,-1);
    tracep->declBit(c+1484,"R0_clk", false,-1);
    tracep->declBus(c+349,"R0_data", false,-1, 2,0);
    tracep->declBit(c+343,"W0_addr", false,-1);
    tracep->declBit(c+1315,"W0_en", false,-1);
    tracep->declBit(c+1484,"W0_clk", false,-1);
    tracep->declBus(c+1310,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+350+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1273,"auto_in_awready", false,-1);
    tracep->declBit(c+1274,"auto_in_awvalid", false,-1);
    tracep->declBus(c+135,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1263,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1264,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1275,"auto_in_wready", false,-1);
    tracep->declBit(c+1276,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"auto_in_wlast", false,-1);
    tracep->declBit(c+1277,"auto_in_bready", false,-1);
    tracep->declBit(c+220,"auto_in_bvalid", false,-1);
    tracep->declBus(c+212,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+222,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+37,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+36,"auto_in_rready", false,-1);
    tracep->declBit(c+214,"auto_in_rvalid", false,-1);
    tracep->declBus(c+215,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+223,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+224,"auto_in_rlast", false,-1);
    tracep->declBit(c+1298,"auto_out_awready", false,-1);
    tracep->declBit(c+1299,"auto_out_awvalid", false,-1);
    tracep->declBus(c+135,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1263,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1264,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1275,"auto_out_wready", false,-1);
    tracep->declBit(c+1276,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"auto_out_wlast", false,-1);
    tracep->declBit(c+1277,"auto_out_bready", false,-1);
    tracep->declBit(c+220,"auto_out_bvalid", false,-1);
    tracep->declBus(c+212,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_out_arready", false,-1);
    tracep->declBit(c+53,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_out_rready", false,-1);
    tracep->declBit(c+214,"auto_out_rvalid", false,-1);
    tracep->declBus(c+215,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+224,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBit(c+358,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+358,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+359,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBit(c+366,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+365,"full", false,-1);
    tracep->declBit(c+366,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+66,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+67,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+550,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+552,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+554,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+556,"io_deq_ready", false,-1);
    tracep->declBit(c+397,"io_deq_valid", false,-1);
    tracep->declBit(c+398,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->declBit(c+398,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+399,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+400,"io_enq_ready", false,-1);
    tracep->declBit(c+68,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+401,"io_deq_valid", false,-1);
    tracep->declBit(c+402,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+401,"full", false,-1);
    tracep->declBit(c+402,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+403,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+404,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+558,"io_deq_ready", false,-1);
    tracep->declBit(c+405,"io_deq_valid", false,-1);
    tracep->declBit(c+406,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+405,"full", false,-1);
    tracep->declBit(c+406,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+407,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+408,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+560,"io_deq_ready", false,-1);
    tracep->declBit(c+409,"io_deq_valid", false,-1);
    tracep->declBit(c+410,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+409,"full", false,-1);
    tracep->declBit(c+410,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+411,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+412,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+562,"io_deq_ready", false,-1);
    tracep->declBit(c+413,"io_deq_valid", false,-1);
    tracep->declBit(c+414,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+413,"full", false,-1);
    tracep->declBit(c+414,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+415,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+416,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+564,"io_deq_ready", false,-1);
    tracep->declBit(c+417,"io_deq_valid", false,-1);
    tracep->declBit(c+418,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+417,"full", false,-1);
    tracep->declBit(c+418,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+419,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+420,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+566,"io_deq_ready", false,-1);
    tracep->declBit(c+421,"io_deq_valid", false,-1);
    tracep->declBit(c+422,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+421,"full", false,-1);
    tracep->declBit(c+422,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+423,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+424,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+568,"io_deq_ready", false,-1);
    tracep->declBit(c+425,"io_deq_valid", false,-1);
    tracep->declBit(c+426,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+425,"full", false,-1);
    tracep->declBit(c+426,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+427,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+428,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+570,"io_deq_ready", false,-1);
    tracep->declBit(c+429,"io_deq_valid", false,-1);
    tracep->declBit(c+430,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+429,"full", false,-1);
    tracep->declBit(c+430,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+431,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+432,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+572,"io_deq_ready", false,-1);
    tracep->declBit(c+433,"io_deq_valid", false,-1);
    tracep->declBit(c+434,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+433,"full", false,-1);
    tracep->declBit(c+434,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+435,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+436,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+574,"io_deq_ready", false,-1);
    tracep->declBit(c+437,"io_deq_valid", false,-1);
    tracep->declBit(c+438,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+437,"full", false,-1);
    tracep->declBit(c+438,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+439,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+576,"io_deq_ready", false,-1);
    tracep->declBit(c+441,"io_deq_valid", false,-1);
    tracep->declBit(c+442,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+441,"full", false,-1);
    tracep->declBit(c+442,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+443,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+444,"io_enq_ready", false,-1);
    tracep->declBit(c+69,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+445,"io_deq_valid", false,-1);
    tracep->declBit(c+446,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+445,"full", false,-1);
    tracep->declBit(c+446,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+447,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+448,"io_enq_ready", false,-1);
    tracep->declBit(c+577,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+578,"io_deq_ready", false,-1);
    tracep->declBit(c+449,"io_deq_valid", false,-1);
    tracep->declBit(c+450,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+449,"full", false,-1);
    tracep->declBit(c+450,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+452,"io_enq_ready", false,-1);
    tracep->declBit(c+579,"io_enq_valid", false,-1);
    tracep->declBit(c+219,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+580,"io_deq_ready", false,-1);
    tracep->declBit(c+453,"io_deq_valid", false,-1);
    tracep->declBit(c+454,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+453,"full", false,-1);
    tracep->declBit(c+454,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+455,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+456,"io_enq_ready", false,-1);
    tracep->declBit(c+70,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+457,"io_deq_valid", false,-1);
    tracep->declBit(c+458,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+457,"full", false,-1);
    tracep->declBit(c+458,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+459,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+460,"io_enq_ready", false,-1);
    tracep->declBit(c+71,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+461,"io_deq_valid", false,-1);
    tracep->declBit(c+462,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+461,"full", false,-1);
    tracep->declBit(c+462,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+463,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+464,"io_enq_ready", false,-1);
    tracep->declBit(c+72,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+465,"io_deq_valid", false,-1);
    tracep->declBit(c+466,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+465,"full", false,-1);
    tracep->declBit(c+466,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+467,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+468,"io_enq_ready", false,-1);
    tracep->declBit(c+73,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+469,"io_deq_valid", false,-1);
    tracep->declBit(c+470,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+469,"full", false,-1);
    tracep->declBit(c+470,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+471,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+472,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+473,"io_deq_valid", false,-1);
    tracep->declBit(c+474,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+473,"full", false,-1);
    tracep->declBit(c+474,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+475,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+476,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+477,"io_deq_valid", false,-1);
    tracep->declBit(c+478,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+477,"full", false,-1);
    tracep->declBit(c+478,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+479,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1520,"reset", false,-1);
    tracep->declBit(c+209,"auto_master_out_awready", false,-1);
    tracep->declBit(c+860,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1559,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+861,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+862,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_master_out_wready", false,-1);
    tracep->declBit(c+863,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+864,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+865,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+867,"auto_master_out_bready", false,-1);
    tracep->declBit(c+211,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+212,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1147,"auto_master_out_arready", false,-1);
    tracep->declBit(c+30,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_master_out_rready", false,-1);
    tracep->declBit(c+214,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+215,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+218,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1520,"reset", false,-1);
    tracep->declBit(c+1555,"io_interrupt", false,-1);
    tracep->declBit(c+209,"io_master_awready", false,-1);
    tracep->declBit(c+860,"io_master_awvalid", false,-1);
    tracep->declBus(c+861,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1559,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1560,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+862,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"io_master_wready", false,-1);
    tracep->declBit(c+863,"io_master_wvalid", false,-1);
    tracep->declBus(c+864,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+865,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"io_master_wlast", false,-1);
    tracep->declBit(c+867,"io_master_bready", false,-1);
    tracep->declBit(c+211,"io_master_bvalid", false,-1);
    tracep->declBus(c+213,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+212,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1147,"io_master_arready", false,-1);
    tracep->declBit(c+30,"io_master_arvalid", false,-1);
    tracep->declBus(c+32,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+33,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"io_master_rready", false,-1);
    tracep->declBit(c+214,"io_master_rvalid", false,-1);
    tracep->declBus(c+217,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+216,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+218,"io_master_rlast", false,-1);
    tracep->declBus(c+215,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1562,"io_slave_awready", false,-1);
    tracep->declBit(c+1555,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1563,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1559,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1560,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1551,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1564,"io_slave_wready", false,-1);
    tracep->declBit(c+1555,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1563,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1559,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"io_slave_wlast", false,-1);
    tracep->declBit(c+1555,"io_slave_bready", false,-1);
    tracep->declBit(c+1565,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1566,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1567,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1568,"io_slave_arready", false,-1);
    tracep->declBit(c+1555,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1563,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1559,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1560,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1551,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1561,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1555,"io_slave_rready", false,-1);
    tracep->declBit(c+1569,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1570,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1571,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1572,"io_slave_rlast", false,-1);
    tracep->declBus(c+1573,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+868,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+869,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+870,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+871,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+872,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+868,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+869,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+873,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+874,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+875,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1559,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1560,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1552,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1561,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+876,"ifu_arvalid", false,-1);
    tracep->declBit(c+877,"ifu_arready", false,-1);
    tracep->declBus(c+878,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1574,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1575,"ifu_rlast", false,-1);
    tracep->declBus(c+1576,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+879,"ifu_rvalid", false,-1);
    tracep->declBit(c+880,"ifu_rready", false,-1);
    tracep->declBit(c+1577,"useless1", false,-1);
    tracep->declBit(c+1578,"useless2", false,-1);
    tracep->declBit(c+1579,"useless3", false,-1);
    tracep->declBit(c+1580,"useless4", false,-1);
    tracep->declBus(c+881,"cache_araddr", false,-1, 31,0);
    tracep->declBus(c+1581,"cache_arid", false,-1, 3,0);
    tracep->declBus(c+1582,"cache_arlen", false,-1, 7,0);
    tracep->declBus(c+1552,"cache_arsize", false,-1, 2,0);
    tracep->declBus(c+1583,"cache_arburst", false,-1, 1,0);
    tracep->declBit(c+882,"cache_arvalid", false,-1);
    tracep->declBit(c+883,"cache_arready", false,-1);
    tracep->declBus(c+76,"cache_rdata", false,-1, 31,0);
    tracep->declBus(c+77,"cache_rresp", false,-1, 1,0);
    tracep->declBit(c+78,"cache_rlast", false,-1);
    tracep->declBus(c+79,"cache_rid", false,-1, 3,0);
    tracep->declBit(c+80,"cache_rvalid", false,-1);
    tracep->declBit(c+884,"cache_rready", false,-1);
    tracep->declBus(c+885,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1559,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1560,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+886,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1561,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+887,"lsu_arvalid", false,-1);
    tracep->declBit(c+888,"lsu_arready", false,-1);
    tracep->declBus(c+81,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+82,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+83,"lsu_rlast", false,-1);
    tracep->declBus(c+84,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+85,"lsu_rvalid", false,-1);
    tracep->declBit(c+889,"lsu_rready", false,-1);
    tracep->declBus(c+885,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1559,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1560,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+890,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+891,"lsu_awvalid", false,-1);
    tracep->declBit(c+1316,"lsu_awready", false,-1);
    tracep->declBus(c+892,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+893,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+894,"lsu_wlast", false,-1);
    tracep->declBit(c+895,"lsu_wvalid", false,-1);
    tracep->declBit(c+1317,"lsu_wready", false,-1);
    tracep->declBus(c+1318,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1319,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1320,"lsu_bvalid", false,-1);
    tracep->declBit(c+896,"lsu_bready", false,-1);
    tracep->declBus(c+897,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+898,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+899,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+900,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+901,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"axi_arvalid", false,-1);
    tracep->declBit(c+1522,"axi_arready", false,-1);
    tracep->declBus(c+86,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+87,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rlast", false,-1);
    tracep->declBus(c+89,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+90,"axi_rvalid", false,-1);
    tracep->declBit(c+903,"axi_rready", false,-1);
    tracep->declBus(c+861,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1559,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1560,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+862,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1561,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+860,"axi_awvalid", false,-1);
    tracep->declBit(c+209,"axi_awready", false,-1);
    tracep->declBus(c+864,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+865,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"axi_wlast", false,-1);
    tracep->declBit(c+863,"axi_wvalid", false,-1);
    tracep->declBit(c+210,"axi_wready", false,-1);
    tracep->declBus(c+213,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+212,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+211,"axi_bvalid", false,-1);
    tracep->declBit(c+867,"axi_bready", false,-1);
    tracep->declBus(c+91,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+92,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+93,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+94,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+95,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+96,"clint_arvalid", false,-1);
    tracep->declBit(c+904,"clint_arready", false,-1);
    tracep->declBus(c+905,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+906,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+907,"clint_rlast", false,-1);
    tracep->declBus(c+1559,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+908,"clint_rvalid", false,-1);
    tracep->declBit(c+97,"clint_rready", false,-1);
    tracep->declBus(c+1584,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1585,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1586,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1587,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1588,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1589,"clint_awvalid", false,-1);
    tracep->declBit(c+909,"clint_awready", false,-1);
    tracep->declBus(c+1590,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1591,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1592,"clint_wlast", false,-1);
    tracep->declBit(c+1593,"clint_wvalid", false,-1);
    tracep->declBit(c+910,"clint_wready", false,-1);
    tracep->declBus(c+911,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1559,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+912,"clint_bvalid", false,-1);
    tracep->declBit(c+1594,"clint_bready", false,-1);
    tracep->declBus(c+1344,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1345,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1523,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1524,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1149,"a5", false,-1, 31,0);
    tracep->declBus(c+1346,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1523,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1524,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1347,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1525,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1348,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1349,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1350,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1351,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1352,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1353,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1354,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1355,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1356,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1357,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1358,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1359,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1360,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1361,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1362,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+913,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+914,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1363,"csr_write", false,-1);
    tracep->declBus(c+1364,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1150+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+915,"wdata", false,-1, 31,0);
    tracep->declBus(c+916,"waddr", false,-1, 4,0);
    tracep->declBit(c+917,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1154+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+918,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+919,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+920,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+921,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+922,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+923,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+924,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+925,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+926,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+927,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+928,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+929,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+930,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+931,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+932,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+933,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+885,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+934,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+935,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+936,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+937,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+938,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+939,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+940,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+941,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+942,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+943,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+944,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+945,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+881,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1581,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1582,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1552,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1583,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+882,"arvalid_i_a", false,-1);
    tracep->declBit(c+883,"arready_o_a", false,-1);
    tracep->declBus(c+76,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+77,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+78,"rlast_o_a", false,-1);
    tracep->declBus(c+79,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+80,"rvalid_o_a", false,-1);
    tracep->declBit(c+884,"rready_i_a", false,-1);
    tracep->declBus(c+1595,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1559,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1560,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1551,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1561,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1555,"awvalid_i_a", false,-1);
    tracep->declBit(c+1321,"awready_o_a", false,-1);
    tracep->declBus(c+1595,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1559,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1555,"wlast_i_a", false,-1);
    tracep->declBit(c+1555,"wvalid_i_a", false,-1);
    tracep->declBit(c+1322,"wready_o_a", false,-1);
    tracep->declBus(c+1323,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1324,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1325,"bvalid_o_a", false,-1);
    tracep->declBit(c+1555,"bready_i_a", false,-1);
    tracep->declBus(c+885,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1559,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1560,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+886,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1561,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+887,"arvalid_i_b", false,-1);
    tracep->declBit(c+888,"arready_o_b", false,-1);
    tracep->declBus(c+81,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+82,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+83,"rlast_o_b", false,-1);
    tracep->declBus(c+84,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+85,"rvalid_o_b", false,-1);
    tracep->declBit(c+889,"rready_i_b", false,-1);
    tracep->declBus(c+885,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1559,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1560,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+890,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1561,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+891,"awvalid_i_b", false,-1);
    tracep->declBit(c+1316,"awready_o_b", false,-1);
    tracep->declBus(c+892,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+893,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+894,"wlast_i_b", false,-1);
    tracep->declBit(c+895,"wvalid_i_b", false,-1);
    tracep->declBit(c+1317,"wready_o_b", false,-1);
    tracep->declBus(c+1318,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1319,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1320,"bvalid_o_b", false,-1);
    tracep->declBit(c+896,"bready_i_b", false,-1);
    tracep->declBus(c+897,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+898,"arid_o", false,-1, 3,0);
    tracep->declBus(c+899,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+900,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+901,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+902,"arvalid_o", false,-1);
    tracep->declBit(c+1522,"arready_i", false,-1);
    tracep->declBus(c+86,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+87,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+88,"rlast_i", false,-1);
    tracep->declBus(c+89,"rid_i", false,-1, 3,0);
    tracep->declBit(c+90,"rvalid_i", false,-1);
    tracep->declBit(c+903,"rready_o", false,-1);
    tracep->declBus(c+861,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1559,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1560,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+862,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1561,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+860,"awvalid_o", false,-1);
    tracep->declBit(c+209,"awready_i", false,-1);
    tracep->declBus(c+864,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+865,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+866,"wlast_o", false,-1);
    tracep->declBit(c+863,"wvalid_o", false,-1);
    tracep->declBit(c+210,"wready_i", false,-1);
    tracep->declBus(c+213,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+212,"bid_i", false,-1, 3,0);
    tracep->declBit(c+211,"bvalid_i", false,-1);
    tracep->declBit(c+867,"bready_o", false,-1);
    tracep->declBit(c+946,"ar_switch", false,-1);
    tracep->declBit(c+947,"r_switch", false,-1);
    tracep->declBit(c+948,"aw_switch", false,-1);
    tracep->declBit(c+949,"w_switch", false,-1);
    tracep->declBit(c+950,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+91,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+92,"arid_i", false,-1, 3,0);
    tracep->declBus(c+93,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+94,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+95,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+96,"arvalid_i", false,-1);
    tracep->declBit(c+904,"arready_o", false,-1);
    tracep->declBus(c+905,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+906,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+907,"rlast_o", false,-1);
    tracep->declBus(c+1559,"rid_o", false,-1, 3,0);
    tracep->declBit(c+908,"rvalid_o", false,-1);
    tracep->declBit(c+97,"rready_i", false,-1);
    tracep->declBus(c+1584,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1585,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1586,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1587,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1588,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1589,"awvalid_i", false,-1);
    tracep->declBit(c+909,"awready_o", false,-1);
    tracep->declBus(c+1590,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1591,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1592,"wlast_i", false,-1);
    tracep->declBit(c+1593,"wvalid_i", false,-1);
    tracep->declBit(c+910,"wready_o", false,-1);
    tracep->declBus(c+911,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1559,"bid_o", false,-1, 3,0);
    tracep->declBit(c+912,"bvalid_o", false,-1);
    tracep->declBit(c+1594,"bready_i", false,-1);
    tracep->declBit(c+951,"ar_state", false,-1);
    tracep->declBit(c+952,"r_state", false,-1);
    tracep->declBit(c+953,"aw_state", false,-1);
    tracep->declBit(c+954,"w_state", false,-1);
    tracep->declBit(c+1596,"b_state", false,-1);
    tracep->declBus(c+955,"araddr", false,-1, 31,0);
    tracep->declBus(c+956,"awaddr", false,-1, 31,0);
    tracep->declBus(c+957,"wdata", false,-1, 31,0);
    tracep->declBus(c+958,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1597,"wvalid", false,-1);
    tracep->declBit(c+959,"flag_waddr", false,-1);
    tracep->declBit(c+960,"flag_wdata", false,-1);
    tracep->declBit(c+961,"flag_rdata", false,-1);
    tracep->declBit(c+962,"flag_raddr", false,-1);
    tracep->declBit(c+1598,"flag_write", false,-1);
    tracep->declBus(c+963,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+964,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+965,"w_delay", false,-1, 4,0);
    tracep->declBus(c+966,"r_delay", false,-1, 4,0);
    tracep->declBus(c+967,"LFSR", false,-1, 4,0);
    tracep->declBit(c+968,"lfsr_in", false,-1);
    tracep->declBus(c+969,"write_box", false,-1, 1,0);
    tracep->declQuad(c+970,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+1346,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1523,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1524,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1347,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1525,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1348,"a_in_src_i", false,-1);
    tracep->declBus(c+1349,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1350,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1351,"adder_a_src_i", false,-1);
    tracep->declBit(c+1352,"adder_out_src_i", false,-1);
    tracep->declBus(c+1353,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1354,"MemRead_i", false,-1);
    tracep->declBit(c+1355,"MemWrite_i", false,-1);
    tracep->declBus(c+1356,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1357,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1358,"wb_src_i", false,-1);
    tracep->declBit(c+1359,"csr_write_i", false,-1);
    tracep->declBit(c+1360,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1361,"reg_write_i", false,-1);
    tracep->declBus(c+1362,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+913,"exu_valid_i", false,-1);
    tracep->declBit(c+914,"exu_ready_o", false,-1);
    tracep->declBus(c+918,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+919,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+920,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+921,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+922,"npc_o", false,-1, 31,0);
    tracep->declBit(c+923,"MemRead_o", false,-1);
    tracep->declBit(c+924,"MemWrite_o", false,-1);
    tracep->declBus(c+925,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+926,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+927,"wb_src_o", false,-1);
    tracep->declBit(c+928,"csr_write_o", false,-1);
    tracep->declBit(c+929,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+930,"reg_write_o", false,-1);
    tracep->declBus(c+931,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+932,"exu_valid_o", false,-1);
    tracep->declBit(c+933,"exu_ready_i", false,-1);
    tracep->declBus(c+972,"pc", false,-1, 31,0);
    tracep->declBus(c+919,"rs1", false,-1, 31,0);
    tracep->declBus(c+920,"rs2", false,-1, 31,0);
    tracep->declBus(c+973,"imm", false,-1, 31,0);
    tracep->declBus(c+974,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+975,"a_in_src", false,-1);
    tracep->declBus(c+976,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+977,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+978,"adder_a_src", false,-1);
    tracep->declBit(c+979,"adder_out_src", false,-1);
    tracep->declBus(c+980,"alu_op", false,-1, 3,0);
    tracep->declBus(c+981,"a_in", false,-1, 31,0);
    tracep->declBus(c+982,"b_in", false,-1, 31,0);
    tracep->declBus(c+983,"a_out", false,-1, 31,0);
    tracep->declBus(c+984,"add_out", false,-1, 31,0);
    tracep->declBus(c+985,"pc_new", false,-1, 31,0);
    tracep->declBus(c+918,"alu_result", false,-1, 31,0);
    tracep->declBus(c+922,"npc", false,-1, 31,0);
    tracep->declBit(c+986,"zero", false,-1);
    tracep->declBus(c+1561,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1599,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1600,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+987,"current_state", false,-1, 1,0);
    tracep->declBus(c+988,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+981,"a", false,-1, 31,0);
    tracep->declBus(c+982,"b", false,-1, 31,0);
    tracep->declBus(c+980,"op", false,-1, 3,0);
    tracep->declBus(c+918,"alu_result", false,-1, 31,0);
    tracep->declBit(c+986,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1601,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+919,"d0", false,-1, 31,0);
    tracep->declBus(c+972,"d1", false,-1, 31,0);
    tracep->declBit(c+975,"sel", false,-1);
    tracep->declBus(c+981,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1601,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+920,"d0", false,-1, 31,0);
    tracep->declBus(c+973,"d1", false,-1, 31,0);
    tracep->declBus(c+1602,"d2", false,-1, 31,0);
    tracep->declBus(c+974,"d3", false,-1, 31,0);
    tracep->declBus(c+976,"sel", false,-1, 1,0);
    tracep->declBus(c+982,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+983,"a", false,-1, 31,0);
    tracep->declBus(c+973,"b", false,-1, 31,0);
    tracep->declBus(c+984,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1601,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+972,"d0", false,-1, 31,0);
    tracep->declBus(c+919,"d1", false,-1, 31,0);
    tracep->declBit(c+978,"sel", false,-1);
    tracep->declBus(c+983,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1601,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+984,"d0", false,-1, 31,0);
    tracep->declBus(c+974,"d1", false,-1, 31,0);
    tracep->declBit(c+979,"sel", false,-1);
    tracep->declBus(c+985,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+989,"pc4", false,-1, 31,0);
    tracep->declBus(c+985,"pc_new", false,-1, 31,0);
    tracep->declBus(c+977,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+986,"zero", false,-1);
    tracep->declBus(c+918,"alu_result", false,-1, 31,0);
    tracep->declBus(c+922,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1601,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1603,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBus(c+1604,"NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1601,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+875,"cpu_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1559,"cpu_arid_i", false,-1, 3,0);
    tracep->declBus(c+1560,"cpu_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1552,"cpu_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1561,"cpu_arburst_i", false,-1, 1,0);
    tracep->declBit(c+876,"cpu_arvalid_i", false,-1);
    tracep->declBit(c+877,"cpu_arready_o", false,-1);
    tracep->declBus(c+878,"cpu_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1574,"cpu_rresp_o", false,-1, 1,0);
    tracep->declBit(c+1575,"cpu_rlast_o", false,-1);
    tracep->declBus(c+1576,"cpu_rid_o", false,-1, 3,0);
    tracep->declBit(c+879,"cpu_rvalid_o", false,-1);
    tracep->declBit(c+880,"cpu_rready_i", false,-1);
    tracep->declBus(c+881,"mem_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1581,"mem_arid_o", false,-1, 3,0);
    tracep->declBus(c+1582,"mem_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1552,"mem_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1583,"mem_arburst_o", false,-1, 1,0);
    tracep->declBit(c+882,"mem_arvalid_o", false,-1);
    tracep->declBit(c+883,"mem_arready_i", false,-1);
    tracep->declBus(c+76,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+77,"mem_rresp_i", false,-1, 1,0);
    tracep->declBit(c+78,"mem_rlast_i", false,-1);
    tracep->declBus(c+79,"mem_rid_i", false,-1, 3,0);
    tracep->declBit(c+80,"mem_rvalid_i", false,-1);
    tracep->declBit(c+884,"mem_rready_o", false,-1);
    tracep->declBus(c+1605,"BLOCK_WORDS", false,-1, 31,0);
    tracep->declBus(c+1606,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+1603,"INDEX_BITS", false,-1, 31,0);
    tracep->declBus(c+1607,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+990,"cpu_addr", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+991+i*1,"data_array", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1007+i*1,"tag_array", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1023+i*1,"valid_array", true,(i+0));
    }
    tracep->declBus(c+1039,"req_tag", false,-1, 25,0);
    tracep->declBus(c+1040,"req_index", false,-1, 3,0);
    tracep->declBus(c+1041,"req_offset", false,-1, 1,0);
    tracep->declBus(c+1042,"current_state", false,-1, 2,0);
    tracep->declBus(c+1526,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1043,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+1344,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1345,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1523,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1524,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1149,"a5", false,-1, 31,0);
    tracep->declBus(c+868,"pc_i", false,-1, 31,0);
    tracep->declBus(c+869,"inst_i", false,-1, 31,0);
    tracep->declBit(c+873,"idu_valid_i", false,-1);
    tracep->declBit(c+874,"idu_ready_o", false,-1);
    tracep->declBus(c+1346,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1523,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1524,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1347,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1525,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1348,"a_in_src_o", false,-1);
    tracep->declBus(c+1349,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1350,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1351,"adder_a_src_o", false,-1);
    tracep->declBit(c+1352,"adder_out_src_o", false,-1);
    tracep->declBus(c+1353,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1354,"MemRead_o", false,-1);
    tracep->declBit(c+1355,"MemWrite_o", false,-1);
    tracep->declBus(c+1356,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1357,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1358,"wb_src_o", false,-1);
    tracep->declBit(c+1359,"csr_write_o", false,-1);
    tracep->declBit(c+1360,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1361,"reg_write_o", false,-1);
    tracep->declBus(c+1362,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+913,"idu_valid_o", false,-1);
    tracep->declBit(c+914,"idu_ready_i", false,-1);
    tracep->declBit(c+1363,"csr_write_i", false,-1);
    tracep->declBus(c+1364,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1186+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1346,"pc", false,-1, 31,0);
    tracep->declBus(c+1365,"inst", false,-1, 31,0);
    tracep->declBus(c+1366,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1561,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1599,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1600,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1044,"current_state", false,-1, 1,0);
    tracep->declBus(c+1045,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1365,"inst", false,-1, 31,0);
    tracep->declBus(c+1353,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1367,"opcode", false,-1, 6,0);
    tracep->declBus(c+1368,"funct3", false,-1, 2,0);
    tracep->declBus(c+1369,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1363,"wen", false,-1);
    tracep->declBus(c+1365,"inst", false,-1, 31,0);
    tracep->declBus(c+1364,"wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"NO", false,-1, 31,0);
    tracep->declBus(c+1346,"pc", false,-1, 31,0);
    tracep->declBus(c+1525,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1190+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1194,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1195,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1196,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1197,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1608,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1609,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1367,"opcode", false,-1, 6,0);
    tracep->declBus(c+1368,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1365,"inst", false,-1, 31,0);
    tracep->declBit(c+1348,"a_in_src", false,-1);
    tracep->declBus(c+1349,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1361,"reg_write", false,-1);
    tracep->declBus(c+1350,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1351,"adder_a_src", false,-1);
    tracep->declBit(c+1354,"MemRead", false,-1);
    tracep->declBit(c+1355,"MemWrite", false,-1);
    tracep->declBus(c+1366,"wmask", false,-1, 7,0);
    tracep->declBit(c+1358,"wb_src", false,-1);
    tracep->declBus(c+1357,"rmask", false,-1, 2,0);
    tracep->declBit(c+1359,"csr_write", false,-1);
    tracep->declBit(c+1352,"adder_out_src", false,-1);
    tracep->declBit(c+1360,"csr_wdata_src", false,-1);
    tracep->declBus(c+1367,"opcode", false,-1, 6,0);
    tracep->declBus(c+1368,"funct3", false,-1, 2,0);
    tracep->declBus(c+1369,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1601,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1365,"inst", false,-1, 31,0);
    tracep->declBus(c+1347,"data", false,-1, 31,0);
    tracep->declBus(c+1367,"opcode", false,-1, 6,0);
    tracep->declBus(c+1368,"funct3", false,-1, 2,0);
    tracep->declBus(c+1369,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+875,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1559,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1560,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1552,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1561,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+876,"arvalid_o", false,-1);
    tracep->declBit(c+877,"arready_i", false,-1);
    tracep->declBus(c+878,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+1574,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+1575,"rlast_i", false,-1);
    tracep->declBus(c+1576,"rid_i", false,-1, 3,0);
    tracep->declBit(c+879,"rvalid_i", false,-1);
    tracep->declBit(c+880,"rready_o", false,-1);
    tracep->declBus(c+870,"npc_i", false,-1, 31,0);
    tracep->declBit(c+871,"ifu_valid_i", false,-1);
    tracep->declBit(c+872,"ifu_ready_o", false,-1);
    tracep->declBus(c+868,"pc_o", false,-1, 31,0);
    tracep->declBus(c+869,"inst_o", false,-1, 31,0);
    tracep->declBit(c+873,"ifu_valid_o", false,-1);
    tracep->declBit(c+874,"ifu_ready_i", false,-1);
    tracep->declBus(c+1046,"pc", false,-1, 31,0);
    tracep->declBus(c+1610,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1611,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1612,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1613,"lfsr_in", false,-1);
    tracep->declBit(c+876,"arvalid", false,-1);
    tracep->declBus(c+875,"araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"inst", false,-1, 31,0);
    tracep->declBit(c+880,"rready", false,-1);
    tracep->declBus(c+1614,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1615+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1647,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1551,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1548,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1552,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1553,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1648,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1048,"current_state", false,-1, 2,0);
    tracep->declBus(c+1049,"next_state", false,-1, 2,0);
    tracep->declBus(c+1050,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1051,"ready_flag", false,-1);
    tracep->declBit(c+1052,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+918,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+919,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+920,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+921,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+922,"npc_i", false,-1, 31,0);
    tracep->declBit(c+923,"MemRead_i", false,-1);
    tracep->declBit(c+924,"MemWrite_i", false,-1);
    tracep->declBus(c+925,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+926,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+927,"wb_src_i", false,-1);
    tracep->declBit(c+928,"csr_write_i", false,-1);
    tracep->declBit(c+929,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+930,"reg_write_i", false,-1);
    tracep->declBus(c+931,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+932,"lsu_valid_i", false,-1);
    tracep->declBit(c+933,"lsu_ready_o", false,-1);
    tracep->declBus(c+885,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+934,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+935,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+936,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+937,"npc_o", false,-1, 31,0);
    tracep->declBus(c+938,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+939,"wb_src_o", false,-1);
    tracep->declBit(c+940,"csr_write_o", false,-1);
    tracep->declBit(c+941,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+942,"reg_write_o", false,-1);
    tracep->declBus(c+943,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+944,"lsu_valid_o", false,-1);
    tracep->declBit(c+945,"lsu_ready_i", false,-1);
    tracep->declBus(c+885,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1559,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1560,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+886,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1561,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+887,"arvalid_o", false,-1);
    tracep->declBit(c+888,"arready_i", false,-1);
    tracep->declBus(c+81,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+82,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+83,"rlast_i", false,-1);
    tracep->declBus(c+84,"rid_i", false,-1, 3,0);
    tracep->declBit(c+85,"rvalid_i", false,-1);
    tracep->declBit(c+889,"rready_o", false,-1);
    tracep->declBus(c+885,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1559,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1560,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+890,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1561,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+891,"awvalid_o", false,-1);
    tracep->declBit(c+1316,"awready_i", false,-1);
    tracep->declBus(c+892,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+893,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+894,"wlast_o", false,-1);
    tracep->declBit(c+895,"wvalid_o", false,-1);
    tracep->declBit(c+1317,"wready_i", false,-1);
    tracep->declBus(c+1318,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1319,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1320,"bvalid_i", false,-1);
    tracep->declBit(c+896,"bready_o", false,-1);
    tracep->declBus(c+885,"alu_result", false,-1, 31,0);
    tracep->declBus(c+934,"rs1", false,-1, 31,0);
    tracep->declBus(c+1649,"rs2", false,-1, 31,0);
    tracep->declBus(c+1650,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+938,"rmask", false,-1, 2,0);
    tracep->declBit(c+1053,"flag", false,-1);
    tracep->declBit(c+1651,"wvalid_tmp", false,-1);
    tracep->declBus(c+1652,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1653,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1654,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1655,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1656,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1657,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1658,"lfsr_in", false,-1);
    tracep->declBit(c+887,"arvalid", false,-1);
    tracep->declBus(c+885,"araddr", false,-1, 31,0);
    tracep->declBit(c+889,"rready", false,-1);
    tracep->declBus(c+885,"awaddr", false,-1, 31,0);
    tracep->declBit(c+891,"awvalid", false,-1);
    tracep->declBus(c+892,"wdata", false,-1, 31,0);
    tracep->declBus(c+893,"wstrb", false,-1, 3,0);
    tracep->declBit(c+895,"wvalid", false,-1);
    tracep->declBit(c+896,"bready", false,-1);
    tracep->declBus(c+1659,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1660+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1692,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1693,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1694+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1726,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1727+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1759+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1791,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1561,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1599,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1600,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1792,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1054,"current_state", false,-1, 1,0);
    tracep->declBus(c+1055,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1793,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1601,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBus(c+915,"wdata", false,-1, 31,0);
    tracep->declBus(c+916,"waddr", false,-1, 4,0);
    tracep->declBit(c+917,"wen", false,-1);
    tracep->declBus(c+1344,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1523,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1345,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1524,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1149,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1198+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1230+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+885,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+934,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+935,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+936,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+937,"npc_i", false,-1, 31,0);
    tracep->declBus(c+938,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+939,"wb_src_i", false,-1);
    tracep->declBit(c+940,"csr_write_i", false,-1);
    tracep->declBit(c+941,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+942,"reg_write_i", false,-1);
    tracep->declBus(c+943,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+944,"wbu_valid_i", false,-1);
    tracep->declBit(c+945,"wbu_ready_o", false,-1);
    tracep->declBus(c+870,"npc_o", false,-1, 31,0);
    tracep->declBit(c+871,"wbu_valid_o", false,-1);
    tracep->declBit(c+872,"wbu_ready_i", false,-1);
    tracep->declBus(c+1364,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+915,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1363,"csr_write_o", false,-1);
    tracep->declBit(c+917,"reg_write_o", false,-1);
    tracep->declBus(c+916,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1056,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1057,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1058,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1059,"rs1", false,-1, 31,0);
    tracep->declBus(c+1060,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1061,"rmask", false,-1, 2,0);
    tracep->declBit(c+1062,"wb_src", false,-1);
    tracep->declBit(c+1063,"csr_wdata_src", false,-1);
    tracep->declBit(c+1064,"difftest_check", false,-1);
    tracep->declBit(c+1065,"difftest_check_flag", false,-1);
    tracep->declBus(c+1561,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1599,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1600,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1066,"current_state", false,-1, 1,0);
    tracep->declBus(c+1067,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1601,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1059,"d0", false,-1, 31,0);
    tracep->declBus(c+1060,"d1", false,-1, 31,0);
    tracep->declBit(c+1063,"sel", false,-1);
    tracep->declBus(c+1364,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1057,"read_data", false,-1, 31,0);
    tracep->declBus(c+1068,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1061,"rmask", false,-1, 2,0);
    tracep->declBus(c+1056,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1069,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1070,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1071,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1072,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1073,"byte3", false,-1, 31,0);
    tracep->declBus(c+1074,"byte2", false,-1, 31,0);
    tracep->declBus(c+1075,"byte1", false,-1, 31,0);
    tracep->declBus(c+1076,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1601,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1058,"d0", false,-1, 31,0);
    tracep->declBus(c+1056,"d1", false,-1, 31,0);
    tracep->declBit(c+1062,"sel", false,-1);
    tracep->declBus(c+915,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1521,"rst_n", false,-1);
    tracep->declBus(c+897,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+898,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+899,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+900,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+901,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+902,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1522,"axi_arready_o", false,-1);
    tracep->declBus(c+86,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+87,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rlast_o", false,-1);
    tracep->declBus(c+89,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+90,"axi_rvalid_o", false,-1);
    tracep->declBit(c+903,"axi_rready_i", false,-1);
    tracep->declBus(c+861,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1559,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1560,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+862,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1561,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+860,"axi_awvalid_i", false,-1);
    tracep->declBit(c+209,"axi_awready_o", false,-1);
    tracep->declBus(c+864,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+865,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+866,"axi_wlast_i", false,-1);
    tracep->declBit(c+863,"axi_wvalid_i", false,-1);
    tracep->declBit(c+210,"axi_wready_o", false,-1);
    tracep->declBus(c+213,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+212,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+211,"axi_bvalid_o", false,-1);
    tracep->declBit(c+867,"axi_bready_i", false,-1);
    tracep->declBus(c+32,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+31,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+33,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+34,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+35,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+30,"sram_arvalid_o", false,-1);
    tracep->declBit(c+1147,"sram_arready_i", false,-1);
    tracep->declBus(c+216,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+217,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+218,"sram_rlast_i", false,-1);
    tracep->declBus(c+215,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+214,"sram_rvalid_i", false,-1);
    tracep->declBit(c+36,"sram_rready_o", false,-1);
    tracep->declBus(c+861,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1559,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1560,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+862,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1561,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+860,"sram_awvalid_o", false,-1);
    tracep->declBit(c+209,"sram_awready_i", false,-1);
    tracep->declBus(c+864,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+865,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+866,"sram_wlast_o", false,-1);
    tracep->declBit(c+863,"sram_wvalid_o", false,-1);
    tracep->declBit(c+210,"sram_wready_i", false,-1);
    tracep->declBus(c+213,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+212,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+211,"sram_bvalid_i", false,-1);
    tracep->declBit(c+867,"sram_bready_o", false,-1);
    tracep->declBus(c+91,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+92,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+93,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+94,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+95,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+96,"clint_arvalid_o", false,-1);
    tracep->declBit(c+904,"clint_arready_i", false,-1);
    tracep->declBus(c+905,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+906,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+907,"clint_rlast_i", false,-1);
    tracep->declBus(c+1559,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+908,"clint_rvalid_i", false,-1);
    tracep->declBit(c+97,"clint_rready_o", false,-1);
    tracep->declBus(c+1584,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1585,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1586,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1587,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1588,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1589,"clint_awvalid_o", false,-1);
    tracep->declBit(c+909,"clint_awready_i", false,-1);
    tracep->declBus(c+1590,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1591,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1592,"clint_wlast_o", false,-1);
    tracep->declBit(c+1593,"clint_wvalid_o", false,-1);
    tracep->declBit(c+910,"clint_wready_i", false,-1);
    tracep->declBus(c+911,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1559,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+912,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1594,"clint_bready_o", false,-1);
    tracep->declBit(c+98,"ar_switch", false,-1);
    tracep->declBit(c+99,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"io_d", false,-1);
    tracep->declBit(c+480,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"io_d", false,-1);
    tracep->declBit(c+480,"io_q", false,-1);
    tracep->declBit(c+480,"sync_0", false,-1);
    tracep->declBit(c+481,"sync_1", false,-1);
    tracep->declBit(c+482,"sync_2", false,-1);
    tracep->declBit(c+483,"sync_3", false,-1);
    tracep->declBit(c+484,"sync_4", false,-1);
    tracep->declBit(c+485,"sync_5", false,-1);
    tracep->declBit(c+486,"sync_6", false,-1);
    tracep->declBit(c+487,"sync_7", false,-1);
    tracep->declBit(c+488,"sync_8", false,-1);
    tracep->declBit(c+489,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1399,"auto_in_psel", false,-1);
    tracep->declBit(c+1400,"auto_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1397,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+598,"auto_in_pready", false,-1);
    tracep->declBit(c+1555,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1460,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1486,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1487,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1488,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1489,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1490,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1491,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1492,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1493,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1494,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1495,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1425,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1399,"in_psel", false,-1);
    tracep->declBit(c+1400,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1383,"in_pwrite", false,-1);
    tracep->declBus(c+1384,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+598,"in_pready", false,-1);
    tracep->declBus(c+1460,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1555,"in_pslverr", false,-1);
    tracep->declBus(c+1486,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1487,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1488,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1489,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1490,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1491,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1492,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1493,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1494,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1495,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+601,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+1460,"rdata", false,-1, 31,0);
    tracep->declBus(c+602,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+598,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+603,"num", false,-1, 3,0);
    tracep->declBus(c+1488,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+604,"num", false,-1, 3,0);
    tracep->declBus(c+1489,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+605,"num", false,-1, 3,0);
    tracep->declBus(c+1490,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+606,"num", false,-1, 3,0);
    tracep->declBus(c+1491,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+607,"num", false,-1, 3,0);
    tracep->declBus(c+1492,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+608,"num", false,-1, 3,0);
    tracep->declBus(c+1493,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+609,"num", false,-1, 3,0);
    tracep->declBus(c+1494,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+610,"num", false,-1, 3,0);
    tracep->declBus(c+1495,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1395,"auto_in_psel", false,-1);
    tracep->declBit(c+1396,"auto_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1397,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+109,"auto_in_pready", false,-1);
    tracep->declBit(c+1555,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1398,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1496,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1497,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1425,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1395,"in_psel", false,-1);
    tracep->declBit(c+1396,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1383,"in_pwrite", false,-1);
    tracep->declBus(c+1384,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+109,"in_pready", false,-1);
    tracep->declBus(c+1398,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1555,"in_pslverr", false,-1);
    tracep->declBit(c+1496,"ps2_clk", false,-1);
    tracep->declBit(c+1497,"ps2_data", false,-1);
    tracep->declBus(c+490,"data_r", false,-1, 7,0);
    tracep->declBus(c+491,"old_data", false,-1, 7,0);
    tracep->declBus(c+492,"data_asic", false,-1, 7,0);
    tracep->declBus(c+1426,"buffer", false,-1, 7,0);
    tracep->declBit(c+1427,"ready", false,-1);
    tracep->declBit(c+493,"nextdata_n", false,-1);
    tracep->declBit(c+494,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1527,"clrn", false,-1);
    tracep->declBit(c+1496,"ps2_clk", false,-1);
    tracep->declBit(c+1497,"ps2_data", false,-1);
    tracep->declBit(c+493,"nextdata_n", false,-1);
    tracep->declBus(c+1426,"data", false,-1, 7,0);
    tracep->declBit(c+1427,"ready", false,-1);
    tracep->declBit(c+494,"overflow", false,-1);
    tracep->declBus(c+495,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+496+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+504,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+505,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+506,"count", false,-1, 3,0);
    tracep->declBus(c+507,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+508,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1300,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1301,"auto_in_wvalid", false,-1);
    tracep->declBit(c+275,"auto_in_arready", false,-1);
    tracep->declBit(c+54,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+276,"auto_in_rvalid", false,-1);
    tracep->declBus(c+277,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+278,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+276,"state", false,-1);
    tracep->declBus(c+278,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+277,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+100,"raddr", false,-1, 31,0);
    tracep->declBit(c+101,"ren", false,-1);
    tracep->declBus(c+102,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1401,"auto_in_psel", false,-1);
    tracep->declBit(c+1402,"auto_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1513,"auto_in_pready", false,-1);
    tracep->declBit(c+1555,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1403,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1507,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1465,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1508,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1379,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1401,"in_psel", false,-1);
    tracep->declBit(c+1402,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1383,"in_pwrite", false,-1);
    tracep->declBus(c+1384,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1513,"in_pready", false,-1);
    tracep->declBus(c+1403,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1555,"in_pslverr", false,-1);
    tracep->declBit(c+1507,"qspi_sck", false,-1);
    tracep->declBit(c+1465,"qspi_ce_n", false,-1);
    tracep->declBus(c+1508,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1508,"din", false,-1, 3,0);
    tracep->declBus(c+1528,"dout", false,-1, 3,0);
    tracep->declBus(c+1467,"douten", false,-1, 3,0);
    tracep->declBit(c+1529,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1484,"clk_i", false,-1);
    tracep->declBit(c+1485,"rst_i", false,-1);
    tracep->declBus(c+1379,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1384,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1403,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1385,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1401,"cyc_i", false,-1);
    tracep->declBit(c+1401,"stb_i", false,-1);
    tracep->declBit(c+1529,"ack_o", false,-1);
    tracep->declBit(c+1383,"we_i", false,-1);
    tracep->declBit(c+1507,"sck", false,-1);
    tracep->declBit(c+1465,"ce_n", false,-1);
    tracep->declBus(c+1508,"din", false,-1, 3,0);
    tracep->declBus(c+1528,"dout", false,-1, 3,0);
    tracep->declBus(c+1467,"douten", false,-1, 3,0);
    tracep->declBus(c+1561,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1599,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1600,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+611,"mr_sck", false,-1);
    tracep->declBit(c+612,"mr_ce_n", false,-1);
    tracep->declBus(c+1508,"mr_din", false,-1, 3,0);
    tracep->declBus(c+613,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+614,"mr_doe", false,-1);
    tracep->declBit(c+615,"mw_sck", false,-1);
    tracep->declBit(c+616,"mw_ce_n", false,-1);
    tracep->declBus(c+1508,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1468,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+617,"mw_doe", false,-1);
    tracep->declBit(c+1469,"mr_rd", false,-1);
    tracep->declBit(c+618,"mr_done", false,-1);
    tracep->declBit(c+1470,"mw_wr", false,-1);
    tracep->declBit(c+1471,"mw_done", false,-1);
    tracep->declBit(c+1401,"wb_valid", false,-1);
    tracep->declBit(c+1428,"wb_we", false,-1);
    tracep->declBit(c+1429,"wb_re", false,-1);
    tracep->declBus(c+1331,"state", false,-1, 1,0);
    tracep->declBus(c+1530,"nstate", false,-1, 1,0);
    tracep->declBus(c+1531,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1532,"qpi_sck", false,-1);
    tracep->declBus(c+1430,"size", false,-1, 2,0);
    tracep->declBus(c+1431,"byte0", false,-1, 7,0);
    tracep->declBus(c+1432,"byte1", false,-1, 7,0);
    tracep->declBus(c+1433,"byte2", false,-1, 7,0);
    tracep->declBus(c+1434,"byte3", false,-1, 7,0);
    tracep->declBus(c+1435,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1527,"rst_n", false,-1);
    tracep->declBus(c+1436,"addr", false,-1, 23,0);
    tracep->declBit(c+1469,"rd", false,-1);
    tracep->declBus(c+1648,"size", false,-1, 2,0);
    tracep->declBit(c+618,"done", false,-1);
    tracep->declBus(c+1403,"line", false,-1, 31,0);
    tracep->declBit(c+611,"sck", false,-1);
    tracep->declBit(c+612,"ce_n", false,-1);
    tracep->declBus(c+1508,"din", false,-1, 3,0);
    tracep->declBus(c+613,"dout", false,-1, 3,0);
    tracep->declBit(c+614,"douten", false,-1);
    tracep->declBus(c+1794,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1795,"READ", false,-1, 0,0);
    tracep->declBus(c+1796,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+619,"state", false,-1);
    tracep->declBit(c+1472,"nstate", false,-1);
    tracep->declBus(c+620,"counter", false,-1, 7,0);
    tracep->declBus(c+621,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1437+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1797,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+622,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1527,"rst_n", false,-1);
    tracep->declBus(c+1441,"addr", false,-1, 23,0);
    tracep->declBus(c+1435,"line", false,-1, 31,0);
    tracep->declBus(c+1430,"size", false,-1, 2,0);
    tracep->declBit(c+1470,"wr", false,-1);
    tracep->declBit(c+1471,"done", false,-1);
    tracep->declBit(c+615,"sck", false,-1);
    tracep->declBit(c+616,"ce_n", false,-1);
    tracep->declBus(c+1508,"din", false,-1, 3,0);
    tracep->declBus(c+1468,"dout", false,-1, 3,0);
    tracep->declBit(c+617,"douten", false,-1);
    tracep->declBus(c+1794,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1795,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1442,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+623,"state", false,-1);
    tracep->declBit(c+1473,"nstate", false,-1);
    tracep->declBus(c+624,"counter", false,-1, 7,0);
    tracep->declBus(c+625,"saddr", false,-1, 23,0);
    tracep->declBus(c+1798,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1390,"auto_in_psel", false,-1);
    tracep->declBit(c+1391,"auto_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+596,"auto_in_pready", false,-1);
    tracep->declBit(c+1555,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1459,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1509,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1328,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+592,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+593,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+594,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+595,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1510,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1329,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1330,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1481,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1379,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1390,"in_psel", false,-1);
    tracep->declBit(c+1391,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1383,"in_pwrite", false,-1);
    tracep->declBus(c+1384,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+596,"in_pready", false,-1);
    tracep->declBus(c+1459,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1555,"in_pslverr", false,-1);
    tracep->declBit(c+1509,"sdram_clk", false,-1);
    tracep->declBit(c+1328,"sdram_cke", false,-1);
    tracep->declBit(c+592,"sdram_cs", false,-1);
    tracep->declBit(c+593,"sdram_ras", false,-1);
    tracep->declBit(c+594,"sdram_cas", false,-1);
    tracep->declBit(c+595,"sdram_we", false,-1);
    tracep->declBus(c+1510,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1329,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1330,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1481,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+626,"sdram_dout_en", false,-1);
    tracep->declBus(c+627,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+509,"state", false,-1, 1,0);
    tracep->declBit(c+1332,"req_accept", false,-1);
    tracep->declBit(c+1443,"is_read", false,-1);
    tracep->declBit(c+1444,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1484,"clk_i", false,-1);
    tracep->declBit(c+1485,"rst_i", false,-1);
    tracep->declBus(c+1445,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1443,"inport_rd_i", false,-1);
    tracep->declBus(c+1560,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1379,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1384,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1481,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1332,"inport_accept_o", false,-1);
    tracep->declBit(c+596,"inport_ack_o", false,-1);
    tracep->declBit(c+1555,"inport_error_o", false,-1);
    tracep->declBus(c+1459,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1509,"sdram_clk_o", false,-1);
    tracep->declBit(c+1328,"sdram_cke_o", false,-1);
    tracep->declBit(c+592,"sdram_cs_o", false,-1);
    tracep->declBit(c+593,"sdram_ras_o", false,-1);
    tracep->declBit(c+594,"sdram_cas_o", false,-1);
    tracep->declBit(c+595,"sdram_we_o", false,-1);
    tracep->declBus(c+1330,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1510,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1329,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+627,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+626,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1546,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1799,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1550,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1606,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1606,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1603,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1603,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1800,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1801,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1802,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1803,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1603,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1804,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1805,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1807,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1808,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1809,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1810,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1559,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1811,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1603,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1559,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1810,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1809,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1805,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1807,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1806,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1808,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1804,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1812,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1813,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1814,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1814,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1601,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1814,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1606,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1606,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1379,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1445,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1443,"ram_rd_w", false,-1);
    tracep->declBit(c+1332,"ram_accept_w", false,-1);
    tracep->declBus(c+1384,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1459,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+596,"ram_ack_w", false,-1);
    tracep->declBit(c+1446,"ram_req_w", false,-1);
    tracep->declBus(c+628,"command_q", false,-1, 3,0);
    tracep->declBus(c+1333,"addr_q", false,-1, 12,0);
    tracep->declBus(c+627,"data_q", false,-1, 31,0);
    tracep->declBit(c+629,"data_rd_en_q", false,-1);
    tracep->declBus(c+1330,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1328,"cke_q", false,-1);
    tracep->declBus(c+1329,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1459,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+630,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1481,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+631,"refresh_q", false,-1);
    tracep->declBus(c+632,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+633+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1334,"state_q", false,-1, 3,0);
    tracep->declBus(c+1474,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1475,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+637,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+638,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1447,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1448,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1449,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1603,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+639,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1476,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1816,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1335,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1462,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1463,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+640,"idx", false,-1, 31,0);
    tracep->declBus(c+1464,"rd_q", false,-1, 3,0);
    tracep->declBit(c+596,"ack_q", false,-1);
    tracep->declArray(c+1336,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1407,"auto_in_psel", false,-1);
    tracep->declBit(c+1408,"auto_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1394,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+599,"auto_in_pready", false,-1);
    tracep->declBit(c+600,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1461,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+591,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1326,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1327,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1506,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1817,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1818,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1819,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1450,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1407,"in_psel", false,-1);
    tracep->declBit(c+1408,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1383,"in_pwrite", false,-1);
    tracep->declBus(c+1384,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+599,"in_pready", false,-1);
    tracep->declBus(c+1461,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+600,"in_pslverr", false,-1);
    tracep->declBit(c+591,"spi_sck", false,-1);
    tracep->declBus(c+1326,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1327,"spi_mosi", false,-1);
    tracep->declBit(c+1506,"spi_miso", false,-1);
    tracep->declBit(c+641,"spi_irq_out", false,-1);
    tracep->declBus(c+1820,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1821,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1820,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1822,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1823,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1824,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1559,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1810,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1809,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1805,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1807,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1806,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1808,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1804,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1812,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1813,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1825,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+642,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1477,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+643,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+644,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+645,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+646,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+647,"wb_we_i", false,-1);
    tracep->declBit(c+648,"wb_stb_i", false,-1);
    tracep->declBit(c+649,"wb_cyc_i", false,-1);
    tracep->declBit(c+650,"wb_ack_o", false,-1);
    tracep->declBit(c+1555,"wb_err_o", false,-1);
    tracep->declBit(c+651,"wb_int_o", false,-1);
    tracep->declBit(c+652,"done", false,-1);
    tracep->declBus(c+653,"paddr", false,-1, 31,0);
    tracep->declQuad(c+654,"data", false,-1, 63,0);
    tracep->declBit(c+656,"is_flash_access", false,-1);
    tracep->declBus(c+657,"tmp", false,-1, 31,0);
    tracep->declQuad(c+658,"tmp64", false,-1, 63,0);
    tracep->declBus(c+660,"counter", false,-1, 7,0);
    tracep->declBit(c+661,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1605,"Tp", false,-1, 31,0);
    tracep->declBit(c+1484,"wb_clk_i", false,-1);
    tracep->declBit(c+1485,"wb_rst_i", false,-1);
    tracep->declBus(c+643,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+644,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+645,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+646,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+647,"wb_we_i", false,-1);
    tracep->declBit(c+648,"wb_stb_i", false,-1);
    tracep->declBit(c+649,"wb_cyc_i", false,-1);
    tracep->declBit(c+650,"wb_ack_o", false,-1);
    tracep->declBit(c+1555,"wb_err_o", false,-1);
    tracep->declBit(c+651,"wb_int_o", false,-1);
    tracep->declBus(c+1326,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+591,"sclk_pad_o", false,-1);
    tracep->declBit(c+1327,"mosi_pad_o", false,-1);
    tracep->declBit(c+1506,"miso_pad_i", false,-1);
    tracep->declBus(c+662,"divider", false,-1, 15,0);
    tracep->declBus(c+663,"ctrl", false,-1, 13,0);
    tracep->declBus(c+664,"ss", false,-1, 7,0);
    tracep->declBus(c+665,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+666,"rx", false,-1, 127,0);
    tracep->declBit(c+670,"rx_negedge", false,-1);
    tracep->declBit(c+671,"tx_negedge", false,-1);
    tracep->declBus(c+672,"char_len", false,-1, 6,0);
    tracep->declBit(c+673,"go", false,-1);
    tracep->declBit(c+674,"lsb", false,-1);
    tracep->declBit(c+675,"ie", false,-1);
    tracep->declBit(c+676,"ass", false,-1);
    tracep->declBit(c+677,"spi_divider_sel", false,-1);
    tracep->declBit(c+678,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+679,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+680,"spi_ss_sel", false,-1);
    tracep->declBit(c+681,"tip", false,-1);
    tracep->declBit(c+682,"pos_edge", false,-1);
    tracep->declBit(c+683,"neg_edge", false,-1);
    tracep->declBit(c+684,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1605,"Tp", false,-1, 31,0);
    tracep->declBit(c+1484,"clk_in", false,-1);
    tracep->declBit(c+1485,"rst", false,-1);
    tracep->declBit(c+681,"enable", false,-1);
    tracep->declBit(c+673,"go", false,-1);
    tracep->declBit(c+684,"last_clk", false,-1);
    tracep->declBus(c+662,"divider", false,-1, 15,0);
    tracep->declBit(c+591,"clk_out", false,-1);
    tracep->declBit(c+682,"pos_edge", false,-1);
    tracep->declBit(c+683,"neg_edge", false,-1);
    tracep->declBus(c+685,"cnt", false,-1, 15,0);
    tracep->declBit(c+686,"cnt_zero", false,-1);
    tracep->declBit(c+687,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1605,"Tp", false,-1, 31,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1485,"rst", false,-1);
    tracep->declBus(c+688,"latch", false,-1, 3,0);
    tracep->declBus(c+646,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+672,"len", false,-1, 6,0);
    tracep->declBit(c+674,"lsb", false,-1);
    tracep->declBit(c+673,"go", false,-1);
    tracep->declBit(c+682,"pos_edge", false,-1);
    tracep->declBit(c+683,"neg_edge", false,-1);
    tracep->declBit(c+670,"rx_negedge", false,-1);
    tracep->declBit(c+671,"tx_negedge", false,-1);
    tracep->declBit(c+681,"tip", false,-1);
    tracep->declBit(c+684,"last", false,-1);
    tracep->declBus(c+644,"p_in", false,-1, 31,0);
    tracep->declArray(c+666,"p_out", false,-1, 127,0);
    tracep->declBit(c+591,"s_clk", false,-1);
    tracep->declBit(c+1506,"s_in", false,-1);
    tracep->declBit(c+1327,"s_out", false,-1);
    tracep->declBus(c+689,"cnt", false,-1, 7,0);
    tracep->declArray(c+666,"data", false,-1, 127,0);
    tracep->declBus(c+690,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+691,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+692,"rx_clk", false,-1);
    tracep->declBit(c+693,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1404,"auto_in_psel", false,-1);
    tracep->declBit(c+1405,"auto_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1397,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1406,"auto_in_pready", false,-1);
    tracep->declBit(c+1555,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1514,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1504,"uart_rx", false,-1);
    tracep->declBit(c+1505,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1404,"in_psel", false,-1);
    tracep->declBit(c+1405,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1406,"in_pready", false,-1);
    tracep->declBit(c+1555,"in_pslverr", false,-1);
    tracep->declBus(c+1425,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1383,"in_pwrite", false,-1);
    tracep->declBus(c+1514,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1384,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1504,"uart_rx", false,-1);
    tracep->declBit(c+1505,"uart_tx", false,-1);
    tracep->declBit(c+694,"rtsn", false,-1);
    tracep->declBit(c+1555,"ctsn", false,-1);
    tracep->declBit(c+695,"dtr_pad_o", false,-1);
    tracep->declBit(c+1555,"dsr_pad_i", false,-1);
    tracep->declBit(c+1555,"ri_pad_i", false,-1);
    tracep->declBit(c+1555,"dcd_pad_i", false,-1);
    tracep->declBit(c+696,"interrupt", false,-1);
    tracep->declBit(c+1533,"reg_we", false,-1);
    tracep->declBit(c+1534,"reg_re", false,-1);
    tracep->declBus(c+1451,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1452,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+510,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1478,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+697,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1485,"wb_rst_i", false,-1);
    tracep->declBus(c+1451,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1453,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1478,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1533,"wb_we_i", false,-1);
    tracep->declBit(c+1534,"wb_re_i", false,-1);
    tracep->declBit(c+1505,"stx_pad_o", false,-1);
    tracep->declBit(c+1504,"srx_pad_i", false,-1);
    tracep->declBus(c+1812,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+697,"rts_pad_o", false,-1);
    tracep->declBit(c+695,"dtr_pad_o", false,-1);
    tracep->declBit(c+696,"int_o", false,-1);
    tracep->declBit(c+698,"enable", false,-1);
    tracep->declBit(c+699,"srx_pad", false,-1);
    tracep->declBus(c+700,"ier", false,-1, 3,0);
    tracep->declBus(c+701,"iir", false,-1, 3,0);
    tracep->declBus(c+702,"fcr", false,-1, 1,0);
    tracep->declBus(c+703,"mcr", false,-1, 4,0);
    tracep->declBus(c+704,"lcr", false,-1, 7,0);
    tracep->declBus(c+705,"msr", false,-1, 7,0);
    tracep->declBus(c+706,"dl", false,-1, 15,0);
    tracep->declBus(c+707,"scratch", false,-1, 7,0);
    tracep->declBit(c+708,"start_dlc", false,-1);
    tracep->declBit(c+709,"lsr_mask_d", false,-1);
    tracep->declBit(c+710,"msi_reset", false,-1);
    tracep->declBus(c+711,"dlc", false,-1, 15,0);
    tracep->declBus(c+712,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+713,"rx_reset", false,-1);
    tracep->declBit(c+714,"tx_reset", false,-1);
    tracep->declBit(c+715,"dlab", false,-1);
    tracep->declBit(c+1558,"cts_pad_i", false,-1);
    tracep->declBit(c+1555,"dsr_pad_i", false,-1);
    tracep->declBit(c+1555,"ri_pad_i", false,-1);
    tracep->declBit(c+1555,"dcd_pad_i", false,-1);
    tracep->declBit(c+716,"loopback", false,-1);
    tracep->declBit(c+1555,"cts", false,-1);
    tracep->declBit(c+1558,"dsr", false,-1);
    tracep->declBit(c+1558,"ri", false,-1);
    tracep->declBit(c+1558,"dcd", false,-1);
    tracep->declBit(c+717,"cts_c", false,-1);
    tracep->declBit(c+718,"dsr_c", false,-1);
    tracep->declBit(c+719,"ri_c", false,-1);
    tracep->declBit(c+720,"dcd_c", false,-1);
    tracep->declBus(c+721,"lsr", false,-1, 7,0);
    tracep->declBit(c+722,"lsr0", false,-1);
    tracep->declBit(c+723,"lsr1", false,-1);
    tracep->declBit(c+724,"lsr2", false,-1);
    tracep->declBit(c+725,"lsr3", false,-1);
    tracep->declBit(c+726,"lsr4", false,-1);
    tracep->declBit(c+727,"lsr5", false,-1);
    tracep->declBit(c+728,"lsr6", false,-1);
    tracep->declBit(c+729,"lsr7", false,-1);
    tracep->declBit(c+730,"lsr0r", false,-1);
    tracep->declBit(c+731,"lsr1r", false,-1);
    tracep->declBit(c+732,"lsr2r", false,-1);
    tracep->declBit(c+733,"lsr3r", false,-1);
    tracep->declBit(c+734,"lsr4r", false,-1);
    tracep->declBit(c+735,"lsr5r", false,-1);
    tracep->declBit(c+736,"lsr6r", false,-1);
    tracep->declBit(c+737,"lsr7r", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBit(c+738,"rls_int", false,-1);
    tracep->declBit(c+739,"rda_int", false,-1);
    tracep->declBit(c+740,"ti_int", false,-1);
    tracep->declBit(c+741,"thre_int", false,-1);
    tracep->declBit(c+742,"ms_int", false,-1);
    tracep->declBit(c+743,"tf_push", false,-1);
    tracep->declBit(c+744,"rf_pop", false,-1);
    tracep->declBus(c+1535,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+745,"rf_error_bit", false,-1);
    tracep->declBit(c+723,"rf_overrun", false,-1);
    tracep->declBit(c+746,"rf_push_pulse", false,-1);
    tracep->declBus(c+747,"rf_count", false,-1, 4,0);
    tracep->declBus(c+748,"tf_count", false,-1, 4,0);
    tracep->declBus(c+749,"tstate", false,-1, 2,0);
    tracep->declBus(c+750,"rstate", false,-1, 3,0);
    tracep->declBus(c+751,"counter_t", false,-1, 9,0);
    tracep->declBit(c+752,"thre_set_en", false,-1);
    tracep->declBus(c+753,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+754,"block_value", false,-1, 7,0);
    tracep->declBit(c+755,"serial_out", false,-1);
    tracep->declBit(c+756,"serial_in", false,-1);
    tracep->declBit(c+104,"lsr_mask_condition", false,-1);
    tracep->declBit(c+105,"iir_read", false,-1);
    tracep->declBit(c+106,"msr_read", false,-1);
    tracep->declBit(c+107,"fifo_read", false,-1);
    tracep->declBit(c+108,"fifo_write", false,-1);
    tracep->declBus(c+757,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+758,"lsr0_d", false,-1);
    tracep->declBit(c+759,"lsr1_d", false,-1);
    tracep->declBit(c+760,"lsr2_d", false,-1);
    tracep->declBit(c+761,"lsr3_d", false,-1);
    tracep->declBit(c+762,"lsr4_d", false,-1);
    tracep->declBit(c+763,"lsr5_d", false,-1);
    tracep->declBit(c+764,"lsr6_d", false,-1);
    tracep->declBit(c+765,"lsr7_d", false,-1);
    tracep->declBit(c+766,"rls_int_d", false,-1);
    tracep->declBit(c+767,"thre_int_d", false,-1);
    tracep->declBit(c+768,"ms_int_d", false,-1);
    tracep->declBit(c+769,"ti_int_d", false,-1);
    tracep->declBit(c+770,"rda_int_d", false,-1);
    tracep->declBit(c+771,"rls_int_rise", false,-1);
    tracep->declBit(c+772,"thre_int_rise", false,-1);
    tracep->declBit(c+773,"ms_int_rise", false,-1);
    tracep->declBit(c+774,"ti_int_rise", false,-1);
    tracep->declBit(c+775,"rda_int_rise", false,-1);
    tracep->declBit(c+776,"rls_int_pnd", false,-1);
    tracep->declBit(c+777,"rda_int_pnd", false,-1);
    tracep->declBit(c+778,"thre_int_pnd", false,-1);
    tracep->declBit(c+779,"ms_int_pnd", false,-1);
    tracep->declBit(c+780,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1605,"Tp", false,-1, 31,0);
    tracep->declBus(c+1605,"width", false,-1, 31,0);
    tracep->declBus(c+1795,"init_value", false,-1, 0,0);
    tracep->declBit(c+1485,"rst_i", false,-1);
    tracep->declBit(c+1484,"clk_i", false,-1);
    tracep->declBit(c+1555,"stage1_rst_i", false,-1);
    tracep->declBit(c+1558,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1504,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+699,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+781,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1485,"wb_rst_i", false,-1);
    tracep->declBus(c+704,"lcr", false,-1, 7,0);
    tracep->declBit(c+744,"rf_pop", false,-1);
    tracep->declBit(c+756,"srx_pad_i", false,-1);
    tracep->declBit(c+698,"enable", false,-1);
    tracep->declBit(c+713,"rx_reset", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBus(c+751,"counter_t", false,-1, 9,0);
    tracep->declBus(c+747,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1535,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+723,"rf_overrun", false,-1);
    tracep->declBit(c+745,"rf_error_bit", false,-1);
    tracep->declBus(c+750,"rstate", false,-1, 3,0);
    tracep->declBit(c+746,"rf_push_pulse", false,-1);
    tracep->declBus(c+782,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+783,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+784,"rshift", false,-1, 7,0);
    tracep->declBit(c+785,"rparity", false,-1);
    tracep->declBit(c+786,"rparity_error", false,-1);
    tracep->declBit(c+787,"rframing_error", false,-1);
    tracep->declBit(c+788,"rbit_in", false,-1);
    tracep->declBit(c+789,"rparity_xor", false,-1);
    tracep->declBus(c+790,"counter_b", false,-1, 7,0);
    tracep->declBit(c+791,"rf_push_q", false,-1);
    tracep->declBus(c+792,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+793,"rf_push", false,-1);
    tracep->declBit(c+794,"break_error", false,-1);
    tracep->declBit(c+795,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+796,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+797,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+798,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1559,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1810,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1809,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1805,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1807,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1806,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1808,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1804,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1812,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1813,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1826,"sr_push", false,-1, 3,0);
    tracep->declBus(c+799,"toc_value", false,-1, 9,0);
    tracep->declBus(c+800,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1827,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1604,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1603,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1793,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1485,"wb_rst_i", false,-1);
    tracep->declBit(c+746,"push", false,-1);
    tracep->declBit(c+744,"pop", false,-1);
    tracep->declBus(c+792,"data_in", false,-1, 10,0);
    tracep->declBit(c+713,"fifo_reset", false,-1);
    tracep->declBit(c+103,"reset_status", false,-1);
    tracep->declBus(c+1535,"data_out", false,-1, 10,0);
    tracep->declBit(c+723,"overrun", false,-1);
    tracep->declBus(c+747,"count", false,-1, 4,0);
    tracep->declBit(c+745,"error_bit", false,-1);
    tracep->declBus(c+1536,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+801+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+817,"top", false,-1, 3,0);
    tracep->declBus(c+818,"bottom", false,-1, 3,0);
    tracep->declBus(c+819,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+820,"word0", false,-1, 2,0);
    tracep->declBus(c+821,"word1", false,-1, 2,0);
    tracep->declBus(c+822,"word2", false,-1, 2,0);
    tracep->declBus(c+823,"word3", false,-1, 2,0);
    tracep->declBus(c+824,"word4", false,-1, 2,0);
    tracep->declBus(c+825,"word5", false,-1, 2,0);
    tracep->declBus(c+826,"word6", false,-1, 2,0);
    tracep->declBus(c+827,"word7", false,-1, 2,0);
    tracep->declBus(c+828,"word8", false,-1, 2,0);
    tracep->declBus(c+829,"word9", false,-1, 2,0);
    tracep->declBus(c+830,"word10", false,-1, 2,0);
    tracep->declBus(c+831,"word11", false,-1, 2,0);
    tracep->declBus(c+832,"word12", false,-1, 2,0);
    tracep->declBus(c+833,"word13", false,-1, 2,0);
    tracep->declBus(c+834,"word14", false,-1, 2,0);
    tracep->declBus(c+835,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1603,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1819,"data_width", false,-1, 31,0);
    tracep->declBus(c+1604,"depth", false,-1, 31,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+746,"we", false,-1);
    tracep->declBus(c+817,"a", false,-1, 3,0);
    tracep->declBus(c+818,"dpra", false,-1, 3,0);
    tracep->declBus(c+836,"di", false,-1, 7,0);
    tracep->declBus(c+1536,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+511+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1485,"wb_rst_i", false,-1);
    tracep->declBus(c+704,"lcr", false,-1, 7,0);
    tracep->declBit(c+743,"tf_push", false,-1);
    tracep->declBus(c+1453,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+698,"enable", false,-1);
    tracep->declBit(c+714,"tx_reset", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBit(c+755,"stx_pad_o", false,-1);
    tracep->declBus(c+749,"tstate", false,-1, 2,0);
    tracep->declBus(c+748,"tf_count", false,-1, 4,0);
    tracep->declBus(c+837,"counter", false,-1, 4,0);
    tracep->declBus(c+838,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+839,"shift_out", false,-1, 6,0);
    tracep->declBit(c+840,"stx_o_tmp", false,-1);
    tracep->declBit(c+841,"parity_xor", false,-1);
    tracep->declBit(c+842,"tf_pop", false,-1);
    tracep->declBit(c+843,"bit_out", false,-1);
    tracep->declBus(c+1453,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1537,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+844,"tf_overrun", false,-1);
    tracep->declBus(c+1551,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1548,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1552,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1553,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1648,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1828,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1819,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1604,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1603,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1793,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+1485,"wb_rst_i", false,-1);
    tracep->declBit(c+743,"push", false,-1);
    tracep->declBit(c+842,"pop", false,-1);
    tracep->declBus(c+1453,"data_in", false,-1, 7,0);
    tracep->declBit(c+714,"fifo_reset", false,-1);
    tracep->declBit(c+103,"reset_status", false,-1);
    tracep->declBus(c+1537,"data_out", false,-1, 7,0);
    tracep->declBit(c+844,"overrun", false,-1);
    tracep->declBus(c+748,"count", false,-1, 4,0);
    tracep->declBus(c+845,"top", false,-1, 3,0);
    tracep->declBus(c+846,"bottom", false,-1, 3,0);
    tracep->declBus(c+847,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1603,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1819,"data_width", false,-1, 31,0);
    tracep->declBus(c+1604,"depth", false,-1, 31,0);
    tracep->declBit(c+1484,"clk", false,-1);
    tracep->declBit(c+743,"we", false,-1);
    tracep->declBus(c+845,"a", false,-1, 3,0);
    tracep->declBus(c+846,"dpra", false,-1, 3,0);
    tracep->declBus(c+1453,"di", false,-1, 7,0);
    tracep->declBus(c+1537,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+527+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBit(c+1392,"auto_in_psel", false,-1);
    tracep->declBit(c+1393,"auto_in_penable", false,-1);
    tracep->declBit(c+1383,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1394,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1382,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1384,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+597,"auto_in_pready", false,-1);
    tracep->declBit(c+1556,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1557,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1498,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1499,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1500,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1501,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1502,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1503,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1484,"clock", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1450,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1392,"in_psel", false,-1);
    tracep->declBit(c+1393,"in_penable", false,-1);
    tracep->declBus(c+1382,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1383,"in_pwrite", false,-1);
    tracep->declBus(c+1384,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1385,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+597,"in_pready", false,-1);
    tracep->declBus(c+1557,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1556,"in_pslverr", false,-1);
    tracep->declBus(c+1498,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1499,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1500,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1501,"vga_hsync", false,-1);
    tracep->declBit(c+1502,"vga_vsync", false,-1);
    tracep->declBit(c+1503,"vga_valid", false,-1);
    tracep->declBus(c+848,"h_addr", false,-1, 9,0);
    tracep->declBus(c+543,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1538,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1454,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+597,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1484,"pclk", false,-1);
    tracep->declBit(c+1485,"reset", false,-1);
    tracep->declBus(c+1538,"vga_data", false,-1, 23,0);
    tracep->declBus(c+848,"h_addr", false,-1, 9,0);
    tracep->declBus(c+543,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1501,"hsync", false,-1);
    tracep->declBit(c+1502,"vsync", false,-1);
    tracep->declBit(c+1503,"valid", false,-1);
    tracep->declBus(c+1498,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1499,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1500,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1829,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1830,"h_active", false,-1, 31,0);
    tracep->declBus(c+1831,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1832,"h_total", false,-1, 31,0);
    tracep->declBus(c+1606,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1833,"v_active", false,-1, 31,0);
    tracep->declBus(c+1834,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1835,"v_total", false,-1, 31,0);
    tracep->declBus(c+849,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+544,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+850,"h_valid", false,-1);
    tracep->declBit(c+545,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+591,"sck", false,-1);
    tracep->declBit(c+1339,"ss", false,-1);
    tracep->declBit(c+1327,"mosi", false,-1);
    tracep->declBit(c+1143,"miso", false,-1);
    tracep->declBus(c+1144,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1145,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1539,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+591,"sck", false,-1);
    tracep->declBit(c+1340,"ss", false,-1);
    tracep->declBit(c+1327,"mosi", false,-1);
    tracep->declBit(c+1540,"miso", false,-1);
    tracep->declBit(c+1340,"reset", false,-1);
    tracep->declBus(c+1137,"state", false,-1, 2,0);
    tracep->declBus(c+1138,"counter", false,-1, 7,0);
    tracep->declBus(c+1139,"cmd", false,-1, 7,0);
    tracep->declBus(c+1140,"addr", false,-1, 23,0);
    tracep->declBus(c+1141,"data", false,-1, 31,0);
    tracep->declBit(c+1142,"ren", false,-1);
    tracep->declBus(c+1541,"rdata", false,-1, 31,0);
    tracep->declBus(c+1542,"raddr", false,-1, 31,0);
    tracep->declBus(c+1146,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+591,"clock", false,-1);
    tracep->declBit(c+1142,"valid", false,-1);
    tracep->declBus(c+1139,"cmd", false,-1, 7,0);
    tracep->declBus(c+1542,"addr", false,-1, 31,0);
    tracep->declBus(c+1541,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1507,"sck", false,-1);
    tracep->declBit(c+1465,"ce_n", false,-1);
    tracep->declBus(c+1508,"dio", false,-1, 3,0);
    tracep->declBus(c+581,"dio_out", false,-1, 3,0);
    tracep->declBus(c+582,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1508,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1595,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1605,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1606,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1836,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1603,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1793,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+583,"state", false,-1, 2,0);
    tracep->declBus(c+1543,"next_state", false,-1, 2,0);
    tracep->declBus(c+584,"counter", false,-1, 7,0);
    tracep->declBus(c+585,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+586,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+587,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+588,"is_read_op", false,-1);
    tracep->declBit(c+589,"is_write_op", false,-1);
    tracep->declBus(c+590,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1544,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1509,"clk", false,-1);
    tracep->declBit(c+1328,"cke", false,-1);
    tracep->declBit(c+592,"cs", false,-1);
    tracep->declBit(c+593,"ras", false,-1);
    tracep->declBit(c+594,"cas", false,-1);
    tracep->declBit(c+595,"we", false,-1);
    tracep->declBus(c+1510,"a", false,-1, 13,0);
    tracep->declBus(c+1329,"ba", false,-1, 1,0);
    tracep->declBus(c+1330,"dqm", false,-1, 3,0);
    tracep->declBus(c+1481,"dq", false,-1, 31,0);
    tracep->declBit(c+852,"cs_0", false,-1);
    tracep->declBit(c+853,"ras_0", false,-1);
    tracep->declBit(c+854,"cas_0", false,-1);
    tracep->declBit(c+855,"we_0", false,-1);
    tracep->declBit(c+856,"cs_1", false,-1);
    tracep->declBit(c+857,"ras_1", false,-1);
    tracep->declBit(c+858,"cas_1", false,-1);
    tracep->declBit(c+859,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1509,"clk", false,-1);
    tracep->declBit(c+1328,"cke", false,-1);
    tracep->declBit(c+856,"cs", false,-1);
    tracep->declBit(c+857,"ras", false,-1);
    tracep->declBit(c+858,"cas", false,-1);
    tracep->declBit(c+859,"we", false,-1);
    tracep->declBus(c+1333,"a", false,-1, 12,0);
    tracep->declBus(c+1329,"ba", false,-1, 1,0);
    tracep->declBus(c+1330,"dqm", false,-1, 3,0);
    tracep->declBus(c+1481,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1509,"clk", false,-1);
    tracep->declBit(c+1328,"cke", false,-1);
    tracep->declBit(c+856,"cs", false,-1);
    tracep->declBit(c+857,"ras", false,-1);
    tracep->declBit(c+858,"cas", false,-1);
    tracep->declBit(c+859,"we", false,-1);
    tracep->declBus(c+1333,"a", false,-1, 12,0);
    tracep->declBus(c+1329,"ba", false,-1, 1,0);
    tracep->declBus(c+1341,"dqm", false,-1, 1,0);
    tracep->declBus(c+1482,"dq", false,-1, 15,0);
    tracep->declBus(c+1837,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1805,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1807,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1559,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1077,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1078,"bl", false,-1, 2,0);
    tracep->declBus(c+1479,"command", false,-1, 3,0);
    tracep->declBus(c+1079,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1080,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1342,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1081,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1455,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1082,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1083+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1087,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1088,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1838,"state", false,-1, 2,0);
    tracep->declBit(c+1089,"write_brust", false,-1);
    tracep->declBit(c+1090,"read_burst", false,-1);
    tracep->declBus(c+1091,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1509,"clk", false,-1);
    tracep->declBit(c+1328,"cke", false,-1);
    tracep->declBit(c+856,"cs", false,-1);
    tracep->declBit(c+857,"ras", false,-1);
    tracep->declBit(c+858,"cas", false,-1);
    tracep->declBit(c+859,"we", false,-1);
    tracep->declBus(c+1333,"a", false,-1, 12,0);
    tracep->declBus(c+1329,"ba", false,-1, 1,0);
    tracep->declBus(c+1343,"dqm", false,-1, 1,0);
    tracep->declBus(c+1483,"dq", false,-1, 15,0);
    tracep->declBus(c+1837,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1805,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1807,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1559,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1092,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1093,"bl", false,-1, 2,0);
    tracep->declBus(c+1479,"command", false,-1, 3,0);
    tracep->declBus(c+1094,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1095,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1342,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1096,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1456,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1097,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1098+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1102,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1103,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1839,"state", false,-1, 2,0);
    tracep->declBit(c+1104,"write_brust", false,-1);
    tracep->declBit(c+1105,"read_burst", false,-1);
    tracep->declBus(c+1106,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1509,"clk", false,-1);
    tracep->declBit(c+1328,"cke", false,-1);
    tracep->declBit(c+852,"cs", false,-1);
    tracep->declBit(c+853,"ras", false,-1);
    tracep->declBit(c+854,"cas", false,-1);
    tracep->declBit(c+855,"we", false,-1);
    tracep->declBus(c+1333,"a", false,-1, 12,0);
    tracep->declBus(c+1329,"ba", false,-1, 1,0);
    tracep->declBus(c+1330,"dqm", false,-1, 3,0);
    tracep->declBus(c+1481,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1509,"clk", false,-1);
    tracep->declBit(c+1328,"cke", false,-1);
    tracep->declBit(c+852,"cs", false,-1);
    tracep->declBit(c+853,"ras", false,-1);
    tracep->declBit(c+854,"cas", false,-1);
    tracep->declBit(c+855,"we", false,-1);
    tracep->declBus(c+1333,"a", false,-1, 12,0);
    tracep->declBus(c+1329,"ba", false,-1, 1,0);
    tracep->declBus(c+1341,"dqm", false,-1, 1,0);
    tracep->declBus(c+1482,"dq", false,-1, 15,0);
    tracep->declBus(c+1837,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1805,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1807,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1559,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1107,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1108,"bl", false,-1, 2,0);
    tracep->declBus(c+1480,"command", false,-1, 3,0);
    tracep->declBus(c+1109,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1110,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1342,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1111,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1457,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1112,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1113+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1117,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1118,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1840,"state", false,-1, 2,0);
    tracep->declBit(c+1119,"write_brust", false,-1);
    tracep->declBit(c+1120,"read_burst", false,-1);
    tracep->declBus(c+1121,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1509,"clk", false,-1);
    tracep->declBit(c+1328,"cke", false,-1);
    tracep->declBit(c+852,"cs", false,-1);
    tracep->declBit(c+853,"ras", false,-1);
    tracep->declBit(c+854,"cas", false,-1);
    tracep->declBit(c+855,"we", false,-1);
    tracep->declBus(c+1333,"a", false,-1, 12,0);
    tracep->declBus(c+1329,"ba", false,-1, 1,0);
    tracep->declBus(c+1343,"dqm", false,-1, 1,0);
    tracep->declBus(c+1483,"dq", false,-1, 15,0);
    tracep->declBus(c+1837,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1805,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1806,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1807,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1559,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1122,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1123,"bl", false,-1, 2,0);
    tracep->declBus(c+1480,"command", false,-1, 3,0);
    tracep->declBus(c+1124,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1125,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1342,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1126,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1458,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1127,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1128+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1132,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1133,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1841,"state", false,-1, 2,0);
    tracep->declBit(c+1134,"write_brust", false,-1);
    tracep->declBit(c+1135,"read_burst", false,-1);
    tracep->declBus(c+1136,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
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
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+28,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+39,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+48,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+51,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+55,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+59,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+61,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+62,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+63,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+64,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+65,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+66,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+68,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+69,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+70,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+71,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+72,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+73,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+74,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+75,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullIData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rdata),32);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rresp),2);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rlast));
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rid),4);
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rvalid));
    bufp->fullIData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rdata),32);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rresp),2);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rlast));
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rid),4);
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rvalid));
    bufp->fullIData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__r_switch));
    bufp->fullIData(oldp+100,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+110,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+111,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+112,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+113,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+114,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+115,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+116,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+117,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+118,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+120,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+121,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+122,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+123,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+124,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+134,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+139,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+140,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+141,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+142,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+143,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+144,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+145,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+146,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+216,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+217,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+218,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+219,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+223,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+225,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+265,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+279,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+280,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+281,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+342,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+416,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+420,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+424,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+428,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+432,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+436,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+444,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+452,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+456,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+464,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+468,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+472,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+476,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+508,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+547,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+551,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+552,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+553,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+554,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+555,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+556,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+557,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+558,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+559,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+560,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+561,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+562,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+563,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+564,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+565,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+566,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+567,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+568,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+569,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+570,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+571,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+572,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+573,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+574,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+575,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+576,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+577,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+578,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+579,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+580,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+592,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+593,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+594,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+595,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullSData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+603,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+604,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+605,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+606,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+607,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+608,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+609,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+610,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+613,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+614,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+618,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+622,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+626,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+657,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+658,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+670,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+671,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+672,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+673,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+674,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+675,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+676,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+677,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+680,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+684,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+686,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+687,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+690,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+694,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+695,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+697,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+715,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+717,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+718,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+719,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+720,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+721,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+725,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+726,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+745,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+752,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+771,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+772,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+773,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+774,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+775,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+794,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+795,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+796,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+797,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+798,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+800,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+819,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+836,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+847,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+848,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+851,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+852,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+853,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+854,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+855,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+856,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+857,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+858,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+859,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+867,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_araddr),32);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arready));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rready));
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+890,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+893,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arid),4);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arlen),8);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arburst),2);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+915,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+921,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+922,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+968,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+984,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+986,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+989,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr),32);
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[0]),32);
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[1]),32);
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[2]),32);
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[3]),32);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[4]),32);
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[5]),32);
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[6]),32);
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[7]),32);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[8]),32);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[9]),32);
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[10]),32);
    bufp->fullIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[11]),32);
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[12]),32);
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[13]),32);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[14]),32);
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__data_array[15]),32);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[0]),26);
    bufp->fullIData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[1]),26);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[2]),26);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[3]),26);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[4]),26);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[5]),26);
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[6]),26);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[7]),26);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[8]),26);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[9]),26);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[10]),26);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[11]),26);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[12]),26);
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[13]),26);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[14]),26);
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array[15]),26);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[0]));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[1]));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[2]));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[3]));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[4]));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[5]));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[6]));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[7]));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[8]));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[9]));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[10]));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[11]));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[12]));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[13]));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[14]));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array[15]));
    bufp->fullIData(oldp+1039,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                >> 6U)),26);
    bufp->fullCData(oldp+1040,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                        >> 2U))),4);
    bufp->fullCData(oldp+1041,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr)),2);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state),3);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1049,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid))
                                             ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu))
                                             ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu))
                                             ? 3U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter))
                                             ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid))
                                             ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state)))))),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1068,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1069,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1070,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1071,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1072,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1073,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1074,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1075,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1076,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1077,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1078,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1092,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1093,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1107,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1108,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1122,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1123,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1142,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullBit(oldp+1262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1268,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1271,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1291,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1295,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1296,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1305,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1332,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullSData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1339,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1341,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1342,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),10);
    bufp->fullCData(oldp+1343,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1344,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1345,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1356,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1362,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1367,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1368,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1369,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1372,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullIData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1391,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1394,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1395,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1396,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1397,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1402,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1403,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullIData(oldp+1425,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1433,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1434,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1435,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1436,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullIData(oldp+1441,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullCData(oldp+1442,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1447,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1448,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1449,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1450,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+1451,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1454,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullIData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1482,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1483,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullBit(oldp+1484,(vlSelf->clock));
    bufp->fullBit(oldp+1485,(vlSelf->reset));
    bufp->fullSData(oldp+1486,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1487,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1488,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1489,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1490,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1491,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1492,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1493,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1494,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1495,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1496,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1497,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1498,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1499,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1500,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1501,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1502,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1503,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1504,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1505,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1506,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1509,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1510,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullIData(oldp+1511,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
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
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                         : 0U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q
                                                           : 0U)))))))),32);
    bufp->fullCData(oldp+1512,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullBit(oldp+1513,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1515,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1516,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1517,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1519,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1520,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1522,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch)
                                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready)))));
    bufp->fullIData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1525,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1526,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                     ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                              ? 0U : 
                                             (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid))
                                               ? 0U
                                               : 4U)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rvalid) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_rready))
                                             ? 4U : 3U)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arvalid) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arready))
                                             ? 3U : 2U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__current_state))
                                         ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_array
                                              [(0xfU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                                   >> 2U))]) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_array
                                                [(0xfU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                                     >> 2U))] 
                                                == 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cpu_addr 
                                                 >> 6U)))
                                             ? 0U : 2U)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid))
                                             ? 1U : 0U))))),3);
    bufp->fullBit(oldp+1527,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1528,((0xfU & vlSelf->__VdfgTmp_haa801935__0)),4);
    bufp->fullBit(oldp+1529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1530,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1535,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1540,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1542,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1545,(0x226U),32);
    bufp->fullIData(oldp+1546,(0x64U),32);
    bufp->fullIData(oldp+1547,(0x200U),32);
    bufp->fullCData(oldp+1548,(1U),3);
    bufp->fullIData(oldp+1549,(0xb00U),32);
    bufp->fullIData(oldp+1550,(9U),32);
    bufp->fullCData(oldp+1551,(0U),3);
    bufp->fullCData(oldp+1552,(2U),3);
    bufp->fullCData(oldp+1553,(3U),3);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag));
    bufp->fullBit(oldp+1555,(0U));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1558,(1U));
    bufp->fullCData(oldp+1559,(0U),4);
    bufp->fullCData(oldp+1560,(0U),8);
    bufp->fullCData(oldp+1561,(0U),2);
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1563,(0U),32);
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullCData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arid),4);
    bufp->fullCData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arlen),8);
    bufp->fullCData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_arburst),2);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1595,(0U),32);
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1599,(1U),2);
    bufp->fullCData(oldp+1600,(2U),2);
    bufp->fullIData(oldp+1601,(0x20U),32);
    bufp->fullIData(oldp+1602,(4U),32);
    bufp->fullIData(oldp+1603,(4U),32);
    bufp->fullIData(oldp+1604,(0x10U),32);
    bufp->fullIData(oldp+1605,(1U),32);
    bufp->fullIData(oldp+1606,(2U),32);
    bufp->fullIData(oldp+1607,(0x1aU),32);
    bufp->fullIData(oldp+1608,(0x79737978U),32);
    bufp->fullIData(oldp+1609,(0x17e3c19U),32);
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+1648,(4U),3);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1792,(3U),2);
    bufp->fullIData(oldp+1793,(5U),32);
    bufp->fullBit(oldp+1794,(0U));
    bufp->fullBit(oldp+1795,(1U));
    bufp->fullCData(oldp+1796,(0x1bU),8);
    bufp->fullCData(oldp+1797,(0xebU),8);
    bufp->fullCData(oldp+1798,(0x38U),8);
    bufp->fullIData(oldp+1799,(0x18U),32);
    bufp->fullIData(oldp+1800,(0xdU),32);
    bufp->fullIData(oldp+1801,(0x2000U),32);
    bufp->fullIData(oldp+1802,(0x2710U),32);
    bufp->fullIData(oldp+1803,(0x30cU),32);
    bufp->fullCData(oldp+1804,(7U),4);
    bufp->fullCData(oldp+1805,(3U),4);
    bufp->fullCData(oldp+1806,(5U),4);
    bufp->fullCData(oldp+1807,(4U),4);
    bufp->fullCData(oldp+1808,(6U),4);
    bufp->fullCData(oldp+1809,(2U),4);
    bufp->fullCData(oldp+1810,(1U),4);
    bufp->fullSData(oldp+1811,(0x20U),13);
    bufp->fullCData(oldp+1812,(8U),4);
    bufp->fullCData(oldp+1813,(9U),4);
    bufp->fullIData(oldp+1814,(0xaU),32);
    bufp->fullIData(oldp+1815,(6U),32);
    bufp->fullIData(oldp+1816,(0x11U),32);
    bufp->fullIData(oldp+1817,(0x30000000U),32);
    bufp->fullIData(oldp+1818,(0x3fffffffU),32);
    bufp->fullIData(oldp+1819,(8U),32);
    bufp->fullCData(oldp+1820,(4U),5);
    bufp->fullCData(oldp+1821,(0U),5);
    bufp->fullCData(oldp+1822,(0x10U),5);
    bufp->fullCData(oldp+1823,(0x14U),5);
    bufp->fullCData(oldp+1824,(0x18U),5);
    bufp->fullIData(oldp+1825,(0x3000000U),32);
    bufp->fullCData(oldp+1826,(0xaU),4);
    bufp->fullIData(oldp+1827,(0xbU),32);
    bufp->fullCData(oldp+1828,(5U),3);
    bufp->fullIData(oldp+1829,(0x60U),32);
    bufp->fullIData(oldp+1830,(0x90U),32);
    bufp->fullIData(oldp+1831,(0x310U),32);
    bufp->fullIData(oldp+1832,(0x320U),32);
    bufp->fullIData(oldp+1833,(0x23U),32);
    bufp->fullIData(oldp+1834,(0x203U),32);
    bufp->fullIData(oldp+1835,(0x20dU),32);
    bufp->fullIData(oldp+1836,(3U),32);
    bufp->fullIData(oldp+1837,(0x400000U),32);
    bufp->fullCData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullCData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
}
