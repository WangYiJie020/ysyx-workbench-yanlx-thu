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
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1428,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1429,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1430,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1431,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1432,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1433,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1434,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1435,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1436,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1437,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1438,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1439,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1440,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1441,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1442,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1443,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1444,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1445,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1446,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1447,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1428,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1429,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1430,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1431,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1432,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1433,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1434,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1435,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1436,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1437,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1438,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1439,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1440,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1441,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1442,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1443,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1444,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1445,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1446,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1447,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+631,"spi_sck", false,-1);
    tracep->declBus(c+1328,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1329,"spi_mosi", false,-1);
    tracep->declBit(c+1448,"spi_miso", false,-1);
    tracep->declBit(c+1446,"uart_rx", false,-1);
    tracep->declBit(c+1447,"uart_tx", false,-1);
    tracep->declBit(c+1449,"psram_sck", false,-1);
    tracep->declBit(c+1414,"psram_ce_n", false,-1);
    tracep->declBus(c+1450,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1451,"sdram_clk", false,-1);
    tracep->declBit(c+1330,"sdram_cke", false,-1);
    tracep->declBit(c+632,"sdram_cs", false,-1);
    tracep->declBit(c+633,"sdram_ras", false,-1);
    tracep->declBit(c+634,"sdram_cas", false,-1);
    tracep->declBit(c+635,"sdram_we", false,-1);
    tracep->declBus(c+1452,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1331,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1332,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1346,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1428,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1429,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1430,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1431,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1432,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1433,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1434,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1435,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1436,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1437,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1438,"ps2_clk", false,-1);
    tracep->declBit(c+1439,"ps2_data", false,-1);
    tracep->declBus(c+1440,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1441,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1442,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1443,"vga_hsync", false,-1);
    tracep->declBit(c+1444,"vga_vsync", false,-1);
    tracep->declBit(c+1445,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1485,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1486,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1487,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+109,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+110,"in_psel", false,-1);
    tracep->declBit(c+111,"in_penable", false,-1);
    tracep->declBus(c+1488,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+112,"in_pwrite", false,-1);
    tracep->declBus(c+113,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+114,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+115,"in_pready", false,-1);
    tracep->declBus(c+116,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+117,"in_pslverr", false,-1);
    tracep->declBus(c+1379,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1130,"out_psel", false,-1);
    tracep->declBit(c+1131,"out_penable", false,-1);
    tracep->declBus(c+118,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"out_pwrite", false,-1);
    tracep->declBus(c+1133,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1453,"out_pready", false,-1);
    tracep->declBus(c+1454,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+898,"out_pslverr", false,-1);
    tracep->declBus(c+1489,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1490,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1491,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1488,"ST_SETUP", false,-1, 2,0);
    tracep->declBus(c+1492,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1493,"ST_COUNTING", false,-1, 2,0);
    tracep->declBus(c+1494,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+119,"state", false,-1, 2,0);
    tracep->declBus(c+120,"next_state", false,-1, 2,0);
    tracep->declBus(c+121,"delay_counter", false,-1, 31,0);
    tracep->declBus(c+122,"accum_counter", false,-1, 31,0);
    tracep->declBus(c+123,"saved_prdata", false,-1, 31,0);
    tracep->declBit(c+124,"saved_pslverr", false,-1);
    tracep->declBus(c+125,"saved_pprot", false,-1, 2,0);
    tracep->declBus(c+126,"saved_pstrb", false,-1, 3,0);
    tracep->declBit(c+115,"reg_in_pready", false,-1);
    tracep->declBus(c+116,"reg_in_prdata", false,-1, 31,0);
    tracep->declBit(c+117,"reg_in_pslverr", false,-1);
    tracep->declBus(c+1379,"reg_out_paddr", false,-1, 31,0);
    tracep->declBit(c+1130,"reg_out_psel", false,-1);
    tracep->declBit(c+1131,"reg_out_penable", false,-1);
    tracep->declBus(c+118,"reg_out_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"reg_out_pwrite", false,-1);
    tracep->declBus(c+1133,"reg_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"reg_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+127,"transaction_active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1130,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1131,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+118,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1453,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+898,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1454,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1257,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1258,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+118,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+636,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1495,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+637,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1380,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1381,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1382,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+118,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+638,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1496,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1497,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1259,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1260,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+118,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+128,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1495,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+129,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1384,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1385,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+118,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+639,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1495,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+640,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1386,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1261,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+118,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1455,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1495,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+130,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1387,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+118,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1389,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1495,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1456,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1262,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1263,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1382,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+118,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+641,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+642,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+643,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1390,"sel_0", false,-1);
    tracep->declBit(c+1391,"sel_1", false,-1);
    tracep->declBit(c+1392,"sel_2", false,-1);
    tracep->declBit(c+1393,"sel_3", false,-1);
    tracep->declBit(c+1394,"sel_4", false,-1);
    tracep->declBit(c+1395,"sel_5", false,-1);
    tracep->declBit(c+1396,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+131,"auto_in_awready", false,-1);
    tracep->declBit(c+132,"auto_in_awvalid", false,-1);
    tracep->declBus(c+133,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+135,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+136,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+131,"auto_in_wready", false,-1);
    tracep->declBit(c+137,"auto_in_wvalid", false,-1);
    tracep->declBus(c+138,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+139,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+140,"auto_in_bready", false,-1);
    tracep->declBit(c+141,"auto_in_bvalid", false,-1);
    tracep->declBus(c+142,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+143,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+144,"auto_in_arready", false,-1);
    tracep->declBit(c+145,"auto_in_arvalid", false,-1);
    tracep->declBus(c+146,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+147,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+148,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+149,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+150,"auto_in_rready", false,-1);
    tracep->declBit(c+151,"auto_in_rvalid", false,-1);
    tracep->declBus(c+152,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+143,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+110,"auto_out_psel", false,-1);
    tracep->declBit(c+111,"auto_out_penable", false,-1);
    tracep->declBit(c+112,"auto_out_pwrite", false,-1);
    tracep->declBus(c+109,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+113,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+114,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+115,"auto_out_pready", false,-1);
    tracep->declBit(c+117,"auto_out_pslverr", false,-1);
    tracep->declBus(c+116,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+111,"nodeOut_penable", false,-1);
    tracep->declBus(c+154,"state", false,-1, 1,0);
    tracep->declBit(c+144,"accept_read", false,-1);
    tracep->declBit(c+131,"accept_write", false,-1);
    tracep->declBit(c+155,"is_write_r", false,-1);
    tracep->declBit(c+112,"is_write", false,-1);
    tracep->declBus(c+152,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+142,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+156,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+157,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+158,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+159,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+160,"resp", false,-1, 1,0);
    tracep->declBus(c+161,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+143,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+151,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+162,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+141,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+163,"auto_in_awready", false,-1);
    tracep->declBit(c+1264,"auto_in_awvalid", false,-1);
    tracep->declBus(c+164,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1265,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+165,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+166,"auto_in_wready", false,-1);
    tracep->declBit(c+1267,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"auto_in_wlast", false,-1);
    tracep->declBit(c+586,"auto_in_bready", false,-1);
    tracep->declBit(c+167,"auto_in_bvalid", false,-1);
    tracep->declBus(c+168,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+169,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+170,"auto_in_arready", false,-1);
    tracep->declBit(c+22,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+171,"auto_in_rvalid", false,-1);
    tracep->declBus(c+172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_in_rlast", false,-1);
    tracep->declBit(c+131,"auto_out_awready", false,-1);
    tracep->declBit(c+132,"auto_out_awvalid", false,-1);
    tracep->declBus(c+133,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+135,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+136,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+131,"auto_out_wready", false,-1);
    tracep->declBit(c+137,"auto_out_wvalid", false,-1);
    tracep->declBus(c+138,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+139,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+140,"auto_out_bready", false,-1);
    tracep->declBit(c+141,"auto_out_bvalid", false,-1);
    tracep->declBus(c+142,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+143,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+144,"auto_out_arready", false,-1);
    tracep->declBit(c+145,"auto_out_arvalid", false,-1);
    tracep->declBus(c+146,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+147,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+148,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+149,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+150,"auto_out_rready", false,-1);
    tracep->declBit(c+151,"auto_out_rvalid", false,-1);
    tracep->declBus(c+152,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+143,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+141,"io_enq_valid", false,-1);
    tracep->declBus(c+142,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+143,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+586,"io_deq_ready", false,-1);
    tracep->declBit(c+167,"io_deq_valid", false,-1);
    tracep->declBus(c+168,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+169,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+176,"wrap", false,-1);
    tracep->declBit(c+177,"wrap_1", false,-1);
    tracep->declBit(c+178,"maybe_full", false,-1);
    tracep->declBit(c+179,"ptr_match", false,-1);
    tracep->declBit(c+180,"empty", false,-1);
    tracep->declBit(c+181,"full", false,-1);
    tracep->declBit(c+182,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+177,"R0_addr", false,-1);
    tracep->declBit(c+1498,"R0_en", false,-1);
    tracep->declBit(c+1426,"R0_clk", false,-1);
    tracep->declBus(c+183,"R0_data", false,-1, 5,0);
    tracep->declBit(c+176,"W0_addr", false,-1);
    tracep->declBit(c+182,"W0_en", false,-1);
    tracep->declBit(c+1426,"W0_clk", false,-1);
    tracep->declBus(c+184,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+185+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+187,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+150,"io_enq_ready", false,-1);
    tracep->declBit(c+151,"io_enq_valid", false,-1);
    tracep->declBus(c+152,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+153,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+143,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+171,"io_deq_valid", false,-1);
    tracep->declBus(c+172,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+173,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+174,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+175,"io_deq_bits_last", false,-1);
    tracep->declBit(c+188,"wrap", false,-1);
    tracep->declBit(c+189,"wrap_1", false,-1);
    tracep->declBit(c+190,"maybe_full", false,-1);
    tracep->declBit(c+191,"ptr_match", false,-1);
    tracep->declBit(c+192,"empty", false,-1);
    tracep->declBit(c+193,"full", false,-1);
    tracep->declBit(c+194,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+189,"R0_addr", false,-1);
    tracep->declBit(c+1498,"R0_en", false,-1);
    tracep->declBit(c+1426,"R0_clk", false,-1);
    tracep->declQuad(c+195,"R0_data", false,-1, 38,0);
    tracep->declBit(c+188,"W0_addr", false,-1);
    tracep->declBit(c+194,"W0_en", false,-1);
    tracep->declBit(c+1426,"W0_clk", false,-1);
    tracep->declQuad(c+197,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+199+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+203,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+170,"io_enq_ready", false,-1);
    tracep->declBit(c+22,"io_enq_valid", false,-1);
    tracep->declBus(c+23,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+24,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+25,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+26,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+144,"io_deq_ready", false,-1);
    tracep->declBit(c+145,"io_deq_valid", false,-1);
    tracep->declBus(c+146,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+147,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+148,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+149,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+27,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1498,"R0_en", false,-1);
    tracep->declBit(c+1426,"R0_clk", false,-1);
    tracep->declQuad(c+210,"R0_data", false,-1, 46,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+27,"W0_en", false,-1);
    tracep->declBit(c+1426,"W0_clk", false,-1);
    tracep->declQuad(c+28,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+212+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+216,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+1264,"io_enq_valid", false,-1);
    tracep->declBus(c+164,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1265,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1266,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+165,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+131,"io_deq_ready", false,-1);
    tracep->declBit(c+132,"io_deq_valid", false,-1);
    tracep->declBus(c+133,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+134,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+135,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+136,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+217,"wrap", false,-1);
    tracep->declBit(c+218,"wrap_1", false,-1);
    tracep->declBit(c+219,"maybe_full", false,-1);
    tracep->declBit(c+220,"ptr_match", false,-1);
    tracep->declBit(c+221,"empty", false,-1);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+1271,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+218,"R0_addr", false,-1);
    tracep->declBit(c+1498,"R0_en", false,-1);
    tracep->declBit(c+1426,"R0_clk", false,-1);
    tracep->declQuad(c+223,"R0_data", false,-1, 46,0);
    tracep->declBit(c+217,"W0_addr", false,-1);
    tracep->declBit(c+1271,"W0_en", false,-1);
    tracep->declBit(c+1426,"W0_clk", false,-1);
    tracep->declQuad(c+587,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+225+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+229,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+166,"io_enq_ready", false,-1);
    tracep->declBit(c+1267,"io_enq_valid", false,-1);
    tracep->declBus(c+1268,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1269,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1270,"io_enq_bits_last", false,-1);
    tracep->declBit(c+131,"io_deq_ready", false,-1);
    tracep->declBit(c+137,"io_deq_valid", false,-1);
    tracep->declBus(c+138,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+139,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+230,"wrap", false,-1);
    tracep->declBit(c+231,"wrap_1", false,-1);
    tracep->declBit(c+232,"maybe_full", false,-1);
    tracep->declBit(c+233,"ptr_match", false,-1);
    tracep->declBit(c+234,"empty", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+1272,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+231,"R0_addr", false,-1);
    tracep->declBit(c+1498,"R0_en", false,-1);
    tracep->declBit(c+1426,"R0_clk", false,-1);
    tracep->declQuad(c+236,"R0_data", false,-1, 35,0);
    tracep->declBit(c+230,"W0_addr", false,-1);
    tracep->declBit(c+1272,"W0_en", false,-1);
    tracep->declBit(c+1426,"W0_clk", false,-1);
    tracep->declQuad(c+1273,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+238+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+243,"auto_in_awready", false,-1);
    tracep->declBit(c+907,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1499,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+908,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1500,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+909,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+244,"auto_in_wready", false,-1);
    tracep->declBit(c+910,"auto_in_wvalid", false,-1);
    tracep->declBus(c+911,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+912,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+913,"auto_in_wlast", false,-1);
    tracep->declBit(c+914,"auto_in_bready", false,-1);
    tracep->declBit(c+245,"auto_in_bvalid", false,-1);
    tracep->declBus(c+246,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+247,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1135,"auto_in_arready", false,-1);
    tracep->declBit(c+30,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_in_rready", false,-1);
    tracep->declBit(c+248,"auto_in_rvalid", false,-1);
    tracep->declBus(c+249,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+252,"auto_in_rlast", false,-1);
    tracep->declBit(c+1275,"auto_out_awready", false,-1);
    tracep->declBit(c+1276,"auto_out_awvalid", false,-1);
    tracep->declBus(c+164,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1265,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+165,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+253,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1277,"auto_out_wready", false,-1);
    tracep->declBit(c+1278,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"auto_out_wlast", false,-1);
    tracep->declBit(c+1279,"auto_out_bready", false,-1);
    tracep->declBit(c+254,"auto_out_bvalid", false,-1);
    tracep->declBus(c+246,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+256,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+37,"auto_out_arready", false,-1);
    tracep->declBit(c+38,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+36,"auto_out_rready", false,-1);
    tracep->declBit(c+248,"auto_out_rvalid", false,-1);
    tracep->declBus(c+249,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+257,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+258,"auto_out_rlast", false,-1);
    tracep->declBit(c+1278,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+259,"w_idle", false,-1);
    tracep->declBit(c+1280,"in_awready", false,-1);
    tracep->declBit(c+260,"busy", false,-1);
    tracep->declBus(c+261,"r_addr", false,-1, 31,0);
    tracep->declBus(c+262,"r_len", false,-1, 7,0);
    tracep->declBus(c+40,"len", false,-1, 7,0);
    tracep->declBus(c+41,"addr", false,-1, 31,0);
    tracep->declBit(c+263,"busy_1", false,-1);
    tracep->declBus(c+264,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+265,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+266,"len_1", false,-1, 7,0);
    tracep->declBus(c+1281,"addr_1", false,-1, 31,0);
    tracep->declBit(c+267,"wbeats_latched", false,-1);
    tracep->declBit(c+1276,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1282,"wbeats_valid", false,-1);
    tracep->declBus(c+268,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1283,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1270,"w_last", false,-1);
    tracep->declBit(c+1279,"nodeOut_bready", false,-1);
    tracep->declBus(c+269,"error_0", false,-1, 1,0);
    tracep->declBus(c+270,"error_1", false,-1, 1,0);
    tracep->declBus(c+271,"error_2", false,-1, 1,0);
    tracep->declBus(c+272,"error_3", false,-1, 1,0);
    tracep->declBus(c+273,"error_4", false,-1, 1,0);
    tracep->declBus(c+274,"error_5", false,-1, 1,0);
    tracep->declBus(c+275,"error_6", false,-1, 1,0);
    tracep->declBus(c+276,"error_7", false,-1, 1,0);
    tracep->declBus(c+277,"error_8", false,-1, 1,0);
    tracep->declBus(c+278,"error_9", false,-1, 1,0);
    tracep->declBus(c+279,"error_10", false,-1, 1,0);
    tracep->declBus(c+280,"error_11", false,-1, 1,0);
    tracep->declBus(c+281,"error_12", false,-1, 1,0);
    tracep->declBus(c+282,"error_13", false,-1, 1,0);
    tracep->declBus(c+283,"error_14", false,-1, 1,0);
    tracep->declBus(c+284,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1135,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+285,"ram", false,-1, 48,0);
    tracep->declBit(c+1136,"full", false,-1);
    tracep->declBit(c+38,"io_deq_valid_0", false,-1);
    tracep->declBit(c+45,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+907,"io_enq_valid", false,-1);
    tracep->declBus(c+1499,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+908,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1500,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+909,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1501,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1284,"io_deq_ready", false,-1);
    tracep->declBit(c+1285,"io_deq_valid", false,-1);
    tracep->declBus(c+164,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1286,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+287,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1266,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+165,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+288,"ram", false,-1, 48,0);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+1285,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1287,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+910,"io_enq_valid", false,-1);
    tracep->declBus(c+911,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+912,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+913,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1288,"io_deq_ready", false,-1);
    tracep->declBit(c+1289,"io_deq_valid", false,-1);
    tracep->declBus(c+1268,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1269,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1457,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+291,"ram", false,-1, 36,0);
    tracep->declBit(c+293,"full", false,-1);
    tracep->declBit(c+1289,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1290,"do_enq", false,-1);
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
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1291,"auto_in_awready", false,-1);
    tracep->declBit(c+1292,"auto_in_awvalid", false,-1);
    tracep->declBus(c+164,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1293,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1294,"auto_in_wready", false,-1);
    tracep->declBit(c+1295,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1296,"auto_in_bready", false,-1);
    tracep->declBit(c+294,"auto_in_bvalid", false,-1);
    tracep->declBus(c+295,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+296,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+49,"auto_in_rready", false,-1);
    tracep->declBit(c+297,"auto_in_rvalid", false,-1);
    tracep->declBus(c+298,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+300,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"nodeIn_arready", false,-1);
    tracep->declBit(c+1291,"nodeIn_awready", false,-1);
    tracep->declBit(c+1297,"w_sel0", false,-1);
    tracep->declBit(c+294,"w_full", false,-1);
    tracep->declBus(c+295,"w_id", false,-1, 3,0);
    tracep->declBit(c+301,"r_sel1", false,-1);
    tracep->declBit(c+302,"w_sel1", false,-1);
    tracep->declBit(c+297,"r_full", false,-1);
    tracep->declBus(c+298,"r_id", false,-1, 3,0);
    tracep->declBit(c+50,"ren", false,-1);
    tracep->declBit(c+303,"rdata_REG", false,-1);
    tracep->declBus(c+304,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+305,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+306,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+307,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+51,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+50,"R0_en", false,-1);
    tracep->declBit(c+1426,"R0_clk", false,-1);
    tracep->declBus(c+308,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1298,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1299,"W0_en", false,-1);
    tracep->declBit(c+1426,"W0_clk", false,-1);
    tracep->declBus(c+1268,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1269,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+243,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+907,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1499,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+908,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1500,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+909,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+244,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+910,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+911,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+912,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+913,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+914,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+245,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+246,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+247,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1135,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+248,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+249,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+252,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+243,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+907,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1499,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+908,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1500,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+909,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+244,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+910,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+911,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+912,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+913,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+914,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+245,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+246,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+247,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1135,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+248,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+249,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+252,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1300,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1301,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+164,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1265,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+165,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1277,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1278,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1279,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+254,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+246,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+53,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+248,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+249,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1291,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1292,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+164,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1293,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1294,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1295,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1296,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+294,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+295,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+296,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+47,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+49,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+297,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+298,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+300,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1302,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+309,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+310,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+311,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+312,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+163,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1264,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+164,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1265,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+165,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+166,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+586,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+167,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+168,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+169,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+170,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+171,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+172,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+254,"in_0_bvalid", false,-1);
    tracep->declBit(c+248,"in_0_rvalid", false,-1);
    tracep->declBit(c+1304,"in_0_wready", false,-1);
    tracep->declBit(c+1305,"in_0_awready", false,-1);
    tracep->declBit(c+52,"in_0_arready", false,-1);
    tracep->declBit(c+1300,"anonIn_awready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+58,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1306,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1307,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1308,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+59,"arSel", false,-1, 15,0);
    tracep->declBus(c+313,"awSel", false,-1, 15,0);
    tracep->declBus(c+314,"rSel", false,-1, 15,0);
    tracep->declBus(c+315,"bSel", false,-1, 15,0);
    tracep->declBit(c+316,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+317,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+318,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+319,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+320,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+321,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+322,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+323,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+324,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+325,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+326,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+327,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+328,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+329,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+330,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+331,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+332,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+333,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+334,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+335,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+336,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+337,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+338,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+339,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+340,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+341,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+342,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+343,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+344,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+345,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+346,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+347,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+348,"latched", false,-1);
    tracep->declBit(c+1309,"in_0_awvalid", false,-1);
    tracep->declBit(c+1310,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1311,"in_0_wvalid", false,-1);
    tracep->declBit(c+349,"idle_3", false,-1);
    tracep->declBit(c+350,"anyValid", false,-1);
    tracep->declBus(c+351,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+352,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+353,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+354,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+355,"prefixOR_1", false,-1);
    tracep->declBit(c+356,"winner_3_1", false,-1);
    tracep->declBit(c+357,"winner_3_2", false,-1);
    tracep->declBit(c+358,"state_3_0", false,-1);
    tracep->declBit(c+359,"state_3_1", false,-1);
    tracep->declBit(c+360,"state_3_2", false,-1);
    tracep->declBit(c+361,"muxState_3_0", false,-1);
    tracep->declBit(c+362,"muxState_3_1", false,-1);
    tracep->declBit(c+363,"muxState_3_2", false,-1);
    tracep->declBit(c+364,"idle_4", false,-1);
    tracep->declBit(c+365,"anyValid_1", false,-1);
    tracep->declBus(c+366,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+367,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+368,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+369,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+370,"winner_4_0", false,-1);
    tracep->declBit(c+371,"winner_4_2", false,-1);
    tracep->declBit(c+372,"state_4_0", false,-1);
    tracep->declBit(c+373,"state_4_2", false,-1);
    tracep->declBit(c+374,"muxState_4_0", false,-1);
    tracep->declBit(c+375,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+1310,"io_enq_valid", false,-1);
    tracep->declBus(c+1312,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1313,"io_deq_ready", false,-1);
    tracep->declBit(c+1314,"io_deq_valid", false,-1);
    tracep->declBus(c+1315,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+377,"wrap", false,-1);
    tracep->declBit(c+378,"wrap_1", false,-1);
    tracep->declBit(c+379,"maybe_full", false,-1);
    tracep->declBit(c+380,"ptr_match", false,-1);
    tracep->declBit(c+381,"empty", false,-1);
    tracep->declBit(c+382,"full", false,-1);
    tracep->declBit(c+1314,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1316,"do_deq", false,-1);
    tracep->declBit(c+1317,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+378,"R0_addr", false,-1);
    tracep->declBit(c+1498,"R0_en", false,-1);
    tracep->declBit(c+1426,"R0_clk", false,-1);
    tracep->declBus(c+383,"R0_data", false,-1, 2,0);
    tracep->declBit(c+377,"W0_addr", false,-1);
    tracep->declBit(c+1317,"W0_en", false,-1);
    tracep->declBit(c+1426,"W0_clk", false,-1);
    tracep->declBus(c+1312,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+384+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1275,"auto_in_awready", false,-1);
    tracep->declBit(c+1276,"auto_in_awvalid", false,-1);
    tracep->declBus(c+164,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1265,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+165,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+253,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1277,"auto_in_wready", false,-1);
    tracep->declBit(c+1278,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"auto_in_wlast", false,-1);
    tracep->declBit(c+1279,"auto_in_bready", false,-1);
    tracep->declBit(c+254,"auto_in_bvalid", false,-1);
    tracep->declBus(c+246,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+256,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+37,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+36,"auto_in_rready", false,-1);
    tracep->declBit(c+248,"auto_in_rvalid", false,-1);
    tracep->declBus(c+249,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+257,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+258,"auto_in_rlast", false,-1);
    tracep->declBit(c+1300,"auto_out_awready", false,-1);
    tracep->declBit(c+1301,"auto_out_awvalid", false,-1);
    tracep->declBus(c+164,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1265,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+165,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1277,"auto_out_wready", false,-1);
    tracep->declBit(c+1278,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1268,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"auto_out_wlast", false,-1);
    tracep->declBit(c+1279,"auto_out_bready", false,-1);
    tracep->declBit(c+254,"auto_out_bvalid", false,-1);
    tracep->declBus(c+246,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+255,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_out_arready", false,-1);
    tracep->declBit(c+53,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_out_rready", false,-1);
    tracep->declBit(c+248,"auto_out_rvalid", false,-1);
    tracep->declBus(c+249,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+386,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+387,"io_deq_valid", false,-1);
    tracep->declBit(c+388,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+387,"full", false,-1);
    tracep->declBit(c+388,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+389,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+390,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+391,"io_deq_valid", false,-1);
    tracep->declBit(c+392,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+391,"full", false,-1);
    tracep->declBit(c+392,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+393,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+394,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+395,"io_deq_valid", false,-1);
    tracep->declBit(c+396,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+395,"full", false,-1);
    tracep->declBit(c+396,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+397,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+398,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+399,"io_deq_valid", false,-1);
    tracep->declBit(c+400,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+399,"full", false,-1);
    tracep->declBit(c+400,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+401,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+403,"io_deq_valid", false,-1);
    tracep->declBit(c+404,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+403,"full", false,-1);
    tracep->declBit(c+404,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+405,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+406,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+407,"io_deq_valid", false,-1);
    tracep->declBit(c+408,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+407,"full", false,-1);
    tracep->declBit(c+408,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+409,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+410,"io_enq_ready", false,-1);
    tracep->declBit(c+66,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+411,"io_deq_valid", false,-1);
    tracep->declBit(c+412,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+411,"full", false,-1);
    tracep->declBit(c+412,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+413,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_ready", false,-1);
    tracep->declBit(c+67,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+415,"io_deq_valid", false,-1);
    tracep->declBit(c+416,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+415,"full", false,-1);
    tracep->declBit(c+416,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+417,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+418,"io_enq_ready", false,-1);
    tracep->declBit(c+589,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+590,"io_deq_ready", false,-1);
    tracep->declBit(c+419,"io_deq_valid", false,-1);
    tracep->declBit(c+420,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+419,"full", false,-1);
    tracep->declBit(c+420,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+421,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+591,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+592,"io_deq_ready", false,-1);
    tracep->declBit(c+423,"io_deq_valid", false,-1);
    tracep->declBit(c+424,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+423,"full", false,-1);
    tracep->declBit(c+424,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+425,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+426,"io_enq_ready", false,-1);
    tracep->declBit(c+593,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+594,"io_deq_ready", false,-1);
    tracep->declBit(c+427,"io_deq_valid", false,-1);
    tracep->declBit(c+428,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+427,"full", false,-1);
    tracep->declBit(c+428,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+429,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+430,"io_enq_ready", false,-1);
    tracep->declBit(c+595,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+596,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBit(c+432,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->declBit(c+432,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+433,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+68,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+435,"io_deq_valid", false,-1);
    tracep->declBit(c+436,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+435,"full", false,-1);
    tracep->declBit(c+436,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+437,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+597,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+598,"io_deq_ready", false,-1);
    tracep->declBit(c+439,"io_deq_valid", false,-1);
    tracep->declBit(c+440,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+439,"full", false,-1);
    tracep->declBit(c+440,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+441,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+442,"io_enq_ready", false,-1);
    tracep->declBit(c+599,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+600,"io_deq_ready", false,-1);
    tracep->declBit(c+443,"io_deq_valid", false,-1);
    tracep->declBit(c+444,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->declBit(c+444,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+445,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+601,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+602,"io_deq_ready", false,-1);
    tracep->declBit(c+447,"io_deq_valid", false,-1);
    tracep->declBit(c+448,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+447,"full", false,-1);
    tracep->declBit(c+448,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+449,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+603,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+604,"io_deq_ready", false,-1);
    tracep->declBit(c+451,"io_deq_valid", false,-1);
    tracep->declBit(c+452,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+451,"full", false,-1);
    tracep->declBit(c+452,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+453,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+605,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+606,"io_deq_ready", false,-1);
    tracep->declBit(c+455,"io_deq_valid", false,-1);
    tracep->declBit(c+456,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+455,"full", false,-1);
    tracep->declBit(c+456,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+457,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+458,"io_enq_ready", false,-1);
    tracep->declBit(c+607,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+608,"io_deq_ready", false,-1);
    tracep->declBit(c+459,"io_deq_valid", false,-1);
    tracep->declBit(c+460,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+459,"full", false,-1);
    tracep->declBit(c+460,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+461,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+609,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+610,"io_deq_ready", false,-1);
    tracep->declBit(c+463,"io_deq_valid", false,-1);
    tracep->declBit(c+464,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+463,"full", false,-1);
    tracep->declBit(c+464,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+465,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+611,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+612,"io_deq_ready", false,-1);
    tracep->declBit(c+467,"io_deq_valid", false,-1);
    tracep->declBit(c+468,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+467,"full", false,-1);
    tracep->declBit(c+468,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+469,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+613,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+614,"io_deq_ready", false,-1);
    tracep->declBit(c+471,"io_deq_valid", false,-1);
    tracep->declBit(c+472,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+471,"full", false,-1);
    tracep->declBit(c+472,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+473,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+615,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+616,"io_deq_ready", false,-1);
    tracep->declBit(c+475,"io_deq_valid", false,-1);
    tracep->declBit(c+476,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+475,"full", false,-1);
    tracep->declBit(c+476,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+477,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+478,"io_enq_ready", false,-1);
    tracep->declBit(c+69,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+479,"io_deq_valid", false,-1);
    tracep->declBit(c+480,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+479,"full", false,-1);
    tracep->declBit(c+480,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+481,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+482,"io_enq_ready", false,-1);
    tracep->declBit(c+617,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+618,"io_deq_ready", false,-1);
    tracep->declBit(c+483,"io_deq_valid", false,-1);
    tracep->declBit(c+484,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+483,"full", false,-1);
    tracep->declBit(c+484,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+485,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+486,"io_enq_ready", false,-1);
    tracep->declBit(c+619,"io_enq_valid", false,-1);
    tracep->declBit(c+253,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+620,"io_deq_ready", false,-1);
    tracep->declBit(c+487,"io_deq_valid", false,-1);
    tracep->declBit(c+488,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+487,"full", false,-1);
    tracep->declBit(c+488,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+489,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+490,"io_enq_ready", false,-1);
    tracep->declBit(c+70,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+491,"io_deq_valid", false,-1);
    tracep->declBit(c+492,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+491,"full", false,-1);
    tracep->declBit(c+492,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+493,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+494,"io_enq_ready", false,-1);
    tracep->declBit(c+71,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+495,"io_deq_valid", false,-1);
    tracep->declBit(c+496,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+495,"full", false,-1);
    tracep->declBit(c+496,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+497,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+498,"io_enq_ready", false,-1);
    tracep->declBit(c+72,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+499,"io_deq_valid", false,-1);
    tracep->declBit(c+500,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+499,"full", false,-1);
    tracep->declBit(c+500,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+501,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+502,"io_enq_ready", false,-1);
    tracep->declBit(c+73,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+503,"io_deq_valid", false,-1);
    tracep->declBit(c+504,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+503,"full", false,-1);
    tracep->declBit(c+504,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+505,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+506,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+507,"io_deq_valid", false,-1);
    tracep->declBit(c+508,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+507,"full", false,-1);
    tracep->declBit(c+508,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+509,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+510,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+511,"io_deq_valid", false,-1);
    tracep->declBit(c+512,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+511,"full", false,-1);
    tracep->declBit(c+512,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+513,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1458,"reset", false,-1);
    tracep->declBit(c+243,"auto_master_out_awready", false,-1);
    tracep->declBit(c+907,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1499,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+908,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1500,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+909,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+244,"auto_master_out_wready", false,-1);
    tracep->declBit(c+910,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+911,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+912,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+913,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+914,"auto_master_out_bready", false,-1);
    tracep->declBit(c+245,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+246,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+247,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1135,"auto_master_out_arready", false,-1);
    tracep->declBit(c+30,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_master_out_rready", false,-1);
    tracep->declBit(c+248,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+249,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+251,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+252,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1458,"reset", false,-1);
    tracep->declBit(c+1495,"io_interrupt", false,-1);
    tracep->declBit(c+243,"io_master_awready", false,-1);
    tracep->declBit(c+907,"io_master_awvalid", false,-1);
    tracep->declBus(c+908,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1499,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1500,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+909,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+244,"io_master_wready", false,-1);
    tracep->declBit(c+910,"io_master_wvalid", false,-1);
    tracep->declBus(c+911,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+912,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+913,"io_master_wlast", false,-1);
    tracep->declBit(c+914,"io_master_bready", false,-1);
    tracep->declBit(c+245,"io_master_bvalid", false,-1);
    tracep->declBus(c+247,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+246,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1135,"io_master_arready", false,-1);
    tracep->declBit(c+30,"io_master_arvalid", false,-1);
    tracep->declBus(c+32,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+33,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"io_master_rready", false,-1);
    tracep->declBit(c+248,"io_master_rvalid", false,-1);
    tracep->declBus(c+251,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+250,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+252,"io_master_rlast", false,-1);
    tracep->declBus(c+249,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1502,"io_slave_awready", false,-1);
    tracep->declBit(c+1495,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1503,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1499,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1500,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1491,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1504,"io_slave_wready", false,-1);
    tracep->declBit(c+1495,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1503,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1499,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1495,"io_slave_wlast", false,-1);
    tracep->declBit(c+1495,"io_slave_bready", false,-1);
    tracep->declBit(c+1505,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1506,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1507,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1508,"io_slave_arready", false,-1);
    tracep->declBit(c+1495,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1503,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1499,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1500,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1491,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1501,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1495,"io_slave_rready", false,-1);
    tracep->declBit(c+1509,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1510,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1511,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1512,"io_slave_rlast", false,-1);
    tracep->declBus(c+1513,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+915,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+916,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+917,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+918,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+919,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+915,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+916,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+920,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+921,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+922,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1499,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1500,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1492,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1501,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+923,"ifu_arvalid", false,-1);
    tracep->declBit(c+924,"ifu_arready", false,-1);
    tracep->declBus(c+76,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+77,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+78,"ifu_rlast", false,-1);
    tracep->declBus(c+79,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+80,"ifu_rvalid", false,-1);
    tracep->declBit(c+925,"ifu_rready", false,-1);
    tracep->declBit(c+1514,"useless1", false,-1);
    tracep->declBit(c+1515,"useless2", false,-1);
    tracep->declBit(c+1516,"useless3", false,-1);
    tracep->declBit(c+1517,"useless4", false,-1);
    tracep->declBus(c+926,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1499,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1500,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+927,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1501,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+928,"lsu_arvalid", false,-1);
    tracep->declBit(c+929,"lsu_arready", false,-1);
    tracep->declBus(c+81,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+82,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+83,"lsu_rlast", false,-1);
    tracep->declBus(c+84,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+85,"lsu_rvalid", false,-1);
    tracep->declBit(c+930,"lsu_rready", false,-1);
    tracep->declBus(c+926,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1499,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1500,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+931,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+932,"lsu_awvalid", false,-1);
    tracep->declBit(c+1318,"lsu_awready", false,-1);
    tracep->declBus(c+933,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+934,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+935,"lsu_wlast", false,-1);
    tracep->declBit(c+936,"lsu_wvalid", false,-1);
    tracep->declBit(c+1319,"lsu_wready", false,-1);
    tracep->declBus(c+1320,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1321,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1322,"lsu_bvalid", false,-1);
    tracep->declBit(c+937,"lsu_bready", false,-1);
    tracep->declBus(c+938,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1499,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1500,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+939,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1501,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+940,"axi_arvalid", false,-1);
    tracep->declBit(c+1460,"axi_arready", false,-1);
    tracep->declBus(c+86,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+87,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rlast", false,-1);
    tracep->declBus(c+89,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+90,"axi_rvalid", false,-1);
    tracep->declBit(c+941,"axi_rready", false,-1);
    tracep->declBus(c+908,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1499,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1500,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+909,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1501,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+907,"axi_awvalid", false,-1);
    tracep->declBit(c+243,"axi_awready", false,-1);
    tracep->declBus(c+911,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+912,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+913,"axi_wlast", false,-1);
    tracep->declBit(c+910,"axi_wvalid", false,-1);
    tracep->declBit(c+244,"axi_wready", false,-1);
    tracep->declBus(c+247,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+246,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+245,"axi_bvalid", false,-1);
    tracep->declBit(c+914,"axi_bready", false,-1);
    tracep->declBus(c+91,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+92,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+93,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+94,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+95,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+96,"clint_arvalid", false,-1);
    tracep->declBit(c+942,"clint_arready", false,-1);
    tracep->declBus(c+943,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+944,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+945,"clint_rlast", false,-1);
    tracep->declBus(c+1499,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+946,"clint_rvalid", false,-1);
    tracep->declBit(c+97,"clint_rready", false,-1);
    tracep->declBus(c+1518,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1519,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1520,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1521,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1522,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1523,"clint_awvalid", false,-1);
    tracep->declBit(c+947,"clint_awready", false,-1);
    tracep->declBus(c+1524,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"clint_wlast", false,-1);
    tracep->declBit(c+1527,"clint_wvalid", false,-1);
    tracep->declBit(c+948,"clint_wready", false,-1);
    tracep->declBus(c+949,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1499,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+950,"clint_bvalid", false,-1);
    tracep->declBit(c+1528,"clint_bready", false,-1);
    tracep->declBus(c+1353,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1354,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1461,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1462,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1137,"a5", false,-1, 31,0);
    tracep->declBus(c+1355,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1461,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1462,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1356,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1463,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1357,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1358,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1359,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1360,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1361,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1362,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1363,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1364,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1365,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1366,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1367,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1368,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1369,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1370,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1371,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+951,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+952,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1372,"csr_write", false,-1);
    tracep->declBus(c+1373,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1138+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+953,"wdata", false,-1, 31,0);
    tracep->declBus(c+954,"waddr", false,-1, 4,0);
    tracep->declBit(c+955,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1142+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+956,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+957,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+958,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+959,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+960,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+961,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+962,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+963,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+964,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+965,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+966,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+967,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+968,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+969,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+970,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+971,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+926,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+972,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+973,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+974,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+975,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+976,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+977,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+978,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+979,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+980,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+981,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+982,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+983,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+922,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1499,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1500,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1492,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1501,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+923,"arvalid_i_a", false,-1);
    tracep->declBit(c+924,"arready_o_a", false,-1);
    tracep->declBus(c+76,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+77,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+78,"rlast_o_a", false,-1);
    tracep->declBus(c+79,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+80,"rvalid_o_a", false,-1);
    tracep->declBit(c+925,"rready_i_a", false,-1);
    tracep->declBus(c+1529,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1499,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1500,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1491,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1501,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1495,"awvalid_i_a", false,-1);
    tracep->declBit(c+1323,"awready_o_a", false,-1);
    tracep->declBus(c+1529,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1499,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1495,"wlast_i_a", false,-1);
    tracep->declBit(c+1495,"wvalid_i_a", false,-1);
    tracep->declBit(c+1324,"wready_o_a", false,-1);
    tracep->declBus(c+1325,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1326,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1327,"bvalid_o_a", false,-1);
    tracep->declBit(c+1495,"bready_i_a", false,-1);
    tracep->declBus(c+926,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1499,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1500,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+927,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1501,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+928,"arvalid_i_b", false,-1);
    tracep->declBit(c+929,"arready_o_b", false,-1);
    tracep->declBus(c+81,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+82,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+83,"rlast_o_b", false,-1);
    tracep->declBus(c+84,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+85,"rvalid_o_b", false,-1);
    tracep->declBit(c+930,"rready_i_b", false,-1);
    tracep->declBus(c+926,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1499,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1500,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+931,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1501,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+932,"awvalid_i_b", false,-1);
    tracep->declBit(c+1318,"awready_o_b", false,-1);
    tracep->declBus(c+933,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+934,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+935,"wlast_i_b", false,-1);
    tracep->declBit(c+936,"wvalid_i_b", false,-1);
    tracep->declBit(c+1319,"wready_o_b", false,-1);
    tracep->declBus(c+1320,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1321,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1322,"bvalid_o_b", false,-1);
    tracep->declBit(c+937,"bready_i_b", false,-1);
    tracep->declBus(c+938,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1499,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1500,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+939,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1501,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+940,"arvalid_o", false,-1);
    tracep->declBit(c+1460,"arready_i", false,-1);
    tracep->declBus(c+86,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+87,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+88,"rlast_i", false,-1);
    tracep->declBus(c+89,"rid_i", false,-1, 3,0);
    tracep->declBit(c+90,"rvalid_i", false,-1);
    tracep->declBit(c+941,"rready_o", false,-1);
    tracep->declBus(c+908,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1499,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1500,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+909,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1501,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+907,"awvalid_o", false,-1);
    tracep->declBit(c+243,"awready_i", false,-1);
    tracep->declBus(c+911,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+912,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+913,"wlast_o", false,-1);
    tracep->declBit(c+910,"wvalid_o", false,-1);
    tracep->declBit(c+244,"wready_i", false,-1);
    tracep->declBus(c+247,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+246,"bid_i", false,-1, 3,0);
    tracep->declBit(c+245,"bvalid_i", false,-1);
    tracep->declBit(c+914,"bready_o", false,-1);
    tracep->declBit(c+984,"ar_switch", false,-1);
    tracep->declBit(c+985,"r_switch", false,-1);
    tracep->declBit(c+986,"aw_switch", false,-1);
    tracep->declBit(c+987,"w_switch", false,-1);
    tracep->declBit(c+988,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+91,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+92,"arid_i", false,-1, 3,0);
    tracep->declBus(c+93,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+94,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+95,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+96,"arvalid_i", false,-1);
    tracep->declBit(c+942,"arready_o", false,-1);
    tracep->declBus(c+943,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+944,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+945,"rlast_o", false,-1);
    tracep->declBus(c+1499,"rid_o", false,-1, 3,0);
    tracep->declBit(c+946,"rvalid_o", false,-1);
    tracep->declBit(c+97,"rready_i", false,-1);
    tracep->declBus(c+1518,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1519,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1520,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1521,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1522,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1523,"awvalid_i", false,-1);
    tracep->declBit(c+947,"awready_o", false,-1);
    tracep->declBus(c+1524,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1525,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1526,"wlast_i", false,-1);
    tracep->declBit(c+1527,"wvalid_i", false,-1);
    tracep->declBit(c+948,"wready_o", false,-1);
    tracep->declBus(c+949,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1499,"bid_o", false,-1, 3,0);
    tracep->declBit(c+950,"bvalid_o", false,-1);
    tracep->declBit(c+1528,"bready_i", false,-1);
    tracep->declBit(c+989,"ar_state", false,-1);
    tracep->declBit(c+990,"r_state", false,-1);
    tracep->declBit(c+991,"aw_state", false,-1);
    tracep->declBit(c+992,"w_state", false,-1);
    tracep->declBit(c+1530,"b_state", false,-1);
    tracep->declBus(c+993,"araddr", false,-1, 31,0);
    tracep->declBus(c+994,"awaddr", false,-1, 31,0);
    tracep->declBus(c+995,"wdata", false,-1, 31,0);
    tracep->declBus(c+996,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1531,"wvalid", false,-1);
    tracep->declBit(c+997,"flag_waddr", false,-1);
    tracep->declBit(c+998,"flag_wdata", false,-1);
    tracep->declBit(c+999,"flag_rdata", false,-1);
    tracep->declBit(c+1000,"flag_raddr", false,-1);
    tracep->declBit(c+1532,"flag_write", false,-1);
    tracep->declBus(c+1001,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+1002,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+1003,"w_delay", false,-1, 4,0);
    tracep->declBus(c+1004,"r_delay", false,-1, 4,0);
    tracep->declBus(c+1005,"LFSR", false,-1, 4,0);
    tracep->declBit(c+1006,"lfsr_in", false,-1);
    tracep->declBus(c+1007,"write_box", false,-1, 1,0);
    tracep->declQuad(c+1008,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+1355,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1461,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1462,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1356,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1463,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1357,"a_in_src_i", false,-1);
    tracep->declBus(c+1358,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1359,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1360,"adder_a_src_i", false,-1);
    tracep->declBit(c+1361,"adder_out_src_i", false,-1);
    tracep->declBus(c+1362,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1363,"MemRead_i", false,-1);
    tracep->declBit(c+1364,"MemWrite_i", false,-1);
    tracep->declBus(c+1365,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1366,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1367,"wb_src_i", false,-1);
    tracep->declBit(c+1368,"csr_write_i", false,-1);
    tracep->declBit(c+1369,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1370,"reg_write_i", false,-1);
    tracep->declBus(c+1371,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+951,"exu_valid_i", false,-1);
    tracep->declBit(c+952,"exu_ready_o", false,-1);
    tracep->declBus(c+956,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+957,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+958,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+959,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+960,"npc_o", false,-1, 31,0);
    tracep->declBit(c+961,"MemRead_o", false,-1);
    tracep->declBit(c+962,"MemWrite_o", false,-1);
    tracep->declBus(c+963,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+964,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+965,"wb_src_o", false,-1);
    tracep->declBit(c+966,"csr_write_o", false,-1);
    tracep->declBit(c+967,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+968,"reg_write_o", false,-1);
    tracep->declBus(c+969,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+970,"exu_valid_o", false,-1);
    tracep->declBit(c+971,"exu_ready_i", false,-1);
    tracep->declBus(c+1010,"pc", false,-1, 31,0);
    tracep->declBus(c+957,"rs1", false,-1, 31,0);
    tracep->declBus(c+958,"rs2", false,-1, 31,0);
    tracep->declBus(c+1011,"imm", false,-1, 31,0);
    tracep->declBus(c+1012,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1013,"a_in_src", false,-1);
    tracep->declBus(c+1014,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+1015,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1016,"adder_a_src", false,-1);
    tracep->declBit(c+1017,"adder_out_src", false,-1);
    tracep->declBus(c+1018,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1019,"a_in", false,-1, 31,0);
    tracep->declBus(c+1020,"b_in", false,-1, 31,0);
    tracep->declBus(c+1021,"a_out", false,-1, 31,0);
    tracep->declBus(c+1022,"add_out", false,-1, 31,0);
    tracep->declBus(c+1023,"pc_new", false,-1, 31,0);
    tracep->declBus(c+956,"alu_result", false,-1, 31,0);
    tracep->declBus(c+960,"npc", false,-1, 31,0);
    tracep->declBit(c+1024,"zero", false,-1);
    tracep->declBus(c+1501,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1533,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1534,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1025,"current_state", false,-1, 1,0);
    tracep->declBus(c+1026,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1019,"a", false,-1, 31,0);
    tracep->declBus(c+1020,"b", false,-1, 31,0);
    tracep->declBus(c+1018,"op", false,-1, 3,0);
    tracep->declBus(c+956,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1024,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+957,"d0", false,-1, 31,0);
    tracep->declBus(c+1010,"d1", false,-1, 31,0);
    tracep->declBit(c+1013,"sel", false,-1);
    tracep->declBus(c+1019,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+958,"d0", false,-1, 31,0);
    tracep->declBus(c+1011,"d1", false,-1, 31,0);
    tracep->declBus(c+1536,"d2", false,-1, 31,0);
    tracep->declBus(c+1012,"d3", false,-1, 31,0);
    tracep->declBus(c+1014,"sel", false,-1, 1,0);
    tracep->declBus(c+1020,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1021,"a", false,-1, 31,0);
    tracep->declBus(c+1011,"b", false,-1, 31,0);
    tracep->declBus(c+1022,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1010,"d0", false,-1, 31,0);
    tracep->declBus(c+957,"d1", false,-1, 31,0);
    tracep->declBit(c+1016,"sel", false,-1);
    tracep->declBus(c+1021,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1022,"d0", false,-1, 31,0);
    tracep->declBus(c+1012,"d1", false,-1, 31,0);
    tracep->declBit(c+1017,"sel", false,-1);
    tracep->declBus(c+1023,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1027,"pc4", false,-1, 31,0);
    tracep->declBus(c+1023,"pc_new", false,-1, 31,0);
    tracep->declBus(c+1015,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1024,"zero", false,-1);
    tracep->declBus(c+956,"alu_result", false,-1, 31,0);
    tracep->declBus(c+960,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+1353,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1354,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1461,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1462,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1137,"a5", false,-1, 31,0);
    tracep->declBus(c+915,"pc_i", false,-1, 31,0);
    tracep->declBus(c+916,"inst_i", false,-1, 31,0);
    tracep->declBit(c+920,"idu_valid_i", false,-1);
    tracep->declBit(c+921,"idu_ready_o", false,-1);
    tracep->declBus(c+1355,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1461,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1462,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1356,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1463,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1357,"a_in_src_o", false,-1);
    tracep->declBus(c+1358,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1359,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1360,"adder_a_src_o", false,-1);
    tracep->declBit(c+1361,"adder_out_src_o", false,-1);
    tracep->declBus(c+1362,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1363,"MemRead_o", false,-1);
    tracep->declBit(c+1364,"MemWrite_o", false,-1);
    tracep->declBus(c+1365,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1366,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1367,"wb_src_o", false,-1);
    tracep->declBit(c+1368,"csr_write_o", false,-1);
    tracep->declBit(c+1369,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1370,"reg_write_o", false,-1);
    tracep->declBus(c+1371,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+951,"idu_valid_o", false,-1);
    tracep->declBit(c+952,"idu_ready_i", false,-1);
    tracep->declBit(c+1372,"csr_write_i", false,-1);
    tracep->declBus(c+1373,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1174+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1355,"pc", false,-1, 31,0);
    tracep->declBus(c+1374,"inst", false,-1, 31,0);
    tracep->declBus(c+1375,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1501,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1533,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1534,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1028,"current_state", false,-1, 1,0);
    tracep->declBus(c+1029,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1374,"inst", false,-1, 31,0);
    tracep->declBus(c+1362,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1376,"opcode", false,-1, 6,0);
    tracep->declBus(c+1377,"funct3", false,-1, 2,0);
    tracep->declBus(c+1378,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1372,"wen", false,-1);
    tracep->declBus(c+1374,"inst", false,-1, 31,0);
    tracep->declBus(c+1373,"wdata", false,-1, 31,0);
    tracep->declBus(c+1137,"NO", false,-1, 31,0);
    tracep->declBus(c+1355,"pc", false,-1, 31,0);
    tracep->declBus(c+1463,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1178+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1182,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1183,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1184,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1185,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1537,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1538,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1376,"opcode", false,-1, 6,0);
    tracep->declBus(c+1377,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1374,"inst", false,-1, 31,0);
    tracep->declBit(c+1357,"a_in_src", false,-1);
    tracep->declBus(c+1358,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1370,"reg_write", false,-1);
    tracep->declBus(c+1359,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1360,"adder_a_src", false,-1);
    tracep->declBit(c+1363,"MemRead", false,-1);
    tracep->declBit(c+1364,"MemWrite", false,-1);
    tracep->declBus(c+1375,"wmask", false,-1, 7,0);
    tracep->declBit(c+1367,"wb_src", false,-1);
    tracep->declBus(c+1366,"rmask", false,-1, 2,0);
    tracep->declBit(c+1368,"csr_write", false,-1);
    tracep->declBit(c+1361,"adder_out_src", false,-1);
    tracep->declBit(c+1369,"csr_wdata_src", false,-1);
    tracep->declBus(c+1376,"opcode", false,-1, 6,0);
    tracep->declBus(c+1377,"funct3", false,-1, 2,0);
    tracep->declBus(c+1378,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1535,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1374,"inst", false,-1, 31,0);
    tracep->declBus(c+1356,"data", false,-1, 31,0);
    tracep->declBus(c+1376,"opcode", false,-1, 6,0);
    tracep->declBus(c+1377,"funct3", false,-1, 2,0);
    tracep->declBus(c+1378,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+922,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1499,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1500,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1492,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1501,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+923,"arvalid_o", false,-1);
    tracep->declBit(c+924,"arready_i", false,-1);
    tracep->declBus(c+76,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+77,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+78,"rlast_i", false,-1);
    tracep->declBus(c+79,"rid_i", false,-1, 3,0);
    tracep->declBit(c+80,"rvalid_i", false,-1);
    tracep->declBit(c+925,"rready_o", false,-1);
    tracep->declBus(c+917,"npc_i", false,-1, 31,0);
    tracep->declBit(c+918,"ifu_valid_i", false,-1);
    tracep->declBit(c+919,"ifu_ready_o", false,-1);
    tracep->declBus(c+915,"pc_o", false,-1, 31,0);
    tracep->declBus(c+916,"inst_o", false,-1, 31,0);
    tracep->declBit(c+920,"ifu_valid_o", false,-1);
    tracep->declBit(c+921,"ifu_ready_i", false,-1);
    tracep->declBus(c+1030,"pc", false,-1, 31,0);
    tracep->declBus(c+1539,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1540,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1541,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1542,"lfsr_in", false,-1);
    tracep->declBit(c+923,"arvalid", false,-1);
    tracep->declBus(c+922,"araddr", false,-1, 31,0);
    tracep->declBus(c+1031,"inst", false,-1, 31,0);
    tracep->declBit(c+925,"rready", false,-1);
    tracep->declBus(c+1543,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1544+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1576,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1491,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1488,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1492,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1493,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1494,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1032,"current_state", false,-1, 2,0);
    tracep->declBus(c+1464,"next_state", false,-1, 2,0);
    tracep->declBus(c+1033,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1034,"ready_flag", false,-1);
    tracep->declBit(c+1035,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+956,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+957,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+958,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+959,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+960,"npc_i", false,-1, 31,0);
    tracep->declBit(c+961,"MemRead_i", false,-1);
    tracep->declBit(c+962,"MemWrite_i", false,-1);
    tracep->declBus(c+963,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+964,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+965,"wb_src_i", false,-1);
    tracep->declBit(c+966,"csr_write_i", false,-1);
    tracep->declBit(c+967,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+968,"reg_write_i", false,-1);
    tracep->declBus(c+969,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+970,"lsu_valid_i", false,-1);
    tracep->declBit(c+971,"lsu_ready_o", false,-1);
    tracep->declBus(c+926,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+972,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+973,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+974,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+975,"npc_o", false,-1, 31,0);
    tracep->declBus(c+976,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+977,"wb_src_o", false,-1);
    tracep->declBit(c+978,"csr_write_o", false,-1);
    tracep->declBit(c+979,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+980,"reg_write_o", false,-1);
    tracep->declBus(c+981,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+982,"lsu_valid_o", false,-1);
    tracep->declBit(c+983,"lsu_ready_i", false,-1);
    tracep->declBus(c+926,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1499,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1500,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+927,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1501,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+928,"arvalid_o", false,-1);
    tracep->declBit(c+929,"arready_i", false,-1);
    tracep->declBus(c+81,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+82,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+83,"rlast_i", false,-1);
    tracep->declBus(c+84,"rid_i", false,-1, 3,0);
    tracep->declBit(c+85,"rvalid_i", false,-1);
    tracep->declBit(c+930,"rready_o", false,-1);
    tracep->declBus(c+926,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1499,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1500,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+931,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1501,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+932,"awvalid_o", false,-1);
    tracep->declBit(c+1318,"awready_i", false,-1);
    tracep->declBus(c+933,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+934,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+935,"wlast_o", false,-1);
    tracep->declBit(c+936,"wvalid_o", false,-1);
    tracep->declBit(c+1319,"wready_i", false,-1);
    tracep->declBus(c+1320,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1321,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1322,"bvalid_i", false,-1);
    tracep->declBit(c+937,"bready_o", false,-1);
    tracep->declBus(c+926,"alu_result", false,-1, 31,0);
    tracep->declBus(c+972,"rs1", false,-1, 31,0);
    tracep->declBus(c+1577,"rs2", false,-1, 31,0);
    tracep->declBus(c+1578,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+976,"rmask", false,-1, 2,0);
    tracep->declBit(c+1036,"flag", false,-1);
    tracep->declBit(c+1579,"wvalid_tmp", false,-1);
    tracep->declBus(c+1580,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1581,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1582,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1583,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1584,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1585,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1586,"lfsr_in", false,-1);
    tracep->declBit(c+928,"arvalid", false,-1);
    tracep->declBus(c+926,"araddr", false,-1, 31,0);
    tracep->declBit(c+930,"rready", false,-1);
    tracep->declBus(c+926,"awaddr", false,-1, 31,0);
    tracep->declBit(c+932,"awvalid", false,-1);
    tracep->declBus(c+933,"wdata", false,-1, 31,0);
    tracep->declBus(c+934,"wstrb", false,-1, 3,0);
    tracep->declBit(c+936,"wvalid", false,-1);
    tracep->declBit(c+937,"bready", false,-1);
    tracep->declBus(c+1587,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1588+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1620,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1621,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1622+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1654,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1655+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1687+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1719,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1501,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1533,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1534,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1720,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1037,"current_state", false,-1, 1,0);
    tracep->declBus(c+1038,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1721,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1535,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBus(c+953,"wdata", false,-1, 31,0);
    tracep->declBus(c+954,"waddr", false,-1, 4,0);
    tracep->declBit(c+955,"wen", false,-1);
    tracep->declBus(c+1353,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1461,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1354,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1462,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1137,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1186+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1218+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+926,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+972,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+973,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+974,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+975,"npc_i", false,-1, 31,0);
    tracep->declBus(c+976,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+977,"wb_src_i", false,-1);
    tracep->declBit(c+978,"csr_write_i", false,-1);
    tracep->declBit(c+979,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+980,"reg_write_i", false,-1);
    tracep->declBus(c+981,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+982,"wbu_valid_i", false,-1);
    tracep->declBit(c+983,"wbu_ready_o", false,-1);
    tracep->declBus(c+917,"npc_o", false,-1, 31,0);
    tracep->declBit(c+918,"wbu_valid_o", false,-1);
    tracep->declBit(c+919,"wbu_ready_i", false,-1);
    tracep->declBus(c+1373,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+953,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1372,"csr_write_o", false,-1);
    tracep->declBit(c+955,"reg_write_o", false,-1);
    tracep->declBus(c+954,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1039,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1040,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1041,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1042,"rs1", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1044,"rmask", false,-1, 2,0);
    tracep->declBit(c+1045,"wb_src", false,-1);
    tracep->declBit(c+1046,"csr_wdata_src", false,-1);
    tracep->declBit(c+1047,"difftest_check", false,-1);
    tracep->declBit(c+1048,"difftest_check_flag", false,-1);
    tracep->declBus(c+1501,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1533,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1534,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1049,"current_state", false,-1, 1,0);
    tracep->declBus(c+1050,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1042,"d0", false,-1, 31,0);
    tracep->declBus(c+1043,"d1", false,-1, 31,0);
    tracep->declBit(c+1046,"sel", false,-1);
    tracep->declBus(c+1373,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1040,"read_data", false,-1, 31,0);
    tracep->declBus(c+1051,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1044,"rmask", false,-1, 2,0);
    tracep->declBus(c+1039,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1052,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1053,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1054,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1055,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1056,"byte3", false,-1, 31,0);
    tracep->declBus(c+1057,"byte2", false,-1, 31,0);
    tracep->declBus(c+1058,"byte1", false,-1, 31,0);
    tracep->declBus(c+1059,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1041,"d0", false,-1, 31,0);
    tracep->declBus(c+1039,"d1", false,-1, 31,0);
    tracep->declBit(c+1045,"sel", false,-1);
    tracep->declBus(c+953,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1459,"rst_n", false,-1);
    tracep->declBus(c+938,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1499,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1500,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+939,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1501,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+940,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1460,"axi_arready_o", false,-1);
    tracep->declBus(c+86,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+87,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rlast_o", false,-1);
    tracep->declBus(c+89,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+90,"axi_rvalid_o", false,-1);
    tracep->declBit(c+941,"axi_rready_i", false,-1);
    tracep->declBus(c+908,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1499,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1500,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+909,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1501,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+907,"axi_awvalid_i", false,-1);
    tracep->declBit(c+243,"axi_awready_o", false,-1);
    tracep->declBus(c+911,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+912,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+913,"axi_wlast_i", false,-1);
    tracep->declBit(c+910,"axi_wvalid_i", false,-1);
    tracep->declBit(c+244,"axi_wready_o", false,-1);
    tracep->declBus(c+247,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+246,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+245,"axi_bvalid_o", false,-1);
    tracep->declBit(c+914,"axi_bready_i", false,-1);
    tracep->declBus(c+32,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+31,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+33,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+34,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+35,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+30,"sram_arvalid_o", false,-1);
    tracep->declBit(c+1135,"sram_arready_i", false,-1);
    tracep->declBus(c+250,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+251,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+252,"sram_rlast_i", false,-1);
    tracep->declBus(c+249,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+248,"sram_rvalid_i", false,-1);
    tracep->declBit(c+36,"sram_rready_o", false,-1);
    tracep->declBus(c+908,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1499,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1500,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+909,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1501,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+907,"sram_awvalid_o", false,-1);
    tracep->declBit(c+243,"sram_awready_i", false,-1);
    tracep->declBus(c+911,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+912,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+913,"sram_wlast_o", false,-1);
    tracep->declBit(c+910,"sram_wvalid_o", false,-1);
    tracep->declBit(c+244,"sram_wready_i", false,-1);
    tracep->declBus(c+247,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+246,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+245,"sram_bvalid_i", false,-1);
    tracep->declBit(c+914,"sram_bready_o", false,-1);
    tracep->declBus(c+91,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+92,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+93,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+94,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+95,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+96,"clint_arvalid_o", false,-1);
    tracep->declBit(c+942,"clint_arready_i", false,-1);
    tracep->declBus(c+943,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+944,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+945,"clint_rlast_i", false,-1);
    tracep->declBus(c+1499,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+946,"clint_rvalid_i", false,-1);
    tracep->declBit(c+97,"clint_rready_o", false,-1);
    tracep->declBus(c+1518,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1519,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1520,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1521,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1522,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1523,"clint_awvalid_o", false,-1);
    tracep->declBit(c+947,"clint_awready_i", false,-1);
    tracep->declBus(c+1524,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1525,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1526,"clint_wlast_o", false,-1);
    tracep->declBit(c+1527,"clint_wvalid_o", false,-1);
    tracep->declBit(c+948,"clint_wready_i", false,-1);
    tracep->declBus(c+949,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1499,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+950,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1528,"clint_bready_o", false,-1);
    tracep->declBit(c+98,"ar_switch", false,-1);
    tracep->declBit(c+99,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"io_d", false,-1);
    tracep->declBit(c+514,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"io_d", false,-1);
    tracep->declBit(c+514,"io_q", false,-1);
    tracep->declBit(c+514,"sync_0", false,-1);
    tracep->declBit(c+515,"sync_1", false,-1);
    tracep->declBit(c+516,"sync_2", false,-1);
    tracep->declBit(c+517,"sync_3", false,-1);
    tracep->declBit(c+518,"sync_4", false,-1);
    tracep->declBit(c+519,"sync_5", false,-1);
    tracep->declBit(c+520,"sync_6", false,-1);
    tracep->declBit(c+521,"sync_7", false,-1);
    tracep->declBit(c+522,"sync_8", false,-1);
    tracep->declBit(c+523,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1384,"auto_in_psel", false,-1);
    tracep->declBit(c+1385,"auto_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+118,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+639,"auto_in_pready", false,-1);
    tracep->declBit(c+1495,"auto_in_pslverr", false,-1);
    tracep->declBus(c+640,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1428,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1429,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1430,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1431,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1432,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1433,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1434,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1435,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1436,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1437,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1397,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1384,"in_psel", false,-1);
    tracep->declBit(c+1385,"in_penable", false,-1);
    tracep->declBus(c+118,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"in_pwrite", false,-1);
    tracep->declBus(c+1133,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+639,"in_pready", false,-1);
    tracep->declBus(c+640,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1495,"in_pslverr", false,-1);
    tracep->declBus(c+1428,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1429,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1430,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1431,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1432,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1433,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1434,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1435,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1436,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1437,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+644,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+640,"rdata", false,-1, 31,0);
    tracep->declBus(c+645,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+639,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+646,"num", false,-1, 3,0);
    tracep->declBus(c+1430,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+647,"num", false,-1, 3,0);
    tracep->declBus(c+1431,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+648,"num", false,-1, 3,0);
    tracep->declBus(c+1432,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+649,"num", false,-1, 3,0);
    tracep->declBus(c+1433,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+650,"num", false,-1, 3,0);
    tracep->declBus(c+1434,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+651,"num", false,-1, 3,0);
    tracep->declBus(c+1435,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+652,"num", false,-1, 3,0);
    tracep->declBus(c+1436,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+653,"num", false,-1, 3,0);
    tracep->declBus(c+1437,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1259,"auto_in_psel", false,-1);
    tracep->declBit(c+1260,"auto_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+118,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+128,"auto_in_pready", false,-1);
    tracep->declBit(c+1495,"auto_in_pslverr", false,-1);
    tracep->declBus(c+129,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1438,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1439,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1397,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1259,"in_psel", false,-1);
    tracep->declBit(c+1260,"in_penable", false,-1);
    tracep->declBus(c+118,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"in_pwrite", false,-1);
    tracep->declBus(c+1133,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+128,"in_pready", false,-1);
    tracep->declBus(c+129,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1495,"in_pslverr", false,-1);
    tracep->declBit(c+1438,"ps2_clk", false,-1);
    tracep->declBit(c+1439,"ps2_data", false,-1);
    tracep->declBus(c+524,"data_r", false,-1, 7,0);
    tracep->declBus(c+525,"old_data", false,-1, 7,0);
    tracep->declBus(c+526,"data_asic", false,-1, 7,0);
    tracep->declBus(c+527,"buffer", false,-1, 7,0);
    tracep->declBit(c+528,"ready", false,-1);
    tracep->declBit(c+529,"nextdata_n", false,-1);
    tracep->declBit(c+530,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1465,"clrn", false,-1);
    tracep->declBit(c+1438,"ps2_clk", false,-1);
    tracep->declBit(c+1439,"ps2_data", false,-1);
    tracep->declBit(c+529,"nextdata_n", false,-1);
    tracep->declBus(c+527,"data", false,-1, 7,0);
    tracep->declBit(c+528,"ready", false,-1);
    tracep->declBit(c+530,"overflow", false,-1);
    tracep->declBus(c+531,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+532+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+540,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+541,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+542,"count", false,-1, 3,0);
    tracep->declBus(c+543,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+544,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1302,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1303,"auto_in_wvalid", false,-1);
    tracep->declBit(c+309,"auto_in_arready", false,-1);
    tracep->declBit(c+54,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+310,"auto_in_rvalid", false,-1);
    tracep->declBus(c+311,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+312,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+310,"state", false,-1);
    tracep->declBus(c+312,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+311,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+100,"raddr", false,-1, 31,0);
    tracep->declBit(c+101,"ren", false,-1);
    tracep->declBus(c+102,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1386,"auto_in_psel", false,-1);
    tracep->declBit(c+1261,"auto_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+118,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1455,"auto_in_pready", false,-1);
    tracep->declBit(c+1495,"auto_in_pslverr", false,-1);
    tracep->declBus(c+130,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1449,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1414,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1450,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1379,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1386,"in_psel", false,-1);
    tracep->declBit(c+1261,"in_penable", false,-1);
    tracep->declBus(c+118,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"in_pwrite", false,-1);
    tracep->declBus(c+1133,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1455,"in_pready", false,-1);
    tracep->declBus(c+130,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1495,"in_pslverr", false,-1);
    tracep->declBit(c+1449,"qspi_sck", false,-1);
    tracep->declBit(c+1414,"qspi_ce_n", false,-1);
    tracep->declBus(c+1450,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1450,"din", false,-1, 3,0);
    tracep->declBus(c+1466,"dout", false,-1, 3,0);
    tracep->declBus(c+1415,"douten", false,-1, 3,0);
    tracep->declBit(c+1467,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1426,"clk_i", false,-1);
    tracep->declBit(c+1427,"rst_i", false,-1);
    tracep->declBus(c+1379,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1133,"dat_i", false,-1, 31,0);
    tracep->declBus(c+130,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1134,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1386,"cyc_i", false,-1);
    tracep->declBit(c+1386,"stb_i", false,-1);
    tracep->declBit(c+1467,"ack_o", false,-1);
    tracep->declBit(c+1132,"we_i", false,-1);
    tracep->declBit(c+1449,"sck", false,-1);
    tracep->declBit(c+1414,"ce_n", false,-1);
    tracep->declBus(c+1450,"din", false,-1, 3,0);
    tracep->declBus(c+1466,"dout", false,-1, 3,0);
    tracep->declBus(c+1415,"douten", false,-1, 3,0);
    tracep->declBus(c+1501,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1533,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1534,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+654,"mr_sck", false,-1);
    tracep->declBit(c+655,"mr_ce_n", false,-1);
    tracep->declBus(c+1450,"mr_din", false,-1, 3,0);
    tracep->declBus(c+656,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+657,"mr_doe", false,-1);
    tracep->declBit(c+658,"mw_sck", false,-1);
    tracep->declBit(c+659,"mw_ce_n", false,-1);
    tracep->declBus(c+1450,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1468,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+660,"mw_doe", false,-1);
    tracep->declBit(c+1416,"mr_rd", false,-1);
    tracep->declBit(c+661,"mr_done", false,-1);
    tracep->declBit(c+1417,"mw_wr", false,-1);
    tracep->declBit(c+1469,"mw_done", false,-1);
    tracep->declBit(c+1386,"wb_valid", false,-1);
    tracep->declBit(c+1398,"wb_we", false,-1);
    tracep->declBit(c+1399,"wb_re", false,-1);
    tracep->declBus(c+1333,"state", false,-1, 1,0);
    tracep->declBus(c+1470,"nstate", false,-1, 1,0);
    tracep->declBus(c+1471,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1472,"qpi_sck", false,-1);
    tracep->declBus(c+1250,"size", false,-1, 2,0);
    tracep->declBus(c+1251,"byte0", false,-1, 7,0);
    tracep->declBus(c+1252,"byte1", false,-1, 7,0);
    tracep->declBus(c+1253,"byte2", false,-1, 7,0);
    tracep->declBus(c+1254,"byte3", false,-1, 7,0);
    tracep->declBus(c+1255,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1465,"rst_n", false,-1);
    tracep->declBus(c+1400,"addr", false,-1, 23,0);
    tracep->declBit(c+1416,"rd", false,-1);
    tracep->declBus(c+1494,"size", false,-1, 2,0);
    tracep->declBit(c+661,"done", false,-1);
    tracep->declBus(c+130,"line", false,-1, 31,0);
    tracep->declBit(c+654,"sck", false,-1);
    tracep->declBit(c+655,"ce_n", false,-1);
    tracep->declBus(c+1450,"din", false,-1, 3,0);
    tracep->declBus(c+656,"dout", false,-1, 3,0);
    tracep->declBit(c+657,"douten", false,-1);
    tracep->declBus(c+1722,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1723,"READ", false,-1, 0,0);
    tracep->declBus(c+1724,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+662,"state", false,-1);
    tracep->declBit(c+1418,"nstate", false,-1);
    tracep->declBus(c+663,"counter", false,-1, 7,0);
    tracep->declBus(c+664,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+545+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1725,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+665,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1465,"rst_n", false,-1);
    tracep->declBus(c+1401,"addr", false,-1, 23,0);
    tracep->declBus(c+1255,"line", false,-1, 31,0);
    tracep->declBus(c+1250,"size", false,-1, 2,0);
    tracep->declBit(c+1417,"wr", false,-1);
    tracep->declBit(c+1469,"done", false,-1);
    tracep->declBit(c+658,"sck", false,-1);
    tracep->declBit(c+659,"ce_n", false,-1);
    tracep->declBus(c+1450,"din", false,-1, 3,0);
    tracep->declBus(c+1468,"dout", false,-1, 3,0);
    tracep->declBit(c+660,"douten", false,-1);
    tracep->declBus(c+1722,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1723,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1256,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+666,"state", false,-1);
    tracep->declBit(c+1419,"nstate", false,-1);
    tracep->declBus(c+667,"counter", false,-1, 7,0);
    tracep->declBus(c+668,"saddr", false,-1, 23,0);
    tracep->declBus(c+1726,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1257,"auto_in_psel", false,-1);
    tracep->declBit(c+1258,"auto_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1379,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+118,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+636,"auto_in_pready", false,-1);
    tracep->declBit(c+1495,"auto_in_pslverr", false,-1);
    tracep->declBus(c+637,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1451,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1330,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+632,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+633,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+634,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+635,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1452,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1331,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1332,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1346,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1379,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1257,"in_psel", false,-1);
    tracep->declBit(c+1258,"in_penable", false,-1);
    tracep->declBus(c+118,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"in_pwrite", false,-1);
    tracep->declBus(c+1133,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+636,"in_pready", false,-1);
    tracep->declBus(c+637,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1495,"in_pslverr", false,-1);
    tracep->declBit(c+1451,"sdram_clk", false,-1);
    tracep->declBit(c+1330,"sdram_cke", false,-1);
    tracep->declBit(c+632,"sdram_cs", false,-1);
    tracep->declBit(c+633,"sdram_ras", false,-1);
    tracep->declBit(c+634,"sdram_cas", false,-1);
    tracep->declBit(c+635,"sdram_we", false,-1);
    tracep->declBus(c+1452,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1331,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1332,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1346,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+669,"sdram_dout_en", false,-1);
    tracep->declBus(c+670,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+549,"state", false,-1, 1,0);
    tracep->declBit(c+1334,"req_accept", false,-1);
    tracep->declBit(c+1402,"is_read", false,-1);
    tracep->declBit(c+1403,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1426,"clk_i", false,-1);
    tracep->declBit(c+1427,"rst_i", false,-1);
    tracep->declBus(c+1404,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1402,"inport_rd_i", false,-1);
    tracep->declBus(c+1500,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1379,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1133,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1346,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1334,"inport_accept_o", false,-1);
    tracep->declBit(c+636,"inport_ack_o", false,-1);
    tracep->declBit(c+1495,"inport_error_o", false,-1);
    tracep->declBus(c+637,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1451,"sdram_clk_o", false,-1);
    tracep->declBit(c+1330,"sdram_cke_o", false,-1);
    tracep->declBit(c+632,"sdram_cs_o", false,-1);
    tracep->declBit(c+633,"sdram_ras_o", false,-1);
    tracep->declBit(c+634,"sdram_cas_o", false,-1);
    tracep->declBit(c+635,"sdram_we_o", false,-1);
    tracep->declBus(c+1332,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1452,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1331,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+670,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+669,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1486,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1727,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1728,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1729,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1729,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1730,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1730,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1731,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1732,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1733,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1734,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1730,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1735,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1736,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1737,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1738,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1739,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1740,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1741,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1499,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1742,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1730,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1499,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1741,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1740,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1736,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1738,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1737,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1739,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1735,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1743,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1744,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1745,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1745,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1535,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1745,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1729,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1729,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1746,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1379,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1404,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1402,"ram_rd_w", false,-1);
    tracep->declBit(c+1334,"ram_accept_w", false,-1);
    tracep->declBus(c+1133,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+637,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+636,"ram_ack_w", false,-1);
    tracep->declBit(c+1405,"ram_req_w", false,-1);
    tracep->declBus(c+671,"command_q", false,-1, 3,0);
    tracep->declBus(c+1335,"addr_q", false,-1, 12,0);
    tracep->declBus(c+670,"data_q", false,-1, 31,0);
    tracep->declBit(c+672,"data_rd_en_q", false,-1);
    tracep->declBus(c+1332,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1330,"cke_q", false,-1);
    tracep->declBus(c+1331,"bank_q", false,-1, 1,0);
    tracep->declBus(c+637,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+673,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1346,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+674,"refresh_q", false,-1);
    tracep->declBus(c+675,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+676+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1336,"state_q", false,-1, 3,0);
    tracep->declBus(c+1420,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1421,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+680,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+681,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1406,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1407,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1408,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1730,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+682,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1422,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1747,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1337,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+683,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+684,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+685,"idx", false,-1, 31,0);
    tracep->declBus(c+686,"rd_q", false,-1, 3,0);
    tracep->declBit(c+636,"ack_q", false,-1);
    tracep->declArray(c+1338,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1262,"auto_in_psel", false,-1);
    tracep->declBit(c+1263,"auto_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1382,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+118,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+641,"auto_in_pready", false,-1);
    tracep->declBit(c+642,"auto_in_pslverr", false,-1);
    tracep->declBus(c+643,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+631,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1328,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1329,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1448,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1748,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1749,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1490,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1409,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1262,"in_psel", false,-1);
    tracep->declBit(c+1263,"in_penable", false,-1);
    tracep->declBus(c+118,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"in_pwrite", false,-1);
    tracep->declBus(c+1133,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+641,"in_pready", false,-1);
    tracep->declBus(c+643,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+642,"in_pslverr", false,-1);
    tracep->declBit(c+631,"spi_sck", false,-1);
    tracep->declBus(c+1328,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1329,"spi_mosi", false,-1);
    tracep->declBit(c+1448,"spi_miso", false,-1);
    tracep->declBit(c+687,"spi_irq_out", false,-1);
    tracep->declBus(c+1750,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1751,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1750,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1752,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1753,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1754,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1499,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1741,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1740,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1736,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1738,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1737,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1739,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1735,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1743,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1744,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1755,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+688,"xip_state", false,-1, 3,0);
    tracep->declBus(c+689,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+690,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+691,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+692,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+693,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+694,"wb_we_i", false,-1);
    tracep->declBit(c+695,"wb_stb_i", false,-1);
    tracep->declBit(c+696,"wb_cyc_i", false,-1);
    tracep->declBit(c+697,"wb_ack_o", false,-1);
    tracep->declBit(c+1495,"wb_err_o", false,-1);
    tracep->declBit(c+698,"wb_int_o", false,-1);
    tracep->declBit(c+699,"done", false,-1);
    tracep->declBus(c+700,"paddr", false,-1, 31,0);
    tracep->declQuad(c+701,"data", false,-1, 63,0);
    tracep->declBit(c+703,"is_flash_access", false,-1);
    tracep->declBus(c+704,"tmp", false,-1, 31,0);
    tracep->declQuad(c+705,"tmp64", false,-1, 63,0);
    tracep->declBus(c+707,"counter", false,-1, 7,0);
    tracep->declBit(c+708,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBit(c+1426,"wb_clk_i", false,-1);
    tracep->declBit(c+1427,"wb_rst_i", false,-1);
    tracep->declBus(c+690,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+691,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+692,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+693,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+694,"wb_we_i", false,-1);
    tracep->declBit(c+695,"wb_stb_i", false,-1);
    tracep->declBit(c+696,"wb_cyc_i", false,-1);
    tracep->declBit(c+697,"wb_ack_o", false,-1);
    tracep->declBit(c+1495,"wb_err_o", false,-1);
    tracep->declBit(c+698,"wb_int_o", false,-1);
    tracep->declBus(c+1328,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+631,"sclk_pad_o", false,-1);
    tracep->declBit(c+1329,"mosi_pad_o", false,-1);
    tracep->declBit(c+1448,"miso_pad_i", false,-1);
    tracep->declBus(c+709,"divider", false,-1, 15,0);
    tracep->declBus(c+710,"ctrl", false,-1, 13,0);
    tracep->declBus(c+711,"ss", false,-1, 7,0);
    tracep->declBus(c+712,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+713,"rx", false,-1, 127,0);
    tracep->declBit(c+717,"rx_negedge", false,-1);
    tracep->declBit(c+718,"tx_negedge", false,-1);
    tracep->declBus(c+719,"char_len", false,-1, 6,0);
    tracep->declBit(c+720,"go", false,-1);
    tracep->declBit(c+721,"lsb", false,-1);
    tracep->declBit(c+722,"ie", false,-1);
    tracep->declBit(c+723,"ass", false,-1);
    tracep->declBit(c+724,"spi_divider_sel", false,-1);
    tracep->declBit(c+725,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+726,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+727,"spi_ss_sel", false,-1);
    tracep->declBit(c+728,"tip", false,-1);
    tracep->declBit(c+729,"pos_edge", false,-1);
    tracep->declBit(c+730,"neg_edge", false,-1);
    tracep->declBit(c+731,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBit(c+1426,"clk_in", false,-1);
    tracep->declBit(c+1427,"rst", false,-1);
    tracep->declBit(c+728,"enable", false,-1);
    tracep->declBit(c+720,"go", false,-1);
    tracep->declBit(c+731,"last_clk", false,-1);
    tracep->declBus(c+709,"divider", false,-1, 15,0);
    tracep->declBit(c+631,"clk_out", false,-1);
    tracep->declBit(c+729,"pos_edge", false,-1);
    tracep->declBit(c+730,"neg_edge", false,-1);
    tracep->declBus(c+732,"cnt", false,-1, 15,0);
    tracep->declBit(c+733,"cnt_zero", false,-1);
    tracep->declBit(c+734,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1427,"rst", false,-1);
    tracep->declBus(c+735,"latch", false,-1, 3,0);
    tracep->declBus(c+693,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+719,"len", false,-1, 6,0);
    tracep->declBit(c+721,"lsb", false,-1);
    tracep->declBit(c+720,"go", false,-1);
    tracep->declBit(c+729,"pos_edge", false,-1);
    tracep->declBit(c+730,"neg_edge", false,-1);
    tracep->declBit(c+717,"rx_negedge", false,-1);
    tracep->declBit(c+718,"tx_negedge", false,-1);
    tracep->declBit(c+728,"tip", false,-1);
    tracep->declBit(c+731,"last", false,-1);
    tracep->declBus(c+691,"p_in", false,-1, 31,0);
    tracep->declArray(c+713,"p_out", false,-1, 127,0);
    tracep->declBit(c+631,"s_clk", false,-1);
    tracep->declBit(c+1448,"s_in", false,-1);
    tracep->declBit(c+1329,"s_out", false,-1);
    tracep->declBus(c+736,"cnt", false,-1, 7,0);
    tracep->declArray(c+713,"data", false,-1, 127,0);
    tracep->declBus(c+737,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+738,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+739,"rx_clk", false,-1);
    tracep->declBit(c+740,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1387,"auto_in_psel", false,-1);
    tracep->declBit(c+1388,"auto_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1383,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+118,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1389,"auto_in_pready", false,-1);
    tracep->declBit(c+1495,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1456,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1446,"uart_rx", false,-1);
    tracep->declBit(c+1447,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1387,"in_psel", false,-1);
    tracep->declBit(c+1388,"in_penable", false,-1);
    tracep->declBus(c+118,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1389,"in_pready", false,-1);
    tracep->declBit(c+1495,"in_pslverr", false,-1);
    tracep->declBus(c+1397,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1132,"in_pwrite", false,-1);
    tracep->declBus(c+1456,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1133,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1446,"uart_rx", false,-1);
    tracep->declBit(c+1447,"uart_tx", false,-1);
    tracep->declBit(c+741,"rtsn", false,-1);
    tracep->declBit(c+1495,"ctsn", false,-1);
    tracep->declBit(c+742,"dtr_pad_o", false,-1);
    tracep->declBit(c+1495,"dsr_pad_i", false,-1);
    tracep->declBit(c+1495,"ri_pad_i", false,-1);
    tracep->declBit(c+1495,"dcd_pad_i", false,-1);
    tracep->declBit(c+743,"interrupt", false,-1);
    tracep->declBit(c+1473,"reg_we", false,-1);
    tracep->declBit(c+1474,"reg_re", false,-1);
    tracep->declBus(c+1410,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1411,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+550,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1423,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+744,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1427,"wb_rst_i", false,-1);
    tracep->declBus(c+1410,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1412,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1423,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1473,"wb_we_i", false,-1);
    tracep->declBit(c+1474,"wb_re_i", false,-1);
    tracep->declBit(c+1447,"stx_pad_o", false,-1);
    tracep->declBit(c+1446,"srx_pad_i", false,-1);
    tracep->declBus(c+1743,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+744,"rts_pad_o", false,-1);
    tracep->declBit(c+742,"dtr_pad_o", false,-1);
    tracep->declBit(c+743,"int_o", false,-1);
    tracep->declBit(c+745,"enable", false,-1);
    tracep->declBit(c+746,"srx_pad", false,-1);
    tracep->declBus(c+747,"ier", false,-1, 3,0);
    tracep->declBus(c+748,"iir", false,-1, 3,0);
    tracep->declBus(c+749,"fcr", false,-1, 1,0);
    tracep->declBus(c+750,"mcr", false,-1, 4,0);
    tracep->declBus(c+751,"lcr", false,-1, 7,0);
    tracep->declBus(c+752,"msr", false,-1, 7,0);
    tracep->declBus(c+753,"dl", false,-1, 15,0);
    tracep->declBus(c+754,"scratch", false,-1, 7,0);
    tracep->declBit(c+755,"start_dlc", false,-1);
    tracep->declBit(c+756,"lsr_mask_d", false,-1);
    tracep->declBit(c+757,"msi_reset", false,-1);
    tracep->declBus(c+758,"dlc", false,-1, 15,0);
    tracep->declBus(c+759,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+760,"rx_reset", false,-1);
    tracep->declBit(c+761,"tx_reset", false,-1);
    tracep->declBit(c+762,"dlab", false,-1);
    tracep->declBit(c+1498,"cts_pad_i", false,-1);
    tracep->declBit(c+1495,"dsr_pad_i", false,-1);
    tracep->declBit(c+1495,"ri_pad_i", false,-1);
    tracep->declBit(c+1495,"dcd_pad_i", false,-1);
    tracep->declBit(c+763,"loopback", false,-1);
    tracep->declBit(c+1495,"cts", false,-1);
    tracep->declBit(c+1498,"dsr", false,-1);
    tracep->declBit(c+1498,"ri", false,-1);
    tracep->declBit(c+1498,"dcd", false,-1);
    tracep->declBit(c+764,"cts_c", false,-1);
    tracep->declBit(c+765,"dsr_c", false,-1);
    tracep->declBit(c+766,"ri_c", false,-1);
    tracep->declBit(c+767,"dcd_c", false,-1);
    tracep->declBus(c+768,"lsr", false,-1, 7,0);
    tracep->declBit(c+769,"lsr0", false,-1);
    tracep->declBit(c+770,"lsr1", false,-1);
    tracep->declBit(c+771,"lsr2", false,-1);
    tracep->declBit(c+772,"lsr3", false,-1);
    tracep->declBit(c+773,"lsr4", false,-1);
    tracep->declBit(c+774,"lsr5", false,-1);
    tracep->declBit(c+775,"lsr6", false,-1);
    tracep->declBit(c+776,"lsr7", false,-1);
    tracep->declBit(c+777,"lsr0r", false,-1);
    tracep->declBit(c+778,"lsr1r", false,-1);
    tracep->declBit(c+779,"lsr2r", false,-1);
    tracep->declBit(c+780,"lsr3r", false,-1);
    tracep->declBit(c+781,"lsr4r", false,-1);
    tracep->declBit(c+782,"lsr5r", false,-1);
    tracep->declBit(c+783,"lsr6r", false,-1);
    tracep->declBit(c+784,"lsr7r", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBit(c+785,"rls_int", false,-1);
    tracep->declBit(c+786,"rda_int", false,-1);
    tracep->declBit(c+787,"ti_int", false,-1);
    tracep->declBit(c+788,"thre_int", false,-1);
    tracep->declBit(c+789,"ms_int", false,-1);
    tracep->declBit(c+790,"tf_push", false,-1);
    tracep->declBit(c+791,"rf_pop", false,-1);
    tracep->declBus(c+1475,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+792,"rf_error_bit", false,-1);
    tracep->declBit(c+770,"rf_overrun", false,-1);
    tracep->declBit(c+793,"rf_push_pulse", false,-1);
    tracep->declBus(c+794,"rf_count", false,-1, 4,0);
    tracep->declBus(c+795,"tf_count", false,-1, 4,0);
    tracep->declBus(c+796,"tstate", false,-1, 2,0);
    tracep->declBus(c+797,"rstate", false,-1, 3,0);
    tracep->declBus(c+798,"counter_t", false,-1, 9,0);
    tracep->declBit(c+799,"thre_set_en", false,-1);
    tracep->declBus(c+800,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+801,"block_value", false,-1, 7,0);
    tracep->declBit(c+802,"serial_out", false,-1);
    tracep->declBit(c+803,"serial_in", false,-1);
    tracep->declBit(c+104,"lsr_mask_condition", false,-1);
    tracep->declBit(c+105,"iir_read", false,-1);
    tracep->declBit(c+106,"msr_read", false,-1);
    tracep->declBit(c+107,"fifo_read", false,-1);
    tracep->declBit(c+108,"fifo_write", false,-1);
    tracep->declBus(c+804,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+805,"lsr0_d", false,-1);
    tracep->declBit(c+806,"lsr1_d", false,-1);
    tracep->declBit(c+807,"lsr2_d", false,-1);
    tracep->declBit(c+808,"lsr3_d", false,-1);
    tracep->declBit(c+809,"lsr4_d", false,-1);
    tracep->declBit(c+810,"lsr5_d", false,-1);
    tracep->declBit(c+811,"lsr6_d", false,-1);
    tracep->declBit(c+812,"lsr7_d", false,-1);
    tracep->declBit(c+813,"rls_int_d", false,-1);
    tracep->declBit(c+814,"thre_int_d", false,-1);
    tracep->declBit(c+815,"ms_int_d", false,-1);
    tracep->declBit(c+816,"ti_int_d", false,-1);
    tracep->declBit(c+817,"rda_int_d", false,-1);
    tracep->declBit(c+818,"rls_int_rise", false,-1);
    tracep->declBit(c+819,"thre_int_rise", false,-1);
    tracep->declBit(c+820,"ms_int_rise", false,-1);
    tracep->declBit(c+821,"ti_int_rise", false,-1);
    tracep->declBit(c+822,"rda_int_rise", false,-1);
    tracep->declBit(c+823,"rls_int_pnd", false,-1);
    tracep->declBit(c+824,"rda_int_pnd", false,-1);
    tracep->declBit(c+825,"thre_int_pnd", false,-1);
    tracep->declBit(c+826,"ms_int_pnd", false,-1);
    tracep->declBit(c+827,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1756,"Tp", false,-1, 31,0);
    tracep->declBus(c+1756,"width", false,-1, 31,0);
    tracep->declBus(c+1723,"init_value", false,-1, 0,0);
    tracep->declBit(c+1427,"rst_i", false,-1);
    tracep->declBit(c+1426,"clk_i", false,-1);
    tracep->declBit(c+1495,"stage1_rst_i", false,-1);
    tracep->declBit(c+1498,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1446,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+746,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+828,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1427,"wb_rst_i", false,-1);
    tracep->declBus(c+751,"lcr", false,-1, 7,0);
    tracep->declBit(c+791,"rf_pop", false,-1);
    tracep->declBit(c+803,"srx_pad_i", false,-1);
    tracep->declBit(c+745,"enable", false,-1);
    tracep->declBit(c+760,"rx_reset", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBus(c+798,"counter_t", false,-1, 9,0);
    tracep->declBus(c+794,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1475,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+770,"rf_overrun", false,-1);
    tracep->declBit(c+792,"rf_error_bit", false,-1);
    tracep->declBus(c+797,"rstate", false,-1, 3,0);
    tracep->declBit(c+793,"rf_push_pulse", false,-1);
    tracep->declBus(c+829,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+830,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+831,"rshift", false,-1, 7,0);
    tracep->declBit(c+832,"rparity", false,-1);
    tracep->declBit(c+833,"rparity_error", false,-1);
    tracep->declBit(c+834,"rframing_error", false,-1);
    tracep->declBit(c+835,"rbit_in", false,-1);
    tracep->declBit(c+836,"rparity_xor", false,-1);
    tracep->declBus(c+837,"counter_b", false,-1, 7,0);
    tracep->declBit(c+838,"rf_push_q", false,-1);
    tracep->declBus(c+839,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+840,"rf_push", false,-1);
    tracep->declBit(c+841,"break_error", false,-1);
    tracep->declBit(c+842,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+843,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+844,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+845,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1499,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1741,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1740,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1736,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1738,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1737,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1739,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1735,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1743,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1744,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1757,"sr_push", false,-1, 3,0);
    tracep->declBus(c+846,"toc_value", false,-1, 9,0);
    tracep->declBus(c+847,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1758,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1759,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1730,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1721,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1427,"wb_rst_i", false,-1);
    tracep->declBit(c+793,"push", false,-1);
    tracep->declBit(c+791,"pop", false,-1);
    tracep->declBus(c+839,"data_in", false,-1, 10,0);
    tracep->declBit(c+760,"fifo_reset", false,-1);
    tracep->declBit(c+103,"reset_status", false,-1);
    tracep->declBus(c+1475,"data_out", false,-1, 10,0);
    tracep->declBit(c+770,"overrun", false,-1);
    tracep->declBus(c+794,"count", false,-1, 4,0);
    tracep->declBit(c+792,"error_bit", false,-1);
    tracep->declBus(c+1476,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+848+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+864,"top", false,-1, 3,0);
    tracep->declBus(c+865,"bottom", false,-1, 3,0);
    tracep->declBus(c+866,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+867,"word0", false,-1, 2,0);
    tracep->declBus(c+868,"word1", false,-1, 2,0);
    tracep->declBus(c+869,"word2", false,-1, 2,0);
    tracep->declBus(c+870,"word3", false,-1, 2,0);
    tracep->declBus(c+871,"word4", false,-1, 2,0);
    tracep->declBus(c+872,"word5", false,-1, 2,0);
    tracep->declBus(c+873,"word6", false,-1, 2,0);
    tracep->declBus(c+874,"word7", false,-1, 2,0);
    tracep->declBus(c+875,"word8", false,-1, 2,0);
    tracep->declBus(c+876,"word9", false,-1, 2,0);
    tracep->declBus(c+877,"word10", false,-1, 2,0);
    tracep->declBus(c+878,"word11", false,-1, 2,0);
    tracep->declBus(c+879,"word12", false,-1, 2,0);
    tracep->declBus(c+880,"word13", false,-1, 2,0);
    tracep->declBus(c+881,"word14", false,-1, 2,0);
    tracep->declBus(c+882,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1730,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1490,"data_width", false,-1, 31,0);
    tracep->declBus(c+1759,"depth", false,-1, 31,0);
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+793,"we", false,-1);
    tracep->declBus(c+864,"a", false,-1, 3,0);
    tracep->declBus(c+865,"dpra", false,-1, 3,0);
    tracep->declBus(c+883,"di", false,-1, 7,0);
    tracep->declBus(c+1476,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+551+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1427,"wb_rst_i", false,-1);
    tracep->declBus(c+751,"lcr", false,-1, 7,0);
    tracep->declBit(c+790,"tf_push", false,-1);
    tracep->declBus(c+1412,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+745,"enable", false,-1);
    tracep->declBit(c+761,"tx_reset", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBit(c+802,"stx_pad_o", false,-1);
    tracep->declBus(c+796,"tstate", false,-1, 2,0);
    tracep->declBus(c+795,"tf_count", false,-1, 4,0);
    tracep->declBus(c+884,"counter", false,-1, 4,0);
    tracep->declBus(c+885,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+886,"shift_out", false,-1, 6,0);
    tracep->declBit(c+887,"stx_o_tmp", false,-1);
    tracep->declBit(c+888,"parity_xor", false,-1);
    tracep->declBit(c+889,"tf_pop", false,-1);
    tracep->declBit(c+890,"bit_out", false,-1);
    tracep->declBus(c+1412,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1477,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+891,"tf_overrun", false,-1);
    tracep->declBus(c+1491,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1488,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1492,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1493,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1494,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1760,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1490,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1759,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1730,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1721,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+1427,"wb_rst_i", false,-1);
    tracep->declBit(c+790,"push", false,-1);
    tracep->declBit(c+889,"pop", false,-1);
    tracep->declBus(c+1412,"data_in", false,-1, 7,0);
    tracep->declBit(c+761,"fifo_reset", false,-1);
    tracep->declBit(c+103,"reset_status", false,-1);
    tracep->declBus(c+1477,"data_out", false,-1, 7,0);
    tracep->declBit(c+891,"overrun", false,-1);
    tracep->declBus(c+795,"count", false,-1, 4,0);
    tracep->declBus(c+892,"top", false,-1, 3,0);
    tracep->declBus(c+893,"bottom", false,-1, 3,0);
    tracep->declBus(c+894,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1730,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1490,"data_width", false,-1, 31,0);
    tracep->declBus(c+1759,"depth", false,-1, 31,0);
    tracep->declBit(c+1426,"clk", false,-1);
    tracep->declBit(c+790,"we", false,-1);
    tracep->declBus(c+892,"a", false,-1, 3,0);
    tracep->declBus(c+893,"dpra", false,-1, 3,0);
    tracep->declBus(c+1412,"di", false,-1, 7,0);
    tracep->declBus(c+1477,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+567+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBit(c+1380,"auto_in_psel", false,-1);
    tracep->declBit(c+1381,"auto_in_penable", false,-1);
    tracep->declBit(c+1132,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1382,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+118,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1133,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+638,"auto_in_pready", false,-1);
    tracep->declBit(c+1496,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1497,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1440,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1441,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1442,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1443,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1444,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1445,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1426,"clock", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1409,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1380,"in_psel", false,-1);
    tracep->declBit(c+1381,"in_penable", false,-1);
    tracep->declBus(c+118,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1132,"in_pwrite", false,-1);
    tracep->declBus(c+1133,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1134,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+638,"in_pready", false,-1);
    tracep->declBus(c+1497,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1496,"in_pslverr", false,-1);
    tracep->declBus(c+1440,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1441,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1442,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1443,"vga_hsync", false,-1);
    tracep->declBit(c+1444,"vga_vsync", false,-1);
    tracep->declBit(c+1445,"vga_valid", false,-1);
    tracep->declBus(c+895,"h_addr", false,-1, 9,0);
    tracep->declBus(c+583,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1478,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1413,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+638,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1426,"pclk", false,-1);
    tracep->declBit(c+1427,"reset", false,-1);
    tracep->declBus(c+1478,"vga_data", false,-1, 23,0);
    tracep->declBus(c+895,"h_addr", false,-1, 9,0);
    tracep->declBus(c+583,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1443,"hsync", false,-1);
    tracep->declBit(c+1444,"vsync", false,-1);
    tracep->declBit(c+1445,"valid", false,-1);
    tracep->declBus(c+1440,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1441,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1442,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1761,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1762,"h_active", false,-1, 31,0);
    tracep->declBus(c+1763,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1764,"h_total", false,-1, 31,0);
    tracep->declBus(c+1729,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1765,"v_active", false,-1, 31,0);
    tracep->declBus(c+1766,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1767,"v_total", false,-1, 31,0);
    tracep->declBus(c+896,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+584,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+897,"h_valid", false,-1);
    tracep->declBit(c+585,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+631,"sck", false,-1);
    tracep->declBit(c+1341,"ss", false,-1);
    tracep->declBit(c+1329,"mosi", false,-1);
    tracep->declBit(c+1126,"miso", false,-1);
    tracep->declBus(c+1127,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1128,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1479,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+631,"sck", false,-1);
    tracep->declBit(c+1342,"ss", false,-1);
    tracep->declBit(c+1329,"mosi", false,-1);
    tracep->declBit(c+1480,"miso", false,-1);
    tracep->declBit(c+1342,"reset", false,-1);
    tracep->declBus(c+1120,"state", false,-1, 2,0);
    tracep->declBus(c+1121,"counter", false,-1, 7,0);
    tracep->declBus(c+1122,"cmd", false,-1, 7,0);
    tracep->declBus(c+1123,"addr", false,-1, 23,0);
    tracep->declBus(c+1124,"data", false,-1, 31,0);
    tracep->declBit(c+1125,"ren", false,-1);
    tracep->declBus(c+1481,"rdata", false,-1, 31,0);
    tracep->declBus(c+1482,"raddr", false,-1, 31,0);
    tracep->declBus(c+1129,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+631,"clock", false,-1);
    tracep->declBit(c+1125,"valid", false,-1);
    tracep->declBus(c+1122,"cmd", false,-1, 7,0);
    tracep->declBus(c+1482,"addr", false,-1, 31,0);
    tracep->declBus(c+1481,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1449,"sck", false,-1);
    tracep->declBit(c+1414,"ce_n", false,-1);
    tracep->declBus(c+1450,"dio", false,-1, 3,0);
    tracep->declBus(c+621,"dio_out", false,-1, 3,0);
    tracep->declBus(c+622,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1450,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1529,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1756,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1729,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1768,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1730,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1721,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+623,"state", false,-1, 2,0);
    tracep->declBus(c+1483,"next_state", false,-1, 2,0);
    tracep->declBus(c+624,"counter", false,-1, 7,0);
    tracep->declBus(c+625,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+626,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+627,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+628,"is_read_op", false,-1);
    tracep->declBit(c+629,"is_write_op", false,-1);
    tracep->declBus(c+630,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1484,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1451,"clk", false,-1);
    tracep->declBit(c+1330,"cke", false,-1);
    tracep->declBit(c+632,"cs", false,-1);
    tracep->declBit(c+633,"ras", false,-1);
    tracep->declBit(c+634,"cas", false,-1);
    tracep->declBit(c+635,"we", false,-1);
    tracep->declBus(c+1452,"a", false,-1, 13,0);
    tracep->declBus(c+1331,"ba", false,-1, 1,0);
    tracep->declBus(c+1332,"dqm", false,-1, 3,0);
    tracep->declBus(c+1346,"dq", false,-1, 31,0);
    tracep->declBit(c+899,"cs_0", false,-1);
    tracep->declBit(c+900,"ras_0", false,-1);
    tracep->declBit(c+901,"cas_0", false,-1);
    tracep->declBit(c+902,"we_0", false,-1);
    tracep->declBit(c+903,"cs_1", false,-1);
    tracep->declBit(c+904,"ras_1", false,-1);
    tracep->declBit(c+905,"cas_1", false,-1);
    tracep->declBit(c+906,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1451,"clk", false,-1);
    tracep->declBit(c+1330,"cke", false,-1);
    tracep->declBit(c+903,"cs", false,-1);
    tracep->declBit(c+904,"ras", false,-1);
    tracep->declBit(c+905,"cas", false,-1);
    tracep->declBit(c+906,"we", false,-1);
    tracep->declBus(c+1335,"a", false,-1, 12,0);
    tracep->declBus(c+1331,"ba", false,-1, 1,0);
    tracep->declBus(c+1332,"dqm", false,-1, 3,0);
    tracep->declBus(c+1346,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1451,"clk", false,-1);
    tracep->declBit(c+1330,"cke", false,-1);
    tracep->declBit(c+903,"cs", false,-1);
    tracep->declBit(c+904,"ras", false,-1);
    tracep->declBit(c+905,"cas", false,-1);
    tracep->declBit(c+906,"we", false,-1);
    tracep->declBus(c+1335,"a", false,-1, 12,0);
    tracep->declBus(c+1331,"ba", false,-1, 1,0);
    tracep->declBus(c+1343,"dqm", false,-1, 1,0);
    tracep->declBus(c+1347,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1736,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1737,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1738,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1499,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1060,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1061,"bl", false,-1, 2,0);
    tracep->declBus(c+1424,"command", false,-1, 3,0);
    tracep->declBus(c+1062,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1063,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1344,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1064,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1348,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1065,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1066+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1070,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1071,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1770,"state", false,-1, 2,0);
    tracep->declBit(c+1072,"write_brust", false,-1);
    tracep->declBit(c+1073,"read_burst", false,-1);
    tracep->declBus(c+1074,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1451,"clk", false,-1);
    tracep->declBit(c+1330,"cke", false,-1);
    tracep->declBit(c+903,"cs", false,-1);
    tracep->declBit(c+904,"ras", false,-1);
    tracep->declBit(c+905,"cas", false,-1);
    tracep->declBit(c+906,"we", false,-1);
    tracep->declBus(c+1335,"a", false,-1, 12,0);
    tracep->declBus(c+1331,"ba", false,-1, 1,0);
    tracep->declBus(c+1345,"dqm", false,-1, 1,0);
    tracep->declBus(c+1349,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1736,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1737,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1738,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1499,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1075,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1076,"bl", false,-1, 2,0);
    tracep->declBus(c+1424,"command", false,-1, 3,0);
    tracep->declBus(c+1077,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1078,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1344,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1079,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1350,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1080,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1081+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1085,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1086,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1771,"state", false,-1, 2,0);
    tracep->declBit(c+1087,"write_brust", false,-1);
    tracep->declBit(c+1088,"read_burst", false,-1);
    tracep->declBus(c+1089,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1451,"clk", false,-1);
    tracep->declBit(c+1330,"cke", false,-1);
    tracep->declBit(c+899,"cs", false,-1);
    tracep->declBit(c+900,"ras", false,-1);
    tracep->declBit(c+901,"cas", false,-1);
    tracep->declBit(c+902,"we", false,-1);
    tracep->declBus(c+1335,"a", false,-1, 12,0);
    tracep->declBus(c+1331,"ba", false,-1, 1,0);
    tracep->declBus(c+1332,"dqm", false,-1, 3,0);
    tracep->declBus(c+1346,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1451,"clk", false,-1);
    tracep->declBit(c+1330,"cke", false,-1);
    tracep->declBit(c+899,"cs", false,-1);
    tracep->declBit(c+900,"ras", false,-1);
    tracep->declBit(c+901,"cas", false,-1);
    tracep->declBit(c+902,"we", false,-1);
    tracep->declBus(c+1335,"a", false,-1, 12,0);
    tracep->declBus(c+1331,"ba", false,-1, 1,0);
    tracep->declBus(c+1343,"dqm", false,-1, 1,0);
    tracep->declBus(c+1347,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1736,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1737,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1738,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1499,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1090,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1091,"bl", false,-1, 2,0);
    tracep->declBus(c+1425,"command", false,-1, 3,0);
    tracep->declBus(c+1092,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1093,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1344,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1094,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1351,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1095,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1096+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1100,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1101,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1772,"state", false,-1, 2,0);
    tracep->declBit(c+1102,"write_brust", false,-1);
    tracep->declBit(c+1103,"read_burst", false,-1);
    tracep->declBus(c+1104,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1451,"clk", false,-1);
    tracep->declBit(c+1330,"cke", false,-1);
    tracep->declBit(c+899,"cs", false,-1);
    tracep->declBit(c+900,"ras", false,-1);
    tracep->declBit(c+901,"cas", false,-1);
    tracep->declBit(c+902,"we", false,-1);
    tracep->declBus(c+1335,"a", false,-1, 12,0);
    tracep->declBus(c+1331,"ba", false,-1, 1,0);
    tracep->declBus(c+1345,"dqm", false,-1, 1,0);
    tracep->declBus(c+1349,"dq", false,-1, 15,0);
    tracep->declBus(c+1769,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1736,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1737,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1738,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1499,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1105,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1106,"bl", false,-1, 2,0);
    tracep->declBus(c+1425,"command", false,-1, 3,0);
    tracep->declBus(c+1107,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1108,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1344,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1109,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1352,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1110,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1111+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1115,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1116,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1773,"state", false,-1, 2,0);
    tracep->declBit(c+1117,"write_brust", false,-1);
    tracep->declBit(c+1118,"read_burst", false,-1);
    tracep->declBus(c+1119,"dout", false,-1, 15,0);
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
    bufp->fullIData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
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
    bufp->fullIData(oldp+109,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0xbU))
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0xbU))
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r))),32);
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
                                | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullBit(oldp+111,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                           >> 4U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r)),32);
    bufp->fullCData(oldp+114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data)
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r)))
                                : 0U)),4);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_pready));
    bufp->fullIData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_prdata),32);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_pslverr));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pprot),3);
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next_state),3);
    bufp->fullIData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__accum_counter),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_prdata),32);
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pslverr));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pprot),3);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__saved_pstrb),4);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__transaction_active));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+130,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+132,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+133,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+134,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+135,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+136,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+138,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+139,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+145,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+146,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+147,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+148,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+149,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+153,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+160,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+168,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+169,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+172,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+173,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+174,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+175,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+184,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+197,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_prdata
                                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                   << 1U))))))),39);
    bufp->fullQData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+250,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+251,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+252,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+253,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+257,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+259,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+299,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+313,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+314,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+315,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+390,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+418,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+478,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+482,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+498,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+502,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+506,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+510,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+544,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+586,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+587,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+590,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+591,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+592,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+593,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+594,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+595,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+596,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+597,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+598,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+599,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+600,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+601,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+602,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+603,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+604,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+605,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+606,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+607,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+608,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+609,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+610,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+611,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+612,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+613,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+614,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+615,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+616,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+617,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+618,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+619,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+620,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+632,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+633,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+634,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+635,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+646,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+647,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+648,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+649,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+650,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+651,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+652,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+653,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+656,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+657,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+660,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+661,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+665,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+669,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+704,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+705,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+717,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+718,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+719,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+720,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+721,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+722,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+723,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+731,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+733,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+734,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+737,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+741,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+742,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+744,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+762,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+763,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+764,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+765,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+766,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+767,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+768,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+771,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+772,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+773,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+792,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+799,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+818,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+819,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+820,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+821,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+822,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+841,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+842,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+843,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+844,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+845,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+847,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+866,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+883,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+894,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+895,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+898,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+899,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+900,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+901,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+902,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+903,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+904,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+905,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+906,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+914,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+931,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+934,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+959,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+960,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+1006,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+1021,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+1022,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+1024,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1027,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1051,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1052,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1053,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1054,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1055,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1056,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1057,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1058,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1059,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1060,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1061,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1075,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1076,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1090,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1091,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1105,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1106,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1125,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_psel));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_penable));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pwrite));
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pwdata),32);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pstrb),4);
    bufp->fullBit(oldp+1135,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1253,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1254,((vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1255,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1256,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_psel))));
    bufp->fullBit(oldp+1258,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_penable))));
    bufp->fullBit(oldp+1259,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_psel))));
    bufp->fullBit(oldp+1260,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_penable))));
    bufp->fullBit(oldp+1261,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_penable))));
    bufp->fullBit(oldp+1262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_psel))));
    bufp->fullBit(oldp+1263,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_penable))));
    bufp->fullBit(oldp+1264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1267,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1270,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1273,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1293,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1295,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1297,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1298,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1307,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1334,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullSData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1341,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1343,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1344,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),10);
    bufp->fullCData(oldp+1345,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1347,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1349,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullCData(oldp+1353,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1354,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1365,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1371,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1376,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1377,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1378,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr),32);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1382,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr)),30);
    bufp->fullIData(oldp+1383,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr)),29);
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1389,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1397,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr)),32);
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1400,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr)),24);
    bufp->fullIData(oldp+1401,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr)),24);
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1406,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1407,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1408,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1409,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr)),32);
    bufp->fullCData(oldp+1410,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr)),3);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1413,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+1426,(vlSelf->clock));
    bufp->fullBit(oldp+1427,(vlSelf->reset));
    bufp->fullSData(oldp+1428,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1429,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1430,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1431,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1432,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1433,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1434,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1435,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1436,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1437,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1438,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1439,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1440,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1441,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1442,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1443,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1444,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1445,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1446,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1447,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1448,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1451,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1452,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullBit(oldp+1453,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
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
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                                | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                                   | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)) 
                                                      | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6))))))))))));
    bufp->fullIData(oldp+1454,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1455,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1457,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1458,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1460,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch)
                                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready)))));
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1463,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1464,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
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
    bufp->fullBit(oldp+1465,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1466,((0xfU & vlSelf->__VdfgTmp_h7d6c6bd1__0)),4);
    bufp->fullBit(oldp+1467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1470,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1475,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1480,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1482,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1485,(0x226U),32);
    bufp->fullIData(oldp+1486,(0x64U),32);
    bufp->fullIData(oldp+1487,(0x100U),32);
    bufp->fullCData(oldp+1488,(1U),3);
    bufp->fullIData(oldp+1489,(0x580U),32);
    bufp->fullIData(oldp+1490,(8U),32);
    bufp->fullCData(oldp+1491,(0U),3);
    bufp->fullCData(oldp+1492,(2U),3);
    bufp->fullCData(oldp+1493,(3U),3);
    bufp->fullCData(oldp+1494,(4U),3);
    bufp->fullBit(oldp+1495,(0U));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1498,(1U));
    bufp->fullCData(oldp+1499,(0U),4);
    bufp->fullCData(oldp+1500,(0U),8);
    bufp->fullCData(oldp+1501,(0U),2);
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1503,(0U),32);
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1529,(0U),32);
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1533,(1U),2);
    bufp->fullCData(oldp+1534,(2U),2);
    bufp->fullIData(oldp+1535,(0x20U),32);
    bufp->fullIData(oldp+1536,(4U),32);
    bufp->fullIData(oldp+1537,(0x79737978U),32);
    bufp->fullIData(oldp+1538,(0x17e3c19U),32);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1720,(3U),2);
    bufp->fullIData(oldp+1721,(5U),32);
    bufp->fullBit(oldp+1722,(0U));
    bufp->fullBit(oldp+1723,(1U));
    bufp->fullCData(oldp+1724,(0x1bU),8);
    bufp->fullCData(oldp+1725,(0xebU),8);
    bufp->fullCData(oldp+1726,(0x38U),8);
    bufp->fullIData(oldp+1727,(0x18U),32);
    bufp->fullIData(oldp+1728,(9U),32);
    bufp->fullIData(oldp+1729,(2U),32);
    bufp->fullIData(oldp+1730,(4U),32);
    bufp->fullIData(oldp+1731,(0xdU),32);
    bufp->fullIData(oldp+1732,(0x2000U),32);
    bufp->fullIData(oldp+1733,(0x2710U),32);
    bufp->fullIData(oldp+1734,(0x30cU),32);
    bufp->fullCData(oldp+1735,(7U),4);
    bufp->fullCData(oldp+1736,(3U),4);
    bufp->fullCData(oldp+1737,(5U),4);
    bufp->fullCData(oldp+1738,(4U),4);
    bufp->fullCData(oldp+1739,(6U),4);
    bufp->fullCData(oldp+1740,(2U),4);
    bufp->fullCData(oldp+1741,(1U),4);
    bufp->fullSData(oldp+1742,(0x20U),13);
    bufp->fullCData(oldp+1743,(8U),4);
    bufp->fullCData(oldp+1744,(9U),4);
    bufp->fullIData(oldp+1745,(0xaU),32);
    bufp->fullIData(oldp+1746,(6U),32);
    bufp->fullIData(oldp+1747,(0x11U),32);
    bufp->fullIData(oldp+1748,(0x30000000U),32);
    bufp->fullIData(oldp+1749,(0x3fffffffU),32);
    bufp->fullCData(oldp+1750,(4U),5);
    bufp->fullCData(oldp+1751,(0U),5);
    bufp->fullCData(oldp+1752,(0x10U),5);
    bufp->fullCData(oldp+1753,(0x14U),5);
    bufp->fullCData(oldp+1754,(0x18U),5);
    bufp->fullIData(oldp+1755,(0x3000000U),32);
    bufp->fullIData(oldp+1756,(1U),32);
    bufp->fullCData(oldp+1757,(0xaU),4);
    bufp->fullIData(oldp+1758,(0xbU),32);
    bufp->fullIData(oldp+1759,(0x10U),32);
    bufp->fullCData(oldp+1760,(5U),3);
    bufp->fullIData(oldp+1761,(0x60U),32);
    bufp->fullIData(oldp+1762,(0x90U),32);
    bufp->fullIData(oldp+1763,(0x310U),32);
    bufp->fullIData(oldp+1764,(0x320U),32);
    bufp->fullIData(oldp+1765,(0x23U),32);
    bufp->fullIData(oldp+1766,(0x203U),32);
    bufp->fullIData(oldp+1767,(0x20dU),32);
    bufp->fullIData(oldp+1768,(3U),32);
    bufp->fullIData(oldp+1769,(0x400000U),32);
    bufp->fullCData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1771,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullCData(oldp+1772,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
}
