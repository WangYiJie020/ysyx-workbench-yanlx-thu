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
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1411,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1412,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1413,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1414,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1415,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1416,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1417,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1418,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1419,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1420,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1421,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1422,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1423,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1424,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1425,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1426,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1427,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1428,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1429,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1430,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1411,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1412,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1413,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1414,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1415,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1416,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1417,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1418,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1419,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1420,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1421,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1422,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1423,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1424,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1425,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1426,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1427,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1428,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1429,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1430,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+606,"spi_sck", false,-1);
    tracep->declBus(c+1311,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1312,"spi_mosi", false,-1);
    tracep->declBit(c+1431,"spi_miso", false,-1);
    tracep->declBit(c+1429,"uart_rx", false,-1);
    tracep->declBit(c+1430,"uart_tx", false,-1);
    tracep->declBit(c+1432,"psram_sck", false,-1);
    tracep->declBit(c+1397,"psram_ce_n", false,-1);
    tracep->declBus(c+1433,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1434,"sdram_clk", false,-1);
    tracep->declBit(c+1313,"sdram_cke", false,-1);
    tracep->declBit(c+607,"sdram_cs", false,-1);
    tracep->declBit(c+608,"sdram_ras", false,-1);
    tracep->declBit(c+609,"sdram_cas", false,-1);
    tracep->declBit(c+610,"sdram_we", false,-1);
    tracep->declBus(c+1435,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1314,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1315,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1329,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1411,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1412,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1413,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1414,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1415,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1416,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1417,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1418,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1419,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1420,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1421,"ps2_clk", false,-1);
    tracep->declBit(c+1422,"ps2_data", false,-1);
    tracep->declBus(c+1423,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1424,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1425,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1426,"vga_hsync", false,-1);
    tracep->declBit(c+1427,"vga_vsync", false,-1);
    tracep->declBit(c+1428,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBus(c+1473,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1474,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1475,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1362,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1105,"in_psel", false,-1);
    tracep->declBit(c+1106,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+109,"in_pready", false,-1);
    tracep->declBus(c+110,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+111,"in_pslverr", false,-1);
    tracep->declBus(c+1362,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1105,"out_psel", false,-1);
    tracep->declBit(c+1106,"out_penable", false,-1);
    tracep->declBus(c+1476,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"out_pwrite", false,-1);
    tracep->declBus(c+1108,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1436,"out_pready", false,-1);
    tracep->declBus(c+1437,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+873,"out_pslverr", false,-1);
    tracep->declBus(c+1477,"INC_VALUE", false,-1, 31,0);
    tracep->declBus(c+1478,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1479,"ST_IDLE", false,-1, 2,0);
    tracep->declBus(c+1476,"ST_ENABLE", false,-1, 2,0);
    tracep->declBus(c+1480,"ST_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1481,"ST_COUNTING", false,-1, 2,0);
    tracep->declBus(c+1482,"ST_DELAY", false,-1, 2,0);
    tracep->declBus(c+112,"reg_prdata", false,-1, 31,0);
    tracep->declBit(c+1483,"reg_in_pslverr", false,-1);
    tracep->declBus(c+1484,"reg_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1485,"reg_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1486,"reg_in_pstrb", false,-1, 3,0);
    tracep->declBus(c+1487,"reg_out_paddr", false,-1, 31,0);
    tracep->declBit(c+1488,"reg_out_psel", false,-1);
    tracep->declBit(c+1489,"reg_out_penable", false,-1);
    tracep->declBus(c+1490,"reg_out_pprot", false,-1, 2,0);
    tracep->declBit(c+1491,"reg_out_pwrite", false,-1);
    tracep->declBus(c+1492,"reg_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1493,"reg_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1494,"flag_request", false,-1);
    tracep->declBit(c+1495,"flag_wait", false,-1);
    tracep->declBus(c+113,"request_counter", false,-1, 9,0);
    tracep->declBus(c+114,"wait_counter", false,-1, 31,0);
    tracep->declBus(c+1496,"state", false,-1, 2,0);
    tracep->declBus(c+1438,"next_state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1105,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1106,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1362,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1476,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1436,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+873,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1437,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1240,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1241,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1362,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1476,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+611,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1497,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+612,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1363,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1364,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1476,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+613,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1498,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1499,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1242,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1243,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1366,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1476,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+115,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1497,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+116,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1367,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1368,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1366,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1476,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+614,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1497,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+615,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1369,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1244,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1362,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1476,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1439,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1497,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+117,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1370,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1371,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1366,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1476,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1372,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1497,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1440,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1245,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1246,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1107,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1476,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+616,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+617,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+618,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1373,"sel_0", false,-1);
    tracep->declBit(c+1374,"sel_1", false,-1);
    tracep->declBit(c+1375,"sel_2", false,-1);
    tracep->declBit(c+1376,"sel_3", false,-1);
    tracep->declBit(c+1377,"sel_4", false,-1);
    tracep->declBit(c+1378,"sel_5", false,-1);
    tracep->declBit(c+1379,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1110,"auto_in_awready", false,-1);
    tracep->declBit(c+118,"auto_in_awvalid", false,-1);
    tracep->declBus(c+119,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+121,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+122,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1110,"auto_in_wready", false,-1);
    tracep->declBit(c+123,"auto_in_wvalid", false,-1);
    tracep->declBus(c+124,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+125,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+126,"auto_in_bready", false,-1);
    tracep->declBit(c+1111,"auto_in_bvalid", false,-1);
    tracep->declBus(c+127,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1112,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1113,"auto_in_arready", false,-1);
    tracep->declBit(c+128,"auto_in_arvalid", false,-1);
    tracep->declBus(c+129,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+131,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+132,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+133,"auto_in_rready", false,-1);
    tracep->declBit(c+1114,"auto_in_rvalid", false,-1);
    tracep->declBus(c+134,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1441,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1112,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1105,"auto_out_psel", false,-1);
    tracep->declBit(c+1106,"auto_out_penable", false,-1);
    tracep->declBit(c+1107,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1362,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+109,"auto_out_pready", false,-1);
    tracep->declBit(c+111,"auto_out_pslverr", false,-1);
    tracep->declBus(c+110,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1106,"nodeOut_penable", false,-1);
    tracep->declBus(c+1115,"state", false,-1, 1,0);
    tracep->declBit(c+1113,"accept_read", false,-1);
    tracep->declBit(c+1110,"accept_write", false,-1);
    tracep->declBit(c+135,"is_write_r", false,-1);
    tracep->declBit(c+1107,"is_write", false,-1);
    tracep->declBus(c+134,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+127,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+136,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+137,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+138,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+139,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+140,"resp", false,-1, 1,0);
    tracep->declBus(c+141,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1112,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1114,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+142,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1111,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+143,"auto_in_awready", false,-1);
    tracep->declBit(c+1247,"auto_in_awvalid", false,-1);
    tracep->declBus(c+144,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1248,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+145,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+146,"auto_in_wready", false,-1);
    tracep->declBit(c+1250,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1253,"auto_in_wlast", false,-1);
    tracep->declBit(c+561,"auto_in_bready", false,-1);
    tracep->declBit(c+147,"auto_in_bvalid", false,-1);
    tracep->declBus(c+148,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+149,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+150,"auto_in_arready", false,-1);
    tracep->declBit(c+22,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+151,"auto_in_rvalid", false,-1);
    tracep->declBus(c+152,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+154,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+155,"auto_in_rlast", false,-1);
    tracep->declBit(c+1110,"auto_out_awready", false,-1);
    tracep->declBit(c+118,"auto_out_awvalid", false,-1);
    tracep->declBus(c+119,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+121,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+122,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1110,"auto_out_wready", false,-1);
    tracep->declBit(c+123,"auto_out_wvalid", false,-1);
    tracep->declBus(c+124,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+125,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+126,"auto_out_bready", false,-1);
    tracep->declBit(c+1111,"auto_out_bvalid", false,-1);
    tracep->declBus(c+127,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1112,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1113,"auto_out_arready", false,-1);
    tracep->declBit(c+128,"auto_out_arvalid", false,-1);
    tracep->declBus(c+129,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+131,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+132,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+133,"auto_out_rready", false,-1);
    tracep->declBit(c+1114,"auto_out_rvalid", false,-1);
    tracep->declBus(c+134,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1441,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1112,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+126,"io_enq_ready", false,-1);
    tracep->declBit(c+1111,"io_enq_valid", false,-1);
    tracep->declBus(c+127,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1112,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+561,"io_deq_ready", false,-1);
    tracep->declBit(c+147,"io_deq_valid", false,-1);
    tracep->declBus(c+148,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+149,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+156,"wrap", false,-1);
    tracep->declBit(c+157,"wrap_1", false,-1);
    tracep->declBit(c+158,"maybe_full", false,-1);
    tracep->declBit(c+159,"ptr_match", false,-1);
    tracep->declBit(c+160,"empty", false,-1);
    tracep->declBit(c+161,"full", false,-1);
    tracep->declBit(c+1116,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+157,"R0_addr", false,-1);
    tracep->declBit(c+1500,"R0_en", false,-1);
    tracep->declBit(c+1409,"R0_clk", false,-1);
    tracep->declBus(c+162,"R0_data", false,-1, 5,0);
    tracep->declBit(c+156,"W0_addr", false,-1);
    tracep->declBit(c+1116,"W0_en", false,-1);
    tracep->declBit(c+1409,"W0_clk", false,-1);
    tracep->declBus(c+1442,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+163+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+165,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+133,"io_enq_ready", false,-1);
    tracep->declBit(c+1114,"io_enq_valid", false,-1);
    tracep->declBus(c+134,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1441,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1112,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+151,"io_deq_valid", false,-1);
    tracep->declBus(c+152,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+153,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+154,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+155,"io_deq_bits_last", false,-1);
    tracep->declBit(c+166,"wrap", false,-1);
    tracep->declBit(c+167,"wrap_1", false,-1);
    tracep->declBit(c+168,"maybe_full", false,-1);
    tracep->declBit(c+169,"ptr_match", false,-1);
    tracep->declBit(c+170,"empty", false,-1);
    tracep->declBit(c+171,"full", false,-1);
    tracep->declBit(c+1117,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+167,"R0_addr", false,-1);
    tracep->declBit(c+1500,"R0_en", false,-1);
    tracep->declBit(c+1409,"R0_clk", false,-1);
    tracep->declQuad(c+172,"R0_data", false,-1, 38,0);
    tracep->declBit(c+166,"W0_addr", false,-1);
    tracep->declBit(c+1117,"W0_en", false,-1);
    tracep->declBit(c+1409,"W0_clk", false,-1);
    tracep->declQuad(c+1443,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+174+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+178,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+150,"io_enq_ready", false,-1);
    tracep->declBit(c+22,"io_enq_valid", false,-1);
    tracep->declBus(c+23,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+24,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+25,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+26,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1113,"io_deq_ready", false,-1);
    tracep->declBit(c+128,"io_deq_valid", false,-1);
    tracep->declBus(c+129,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+130,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+131,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+132,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+179,"wrap", false,-1);
    tracep->declBit(c+180,"wrap_1", false,-1);
    tracep->declBit(c+181,"maybe_full", false,-1);
    tracep->declBit(c+182,"ptr_match", false,-1);
    tracep->declBit(c+183,"empty", false,-1);
    tracep->declBit(c+184,"full", false,-1);
    tracep->declBit(c+27,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+180,"R0_addr", false,-1);
    tracep->declBit(c+1500,"R0_en", false,-1);
    tracep->declBit(c+1409,"R0_clk", false,-1);
    tracep->declQuad(c+185,"R0_data", false,-1, 46,0);
    tracep->declBit(c+179,"W0_addr", false,-1);
    tracep->declBit(c+27,"W0_en", false,-1);
    tracep->declBit(c+1409,"W0_clk", false,-1);
    tracep->declQuad(c+28,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+187+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+191,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+1247,"io_enq_valid", false,-1);
    tracep->declBus(c+144,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1248,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1249,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+145,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1110,"io_deq_ready", false,-1);
    tracep->declBit(c+118,"io_deq_valid", false,-1);
    tracep->declBus(c+119,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+120,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+121,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+122,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+192,"wrap", false,-1);
    tracep->declBit(c+193,"wrap_1", false,-1);
    tracep->declBit(c+194,"maybe_full", false,-1);
    tracep->declBit(c+195,"ptr_match", false,-1);
    tracep->declBit(c+196,"empty", false,-1);
    tracep->declBit(c+197,"full", false,-1);
    tracep->declBit(c+1254,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+193,"R0_addr", false,-1);
    tracep->declBit(c+1500,"R0_en", false,-1);
    tracep->declBit(c+1409,"R0_clk", false,-1);
    tracep->declQuad(c+198,"R0_data", false,-1, 46,0);
    tracep->declBit(c+192,"W0_addr", false,-1);
    tracep->declBit(c+1254,"W0_en", false,-1);
    tracep->declBit(c+1409,"W0_clk", false,-1);
    tracep->declQuad(c+562,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+200+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+204,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+146,"io_enq_ready", false,-1);
    tracep->declBit(c+1250,"io_enq_valid", false,-1);
    tracep->declBus(c+1251,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1252,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1253,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1110,"io_deq_ready", false,-1);
    tracep->declBit(c+123,"io_deq_valid", false,-1);
    tracep->declBus(c+124,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+125,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+205,"wrap", false,-1);
    tracep->declBit(c+206,"wrap_1", false,-1);
    tracep->declBit(c+207,"maybe_full", false,-1);
    tracep->declBit(c+208,"ptr_match", false,-1);
    tracep->declBit(c+209,"empty", false,-1);
    tracep->declBit(c+210,"full", false,-1);
    tracep->declBit(c+1255,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+206,"R0_addr", false,-1);
    tracep->declBit(c+1500,"R0_en", false,-1);
    tracep->declBit(c+1409,"R0_clk", false,-1);
    tracep->declQuad(c+211,"R0_data", false,-1, 35,0);
    tracep->declBit(c+205,"W0_addr", false,-1);
    tracep->declBit(c+1255,"W0_en", false,-1);
    tracep->declBit(c+1409,"W0_clk", false,-1);
    tracep->declQuad(c+1256,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+213+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+217,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+218,"auto_in_awready", false,-1);
    tracep->declBit(c+882,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1501,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+883,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1502,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+884,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_in_wready", false,-1);
    tracep->declBit(c+885,"auto_in_wvalid", false,-1);
    tracep->declBus(c+886,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+887,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+888,"auto_in_wlast", false,-1);
    tracep->declBit(c+889,"auto_in_bready", false,-1);
    tracep->declBit(c+220,"auto_in_bvalid", false,-1);
    tracep->declBus(c+221,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1118,"auto_in_arready", false,-1);
    tracep->declBit(c+30,"auto_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_in_rready", false,-1);
    tracep->declBit(c+223,"auto_in_rvalid", false,-1);
    tracep->declBus(c+224,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_in_rlast", false,-1);
    tracep->declBit(c+1258,"auto_out_awready", false,-1);
    tracep->declBit(c+1259,"auto_out_awvalid", false,-1);
    tracep->declBus(c+144,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1248,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+145,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+228,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1260,"auto_out_wready", false,-1);
    tracep->declBit(c+1261,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1253,"auto_out_wlast", false,-1);
    tracep->declBit(c+1262,"auto_out_bready", false,-1);
    tracep->declBit(c+229,"auto_out_bvalid", false,-1);
    tracep->declBus(c+221,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+37,"auto_out_arready", false,-1);
    tracep->declBit(c+38,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+36,"auto_out_rready", false,-1);
    tracep->declBit(c+223,"auto_out_rvalid", false,-1);
    tracep->declBus(c+224,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+232,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+233,"auto_out_rlast", false,-1);
    tracep->declBit(c+1261,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+234,"w_idle", false,-1);
    tracep->declBit(c+1263,"in_awready", false,-1);
    tracep->declBit(c+235,"busy", false,-1);
    tracep->declBus(c+236,"r_addr", false,-1, 31,0);
    tracep->declBus(c+237,"r_len", false,-1, 7,0);
    tracep->declBus(c+40,"len", false,-1, 7,0);
    tracep->declBus(c+41,"addr", false,-1, 31,0);
    tracep->declBit(c+238,"busy_1", false,-1);
    tracep->declBus(c+239,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+240,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+241,"len_1", false,-1, 7,0);
    tracep->declBus(c+1264,"addr_1", false,-1, 31,0);
    tracep->declBit(c+242,"wbeats_latched", false,-1);
    tracep->declBit(c+1259,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1265,"wbeats_valid", false,-1);
    tracep->declBus(c+243,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1266,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1253,"w_last", false,-1);
    tracep->declBit(c+1262,"nodeOut_bready", false,-1);
    tracep->declBus(c+244,"error_0", false,-1, 1,0);
    tracep->declBus(c+245,"error_1", false,-1, 1,0);
    tracep->declBus(c+246,"error_2", false,-1, 1,0);
    tracep->declBus(c+247,"error_3", false,-1, 1,0);
    tracep->declBus(c+248,"error_4", false,-1, 1,0);
    tracep->declBus(c+249,"error_5", false,-1, 1,0);
    tracep->declBus(c+250,"error_6", false,-1, 1,0);
    tracep->declBus(c+251,"error_7", false,-1, 1,0);
    tracep->declBus(c+252,"error_8", false,-1, 1,0);
    tracep->declBus(c+253,"error_9", false,-1, 1,0);
    tracep->declBus(c+254,"error_10", false,-1, 1,0);
    tracep->declBus(c+255,"error_11", false,-1, 1,0);
    tracep->declBus(c+256,"error_12", false,-1, 1,0);
    tracep->declBus(c+257,"error_13", false,-1, 1,0);
    tracep->declBus(c+258,"error_14", false,-1, 1,0);
    tracep->declBus(c+259,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1118,"io_enq_ready", false,-1);
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
    tracep->declQuad(c+260,"ram", false,-1, 48,0);
    tracep->declBit(c+1119,"full", false,-1);
    tracep->declBit(c+38,"io_deq_valid_0", false,-1);
    tracep->declBit(c+45,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+218,"io_enq_ready", false,-1);
    tracep->declBit(c+882,"io_enq_valid", false,-1);
    tracep->declBus(c+1501,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+883,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1502,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+884,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1503,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1267,"io_deq_ready", false,-1);
    tracep->declBit(c+1268,"io_deq_valid", false,-1);
    tracep->declBus(c+144,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1269,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+262,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1249,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+145,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+263,"ram", false,-1, 48,0);
    tracep->declBit(c+265,"full", false,-1);
    tracep->declBit(c+1268,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1270,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+885,"io_enq_valid", false,-1);
    tracep->declBus(c+886,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+887,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+888,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1271,"io_deq_ready", false,-1);
    tracep->declBit(c+1272,"io_deq_valid", false,-1);
    tracep->declBus(c+1251,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1252,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1445,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+266,"ram", false,-1, 36,0);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+1272,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1273,"do_enq", false,-1);
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
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1274,"auto_in_awready", false,-1);
    tracep->declBit(c+1275,"auto_in_awvalid", false,-1);
    tracep->declBus(c+144,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1276,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1277,"auto_in_wready", false,-1);
    tracep->declBit(c+1278,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1279,"auto_in_bready", false,-1);
    tracep->declBit(c+269,"auto_in_bvalid", false,-1);
    tracep->declBus(c+270,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+49,"auto_in_rready", false,-1);
    tracep->declBit(c+272,"auto_in_rvalid", false,-1);
    tracep->declBus(c+273,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+274,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+275,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"nodeIn_arready", false,-1);
    tracep->declBit(c+1274,"nodeIn_awready", false,-1);
    tracep->declBit(c+1280,"w_sel0", false,-1);
    tracep->declBit(c+269,"w_full", false,-1);
    tracep->declBus(c+270,"w_id", false,-1, 3,0);
    tracep->declBit(c+276,"r_sel1", false,-1);
    tracep->declBit(c+277,"w_sel1", false,-1);
    tracep->declBit(c+272,"r_full", false,-1);
    tracep->declBus(c+273,"r_id", false,-1, 3,0);
    tracep->declBit(c+50,"ren", false,-1);
    tracep->declBit(c+278,"rdata_REG", false,-1);
    tracep->declBus(c+279,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+280,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+281,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+282,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+51,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+50,"R0_en", false,-1);
    tracep->declBit(c+1409,"R0_clk", false,-1);
    tracep->declBus(c+283,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1281,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1282,"W0_en", false,-1);
    tracep->declBit(c+1409,"W0_clk", false,-1);
    tracep->declBus(c+1251,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1252,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+218,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+882,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1501,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+883,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1502,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+884,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+885,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+886,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+887,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+888,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+889,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+220,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+221,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1118,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+223,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+218,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+882,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1501,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+883,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1502,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+884,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+885,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+886,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+887,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+888,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+889,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+220,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+221,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1118,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+30,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+223,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1283,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1284,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+144,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1248,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+145,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1260,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1261,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1253,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1262,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+229,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+221,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+53,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+223,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1274,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1275,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+144,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1276,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1277,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1278,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1279,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+269,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+270,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+47,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+49,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+272,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+273,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+274,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+275,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1285,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+284,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+285,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+286,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+287,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+143,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1247,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+144,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1248,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+145,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+146,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1250,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1253,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+561,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+147,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+148,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+149,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+150,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+151,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+152,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+153,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+154,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+155,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+229,"in_0_bvalid", false,-1);
    tracep->declBit(c+223,"in_0_rvalid", false,-1);
    tracep->declBit(c+1287,"in_0_wready", false,-1);
    tracep->declBit(c+1288,"in_0_awready", false,-1);
    tracep->declBit(c+52,"in_0_arready", false,-1);
    tracep->declBit(c+1283,"anonIn_awready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+58,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1289,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1290,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1291,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+59,"arSel", false,-1, 15,0);
    tracep->declBus(c+288,"awSel", false,-1, 15,0);
    tracep->declBus(c+289,"rSel", false,-1, 15,0);
    tracep->declBus(c+290,"bSel", false,-1, 15,0);
    tracep->declBit(c+291,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+292,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+293,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+294,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+295,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+296,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+297,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+298,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+299,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+300,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+301,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+302,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+303,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+304,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+305,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+306,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+307,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+308,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+309,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+310,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+311,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+312,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+313,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+314,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+315,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+316,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+317,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+318,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+319,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+320,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+321,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+322,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+323,"latched", false,-1);
    tracep->declBit(c+1292,"in_0_awvalid", false,-1);
    tracep->declBit(c+1293,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1294,"in_0_wvalid", false,-1);
    tracep->declBit(c+324,"idle_3", false,-1);
    tracep->declBit(c+325,"anyValid", false,-1);
    tracep->declBus(c+326,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+327,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+328,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+329,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+330,"prefixOR_1", false,-1);
    tracep->declBit(c+331,"winner_3_1", false,-1);
    tracep->declBit(c+332,"winner_3_2", false,-1);
    tracep->declBit(c+333,"state_3_0", false,-1);
    tracep->declBit(c+334,"state_3_1", false,-1);
    tracep->declBit(c+335,"state_3_2", false,-1);
    tracep->declBit(c+336,"muxState_3_0", false,-1);
    tracep->declBit(c+337,"muxState_3_1", false,-1);
    tracep->declBit(c+338,"muxState_3_2", false,-1);
    tracep->declBit(c+339,"idle_4", false,-1);
    tracep->declBit(c+340,"anyValid_1", false,-1);
    tracep->declBus(c+341,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+342,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+343,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+344,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+345,"winner_4_0", false,-1);
    tracep->declBit(c+346,"winner_4_2", false,-1);
    tracep->declBit(c+347,"state_4_0", false,-1);
    tracep->declBit(c+348,"state_4_2", false,-1);
    tracep->declBit(c+349,"muxState_4_0", false,-1);
    tracep->declBit(c+350,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+1293,"io_enq_valid", false,-1);
    tracep->declBus(c+1295,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1296,"io_deq_ready", false,-1);
    tracep->declBit(c+1297,"io_deq_valid", false,-1);
    tracep->declBus(c+1298,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+352,"wrap", false,-1);
    tracep->declBit(c+353,"wrap_1", false,-1);
    tracep->declBit(c+354,"maybe_full", false,-1);
    tracep->declBit(c+355,"ptr_match", false,-1);
    tracep->declBit(c+356,"empty", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+1297,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1299,"do_deq", false,-1);
    tracep->declBit(c+1300,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+353,"R0_addr", false,-1);
    tracep->declBit(c+1500,"R0_en", false,-1);
    tracep->declBit(c+1409,"R0_clk", false,-1);
    tracep->declBus(c+358,"R0_data", false,-1, 2,0);
    tracep->declBit(c+352,"W0_addr", false,-1);
    tracep->declBit(c+1300,"W0_en", false,-1);
    tracep->declBit(c+1409,"W0_clk", false,-1);
    tracep->declBus(c+1295,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+359+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1258,"auto_in_awready", false,-1);
    tracep->declBit(c+1259,"auto_in_awvalid", false,-1);
    tracep->declBus(c+144,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1248,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+145,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+228,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1260,"auto_in_wready", false,-1);
    tracep->declBit(c+1261,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1253,"auto_in_wlast", false,-1);
    tracep->declBit(c+1262,"auto_in_bready", false,-1);
    tracep->declBit(c+229,"auto_in_bvalid", false,-1);
    tracep->declBus(c+221,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+231,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+37,"auto_in_arready", false,-1);
    tracep->declBit(c+38,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+36,"auto_in_rready", false,-1);
    tracep->declBit(c+223,"auto_in_rvalid", false,-1);
    tracep->declBus(c+224,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+232,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+233,"auto_in_rlast", false,-1);
    tracep->declBit(c+1283,"auto_out_awready", false,-1);
    tracep->declBit(c+1284,"auto_out_awvalid", false,-1);
    tracep->declBus(c+144,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1248,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+145,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1260,"auto_out_wready", false,-1);
    tracep->declBit(c+1261,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1251,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1253,"auto_out_wlast", false,-1);
    tracep->declBit(c+1262,"auto_out_bready", false,-1);
    tracep->declBit(c+229,"auto_out_bvalid", false,-1);
    tracep->declBus(c+221,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+230,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_out_arready", false,-1);
    tracep->declBit(c+53,"auto_out_arvalid", false,-1);
    tracep->declBus(c+23,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+24,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+26,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_out_rready", false,-1);
    tracep->declBit(c+223,"auto_out_rvalid", false,-1);
    tracep->declBus(c+224,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+361,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+362,"io_deq_valid", false,-1);
    tracep->declBit(c+363,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+362,"full", false,-1);
    tracep->declBit(c+363,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+364,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+365,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+7,"io_deq_ready", false,-1);
    tracep->declBit(c+366,"io_deq_valid", false,-1);
    tracep->declBit(c+367,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+366,"full", false,-1);
    tracep->declBit(c+367,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+368,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+8,"io_deq_ready", false,-1);
    tracep->declBit(c+370,"io_deq_valid", false,-1);
    tracep->declBit(c+371,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+370,"full", false,-1);
    tracep->declBit(c+371,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+372,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+373,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+374,"io_deq_valid", false,-1);
    tracep->declBit(c+375,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+374,"full", false,-1);
    tracep->declBit(c+375,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+376,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+377,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+378,"io_deq_valid", false,-1);
    tracep->declBit(c+379,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"full", false,-1);
    tracep->declBit(c+379,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+380,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+381,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+382,"io_deq_valid", false,-1);
    tracep->declBit(c+383,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"full", false,-1);
    tracep->declBit(c+383,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+384,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
    tracep->declBit(c+66,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+386,"io_deq_valid", false,-1);
    tracep->declBit(c+387,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"full", false,-1);
    tracep->declBit(c+387,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+388,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+389,"io_enq_ready", false,-1);
    tracep->declBit(c+67,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBit(c+391,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"full", false,-1);
    tracep->declBit(c+391,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+392,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+393,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+565,"io_deq_ready", false,-1);
    tracep->declBit(c+394,"io_deq_valid", false,-1);
    tracep->declBit(c+395,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+395,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+396,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+397,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+567,"io_deq_ready", false,-1);
    tracep->declBit(c+398,"io_deq_valid", false,-1);
    tracep->declBit(c+399,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+398,"full", false,-1);
    tracep->declBit(c+399,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+400,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+401,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+569,"io_deq_ready", false,-1);
    tracep->declBit(c+402,"io_deq_valid", false,-1);
    tracep->declBit(c+403,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+402,"full", false,-1);
    tracep->declBit(c+403,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+404,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+405,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+571,"io_deq_ready", false,-1);
    tracep->declBit(c+406,"io_deq_valid", false,-1);
    tracep->declBit(c+407,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+406,"full", false,-1);
    tracep->declBit(c+407,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+408,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+409,"io_enq_ready", false,-1);
    tracep->declBit(c+68,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+410,"io_deq_valid", false,-1);
    tracep->declBit(c+411,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+410,"full", false,-1);
    tracep->declBit(c+411,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+412,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+413,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+573,"io_deq_ready", false,-1);
    tracep->declBit(c+414,"io_deq_valid", false,-1);
    tracep->declBit(c+415,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+414,"full", false,-1);
    tracep->declBit(c+415,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+416,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+417,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+575,"io_deq_ready", false,-1);
    tracep->declBit(c+418,"io_deq_valid", false,-1);
    tracep->declBit(c+419,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+418,"full", false,-1);
    tracep->declBit(c+419,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+420,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+421,"io_enq_ready", false,-1);
    tracep->declBit(c+576,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+577,"io_deq_ready", false,-1);
    tracep->declBit(c+422,"io_deq_valid", false,-1);
    tracep->declBit(c+423,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+422,"full", false,-1);
    tracep->declBit(c+423,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+424,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+425,"io_enq_ready", false,-1);
    tracep->declBit(c+578,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+579,"io_deq_ready", false,-1);
    tracep->declBit(c+426,"io_deq_valid", false,-1);
    tracep->declBit(c+427,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+426,"full", false,-1);
    tracep->declBit(c+427,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+428,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+429,"io_enq_ready", false,-1);
    tracep->declBit(c+580,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+581,"io_deq_ready", false,-1);
    tracep->declBit(c+430,"io_deq_valid", false,-1);
    tracep->declBit(c+431,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+430,"full", false,-1);
    tracep->declBit(c+431,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+432,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+433,"io_enq_ready", false,-1);
    tracep->declBit(c+582,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+583,"io_deq_ready", false,-1);
    tracep->declBit(c+434,"io_deq_valid", false,-1);
    tracep->declBit(c+435,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+434,"full", false,-1);
    tracep->declBit(c+435,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+436,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+437,"io_enq_ready", false,-1);
    tracep->declBit(c+584,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+585,"io_deq_ready", false,-1);
    tracep->declBit(c+438,"io_deq_valid", false,-1);
    tracep->declBit(c+439,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+438,"full", false,-1);
    tracep->declBit(c+439,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+440,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+441,"io_enq_ready", false,-1);
    tracep->declBit(c+586,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+587,"io_deq_ready", false,-1);
    tracep->declBit(c+442,"io_deq_valid", false,-1);
    tracep->declBit(c+443,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+442,"full", false,-1);
    tracep->declBit(c+443,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+444,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+445,"io_enq_ready", false,-1);
    tracep->declBit(c+588,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+589,"io_deq_ready", false,-1);
    tracep->declBit(c+446,"io_deq_valid", false,-1);
    tracep->declBit(c+447,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+446,"full", false,-1);
    tracep->declBit(c+447,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+448,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+449,"io_enq_ready", false,-1);
    tracep->declBit(c+590,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+591,"io_deq_ready", false,-1);
    tracep->declBit(c+450,"io_deq_valid", false,-1);
    tracep->declBit(c+451,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+450,"full", false,-1);
    tracep->declBit(c+451,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+452,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+453,"io_enq_ready", false,-1);
    tracep->declBit(c+69,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+454,"io_deq_valid", false,-1);
    tracep->declBit(c+455,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+454,"full", false,-1);
    tracep->declBit(c+455,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+456,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+457,"io_enq_ready", false,-1);
    tracep->declBit(c+592,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+593,"io_deq_ready", false,-1);
    tracep->declBit(c+458,"io_deq_valid", false,-1);
    tracep->declBit(c+459,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+458,"full", false,-1);
    tracep->declBit(c+459,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+460,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+461,"io_enq_ready", false,-1);
    tracep->declBit(c+594,"io_enq_valid", false,-1);
    tracep->declBit(c+228,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+595,"io_deq_ready", false,-1);
    tracep->declBit(c+462,"io_deq_valid", false,-1);
    tracep->declBit(c+463,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+462,"full", false,-1);
    tracep->declBit(c+463,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+464,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+465,"io_enq_ready", false,-1);
    tracep->declBit(c+70,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+466,"io_deq_valid", false,-1);
    tracep->declBit(c+467,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+466,"full", false,-1);
    tracep->declBit(c+467,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+468,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+469,"io_enq_ready", false,-1);
    tracep->declBit(c+71,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+470,"io_deq_valid", false,-1);
    tracep->declBit(c+471,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+470,"full", false,-1);
    tracep->declBit(c+471,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+472,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+473,"io_enq_ready", false,-1);
    tracep->declBit(c+72,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+474,"io_deq_valid", false,-1);
    tracep->declBit(c+475,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+474,"full", false,-1);
    tracep->declBit(c+475,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+476,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+477,"io_enq_ready", false,-1);
    tracep->declBit(c+73,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+478,"io_deq_valid", false,-1);
    tracep->declBit(c+479,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+478,"full", false,-1);
    tracep->declBit(c+479,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+480,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+481,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+482,"io_deq_valid", false,-1);
    tracep->declBit(c+483,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+482,"full", false,-1);
    tracep->declBit(c+483,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+484,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+39,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+486,"io_deq_valid", false,-1);
    tracep->declBit(c+487,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+486,"full", false,-1);
    tracep->declBit(c+487,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+488,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1446,"reset", false,-1);
    tracep->declBit(c+218,"auto_master_out_awready", false,-1);
    tracep->declBit(c+882,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1501,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+883,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1502,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+884,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_master_out_wready", false,-1);
    tracep->declBit(c+885,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+886,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+887,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+888,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+889,"auto_master_out_bready", false,-1);
    tracep->declBit(c+220,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+221,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1118,"auto_master_out_arready", false,-1);
    tracep->declBit(c+30,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+31,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_master_out_rready", false,-1);
    tracep->declBit(c+223,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+224,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+225,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+226,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1446,"reset", false,-1);
    tracep->declBit(c+1497,"io_interrupt", false,-1);
    tracep->declBit(c+218,"io_master_awready", false,-1);
    tracep->declBit(c+882,"io_master_awvalid", false,-1);
    tracep->declBus(c+883,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1501,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1502,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+884,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"io_master_wready", false,-1);
    tracep->declBit(c+885,"io_master_wvalid", false,-1);
    tracep->declBus(c+886,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+887,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+888,"io_master_wlast", false,-1);
    tracep->declBit(c+889,"io_master_bready", false,-1);
    tracep->declBit(c+220,"io_master_bvalid", false,-1);
    tracep->declBus(c+222,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+221,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1118,"io_master_arready", false,-1);
    tracep->declBit(c+30,"io_master_arvalid", false,-1);
    tracep->declBus(c+32,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+31,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+33,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+34,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+35,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+36,"io_master_rready", false,-1);
    tracep->declBit(c+223,"io_master_rvalid", false,-1);
    tracep->declBus(c+226,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+225,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+227,"io_master_rlast", false,-1);
    tracep->declBus(c+224,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1504,"io_slave_awready", false,-1);
    tracep->declBit(c+1497,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1505,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1501,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1502,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1479,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1506,"io_slave_wready", false,-1);
    tracep->declBit(c+1497,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1505,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1501,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1497,"io_slave_wlast", false,-1);
    tracep->declBit(c+1497,"io_slave_bready", false,-1);
    tracep->declBit(c+1507,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1508,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1509,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1510,"io_slave_arready", false,-1);
    tracep->declBit(c+1497,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1505,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1501,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1502,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1479,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1503,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1497,"io_slave_rready", false,-1);
    tracep->declBit(c+1511,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1512,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1513,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1514,"io_slave_rlast", false,-1);
    tracep->declBus(c+1515,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+890,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+891,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+892,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+893,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+894,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+890,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+891,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+895,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+896,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+897,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1501,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1502,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1480,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1503,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+898,"ifu_arvalid", false,-1);
    tracep->declBit(c+899,"ifu_arready", false,-1);
    tracep->declBus(c+76,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+77,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+78,"ifu_rlast", false,-1);
    tracep->declBus(c+79,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+80,"ifu_rvalid", false,-1);
    tracep->declBit(c+900,"ifu_rready", false,-1);
    tracep->declBit(c+1516,"useless1", false,-1);
    tracep->declBit(c+1517,"useless2", false,-1);
    tracep->declBit(c+1518,"useless3", false,-1);
    tracep->declBit(c+1519,"useless4", false,-1);
    tracep->declBus(c+901,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1501,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1502,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+902,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1503,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+903,"lsu_arvalid", false,-1);
    tracep->declBit(c+904,"lsu_arready", false,-1);
    tracep->declBus(c+81,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+82,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+83,"lsu_rlast", false,-1);
    tracep->declBus(c+84,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+85,"lsu_rvalid", false,-1);
    tracep->declBit(c+905,"lsu_rready", false,-1);
    tracep->declBus(c+901,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1501,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1502,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+906,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+907,"lsu_awvalid", false,-1);
    tracep->declBit(c+1301,"lsu_awready", false,-1);
    tracep->declBus(c+908,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+909,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+910,"lsu_wlast", false,-1);
    tracep->declBit(c+911,"lsu_wvalid", false,-1);
    tracep->declBit(c+1302,"lsu_wready", false,-1);
    tracep->declBus(c+1303,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1304,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1305,"lsu_bvalid", false,-1);
    tracep->declBit(c+912,"lsu_bready", false,-1);
    tracep->declBus(c+913,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1501,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1502,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+914,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1503,"axi_arburst", false,-1, 1,0);
    tracep->declBit(c+915,"axi_arvalid", false,-1);
    tracep->declBit(c+1448,"axi_arready", false,-1);
    tracep->declBus(c+86,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+87,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rlast", false,-1);
    tracep->declBus(c+89,"axi_rid", false,-1, 3,0);
    tracep->declBit(c+90,"axi_rvalid", false,-1);
    tracep->declBit(c+916,"axi_rready", false,-1);
    tracep->declBus(c+883,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1501,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1502,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+884,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1503,"axi_awburst", false,-1, 1,0);
    tracep->declBit(c+882,"axi_awvalid", false,-1);
    tracep->declBit(c+218,"axi_awready", false,-1);
    tracep->declBus(c+886,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+887,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+888,"axi_wlast", false,-1);
    tracep->declBit(c+885,"axi_wvalid", false,-1);
    tracep->declBit(c+219,"axi_wready", false,-1);
    tracep->declBus(c+222,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+221,"axi_bid", false,-1, 3,0);
    tracep->declBit(c+220,"axi_bvalid", false,-1);
    tracep->declBit(c+889,"axi_bready", false,-1);
    tracep->declBus(c+91,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+92,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+93,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+94,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+95,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+96,"clint_arvalid", false,-1);
    tracep->declBit(c+917,"clint_arready", false,-1);
    tracep->declBus(c+918,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+919,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+920,"clint_rlast", false,-1);
    tracep->declBus(c+1501,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+921,"clint_rvalid", false,-1);
    tracep->declBit(c+97,"clint_rready", false,-1);
    tracep->declBus(c+1520,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1521,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1522,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1523,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1524,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1525,"clint_awvalid", false,-1);
    tracep->declBit(c+922,"clint_awready", false,-1);
    tracep->declBus(c+1526,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1527,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1528,"clint_wlast", false,-1);
    tracep->declBit(c+1529,"clint_wvalid", false,-1);
    tracep->declBit(c+923,"clint_wready", false,-1);
    tracep->declBus(c+924,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1501,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+925,"clint_bvalid", false,-1);
    tracep->declBit(c+1530,"clint_bready", false,-1);
    tracep->declBus(c+1336,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1337,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1449,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1450,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1120,"a5", false,-1, 31,0);
    tracep->declBus(c+1338,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1449,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1450,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1339,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+1451,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+1340,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+1341,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+1342,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1343,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+1344,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+1345,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+1346,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+1347,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+1348,"wmask_idu_to_exu", false,-1, 3,0);
    tracep->declBus(c+1349,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+1350,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+1351,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+1352,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+1353,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+1354,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+926,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+927,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+1355,"csr_write", false,-1);
    tracep->declBus(c+1356,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1121+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+928,"wdata", false,-1, 31,0);
    tracep->declBus(c+929,"waddr", false,-1, 4,0);
    tracep->declBit(c+930,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1125+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+931,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+932,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+933,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+934,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+935,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+936,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+937,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+938,"wmask_exu_to_lsu", false,-1, 3,0);
    tracep->declBus(c+939,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+940,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+941,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+942,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+943,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+944,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+945,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+946,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+901,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+947,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+948,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+949,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+950,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+951,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+952,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+953,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+954,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+955,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+956,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+957,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+958,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+897,"araddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1501,"arid_i_a", false,-1, 3,0);
    tracep->declBus(c+1502,"arlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1480,"arsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1503,"arburst_i_a", false,-1, 1,0);
    tracep->declBit(c+898,"arvalid_i_a", false,-1);
    tracep->declBit(c+899,"arready_o_a", false,-1);
    tracep->declBus(c+76,"rdata_o_a", false,-1, 31,0);
    tracep->declBus(c+77,"rresp_o_a", false,-1, 1,0);
    tracep->declBit(c+78,"rlast_o_a", false,-1);
    tracep->declBus(c+79,"rid_o_a", false,-1, 3,0);
    tracep->declBit(c+80,"rvalid_o_a", false,-1);
    tracep->declBit(c+900,"rready_i_a", false,-1);
    tracep->declBus(c+1531,"awaddr_i_a", false,-1, 31,0);
    tracep->declBus(c+1501,"awid_i_a", false,-1, 3,0);
    tracep->declBus(c+1502,"awlen_i_a", false,-1, 7,0);
    tracep->declBus(c+1479,"awsize_i_a", false,-1, 2,0);
    tracep->declBus(c+1503,"awburst_i_a", false,-1, 1,0);
    tracep->declBit(c+1497,"awvalid_i_a", false,-1);
    tracep->declBit(c+1306,"awready_o_a", false,-1);
    tracep->declBus(c+1531,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+1501,"wstrb_i_a", false,-1, 3,0);
    tracep->declBit(c+1497,"wlast_i_a", false,-1);
    tracep->declBit(c+1497,"wvalid_i_a", false,-1);
    tracep->declBit(c+1307,"wready_o_a", false,-1);
    tracep->declBus(c+1308,"bresp_o_a", false,-1, 1,0);
    tracep->declBus(c+1309,"bid_o_a", false,-1, 3,0);
    tracep->declBit(c+1310,"bvalid_o_a", false,-1);
    tracep->declBit(c+1497,"bready_i_a", false,-1);
    tracep->declBus(c+901,"araddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1501,"arid_i_b", false,-1, 3,0);
    tracep->declBus(c+1502,"arlen_i_b", false,-1, 7,0);
    tracep->declBus(c+902,"arsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1503,"arburst_i_b", false,-1, 1,0);
    tracep->declBit(c+903,"arvalid_i_b", false,-1);
    tracep->declBit(c+904,"arready_o_b", false,-1);
    tracep->declBus(c+81,"rdata_o_b", false,-1, 31,0);
    tracep->declBus(c+82,"rresp_o_b", false,-1, 1,0);
    tracep->declBit(c+83,"rlast_o_b", false,-1);
    tracep->declBus(c+84,"rid_o_b", false,-1, 3,0);
    tracep->declBit(c+85,"rvalid_o_b", false,-1);
    tracep->declBit(c+905,"rready_i_b", false,-1);
    tracep->declBus(c+901,"awaddr_i_b", false,-1, 31,0);
    tracep->declBus(c+1501,"awid_i_b", false,-1, 3,0);
    tracep->declBus(c+1502,"awlen_i_b", false,-1, 7,0);
    tracep->declBus(c+906,"awsize_i_b", false,-1, 2,0);
    tracep->declBus(c+1503,"awburst_i_b", false,-1, 1,0);
    tracep->declBit(c+907,"awvalid_i_b", false,-1);
    tracep->declBit(c+1301,"awready_o_b", false,-1);
    tracep->declBus(c+908,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+909,"wstrb_i_b", false,-1, 3,0);
    tracep->declBit(c+910,"wlast_i_b", false,-1);
    tracep->declBit(c+911,"wvalid_i_b", false,-1);
    tracep->declBit(c+1302,"wready_o_b", false,-1);
    tracep->declBus(c+1303,"bresp_o_b", false,-1, 1,0);
    tracep->declBus(c+1304,"bid_o_b", false,-1, 3,0);
    tracep->declBit(c+1305,"bvalid_o_b", false,-1);
    tracep->declBit(c+912,"bready_i_b", false,-1);
    tracep->declBus(c+913,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1501,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1502,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+914,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1503,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+915,"arvalid_o", false,-1);
    tracep->declBit(c+1448,"arready_i", false,-1);
    tracep->declBus(c+86,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+87,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+88,"rlast_i", false,-1);
    tracep->declBus(c+89,"rid_i", false,-1, 3,0);
    tracep->declBit(c+90,"rvalid_i", false,-1);
    tracep->declBit(c+916,"rready_o", false,-1);
    tracep->declBus(c+883,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1501,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1502,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+884,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1503,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+882,"awvalid_o", false,-1);
    tracep->declBit(c+218,"awready_i", false,-1);
    tracep->declBus(c+886,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+887,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+888,"wlast_o", false,-1);
    tracep->declBit(c+885,"wvalid_o", false,-1);
    tracep->declBit(c+219,"wready_i", false,-1);
    tracep->declBus(c+222,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+221,"bid_i", false,-1, 3,0);
    tracep->declBit(c+220,"bvalid_i", false,-1);
    tracep->declBit(c+889,"bready_o", false,-1);
    tracep->declBit(c+959,"ar_switch", false,-1);
    tracep->declBit(c+960,"r_switch", false,-1);
    tracep->declBit(c+961,"aw_switch", false,-1);
    tracep->declBit(c+962,"w_switch", false,-1);
    tracep->declBit(c+963,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+91,"araddr_i", false,-1, 31,0);
    tracep->declBus(c+92,"arid_i", false,-1, 3,0);
    tracep->declBus(c+93,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+94,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+95,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+96,"arvalid_i", false,-1);
    tracep->declBit(c+917,"arready_o", false,-1);
    tracep->declBus(c+918,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+919,"rresp_o", false,-1, 1,0);
    tracep->declBit(c+920,"rlast_o", false,-1);
    tracep->declBus(c+1501,"rid_o", false,-1, 3,0);
    tracep->declBit(c+921,"rvalid_o", false,-1);
    tracep->declBit(c+97,"rready_i", false,-1);
    tracep->declBus(c+1520,"awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1521,"awid_i", false,-1, 3,0);
    tracep->declBus(c+1522,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1523,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1524,"awburst_i", false,-1, 1,0);
    tracep->declBit(c+1525,"awvalid_i", false,-1);
    tracep->declBit(c+922,"awready_o", false,-1);
    tracep->declBus(c+1526,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1527,"wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1528,"wlast_i", false,-1);
    tracep->declBit(c+1529,"wvalid_i", false,-1);
    tracep->declBit(c+923,"wready_o", false,-1);
    tracep->declBus(c+924,"bresp_o", false,-1, 1,0);
    tracep->declBus(c+1501,"bid_o", false,-1, 3,0);
    tracep->declBit(c+925,"bvalid_o", false,-1);
    tracep->declBit(c+1530,"bready_i", false,-1);
    tracep->declBit(c+964,"ar_state", false,-1);
    tracep->declBit(c+965,"r_state", false,-1);
    tracep->declBit(c+966,"aw_state", false,-1);
    tracep->declBit(c+967,"w_state", false,-1);
    tracep->declBit(c+1532,"b_state", false,-1);
    tracep->declBus(c+968,"araddr", false,-1, 31,0);
    tracep->declBus(c+969,"awaddr", false,-1, 31,0);
    tracep->declBus(c+970,"wdata", false,-1, 31,0);
    tracep->declBus(c+971,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1533,"wvalid", false,-1);
    tracep->declBit(c+972,"flag_waddr", false,-1);
    tracep->declBit(c+973,"flag_wdata", false,-1);
    tracep->declBit(c+974,"flag_rdata", false,-1);
    tracep->declBit(c+975,"flag_raddr", false,-1);
    tracep->declBit(c+1534,"flag_write", false,-1);
    tracep->declBus(c+976,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+977,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+978,"w_delay", false,-1, 4,0);
    tracep->declBus(c+979,"r_delay", false,-1, 4,0);
    tracep->declBus(c+980,"LFSR", false,-1, 4,0);
    tracep->declBit(c+981,"lfsr_in", false,-1);
    tracep->declBus(c+982,"write_box", false,-1, 1,0);
    tracep->declQuad(c+983,"time_counter", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+1338,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1449,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+1450,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+1339,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1451,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1340,"a_in_src_i", false,-1);
    tracep->declBus(c+1341,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+1342,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+1343,"adder_a_src_i", false,-1);
    tracep->declBit(c+1344,"adder_out_src_i", false,-1);
    tracep->declBus(c+1345,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+1346,"MemRead_i", false,-1);
    tracep->declBit(c+1347,"MemWrite_i", false,-1);
    tracep->declBus(c+1348,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1349,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+1350,"wb_src_i", false,-1);
    tracep->declBit(c+1351,"csr_write_i", false,-1);
    tracep->declBit(c+1352,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+1353,"reg_write_i", false,-1);
    tracep->declBus(c+1354,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+926,"exu_valid_i", false,-1);
    tracep->declBit(c+927,"exu_ready_o", false,-1);
    tracep->declBus(c+931,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+932,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+933,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+934,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+935,"npc_o", false,-1, 31,0);
    tracep->declBit(c+936,"MemRead_o", false,-1);
    tracep->declBit(c+937,"MemWrite_o", false,-1);
    tracep->declBus(c+938,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+939,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+940,"wb_src_o", false,-1);
    tracep->declBit(c+941,"csr_write_o", false,-1);
    tracep->declBit(c+942,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+943,"reg_write_o", false,-1);
    tracep->declBus(c+944,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+945,"exu_valid_o", false,-1);
    tracep->declBit(c+946,"exu_ready_i", false,-1);
    tracep->declBus(c+985,"pc", false,-1, 31,0);
    tracep->declBus(c+932,"rs1", false,-1, 31,0);
    tracep->declBus(c+933,"rs2", false,-1, 31,0);
    tracep->declBus(c+986,"imm", false,-1, 31,0);
    tracep->declBus(c+987,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+988,"a_in_src", false,-1);
    tracep->declBus(c+989,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+990,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+991,"adder_a_src", false,-1);
    tracep->declBit(c+992,"adder_out_src", false,-1);
    tracep->declBus(c+993,"alu_op", false,-1, 3,0);
    tracep->declBus(c+994,"a_in", false,-1, 31,0);
    tracep->declBus(c+995,"b_in", false,-1, 31,0);
    tracep->declBus(c+996,"a_out", false,-1, 31,0);
    tracep->declBus(c+997,"add_out", false,-1, 31,0);
    tracep->declBus(c+998,"pc_new", false,-1, 31,0);
    tracep->declBus(c+931,"alu_result", false,-1, 31,0);
    tracep->declBus(c+935,"npc", false,-1, 31,0);
    tracep->declBit(c+999,"zero", false,-1);
    tracep->declBus(c+1503,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1535,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1536,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1000,"current_state", false,-1, 1,0);
    tracep->declBus(c+1001,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+994,"a", false,-1, 31,0);
    tracep->declBus(c+995,"b", false,-1, 31,0);
    tracep->declBus(c+993,"op", false,-1, 3,0);
    tracep->declBus(c+931,"alu_result", false,-1, 31,0);
    tracep->declBit(c+999,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+1537,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+932,"d0", false,-1, 31,0);
    tracep->declBus(c+985,"d1", false,-1, 31,0);
    tracep->declBit(c+988,"sel", false,-1);
    tracep->declBus(c+994,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+1537,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+933,"d0", false,-1, 31,0);
    tracep->declBus(c+986,"d1", false,-1, 31,0);
    tracep->declBus(c+1538,"d2", false,-1, 31,0);
    tracep->declBus(c+987,"d3", false,-1, 31,0);
    tracep->declBus(c+989,"sel", false,-1, 1,0);
    tracep->declBus(c+995,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+996,"a", false,-1, 31,0);
    tracep->declBus(c+986,"b", false,-1, 31,0);
    tracep->declBus(c+997,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+1537,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+985,"d0", false,-1, 31,0);
    tracep->declBus(c+932,"d1", false,-1, 31,0);
    tracep->declBit(c+991,"sel", false,-1);
    tracep->declBus(c+996,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+1537,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+997,"d0", false,-1, 31,0);
    tracep->declBus(c+987,"d1", false,-1, 31,0);
    tracep->declBit(c+992,"sel", false,-1);
    tracep->declBus(c+998,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+1002,"pc4", false,-1, 31,0);
    tracep->declBus(c+998,"pc_new", false,-1, 31,0);
    tracep->declBus(c+990,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+999,"zero", false,-1);
    tracep->declBus(c+931,"alu_result", false,-1, 31,0);
    tracep->declBus(c+935,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+1336,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1337,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1449,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1450,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1120,"a5", false,-1, 31,0);
    tracep->declBus(c+890,"pc_i", false,-1, 31,0);
    tracep->declBus(c+891,"inst_i", false,-1, 31,0);
    tracep->declBit(c+895,"idu_valid_i", false,-1);
    tracep->declBit(c+896,"idu_ready_o", false,-1);
    tracep->declBus(c+1338,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1449,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+1450,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+1339,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1451,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1340,"a_in_src_o", false,-1);
    tracep->declBus(c+1341,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+1342,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+1343,"adder_a_src_o", false,-1);
    tracep->declBit(c+1344,"adder_out_src_o", false,-1);
    tracep->declBus(c+1345,"alu_op", false,-1, 3,0);
    tracep->declBit(c+1346,"MemRead_o", false,-1);
    tracep->declBit(c+1347,"MemWrite_o", false,-1);
    tracep->declBus(c+1348,"wmask_o", false,-1, 3,0);
    tracep->declBus(c+1349,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+1350,"wb_src_o", false,-1);
    tracep->declBit(c+1351,"csr_write_o", false,-1);
    tracep->declBit(c+1352,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+1353,"reg_write_o", false,-1);
    tracep->declBus(c+1354,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+926,"idu_valid_o", false,-1);
    tracep->declBit(c+927,"idu_ready_i", false,-1);
    tracep->declBit(c+1355,"csr_write_i", false,-1);
    tracep->declBus(c+1356,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1157+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1338,"pc", false,-1, 31,0);
    tracep->declBus(c+1357,"inst", false,-1, 31,0);
    tracep->declBus(c+1358,"wmask_tmp", false,-1, 7,0);
    tracep->declBus(c+1503,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1535,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1536,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1003,"current_state", false,-1, 1,0);
    tracep->declBus(c+1004,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+1357,"inst", false,-1, 31,0);
    tracep->declBus(c+1345,"alu_op", false,-1, 3,0);
    tracep->declBus(c+1359,"opcode", false,-1, 6,0);
    tracep->declBus(c+1360,"funct3", false,-1, 2,0);
    tracep->declBus(c+1361,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1355,"wen", false,-1);
    tracep->declBus(c+1357,"inst", false,-1, 31,0);
    tracep->declBus(c+1356,"wdata", false,-1, 31,0);
    tracep->declBus(c+1120,"NO", false,-1, 31,0);
    tracep->declBus(c+1338,"pc", false,-1, 31,0);
    tracep->declBus(c+1451,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1161+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+1165,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+1166,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+1167,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+1168,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+1539,"csr_mvendorid", false,-1, 31,0);
    tracep->declBus(c+1540,"csr_marchid", false,-1, 31,0);
    tracep->declBus(c+1359,"opcode", false,-1, 6,0);
    tracep->declBus(c+1360,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+1357,"inst", false,-1, 31,0);
    tracep->declBit(c+1340,"a_in_src", false,-1);
    tracep->declBus(c+1341,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+1353,"reg_write", false,-1);
    tracep->declBus(c+1342,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+1343,"adder_a_src", false,-1);
    tracep->declBit(c+1346,"MemRead", false,-1);
    tracep->declBit(c+1347,"MemWrite", false,-1);
    tracep->declBus(c+1358,"wmask", false,-1, 7,0);
    tracep->declBit(c+1350,"wb_src", false,-1);
    tracep->declBus(c+1349,"rmask", false,-1, 2,0);
    tracep->declBit(c+1351,"csr_write", false,-1);
    tracep->declBit(c+1344,"adder_out_src", false,-1);
    tracep->declBit(c+1352,"csr_wdata_src", false,-1);
    tracep->declBus(c+1359,"opcode", false,-1, 6,0);
    tracep->declBus(c+1360,"funct3", false,-1, 2,0);
    tracep->declBus(c+1361,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+1537,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1357,"inst", false,-1, 31,0);
    tracep->declBus(c+1339,"data", false,-1, 31,0);
    tracep->declBus(c+1359,"opcode", false,-1, 6,0);
    tracep->declBus(c+1360,"funct3", false,-1, 2,0);
    tracep->declBus(c+1361,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+897,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1501,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1502,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+1480,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1503,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+898,"arvalid_o", false,-1);
    tracep->declBit(c+899,"arready_i", false,-1);
    tracep->declBus(c+76,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+77,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+78,"rlast_i", false,-1);
    tracep->declBus(c+79,"rid_i", false,-1, 3,0);
    tracep->declBit(c+80,"rvalid_i", false,-1);
    tracep->declBit(c+900,"rready_o", false,-1);
    tracep->declBus(c+892,"npc_i", false,-1, 31,0);
    tracep->declBit(c+893,"ifu_valid_i", false,-1);
    tracep->declBit(c+894,"ifu_ready_o", false,-1);
    tracep->declBus(c+890,"pc_o", false,-1, 31,0);
    tracep->declBus(c+891,"inst_o", false,-1, 31,0);
    tracep->declBit(c+895,"ifu_valid_o", false,-1);
    tracep->declBit(c+896,"ifu_ready_i", false,-1);
    tracep->declBus(c+1005,"pc", false,-1, 31,0);
    tracep->declBus(c+1541,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1542,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1543,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+1544,"lfsr_in", false,-1);
    tracep->declBit(c+898,"arvalid", false,-1);
    tracep->declBus(c+897,"araddr", false,-1, 31,0);
    tracep->declBus(c+1006,"inst", false,-1, 31,0);
    tracep->declBit(c+900,"rready", false,-1);
    tracep->declBus(c+1545,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1546+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1578,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1479,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1476,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1480,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+1481,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+1482,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+1007,"current_state", false,-1, 2,0);
    tracep->declBus(c+1452,"next_state", false,-1, 2,0);
    tracep->declBus(c+1008,"receive_counter", false,-1, 2,0);
    tracep->declBit(c+1009,"ready_flag", false,-1);
    tracep->declBit(c+1010,"arvalid_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+931,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+932,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+933,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+934,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+935,"npc_i", false,-1, 31,0);
    tracep->declBit(c+936,"MemRead_i", false,-1);
    tracep->declBit(c+937,"MemWrite_i", false,-1);
    tracep->declBus(c+938,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+939,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+940,"wb_src_i", false,-1);
    tracep->declBit(c+941,"csr_write_i", false,-1);
    tracep->declBit(c+942,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+943,"reg_write_i", false,-1);
    tracep->declBus(c+944,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+945,"lsu_valid_i", false,-1);
    tracep->declBit(c+946,"lsu_ready_o", false,-1);
    tracep->declBus(c+901,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+947,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+948,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+949,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+950,"npc_o", false,-1, 31,0);
    tracep->declBus(c+951,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+952,"wb_src_o", false,-1);
    tracep->declBit(c+953,"csr_write_o", false,-1);
    tracep->declBit(c+954,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+955,"reg_write_o", false,-1);
    tracep->declBus(c+956,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+957,"lsu_valid_o", false,-1);
    tracep->declBit(c+958,"lsu_ready_i", false,-1);
    tracep->declBus(c+901,"araddr_o", false,-1, 31,0);
    tracep->declBus(c+1501,"arid_o", false,-1, 3,0);
    tracep->declBus(c+1502,"arlen_o", false,-1, 7,0);
    tracep->declBus(c+902,"arsize_o", false,-1, 2,0);
    tracep->declBus(c+1503,"arburst_o", false,-1, 1,0);
    tracep->declBit(c+903,"arvalid_o", false,-1);
    tracep->declBit(c+904,"arready_i", false,-1);
    tracep->declBus(c+81,"rdata_i", false,-1, 31,0);
    tracep->declBus(c+82,"rresp_i", false,-1, 1,0);
    tracep->declBit(c+83,"rlast_i", false,-1);
    tracep->declBus(c+84,"rid_i", false,-1, 3,0);
    tracep->declBit(c+85,"rvalid_i", false,-1);
    tracep->declBit(c+905,"rready_o", false,-1);
    tracep->declBus(c+901,"awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1501,"awid_o", false,-1, 3,0);
    tracep->declBus(c+1502,"awlen_o", false,-1, 7,0);
    tracep->declBus(c+906,"awsize_o", false,-1, 2,0);
    tracep->declBus(c+1503,"awburst_o", false,-1, 1,0);
    tracep->declBit(c+907,"awvalid_o", false,-1);
    tracep->declBit(c+1301,"awready_i", false,-1);
    tracep->declBus(c+908,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+909,"wstrb_o", false,-1, 3,0);
    tracep->declBit(c+910,"wlast_o", false,-1);
    tracep->declBit(c+911,"wvalid_o", false,-1);
    tracep->declBit(c+1302,"wready_i", false,-1);
    tracep->declBus(c+1303,"bresp_i", false,-1, 1,0);
    tracep->declBus(c+1304,"bid_i", false,-1, 3,0);
    tracep->declBit(c+1305,"bvalid_i", false,-1);
    tracep->declBit(c+912,"bready_o", false,-1);
    tracep->declBus(c+901,"alu_result", false,-1, 31,0);
    tracep->declBus(c+947,"rs1", false,-1, 31,0);
    tracep->declBus(c+1579,"rs2", false,-1, 31,0);
    tracep->declBus(c+1580,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+951,"rmask", false,-1, 2,0);
    tracep->declBit(c+1011,"flag", false,-1);
    tracep->declBit(c+1581,"wvalid_tmp", false,-1);
    tracep->declBus(c+1582,"LFSR", false,-1, 4,0);
    tracep->declBus(c+1583,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1584,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+1585,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1586,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+1587,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+1588,"lfsr_in", false,-1);
    tracep->declBit(c+903,"arvalid", false,-1);
    tracep->declBus(c+901,"araddr", false,-1, 31,0);
    tracep->declBit(c+905,"rready", false,-1);
    tracep->declBus(c+901,"awaddr", false,-1, 31,0);
    tracep->declBit(c+907,"awvalid", false,-1);
    tracep->declBus(c+908,"wdata", false,-1, 31,0);
    tracep->declBus(c+909,"wstrb", false,-1, 3,0);
    tracep->declBit(c+911,"wvalid", false,-1);
    tracep->declBit(c+912,"bready", false,-1);
    tracep->declBus(c+1589,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1590+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1622,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+1623,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1624+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+1656,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1657+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1689+i*1,"wstrb_buffer", true,(i+0), 3,0);
    }
    tracep->declBus(c+1721,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+1503,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1535,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1536,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1722,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+1012,"current_state", false,-1, 1,0);
    tracep->declBus(c+1013,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+1723,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1537,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBus(c+928,"wdata", false,-1, 31,0);
    tracep->declBus(c+929,"waddr", false,-1, 4,0);
    tracep->declBit(c+930,"wen", false,-1);
    tracep->declBus(c+1336,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1449,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1337,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1450,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1120,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1169+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1201+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+901,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+947,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+948,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+949,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+950,"npc_i", false,-1, 31,0);
    tracep->declBus(c+951,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+952,"wb_src_i", false,-1);
    tracep->declBit(c+953,"csr_write_i", false,-1);
    tracep->declBit(c+954,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+955,"reg_write_i", false,-1);
    tracep->declBus(c+956,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+957,"wbu_valid_i", false,-1);
    tracep->declBit(c+958,"wbu_ready_o", false,-1);
    tracep->declBus(c+892,"npc_o", false,-1, 31,0);
    tracep->declBit(c+893,"wbu_valid_o", false,-1);
    tracep->declBit(c+894,"wbu_ready_i", false,-1);
    tracep->declBus(c+1356,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+928,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+1355,"csr_write_o", false,-1);
    tracep->declBit(c+930,"reg_write_o", false,-1);
    tracep->declBus(c+929,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+1014,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1015,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+1016,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1017,"rs1", false,-1, 31,0);
    tracep->declBus(c+1018,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+1019,"rmask", false,-1, 2,0);
    tracep->declBit(c+1020,"wb_src", false,-1);
    tracep->declBit(c+1021,"csr_wdata_src", false,-1);
    tracep->declBit(c+1022,"difftest_check", false,-1);
    tracep->declBit(c+1023,"difftest_check_flag", false,-1);
    tracep->declBus(c+1503,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1535,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+1536,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+1024,"current_state", false,-1, 1,0);
    tracep->declBus(c+1025,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+1537,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1017,"d0", false,-1, 31,0);
    tracep->declBus(c+1018,"d1", false,-1, 31,0);
    tracep->declBit(c+1021,"sel", false,-1);
    tracep->declBus(c+1356,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+1015,"read_data", false,-1, 31,0);
    tracep->declBus(c+1026,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+1019,"rmask", false,-1, 2,0);
    tracep->declBus(c+1014,"mem_data", false,-1, 31,0);
    tracep->declBus(c+1027,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+1028,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+1029,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+1030,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+1031,"byte3", false,-1, 31,0);
    tracep->declBus(c+1032,"byte2", false,-1, 31,0);
    tracep->declBus(c+1033,"byte1", false,-1, 31,0);
    tracep->declBus(c+1034,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+1537,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1016,"d0", false,-1, 31,0);
    tracep->declBus(c+1014,"d1", false,-1, 31,0);
    tracep->declBit(c+1020,"sel", false,-1);
    tracep->declBus(c+928,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1447,"rst_n", false,-1);
    tracep->declBus(c+913,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1501,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1502,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+914,"axi_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1503,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+915,"axi_arvalid_i", false,-1);
    tracep->declBit(c+1448,"axi_arready_o", false,-1);
    tracep->declBus(c+86,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+87,"axi_rresp_o", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rlast_o", false,-1);
    tracep->declBus(c+89,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+90,"axi_rvalid_o", false,-1);
    tracep->declBit(c+916,"axi_rready_i", false,-1);
    tracep->declBus(c+883,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1501,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1502,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+884,"axi_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1503,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+882,"axi_awvalid_i", false,-1);
    tracep->declBit(c+218,"axi_awready_o", false,-1);
    tracep->declBus(c+886,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+887,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+888,"axi_wlast_i", false,-1);
    tracep->declBit(c+885,"axi_wvalid_i", false,-1);
    tracep->declBit(c+219,"axi_wready_o", false,-1);
    tracep->declBus(c+222,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+221,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+220,"axi_bvalid_o", false,-1);
    tracep->declBit(c+889,"axi_bready_i", false,-1);
    tracep->declBus(c+32,"sram_araddr_o", false,-1, 31,0);
    tracep->declBus(c+31,"sram_arid_o", false,-1, 3,0);
    tracep->declBus(c+33,"sram_arlen_o", false,-1, 7,0);
    tracep->declBus(c+34,"sram_arsize_o", false,-1, 2,0);
    tracep->declBus(c+35,"sram_arburst_o", false,-1, 1,0);
    tracep->declBit(c+30,"sram_arvalid_o", false,-1);
    tracep->declBit(c+1118,"sram_arready_i", false,-1);
    tracep->declBus(c+225,"sram_rdata_i", false,-1, 31,0);
    tracep->declBus(c+226,"sram_rresp_i", false,-1, 1,0);
    tracep->declBit(c+227,"sram_rlast_i", false,-1);
    tracep->declBus(c+224,"sram_rid_i", false,-1, 3,0);
    tracep->declBit(c+223,"sram_rvalid_i", false,-1);
    tracep->declBit(c+36,"sram_rready_o", false,-1);
    tracep->declBus(c+883,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1501,"sram_awid_o", false,-1, 3,0);
    tracep->declBus(c+1502,"sram_awlen_o", false,-1, 7,0);
    tracep->declBus(c+884,"sram_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1503,"sram_awburst_o", false,-1, 1,0);
    tracep->declBit(c+882,"sram_awvalid_o", false,-1);
    tracep->declBit(c+218,"sram_awready_i", false,-1);
    tracep->declBus(c+886,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+887,"sram_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+888,"sram_wlast_o", false,-1);
    tracep->declBit(c+885,"sram_wvalid_o", false,-1);
    tracep->declBit(c+219,"sram_wready_i", false,-1);
    tracep->declBus(c+222,"sram_bresp_i", false,-1, 1,0);
    tracep->declBus(c+221,"sram_bid_i", false,-1, 3,0);
    tracep->declBit(c+220,"sram_bvalid_i", false,-1);
    tracep->declBit(c+889,"sram_bready_o", false,-1);
    tracep->declBus(c+91,"clint_araddr_o", false,-1, 31,0);
    tracep->declBus(c+92,"clint_arid_o", false,-1, 3,0);
    tracep->declBus(c+93,"clint_arlen_o", false,-1, 7,0);
    tracep->declBus(c+94,"clint_arsize_o", false,-1, 2,0);
    tracep->declBus(c+95,"clint_arburst_o", false,-1, 1,0);
    tracep->declBit(c+96,"clint_arvalid_o", false,-1);
    tracep->declBit(c+917,"clint_arready_i", false,-1);
    tracep->declBus(c+918,"clint_rdata_i", false,-1, 31,0);
    tracep->declBus(c+919,"clint_rresp_i", false,-1, 1,0);
    tracep->declBit(c+920,"clint_rlast_i", false,-1);
    tracep->declBus(c+1501,"clint_rid_i", false,-1, 3,0);
    tracep->declBit(c+921,"clint_rvalid_i", false,-1);
    tracep->declBit(c+97,"clint_rready_o", false,-1);
    tracep->declBus(c+1520,"clint_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1521,"clint_awid_o", false,-1, 3,0);
    tracep->declBus(c+1522,"clint_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1523,"clint_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1524,"clint_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1525,"clint_awvalid_o", false,-1);
    tracep->declBit(c+922,"clint_awready_i", false,-1);
    tracep->declBus(c+1526,"clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1527,"clint_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1528,"clint_wlast_o", false,-1);
    tracep->declBit(c+1529,"clint_wvalid_o", false,-1);
    tracep->declBit(c+923,"clint_wready_i", false,-1);
    tracep->declBus(c+924,"clint_bresp_i", false,-1, 1,0);
    tracep->declBus(c+1501,"clint_bid_i", false,-1, 3,0);
    tracep->declBit(c+925,"clint_bvalid_i", false,-1);
    tracep->declBit(c+1530,"clint_bready_o", false,-1);
    tracep->declBit(c+98,"ar_switch", false,-1);
    tracep->declBit(c+99,"r_switch", false,-1);
    tracep->declBit(c+1,"aw_switch", false,-1);
    tracep->declBit(c+2,"w_switch", false,-1);
    tracep->declBit(c+3,"b_switch", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"io_d", false,-1);
    tracep->declBit(c+489,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"io_d", false,-1);
    tracep->declBit(c+489,"io_q", false,-1);
    tracep->declBit(c+489,"sync_0", false,-1);
    tracep->declBit(c+490,"sync_1", false,-1);
    tracep->declBit(c+491,"sync_2", false,-1);
    tracep->declBit(c+492,"sync_3", false,-1);
    tracep->declBit(c+493,"sync_4", false,-1);
    tracep->declBit(c+494,"sync_5", false,-1);
    tracep->declBit(c+495,"sync_6", false,-1);
    tracep->declBit(c+496,"sync_7", false,-1);
    tracep->declBit(c+497,"sync_8", false,-1);
    tracep->declBit(c+498,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1367,"auto_in_psel", false,-1);
    tracep->declBit(c+1368,"auto_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1366,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1476,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+614,"auto_in_pready", false,-1);
    tracep->declBit(c+1497,"auto_in_pslverr", false,-1);
    tracep->declBus(c+615,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1411,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1412,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1413,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1414,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1415,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1416,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1417,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1418,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1419,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1420,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1380,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1367,"in_psel", false,-1);
    tracep->declBit(c+1368,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+614,"in_pready", false,-1);
    tracep->declBus(c+615,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1497,"in_pslverr", false,-1);
    tracep->declBus(c+1411,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1412,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1413,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1414,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1415,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1416,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1417,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1418,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1419,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1420,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+619,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+615,"rdata", false,-1, 31,0);
    tracep->declBus(c+620,"seg_rdata", false,-1, 31,0);
    tracep->declBit(c+614,"ready", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+621,"num", false,-1, 3,0);
    tracep->declBus(c+1413,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+622,"num", false,-1, 3,0);
    tracep->declBus(c+1414,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+623,"num", false,-1, 3,0);
    tracep->declBus(c+1415,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+624,"num", false,-1, 3,0);
    tracep->declBus(c+1416,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+625,"num", false,-1, 3,0);
    tracep->declBus(c+1417,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+626,"num", false,-1, 3,0);
    tracep->declBus(c+1418,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+627,"num", false,-1, 3,0);
    tracep->declBus(c+1419,"show", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+628,"num", false,-1, 3,0);
    tracep->declBus(c+1420,"show", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1242,"auto_in_psel", false,-1);
    tracep->declBit(c+1243,"auto_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1366,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1476,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+115,"auto_in_pready", false,-1);
    tracep->declBit(c+1497,"auto_in_pslverr", false,-1);
    tracep->declBus(c+116,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1421,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1422,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1380,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1242,"in_psel", false,-1);
    tracep->declBit(c+1243,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+115,"in_pready", false,-1);
    tracep->declBus(c+116,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1497,"in_pslverr", false,-1);
    tracep->declBit(c+1421,"ps2_clk", false,-1);
    tracep->declBit(c+1422,"ps2_data", false,-1);
    tracep->declBus(c+499,"data_r", false,-1, 7,0);
    tracep->declBus(c+500,"old_data", false,-1, 7,0);
    tracep->declBus(c+501,"data_asic", false,-1, 7,0);
    tracep->declBus(c+502,"buffer", false,-1, 7,0);
    tracep->declBit(c+503,"ready", false,-1);
    tracep->declBit(c+504,"nextdata_n", false,-1);
    tracep->declBit(c+505,"overflow", false,-1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1453,"clrn", false,-1);
    tracep->declBit(c+1421,"ps2_clk", false,-1);
    tracep->declBit(c+1422,"ps2_data", false,-1);
    tracep->declBit(c+504,"nextdata_n", false,-1);
    tracep->declBus(c+502,"data", false,-1, 7,0);
    tracep->declBit(c+503,"ready", false,-1);
    tracep->declBit(c+505,"overflow", false,-1);
    tracep->declBus(c+506,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+507+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+515,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+516,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+517,"count", false,-1, 3,0);
    tracep->declBus(c+518,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+519,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1285,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1286,"auto_in_wvalid", false,-1);
    tracep->declBit(c+284,"auto_in_arready", false,-1);
    tracep->declBit(c+54,"auto_in_arvalid", false,-1);
    tracep->declBus(c+23,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+5,"auto_in_rready", false,-1);
    tracep->declBit(c+285,"auto_in_rvalid", false,-1);
    tracep->declBus(c+286,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+287,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+285,"state", false,-1);
    tracep->declBus(c+287,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+286,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+100,"raddr", false,-1, 31,0);
    tracep->declBit(c+101,"ren", false,-1);
    tracep->declBus(c+102,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1369,"auto_in_psel", false,-1);
    tracep->declBit(c+1244,"auto_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1362,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1476,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1439,"auto_in_pready", false,-1);
    tracep->declBit(c+1497,"auto_in_pslverr", false,-1);
    tracep->declBus(c+117,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1432,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1397,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1433,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1362,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1369,"in_psel", false,-1);
    tracep->declBit(c+1244,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1439,"in_pready", false,-1);
    tracep->declBus(c+117,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1497,"in_pslverr", false,-1);
    tracep->declBit(c+1432,"qspi_sck", false,-1);
    tracep->declBit(c+1397,"qspi_ce_n", false,-1);
    tracep->declBus(c+1433,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1433,"din", false,-1, 3,0);
    tracep->declBus(c+1454,"dout", false,-1, 3,0);
    tracep->declBus(c+1398,"douten", false,-1, 3,0);
    tracep->declBit(c+1455,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1409,"clk_i", false,-1);
    tracep->declBit(c+1410,"rst_i", false,-1);
    tracep->declBus(c+1362,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1108,"dat_i", false,-1, 31,0);
    tracep->declBus(c+117,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1109,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1369,"cyc_i", false,-1);
    tracep->declBit(c+1369,"stb_i", false,-1);
    tracep->declBit(c+1455,"ack_o", false,-1);
    tracep->declBit(c+1107,"we_i", false,-1);
    tracep->declBit(c+1432,"sck", false,-1);
    tracep->declBit(c+1397,"ce_n", false,-1);
    tracep->declBus(c+1433,"din", false,-1, 3,0);
    tracep->declBus(c+1454,"dout", false,-1, 3,0);
    tracep->declBus(c+1398,"douten", false,-1, 3,0);
    tracep->declBus(c+1503,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1535,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1536,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+629,"mr_sck", false,-1);
    tracep->declBit(c+630,"mr_ce_n", false,-1);
    tracep->declBus(c+1433,"mr_din", false,-1, 3,0);
    tracep->declBus(c+631,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+632,"mr_doe", false,-1);
    tracep->declBit(c+633,"mw_sck", false,-1);
    tracep->declBit(c+634,"mw_ce_n", false,-1);
    tracep->declBus(c+1433,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1456,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+635,"mw_doe", false,-1);
    tracep->declBit(c+1399,"mr_rd", false,-1);
    tracep->declBit(c+636,"mr_done", false,-1);
    tracep->declBit(c+1400,"mw_wr", false,-1);
    tracep->declBit(c+1457,"mw_done", false,-1);
    tracep->declBit(c+1369,"wb_valid", false,-1);
    tracep->declBit(c+1381,"wb_we", false,-1);
    tracep->declBit(c+1382,"wb_re", false,-1);
    tracep->declBus(c+1316,"state", false,-1, 1,0);
    tracep->declBus(c+1458,"nstate", false,-1, 1,0);
    tracep->declBus(c+1459,"qpi_counter", false,-1, 3,0);
    tracep->declBit(c+1460,"qpi_sck", false,-1);
    tracep->declBus(c+1233,"size", false,-1, 2,0);
    tracep->declBus(c+1234,"byte0", false,-1, 7,0);
    tracep->declBus(c+1235,"byte1", false,-1, 7,0);
    tracep->declBus(c+1236,"byte2", false,-1, 7,0);
    tracep->declBus(c+1237,"byte3", false,-1, 7,0);
    tracep->declBus(c+1238,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1453,"rst_n", false,-1);
    tracep->declBus(c+1383,"addr", false,-1, 23,0);
    tracep->declBit(c+1399,"rd", false,-1);
    tracep->declBus(c+1482,"size", false,-1, 2,0);
    tracep->declBit(c+636,"done", false,-1);
    tracep->declBus(c+117,"line", false,-1, 31,0);
    tracep->declBit(c+629,"sck", false,-1);
    tracep->declBit(c+630,"ce_n", false,-1);
    tracep->declBus(c+1433,"din", false,-1, 3,0);
    tracep->declBus(c+631,"dout", false,-1, 3,0);
    tracep->declBit(c+632,"douten", false,-1);
    tracep->declBus(c+1724,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1725,"READ", false,-1, 0,0);
    tracep->declBus(c+1726,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+637,"state", false,-1);
    tracep->declBit(c+1401,"nstate", false,-1);
    tracep->declBus(c+638,"counter", false,-1, 7,0);
    tracep->declBus(c+639,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+520+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1727,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+640,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1453,"rst_n", false,-1);
    tracep->declBus(c+1384,"addr", false,-1, 23,0);
    tracep->declBus(c+1238,"line", false,-1, 31,0);
    tracep->declBus(c+1233,"size", false,-1, 2,0);
    tracep->declBit(c+1400,"wr", false,-1);
    tracep->declBit(c+1457,"done", false,-1);
    tracep->declBit(c+633,"sck", false,-1);
    tracep->declBit(c+634,"ce_n", false,-1);
    tracep->declBus(c+1433,"din", false,-1, 3,0);
    tracep->declBus(c+1456,"dout", false,-1, 3,0);
    tracep->declBit(c+635,"douten", false,-1);
    tracep->declBus(c+1724,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1725,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1239,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+641,"state", false,-1);
    tracep->declBit(c+1402,"nstate", false,-1);
    tracep->declBus(c+642,"counter", false,-1, 7,0);
    tracep->declBus(c+643,"saddr", false,-1, 23,0);
    tracep->declBus(c+1728,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1240,"auto_in_psel", false,-1);
    tracep->declBit(c+1241,"auto_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1362,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1476,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+611,"auto_in_pready", false,-1);
    tracep->declBit(c+1497,"auto_in_pslverr", false,-1);
    tracep->declBus(c+612,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1434,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1313,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+607,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+608,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+609,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+610,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1435,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1314,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1315,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1329,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1362,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1240,"in_psel", false,-1);
    tracep->declBit(c+1241,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+611,"in_pready", false,-1);
    tracep->declBus(c+612,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1497,"in_pslverr", false,-1);
    tracep->declBit(c+1434,"sdram_clk", false,-1);
    tracep->declBit(c+1313,"sdram_cke", false,-1);
    tracep->declBit(c+607,"sdram_cs", false,-1);
    tracep->declBit(c+608,"sdram_ras", false,-1);
    tracep->declBit(c+609,"sdram_cas", false,-1);
    tracep->declBit(c+610,"sdram_we", false,-1);
    tracep->declBus(c+1435,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1314,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1315,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1329,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+644,"sdram_dout_en", false,-1);
    tracep->declBus(c+645,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+524,"state", false,-1, 1,0);
    tracep->declBit(c+1317,"req_accept", false,-1);
    tracep->declBit(c+1385,"is_read", false,-1);
    tracep->declBit(c+1386,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1409,"clk_i", false,-1);
    tracep->declBit(c+1410,"rst_i", false,-1);
    tracep->declBus(c+1387,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1385,"inport_rd_i", false,-1);
    tracep->declBus(c+1502,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1362,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1108,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1329,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1317,"inport_accept_o", false,-1);
    tracep->declBit(c+611,"inport_ack_o", false,-1);
    tracep->declBit(c+1497,"inport_error_o", false,-1);
    tracep->declBus(c+612,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1434,"sdram_clk_o", false,-1);
    tracep->declBit(c+1313,"sdram_cke_o", false,-1);
    tracep->declBit(c+607,"sdram_cs_o", false,-1);
    tracep->declBit(c+608,"sdram_ras_o", false,-1);
    tracep->declBit(c+609,"sdram_cas_o", false,-1);
    tracep->declBit(c+610,"sdram_we_o", false,-1);
    tracep->declBus(c+1315,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1435,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1314,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+645,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+644,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1474,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1729,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1730,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1731,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1731,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1732,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1732,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1733,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1734,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1735,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1736,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1732,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1737,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1738,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1739,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1740,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1741,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1742,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1743,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1501,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1744,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1732,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1501,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1743,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1742,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1738,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1740,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1739,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1741,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1737,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1745,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1746,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1747,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1747,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1537,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1747,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1731,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1731,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1748,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1362,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1387,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1385,"ram_rd_w", false,-1);
    tracep->declBit(c+1317,"ram_accept_w", false,-1);
    tracep->declBus(c+1108,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+612,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+611,"ram_ack_w", false,-1);
    tracep->declBit(c+1388,"ram_req_w", false,-1);
    tracep->declBus(c+646,"command_q", false,-1, 3,0);
    tracep->declBus(c+1318,"addr_q", false,-1, 12,0);
    tracep->declBus(c+645,"data_q", false,-1, 31,0);
    tracep->declBit(c+647,"data_rd_en_q", false,-1);
    tracep->declBus(c+1315,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1313,"cke_q", false,-1);
    tracep->declBus(c+1314,"bank_q", false,-1, 1,0);
    tracep->declBus(c+612,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+648,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1329,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+649,"refresh_q", false,-1);
    tracep->declBus(c+650,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+651+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1319,"state_q", false,-1, 3,0);
    tracep->declBus(c+1403,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1404,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+655,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+656,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1389,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1390,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1391,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1732,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+657,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1405,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1749,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1320,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+658,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+659,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+660,"idx", false,-1, 31,0);
    tracep->declBus(c+661,"rd_q", false,-1, 3,0);
    tracep->declBit(c+611,"ack_q", false,-1);
    tracep->declArray(c+1321,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1245,"auto_in_psel", false,-1);
    tracep->declBit(c+1246,"auto_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1476,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+616,"auto_in_pready", false,-1);
    tracep->declBit(c+617,"auto_in_pslverr", false,-1);
    tracep->declBus(c+618,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+606,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1311,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1312,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1431,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1750,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1751,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1478,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1392,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1245,"in_psel", false,-1);
    tracep->declBit(c+1246,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+616,"in_pready", false,-1);
    tracep->declBus(c+618,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+617,"in_pslverr", false,-1);
    tracep->declBit(c+606,"spi_sck", false,-1);
    tracep->declBus(c+1311,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1312,"spi_mosi", false,-1);
    tracep->declBit(c+1431,"spi_miso", false,-1);
    tracep->declBit(c+662,"spi_irq_out", false,-1);
    tracep->declBus(c+1752,"REG_SPI_TX", false,-1, 4,0);
    tracep->declBus(c+1753,"REG_SPI_RX0", false,-1, 4,0);
    tracep->declBus(c+1752,"REG_SPI_RX1", false,-1, 4,0);
    tracep->declBus(c+1754,"REG_SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1755,"REG_SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1756,"REG_SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1501,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1743,"STATE_SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1742,"STATE_SET_SS", false,-1, 3,0);
    tracep->declBus(c+1738,"STATE_SET_TX", false,-1, 3,0);
    tracep->declBus(c+1740,"STATE_SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1739,"STATE_GET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1741,"STATE_GET_RX0", false,-1, 3,0);
    tracep->declBus(c+1737,"STATE_GET_RX1", false,-1, 3,0);
    tracep->declBus(c+1745,"STATE_GET_SS", false,-1, 3,0);
    tracep->declBus(c+1746,"STATE_GET_DONE", false,-1, 3,0);
    tracep->declBus(c+1757,"CMD_READ", false,-1, 31,0);
    tracep->declBus(c+663,"xip_state", false,-1, 3,0);
    tracep->declBus(c+664,"xip_state_next", false,-1, 3,0);
    tracep->declBus(c+665,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+666,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+667,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+668,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+669,"wb_we_i", false,-1);
    tracep->declBit(c+670,"wb_stb_i", false,-1);
    tracep->declBit(c+671,"wb_cyc_i", false,-1);
    tracep->declBit(c+672,"wb_ack_o", false,-1);
    tracep->declBit(c+1497,"wb_err_o", false,-1);
    tracep->declBit(c+673,"wb_int_o", false,-1);
    tracep->declBit(c+674,"done", false,-1);
    tracep->declBus(c+675,"paddr", false,-1, 31,0);
    tracep->declQuad(c+676,"data", false,-1, 63,0);
    tracep->declBit(c+678,"is_flash_access", false,-1);
    tracep->declBus(c+679,"tmp", false,-1, 31,0);
    tracep->declQuad(c+680,"tmp64", false,-1, 63,0);
    tracep->declBus(c+682,"counter", false,-1, 7,0);
    tracep->declBit(c+683,"flag", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1758,"Tp", false,-1, 31,0);
    tracep->declBit(c+1409,"wb_clk_i", false,-1);
    tracep->declBit(c+1410,"wb_rst_i", false,-1);
    tracep->declBus(c+665,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+666,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+667,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+668,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+669,"wb_we_i", false,-1);
    tracep->declBit(c+670,"wb_stb_i", false,-1);
    tracep->declBit(c+671,"wb_cyc_i", false,-1);
    tracep->declBit(c+672,"wb_ack_o", false,-1);
    tracep->declBit(c+1497,"wb_err_o", false,-1);
    tracep->declBit(c+673,"wb_int_o", false,-1);
    tracep->declBus(c+1311,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+606,"sclk_pad_o", false,-1);
    tracep->declBit(c+1312,"mosi_pad_o", false,-1);
    tracep->declBit(c+1431,"miso_pad_i", false,-1);
    tracep->declBus(c+684,"divider", false,-1, 15,0);
    tracep->declBus(c+685,"ctrl", false,-1, 13,0);
    tracep->declBus(c+686,"ss", false,-1, 7,0);
    tracep->declBus(c+687,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+688,"rx", false,-1, 127,0);
    tracep->declBit(c+692,"rx_negedge", false,-1);
    tracep->declBit(c+693,"tx_negedge", false,-1);
    tracep->declBus(c+694,"char_len", false,-1, 6,0);
    tracep->declBit(c+695,"go", false,-1);
    tracep->declBit(c+696,"lsb", false,-1);
    tracep->declBit(c+697,"ie", false,-1);
    tracep->declBit(c+698,"ass", false,-1);
    tracep->declBit(c+699,"spi_divider_sel", false,-1);
    tracep->declBit(c+700,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+701,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+702,"spi_ss_sel", false,-1);
    tracep->declBit(c+703,"tip", false,-1);
    tracep->declBit(c+704,"pos_edge", false,-1);
    tracep->declBit(c+705,"neg_edge", false,-1);
    tracep->declBit(c+706,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1758,"Tp", false,-1, 31,0);
    tracep->declBit(c+1409,"clk_in", false,-1);
    tracep->declBit(c+1410,"rst", false,-1);
    tracep->declBit(c+703,"enable", false,-1);
    tracep->declBit(c+695,"go", false,-1);
    tracep->declBit(c+706,"last_clk", false,-1);
    tracep->declBus(c+684,"divider", false,-1, 15,0);
    tracep->declBit(c+606,"clk_out", false,-1);
    tracep->declBit(c+704,"pos_edge", false,-1);
    tracep->declBit(c+705,"neg_edge", false,-1);
    tracep->declBus(c+707,"cnt", false,-1, 15,0);
    tracep->declBit(c+708,"cnt_zero", false,-1);
    tracep->declBit(c+709,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1758,"Tp", false,-1, 31,0);
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1410,"rst", false,-1);
    tracep->declBus(c+710,"latch", false,-1, 3,0);
    tracep->declBus(c+668,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+694,"len", false,-1, 6,0);
    tracep->declBit(c+696,"lsb", false,-1);
    tracep->declBit(c+695,"go", false,-1);
    tracep->declBit(c+704,"pos_edge", false,-1);
    tracep->declBit(c+705,"neg_edge", false,-1);
    tracep->declBit(c+692,"rx_negedge", false,-1);
    tracep->declBit(c+693,"tx_negedge", false,-1);
    tracep->declBit(c+703,"tip", false,-1);
    tracep->declBit(c+706,"last", false,-1);
    tracep->declBus(c+666,"p_in", false,-1, 31,0);
    tracep->declArray(c+688,"p_out", false,-1, 127,0);
    tracep->declBit(c+606,"s_clk", false,-1);
    tracep->declBit(c+1431,"s_in", false,-1);
    tracep->declBit(c+1312,"s_out", false,-1);
    tracep->declBus(c+711,"cnt", false,-1, 7,0);
    tracep->declArray(c+688,"data", false,-1, 127,0);
    tracep->declBus(c+712,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+713,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+714,"rx_clk", false,-1);
    tracep->declBit(c+715,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1370,"auto_in_psel", false,-1);
    tracep->declBit(c+1371,"auto_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1366,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1476,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1372,"auto_in_pready", false,-1);
    tracep->declBit(c+1497,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1440,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1429,"uart_rx", false,-1);
    tracep->declBit(c+1430,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1370,"in_psel", false,-1);
    tracep->declBit(c+1371,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1372,"in_pready", false,-1);
    tracep->declBit(c+1497,"in_pslverr", false,-1);
    tracep->declBus(c+1380,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1440,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1429,"uart_rx", false,-1);
    tracep->declBit(c+1430,"uart_tx", false,-1);
    tracep->declBit(c+716,"rtsn", false,-1);
    tracep->declBit(c+1497,"ctsn", false,-1);
    tracep->declBit(c+717,"dtr_pad_o", false,-1);
    tracep->declBit(c+1497,"dsr_pad_i", false,-1);
    tracep->declBit(c+1497,"ri_pad_i", false,-1);
    tracep->declBit(c+1497,"dcd_pad_i", false,-1);
    tracep->declBit(c+718,"interrupt", false,-1);
    tracep->declBit(c+1461,"reg_we", false,-1);
    tracep->declBit(c+1462,"reg_re", false,-1);
    tracep->declBus(c+1393,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1394,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+525,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1406,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+719,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1410,"wb_rst_i", false,-1);
    tracep->declBus(c+1393,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1395,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1406,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1461,"wb_we_i", false,-1);
    tracep->declBit(c+1462,"wb_re_i", false,-1);
    tracep->declBit(c+1430,"stx_pad_o", false,-1);
    tracep->declBit(c+1429,"srx_pad_i", false,-1);
    tracep->declBus(c+1745,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+719,"rts_pad_o", false,-1);
    tracep->declBit(c+717,"dtr_pad_o", false,-1);
    tracep->declBit(c+718,"int_o", false,-1);
    tracep->declBit(c+720,"enable", false,-1);
    tracep->declBit(c+721,"srx_pad", false,-1);
    tracep->declBus(c+722,"ier", false,-1, 3,0);
    tracep->declBus(c+723,"iir", false,-1, 3,0);
    tracep->declBus(c+724,"fcr", false,-1, 1,0);
    tracep->declBus(c+725,"mcr", false,-1, 4,0);
    tracep->declBus(c+726,"lcr", false,-1, 7,0);
    tracep->declBus(c+727,"msr", false,-1, 7,0);
    tracep->declBus(c+728,"dl", false,-1, 15,0);
    tracep->declBus(c+729,"scratch", false,-1, 7,0);
    tracep->declBit(c+730,"start_dlc", false,-1);
    tracep->declBit(c+731,"lsr_mask_d", false,-1);
    tracep->declBit(c+732,"msi_reset", false,-1);
    tracep->declBus(c+733,"dlc", false,-1, 15,0);
    tracep->declBus(c+734,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+735,"rx_reset", false,-1);
    tracep->declBit(c+736,"tx_reset", false,-1);
    tracep->declBit(c+737,"dlab", false,-1);
    tracep->declBit(c+1500,"cts_pad_i", false,-1);
    tracep->declBit(c+1497,"dsr_pad_i", false,-1);
    tracep->declBit(c+1497,"ri_pad_i", false,-1);
    tracep->declBit(c+1497,"dcd_pad_i", false,-1);
    tracep->declBit(c+738,"loopback", false,-1);
    tracep->declBit(c+1497,"cts", false,-1);
    tracep->declBit(c+1500,"dsr", false,-1);
    tracep->declBit(c+1500,"ri", false,-1);
    tracep->declBit(c+1500,"dcd", false,-1);
    tracep->declBit(c+739,"cts_c", false,-1);
    tracep->declBit(c+740,"dsr_c", false,-1);
    tracep->declBit(c+741,"ri_c", false,-1);
    tracep->declBit(c+742,"dcd_c", false,-1);
    tracep->declBus(c+743,"lsr", false,-1, 7,0);
    tracep->declBit(c+744,"lsr0", false,-1);
    tracep->declBit(c+745,"lsr1", false,-1);
    tracep->declBit(c+746,"lsr2", false,-1);
    tracep->declBit(c+747,"lsr3", false,-1);
    tracep->declBit(c+748,"lsr4", false,-1);
    tracep->declBit(c+749,"lsr5", false,-1);
    tracep->declBit(c+750,"lsr6", false,-1);
    tracep->declBit(c+751,"lsr7", false,-1);
    tracep->declBit(c+752,"lsr0r", false,-1);
    tracep->declBit(c+753,"lsr1r", false,-1);
    tracep->declBit(c+754,"lsr2r", false,-1);
    tracep->declBit(c+755,"lsr3r", false,-1);
    tracep->declBit(c+756,"lsr4r", false,-1);
    tracep->declBit(c+757,"lsr5r", false,-1);
    tracep->declBit(c+758,"lsr6r", false,-1);
    tracep->declBit(c+759,"lsr7r", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBit(c+760,"rls_int", false,-1);
    tracep->declBit(c+761,"rda_int", false,-1);
    tracep->declBit(c+762,"ti_int", false,-1);
    tracep->declBit(c+763,"thre_int", false,-1);
    tracep->declBit(c+764,"ms_int", false,-1);
    tracep->declBit(c+765,"tf_push", false,-1);
    tracep->declBit(c+766,"rf_pop", false,-1);
    tracep->declBus(c+1463,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+767,"rf_error_bit", false,-1);
    tracep->declBit(c+745,"rf_overrun", false,-1);
    tracep->declBit(c+768,"rf_push_pulse", false,-1);
    tracep->declBus(c+769,"rf_count", false,-1, 4,0);
    tracep->declBus(c+770,"tf_count", false,-1, 4,0);
    tracep->declBus(c+771,"tstate", false,-1, 2,0);
    tracep->declBus(c+772,"rstate", false,-1, 3,0);
    tracep->declBus(c+773,"counter_t", false,-1, 9,0);
    tracep->declBit(c+774,"thre_set_en", false,-1);
    tracep->declBus(c+775,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+776,"block_value", false,-1, 7,0);
    tracep->declBit(c+777,"serial_out", false,-1);
    tracep->declBit(c+778,"serial_in", false,-1);
    tracep->declBit(c+104,"lsr_mask_condition", false,-1);
    tracep->declBit(c+105,"iir_read", false,-1);
    tracep->declBit(c+106,"msr_read", false,-1);
    tracep->declBit(c+107,"fifo_read", false,-1);
    tracep->declBit(c+108,"fifo_write", false,-1);
    tracep->declBus(c+779,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+780,"lsr0_d", false,-1);
    tracep->declBit(c+781,"lsr1_d", false,-1);
    tracep->declBit(c+782,"lsr2_d", false,-1);
    tracep->declBit(c+783,"lsr3_d", false,-1);
    tracep->declBit(c+784,"lsr4_d", false,-1);
    tracep->declBit(c+785,"lsr5_d", false,-1);
    tracep->declBit(c+786,"lsr6_d", false,-1);
    tracep->declBit(c+787,"lsr7_d", false,-1);
    tracep->declBit(c+788,"rls_int_d", false,-1);
    tracep->declBit(c+789,"thre_int_d", false,-1);
    tracep->declBit(c+790,"ms_int_d", false,-1);
    tracep->declBit(c+791,"ti_int_d", false,-1);
    tracep->declBit(c+792,"rda_int_d", false,-1);
    tracep->declBit(c+793,"rls_int_rise", false,-1);
    tracep->declBit(c+794,"thre_int_rise", false,-1);
    tracep->declBit(c+795,"ms_int_rise", false,-1);
    tracep->declBit(c+796,"ti_int_rise", false,-1);
    tracep->declBit(c+797,"rda_int_rise", false,-1);
    tracep->declBit(c+798,"rls_int_pnd", false,-1);
    tracep->declBit(c+799,"rda_int_pnd", false,-1);
    tracep->declBit(c+800,"thre_int_pnd", false,-1);
    tracep->declBit(c+801,"ms_int_pnd", false,-1);
    tracep->declBit(c+802,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1758,"Tp", false,-1, 31,0);
    tracep->declBus(c+1758,"width", false,-1, 31,0);
    tracep->declBus(c+1725,"init_value", false,-1, 0,0);
    tracep->declBit(c+1410,"rst_i", false,-1);
    tracep->declBit(c+1409,"clk_i", false,-1);
    tracep->declBit(c+1497,"stage1_rst_i", false,-1);
    tracep->declBit(c+1500,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1429,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+721,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+803,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1410,"wb_rst_i", false,-1);
    tracep->declBus(c+726,"lcr", false,-1, 7,0);
    tracep->declBit(c+766,"rf_pop", false,-1);
    tracep->declBit(c+778,"srx_pad_i", false,-1);
    tracep->declBit(c+720,"enable", false,-1);
    tracep->declBit(c+735,"rx_reset", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBus(c+773,"counter_t", false,-1, 9,0);
    tracep->declBus(c+769,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1463,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+745,"rf_overrun", false,-1);
    tracep->declBit(c+767,"rf_error_bit", false,-1);
    tracep->declBus(c+772,"rstate", false,-1, 3,0);
    tracep->declBit(c+768,"rf_push_pulse", false,-1);
    tracep->declBus(c+804,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+805,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+806,"rshift", false,-1, 7,0);
    tracep->declBit(c+807,"rparity", false,-1);
    tracep->declBit(c+808,"rparity_error", false,-1);
    tracep->declBit(c+809,"rframing_error", false,-1);
    tracep->declBit(c+810,"rbit_in", false,-1);
    tracep->declBit(c+811,"rparity_xor", false,-1);
    tracep->declBus(c+812,"counter_b", false,-1, 7,0);
    tracep->declBit(c+813,"rf_push_q", false,-1);
    tracep->declBus(c+814,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+815,"rf_push", false,-1);
    tracep->declBit(c+816,"break_error", false,-1);
    tracep->declBit(c+817,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+818,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+819,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+820,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1501,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1743,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1742,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1738,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1740,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1739,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1741,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1737,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1745,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1746,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1759,"sr_push", false,-1, 3,0);
    tracep->declBus(c+821,"toc_value", false,-1, 9,0);
    tracep->declBus(c+822,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1760,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1761,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1732,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1723,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1410,"wb_rst_i", false,-1);
    tracep->declBit(c+768,"push", false,-1);
    tracep->declBit(c+766,"pop", false,-1);
    tracep->declBus(c+814,"data_in", false,-1, 10,0);
    tracep->declBit(c+735,"fifo_reset", false,-1);
    tracep->declBit(c+103,"reset_status", false,-1);
    tracep->declBus(c+1463,"data_out", false,-1, 10,0);
    tracep->declBit(c+745,"overrun", false,-1);
    tracep->declBus(c+769,"count", false,-1, 4,0);
    tracep->declBit(c+767,"error_bit", false,-1);
    tracep->declBus(c+1464,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+823+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+839,"top", false,-1, 3,0);
    tracep->declBus(c+840,"bottom", false,-1, 3,0);
    tracep->declBus(c+841,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+842,"word0", false,-1, 2,0);
    tracep->declBus(c+843,"word1", false,-1, 2,0);
    tracep->declBus(c+844,"word2", false,-1, 2,0);
    tracep->declBus(c+845,"word3", false,-1, 2,0);
    tracep->declBus(c+846,"word4", false,-1, 2,0);
    tracep->declBus(c+847,"word5", false,-1, 2,0);
    tracep->declBus(c+848,"word6", false,-1, 2,0);
    tracep->declBus(c+849,"word7", false,-1, 2,0);
    tracep->declBus(c+850,"word8", false,-1, 2,0);
    tracep->declBus(c+851,"word9", false,-1, 2,0);
    tracep->declBus(c+852,"word10", false,-1, 2,0);
    tracep->declBus(c+853,"word11", false,-1, 2,0);
    tracep->declBus(c+854,"word12", false,-1, 2,0);
    tracep->declBus(c+855,"word13", false,-1, 2,0);
    tracep->declBus(c+856,"word14", false,-1, 2,0);
    tracep->declBus(c+857,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1732,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1478,"data_width", false,-1, 31,0);
    tracep->declBus(c+1761,"depth", false,-1, 31,0);
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+768,"we", false,-1);
    tracep->declBus(c+839,"a", false,-1, 3,0);
    tracep->declBus(c+840,"dpra", false,-1, 3,0);
    tracep->declBus(c+858,"di", false,-1, 7,0);
    tracep->declBus(c+1464,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+526+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1410,"wb_rst_i", false,-1);
    tracep->declBus(c+726,"lcr", false,-1, 7,0);
    tracep->declBit(c+765,"tf_push", false,-1);
    tracep->declBus(c+1395,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+720,"enable", false,-1);
    tracep->declBit(c+736,"tx_reset", false,-1);
    tracep->declBit(c+103,"lsr_mask", false,-1);
    tracep->declBit(c+777,"stx_pad_o", false,-1);
    tracep->declBus(c+771,"tstate", false,-1, 2,0);
    tracep->declBus(c+770,"tf_count", false,-1, 4,0);
    tracep->declBus(c+859,"counter", false,-1, 4,0);
    tracep->declBus(c+860,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+861,"shift_out", false,-1, 6,0);
    tracep->declBit(c+862,"stx_o_tmp", false,-1);
    tracep->declBit(c+863,"parity_xor", false,-1);
    tracep->declBit(c+864,"tf_pop", false,-1);
    tracep->declBit(c+865,"bit_out", false,-1);
    tracep->declBus(c+1395,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1465,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+866,"tf_overrun", false,-1);
    tracep->declBus(c+1479,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1476,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1480,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1481,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1482,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1762,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1478,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1761,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1732,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1723,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+1410,"wb_rst_i", false,-1);
    tracep->declBit(c+765,"push", false,-1);
    tracep->declBit(c+864,"pop", false,-1);
    tracep->declBus(c+1395,"data_in", false,-1, 7,0);
    tracep->declBit(c+736,"fifo_reset", false,-1);
    tracep->declBit(c+103,"reset_status", false,-1);
    tracep->declBus(c+1465,"data_out", false,-1, 7,0);
    tracep->declBit(c+866,"overrun", false,-1);
    tracep->declBus(c+770,"count", false,-1, 4,0);
    tracep->declBus(c+867,"top", false,-1, 3,0);
    tracep->declBus(c+868,"bottom", false,-1, 3,0);
    tracep->declBus(c+869,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1732,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1478,"data_width", false,-1, 31,0);
    tracep->declBus(c+1761,"depth", false,-1, 31,0);
    tracep->declBit(c+1409,"clk", false,-1);
    tracep->declBit(c+765,"we", false,-1);
    tracep->declBus(c+867,"a", false,-1, 3,0);
    tracep->declBus(c+868,"dpra", false,-1, 3,0);
    tracep->declBus(c+1395,"di", false,-1, 7,0);
    tracep->declBus(c+1465,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+542+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBit(c+1363,"auto_in_psel", false,-1);
    tracep->declBit(c+1364,"auto_in_penable", false,-1);
    tracep->declBit(c+1107,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1476,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+613,"auto_in_pready", false,-1);
    tracep->declBit(c+1498,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1499,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1423,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1424,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1425,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1426,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1427,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1428,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1409,"clock", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1392,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1363,"in_psel", false,-1);
    tracep->declBit(c+1364,"in_penable", false,-1);
    tracep->declBus(c+1476,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1107,"in_pwrite", false,-1);
    tracep->declBus(c+1108,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1109,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+613,"in_pready", false,-1);
    tracep->declBus(c+1499,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1498,"in_pslverr", false,-1);
    tracep->declBus(c+1423,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1424,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1425,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1426,"vga_hsync", false,-1);
    tracep->declBit(c+1427,"vga_vsync", false,-1);
    tracep->declBit(c+1428,"vga_valid", false,-1);
    tracep->declBus(c+870,"h_addr", false,-1, 9,0);
    tracep->declBus(c+558,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1466,"vga_data", false,-1, 23,0);
    tracep->declBus(c+1396,"vga_addr", false,-1, 31,0);
    tracep->declBit(c+613,"ready", false,-1);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1409,"pclk", false,-1);
    tracep->declBit(c+1410,"reset", false,-1);
    tracep->declBus(c+1466,"vga_data", false,-1, 23,0);
    tracep->declBus(c+870,"h_addr", false,-1, 9,0);
    tracep->declBus(c+558,"v_addr", false,-1, 9,0);
    tracep->declBit(c+1426,"hsync", false,-1);
    tracep->declBit(c+1427,"vsync", false,-1);
    tracep->declBit(c+1428,"valid", false,-1);
    tracep->declBus(c+1423,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1424,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1425,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1763,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1764,"h_active", false,-1, 31,0);
    tracep->declBus(c+1765,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1766,"h_total", false,-1, 31,0);
    tracep->declBus(c+1731,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1767,"v_active", false,-1, 31,0);
    tracep->declBus(c+1768,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1769,"v_total", false,-1, 31,0);
    tracep->declBus(c+871,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+559,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+872,"h_valid", false,-1);
    tracep->declBit(c+560,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+606,"sck", false,-1);
    tracep->declBit(c+1324,"ss", false,-1);
    tracep->declBit(c+1312,"mosi", false,-1);
    tracep->declBit(c+1101,"miso", false,-1);
    tracep->declBus(c+1102,"shift_in", false,-1, 7,0);
    tracep->declBus(c+1103,"bit_count", false,-1, 4,0);
    tracep->declBit(c+1467,"active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+606,"sck", false,-1);
    tracep->declBit(c+1325,"ss", false,-1);
    tracep->declBit(c+1312,"mosi", false,-1);
    tracep->declBit(c+1468,"miso", false,-1);
    tracep->declBit(c+1325,"reset", false,-1);
    tracep->declBus(c+1095,"state", false,-1, 2,0);
    tracep->declBus(c+1096,"counter", false,-1, 7,0);
    tracep->declBus(c+1097,"cmd", false,-1, 7,0);
    tracep->declBus(c+1098,"addr", false,-1, 23,0);
    tracep->declBus(c+1099,"data", false,-1, 31,0);
    tracep->declBit(c+1100,"ren", false,-1);
    tracep->declBus(c+1469,"rdata", false,-1, 31,0);
    tracep->declBus(c+1470,"raddr", false,-1, 31,0);
    tracep->declBus(c+1104,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+606,"clock", false,-1);
    tracep->declBit(c+1100,"valid", false,-1);
    tracep->declBus(c+1097,"cmd", false,-1, 7,0);
    tracep->declBus(c+1470,"addr", false,-1, 31,0);
    tracep->declBus(c+1469,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1432,"sck", false,-1);
    tracep->declBit(c+1397,"ce_n", false,-1);
    tracep->declBus(c+1433,"dio", false,-1, 3,0);
    tracep->declBus(c+596,"dio_out", false,-1, 3,0);
    tracep->declBus(c+597,"dio_oe", false,-1, 3,0);
    tracep->declBus(c+1433,"dio_in", false,-1, 3,0);
    tracep->declBus(c+1531,"STATE_IDLE", false,-1, 31,0);
    tracep->declBus(c+1758,"STATE_CMD", false,-1, 31,0);
    tracep->declBus(c+1731,"STATE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1770,"STATE_DUMMY", false,-1, 31,0);
    tracep->declBus(c+1732,"STATE_READ", false,-1, 31,0);
    tracep->declBus(c+1723,"STATE_WRITE", false,-1, 31,0);
    tracep->declBus(c+598,"state", false,-1, 2,0);
    tracep->declBus(c+1471,"next_state", false,-1, 2,0);
    tracep->declBus(c+599,"counter", false,-1, 7,0);
    tracep->declBus(c+600,"cmd_reg", false,-1, 7,0);
    tracep->declBus(c+601,"addr_reg", false,-1, 23,0);
    tracep->declBus(c+602,"data_byte_counter", false,-1, 31,0);
    tracep->declBit(c+603,"is_read_op", false,-1);
    tracep->declBit(c+604,"is_write_op", false,-1);
    tracep->declBus(c+605,"current_byte", false,-1, 7,0);
    tracep->declBit(c+1472,"qspi_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1434,"clk", false,-1);
    tracep->declBit(c+1313,"cke", false,-1);
    tracep->declBit(c+607,"cs", false,-1);
    tracep->declBit(c+608,"ras", false,-1);
    tracep->declBit(c+609,"cas", false,-1);
    tracep->declBit(c+610,"we", false,-1);
    tracep->declBus(c+1435,"a", false,-1, 13,0);
    tracep->declBus(c+1314,"ba", false,-1, 1,0);
    tracep->declBus(c+1315,"dqm", false,-1, 3,0);
    tracep->declBus(c+1329,"dq", false,-1, 31,0);
    tracep->declBit(c+874,"cs_0", false,-1);
    tracep->declBit(c+875,"ras_0", false,-1);
    tracep->declBit(c+876,"cas_0", false,-1);
    tracep->declBit(c+877,"we_0", false,-1);
    tracep->declBit(c+878,"cs_1", false,-1);
    tracep->declBit(c+879,"ras_1", false,-1);
    tracep->declBit(c+880,"cas_1", false,-1);
    tracep->declBit(c+881,"we_1", false,-1);
    tracep->pushNamePrefix("high_addr ");
    tracep->declBit(c+1434,"clk", false,-1);
    tracep->declBit(c+1313,"cke", false,-1);
    tracep->declBit(c+878,"cs", false,-1);
    tracep->declBit(c+879,"ras", false,-1);
    tracep->declBit(c+880,"cas", false,-1);
    tracep->declBit(c+881,"we", false,-1);
    tracep->declBus(c+1318,"a", false,-1, 12,0);
    tracep->declBus(c+1314,"ba", false,-1, 1,0);
    tracep->declBus(c+1315,"dqm", false,-1, 3,0);
    tracep->declBus(c+1329,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1434,"clk", false,-1);
    tracep->declBit(c+1313,"cke", false,-1);
    tracep->declBit(c+878,"cs", false,-1);
    tracep->declBit(c+879,"ras", false,-1);
    tracep->declBit(c+880,"cas", false,-1);
    tracep->declBit(c+881,"we", false,-1);
    tracep->declBus(c+1318,"a", false,-1, 12,0);
    tracep->declBus(c+1314,"ba", false,-1, 1,0);
    tracep->declBus(c+1326,"dqm", false,-1, 1,0);
    tracep->declBus(c+1330,"dq", false,-1, 15,0);
    tracep->declBus(c+1771,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1738,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1739,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1740,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1501,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1035,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1036,"bl", false,-1, 2,0);
    tracep->declBus(c+1407,"command", false,-1, 3,0);
    tracep->declBus(c+1037,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1038,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1327,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1039,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1331,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1040,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1041+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1045,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1046,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1772,"state", false,-1, 2,0);
    tracep->declBit(c+1047,"write_brust", false,-1);
    tracep->declBit(c+1048,"read_burst", false,-1);
    tracep->declBus(c+1049,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1434,"clk", false,-1);
    tracep->declBit(c+1313,"cke", false,-1);
    tracep->declBit(c+878,"cs", false,-1);
    tracep->declBit(c+879,"ras", false,-1);
    tracep->declBit(c+880,"cas", false,-1);
    tracep->declBit(c+881,"we", false,-1);
    tracep->declBus(c+1318,"a", false,-1, 12,0);
    tracep->declBus(c+1314,"ba", false,-1, 1,0);
    tracep->declBus(c+1328,"dqm", false,-1, 1,0);
    tracep->declBus(c+1332,"dq", false,-1, 15,0);
    tracep->declBus(c+1771,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1738,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1739,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1740,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1501,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1050,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1051,"bl", false,-1, 2,0);
    tracep->declBus(c+1407,"command", false,-1, 3,0);
    tracep->declBus(c+1052,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1053,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1327,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1054,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1333,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1055,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1056+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1060,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1061,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1773,"state", false,-1, 2,0);
    tracep->declBit(c+1062,"write_brust", false,-1);
    tracep->declBit(c+1063,"read_burst", false,-1);
    tracep->declBus(c+1064,"dout", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("low_addr ");
    tracep->declBit(c+1434,"clk", false,-1);
    tracep->declBit(c+1313,"cke", false,-1);
    tracep->declBit(c+874,"cs", false,-1);
    tracep->declBit(c+875,"ras", false,-1);
    tracep->declBit(c+876,"cas", false,-1);
    tracep->declBit(c+877,"we", false,-1);
    tracep->declBus(c+1318,"a", false,-1, 12,0);
    tracep->declBus(c+1314,"ba", false,-1, 1,0);
    tracep->declBus(c+1315,"dqm", false,-1, 3,0);
    tracep->declBus(c+1329,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u1_high ");
    tracep->declBit(c+1434,"clk", false,-1);
    tracep->declBit(c+1313,"cke", false,-1);
    tracep->declBit(c+874,"cs", false,-1);
    tracep->declBit(c+875,"ras", false,-1);
    tracep->declBit(c+876,"cas", false,-1);
    tracep->declBit(c+877,"we", false,-1);
    tracep->declBus(c+1318,"a", false,-1, 12,0);
    tracep->declBus(c+1314,"ba", false,-1, 1,0);
    tracep->declBus(c+1326,"dqm", false,-1, 1,0);
    tracep->declBus(c+1330,"dq", false,-1, 15,0);
    tracep->declBus(c+1771,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1738,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1739,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1740,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1501,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1065,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1066,"bl", false,-1, 2,0);
    tracep->declBus(c+1408,"command", false,-1, 3,0);
    tracep->declBus(c+1067,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1068,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1327,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1069,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1334,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1070,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1071+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1075,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1076,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1774,"state", false,-1, 2,0);
    tracep->declBit(c+1077,"write_brust", false,-1);
    tracep->declBit(c+1078,"read_burst", false,-1);
    tracep->declBus(c+1079,"dout", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_low ");
    tracep->declBit(c+1434,"clk", false,-1);
    tracep->declBit(c+1313,"cke", false,-1);
    tracep->declBit(c+874,"cs", false,-1);
    tracep->declBit(c+875,"ras", false,-1);
    tracep->declBit(c+876,"cas", false,-1);
    tracep->declBit(c+877,"we", false,-1);
    tracep->declBus(c+1318,"a", false,-1, 12,0);
    tracep->declBus(c+1314,"ba", false,-1, 1,0);
    tracep->declBus(c+1328,"dqm", false,-1, 1,0);
    tracep->declBus(c+1332,"dq", false,-1, 15,0);
    tracep->declBus(c+1771,"BANKSIZE", false,-1, 31,0);
    tracep->declBus(c+1738,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1739,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1740,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1501,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1080,"cas_la", false,-1, 2,0);
    tracep->declBus(c+1081,"bl", false,-1, 2,0);
    tracep->declBus(c+1408,"command", false,-1, 3,0);
    tracep->declBus(c+1082,"mode_register", false,-1, 12,0);
    tracep->declBus(c+1083,"r_ba", false,-1, 1,0);
    tracep->declBus(c+1327,"col_addr", false,-1, 9,0);
    tracep->declBus(c+1084,"r_col_addr", false,-1, 9,0);
    tracep->declBus(c+1335,"bank_addr", false,-1, 21,0);
    tracep->declBus(c+1085,"r_bank_addr", false,-1, 21,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1086+i*1,"bank_active_raw", true,(i+0), 11,0);
    }
    tracep->declBus(c+1090,"cas_cnt", false,-1, 2,0);
    tracep->declBus(c+1091,"bl_cnt", false,-1, 2,0);
    tracep->declBus(c+1775,"state", false,-1, 2,0);
    tracep->declBit(c+1092,"write_brust", false,-1);
    tracep->declBit(c+1093,"read_burst", false,-1);
    tracep->declBus(c+1094,"dout", false,-1, 15,0);
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
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata),32);
    bufp->fullSData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__request_counter),10);
    bufp->fullIData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter),32);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+117,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+118,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+119,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+120,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+121,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+122,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+123,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+124,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+125,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+126,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+128,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+129,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+130,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+131,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+132,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+140,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+146,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+148,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+149,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+152,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+153,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+154,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+155,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bvalid));
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid),4);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bresp),2);
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+225,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+226,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+227,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+228,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+232,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+234,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+274,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+275,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+288,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+289,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+290,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))),16);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+361,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+377,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+393,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+397,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+401,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+405,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+413,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+417,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+421,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+425,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+429,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+433,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+437,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+441,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+445,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+449,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+453,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+477,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_r),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__old_data),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__data_asic),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullSData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+519,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullSData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+562,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)))));
    bufp->fullBit(oldp+566,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+567,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+568,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+569,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+570,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+571,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+572,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+573,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+574,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+575,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+576,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+577,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+578,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+579,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+580,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+581,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+582,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+583,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+584,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+585,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+586,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+587,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+588,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+589,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+590,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+591,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+592,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+593,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+594,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+595,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_bid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out),4);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe),4);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_reg),8);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_reg),24);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_byte_counter),32);
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_read_op));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__psram__DOT__is_write_op));
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__psram__DOT__current_byte),8);
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+607,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+608,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+609,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+610,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__ready));
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__rdata),32);
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr));
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullSData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata),32);
    bufp->fullCData(oldp+621,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata)),4);
    bufp->fullCData(oldp+622,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 4U))),4);
    bufp->fullCData(oldp+623,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 8U))),4);
    bufp->fullCData(oldp+624,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+625,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+626,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+627,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+628,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_rdata 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+631,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+632,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+635,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+636,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+640,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+644,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state_next),4);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__done));
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullQData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),64);
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
    bufp->fullIData(oldp+679,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                                       >> 1U))),32);
    bufp->fullQData(oldp+680,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
                               >> 1U)),64);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),8);
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flag));
    bufp->fullSData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullWData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+692,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+693,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+694,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+695,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+696,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+697,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+698,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+706,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+708,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+709,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+712,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+716,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+717,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+719,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+737,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+738,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+739,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+740,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+741,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+742,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+743,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+746,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+747,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+748,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+767,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+774,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+793,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+794,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+795,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+796,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+797,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+816,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+817,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+818,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+819,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+820,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+822,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+841,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+858,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+869,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+870,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+873,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pslverr)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    bufp->fullBit(oldp+874,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 3U)))));
    bufp->fullBit(oldp+875,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+876,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+877,((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+878,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+879,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U)))));
    bufp->fullBit(oldp+880,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U)))));
    bufp->fullBit(oldp+881,((1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                       >> 0x1aU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awvalid));
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_awsize),3);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wvalid));
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wdata),32);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast));
    bufp->fullBit(oldp+889,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready))));
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ifu_to_idu),32);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ifu_to_idu),32);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_ifu_to_idu));
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr),32);
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__alu_result),32);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+906,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                ? 0U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+909,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu))))),4);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready));
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_araddr),32);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arsize),3);
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arvalid));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_rready));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+928,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr),5);
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write));
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+934,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+935,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wmask_exu_to_lsu),4);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullIData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__ar_state));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_state));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__aw_state));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_state));
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__araddr),32);
    bufp->fullIData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__awaddr),32);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata),32);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wstrb),4);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_waddr));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_wdata));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_rdata));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_raddr));
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__rdata_counter),5);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wdata_counter),5);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__w_delay),5);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__r_delay),5);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR),5);
    bufp->fullBit(oldp+981,((1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__LFSR))));
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__write_box),2);
    bufp->fullQData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__time_counter),64);
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+996,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+997,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__rs1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc) 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+999,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1002,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst),32);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),3);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__receive_counter),3);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_flag));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_flag));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_check_flag));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1026,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+1027,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x1fU))) 
                                 << 8U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x18U))),32);
    bufp->fullIData(oldp+1028,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x17U)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x10U)))),32);
    bufp->fullIData(oldp+1029,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0xfU)))) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+1030,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+1031,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                >> 0x18U)),32);
    bufp->fullIData(oldp+1032,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x10U))),32);
    bufp->fullIData(oldp+1033,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata 
                                         >> 8U))),32);
    bufp->fullIData(oldp+1034,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullCData(oldp+1035,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1036,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1050,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1051,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1065,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1066,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__mode_register),13);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_ba),2);
    bufp->fullSData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__write_brust));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__read_burst));
    bufp->fullSData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__dout),16);
    bufp->fullCData(oldp+1080,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register) 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1081,((7U & ((IData)(1U) << 
                                      (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register))))),3);
    bufp->fullSData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__mode_register),13);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_ba),2);
    bufp->fullSData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_col_addr),10);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__r_bank_addr),22);
    bufp->fullSData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[0]),12);
    bufp->fullSData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[1]),12);
    bufp->fullSData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[2]),12);
    bufp->fullSData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_active_raw[3]),12);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__cas_cnt),3);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bl_cnt),3);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__write_brust));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__read_burst));
    bufp->fullSData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__dout),16);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1100,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__shift_in),8);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_count),5);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1106,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1118,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [0xfU]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1236,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1237,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1238,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1239,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1244,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1245,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1247,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1253,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1256,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1276,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1280,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1281,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1285,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1286,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1290,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__awready_o_a));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__wready_o_a));
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bresp_o_a),2);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bid_o_a),4);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_Arbiter__DOT__bvalid_o_a));
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1317,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullSData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1324,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1326,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullSData(oldp+1327,((0x3ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),10);
    bufp->fullCData(oldp+1328,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1330,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullSData(oldp+1332,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__bank_addr),22);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__bank_addr),22);
    bufp->fullCData(oldp+1336,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1337,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+1348,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp))),4);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+1354,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_write));
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__wmask_tmp),8);
    bufp->fullCData(oldp+1359,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+1360,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1361,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1365,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1366,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1372,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1380,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1383,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1384,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1389,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 2U))),13);
    bufp->fullSData(oldp+1390,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1391,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1392,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1393,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1396,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__command),4);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__command),4);
    bufp->fullBit(oldp+1409,(vlSelf->clock));
    bufp->fullBit(oldp+1410,(vlSelf->reset));
    bufp->fullSData(oldp+1411,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1412,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1413,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1414,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1415,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1416,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1417,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1418,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1419,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1420,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1421,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1422,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1423,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1424,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1425,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1426,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1427,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1428,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1429,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1430,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1431,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullCData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1434,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1435,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullBit(oldp+1436,((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
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
    bufp->fullIData(oldp+1437,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullCData(oldp+1438,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                     ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                              ? 0U : 
                                             ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_counter)
                                               ? 2U
                                               : 4U)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready)
                                                  ? 0U
                                                  : 2U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                         ? ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                             | (((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                                | (((~ 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
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
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6))))))))
                                             ? 1U : 4U)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)
                                             ? 1U : 0U))))),3);
    bufp->fullBit(oldp+1439,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1440,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1441,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1442,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1443,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1445,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_wlast)))));
    bufp->fullBit(oldp+1446,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0))));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst_n));
    bufp->fullBit(oldp+1448,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__ar_switch)
                                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready)))));
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rgefile__DOT__rf
                               [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1451,(((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__inst))
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
    bufp->fullCData(oldp+1452,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state))
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
    bufp->fullBit(oldp+1453,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1454,((0xfU & vlSelf->__VdfgTmp_hc20ef241__0)),4);
    bufp->fullBit(oldp+1455,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1458,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullCData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),4);
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1463,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__active));
    bufp->fullBit(oldp+1468,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1470,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next_state),3);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qspi_flag));
    bufp->fullIData(oldp+1473,(0x226U),32);
    bufp->fullIData(oldp+1474,(0x64U),32);
    bufp->fullIData(oldp+1475,(0x100U),32);
    bufp->fullCData(oldp+1476,(1U),3);
    bufp->fullIData(oldp+1477,(0x580U),32);
    bufp->fullIData(oldp+1478,(8U),32);
    bufp->fullCData(oldp+1479,(0U),3);
    bufp->fullCData(oldp+1480,(2U),3);
    bufp->fullCData(oldp+1481,(3U),3);
    bufp->fullCData(oldp+1482,(4U),3);
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_pslverr));
    bufp->fullIData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_paddr),32);
    bufp->fullIData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_pwdata),32);
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_in_pstrb),4);
    bufp->fullIData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_paddr),32);
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_psel));
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_penable));
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pprot),3);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pwrite));
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pwdata),32);
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_out_pstrb),4);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag_request));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__flag_wait));
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullBit(oldp+1497,(0U));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1500,(1U));
    bufp->fullCData(oldp+1501,(0U),4);
    bufp->fullCData(oldp+1502,(0U),8);
    bufp->fullCData(oldp+1503,(0U),2);
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1505,(0U),32);
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless1));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless2));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless3));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__useless4));
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullIData(oldp+1531,(0U),32);
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__b_state));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__wvalid));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__flag_write));
    bufp->fullCData(oldp+1535,(1U),2);
    bufp->fullCData(oldp+1536,(2U),2);
    bufp->fullIData(oldp+1537,(0x20U),32);
    bufp->fullIData(oldp+1538,(4U),32);
    bufp->fullIData(oldp+1539,(0x79737978U),32);
    bufp->fullIData(oldp+1540,(0x17e3c19U),32);
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__lfsr_in));
    bufp->fullIData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lfsr_in));
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[0]),4);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[1]),4);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[2]),4);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[3]),4);
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[4]),4);
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[5]),4);
    bufp->fullCData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[6]),4);
    bufp->fullCData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[7]),4);
    bufp->fullCData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[8]),4);
    bufp->fullCData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[9]),4);
    bufp->fullCData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[10]),4);
    bufp->fullCData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[11]),4);
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[12]),4);
    bufp->fullCData(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[13]),4);
    bufp->fullCData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[14]),4);
    bufp->fullCData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[15]),4);
    bufp->fullCData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[16]),4);
    bufp->fullCData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[17]),4);
    bufp->fullCData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[18]),4);
    bufp->fullCData(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[19]),4);
    bufp->fullCData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[20]),4);
    bufp->fullCData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[21]),4);
    bufp->fullCData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[22]),4);
    bufp->fullCData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[23]),4);
    bufp->fullCData(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[24]),4);
    bufp->fullCData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[25]),4);
    bufp->fullCData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[26]),4);
    bufp->fullCData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[27]),4);
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[28]),4);
    bufp->fullCData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[29]),4);
    bufp->fullCData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[30]),4);
    bufp->fullCData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wstrb_buffer[31]),4);
    bufp->fullIData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullCData(oldp+1722,(3U),2);
    bufp->fullIData(oldp+1723,(5U),32);
    bufp->fullBit(oldp+1724,(0U));
    bufp->fullBit(oldp+1725,(1U));
    bufp->fullCData(oldp+1726,(0x1bU),8);
    bufp->fullCData(oldp+1727,(0xebU),8);
    bufp->fullCData(oldp+1728,(0x38U),8);
    bufp->fullIData(oldp+1729,(0x18U),32);
    bufp->fullIData(oldp+1730,(9U),32);
    bufp->fullIData(oldp+1731,(2U),32);
    bufp->fullIData(oldp+1732,(4U),32);
    bufp->fullIData(oldp+1733,(0xdU),32);
    bufp->fullIData(oldp+1734,(0x2000U),32);
    bufp->fullIData(oldp+1735,(0x2710U),32);
    bufp->fullIData(oldp+1736,(0x30cU),32);
    bufp->fullCData(oldp+1737,(7U),4);
    bufp->fullCData(oldp+1738,(3U),4);
    bufp->fullCData(oldp+1739,(5U),4);
    bufp->fullCData(oldp+1740,(4U),4);
    bufp->fullCData(oldp+1741,(6U),4);
    bufp->fullCData(oldp+1742,(2U),4);
    bufp->fullCData(oldp+1743,(1U),4);
    bufp->fullSData(oldp+1744,(0x20U),13);
    bufp->fullCData(oldp+1745,(8U),4);
    bufp->fullCData(oldp+1746,(9U),4);
    bufp->fullIData(oldp+1747,(0xaU),32);
    bufp->fullIData(oldp+1748,(6U),32);
    bufp->fullIData(oldp+1749,(0x11U),32);
    bufp->fullIData(oldp+1750,(0x30000000U),32);
    bufp->fullIData(oldp+1751,(0x3fffffffU),32);
    bufp->fullCData(oldp+1752,(4U),5);
    bufp->fullCData(oldp+1753,(0U),5);
    bufp->fullCData(oldp+1754,(0x10U),5);
    bufp->fullCData(oldp+1755,(0x14U),5);
    bufp->fullCData(oldp+1756,(0x18U),5);
    bufp->fullIData(oldp+1757,(0x3000000U),32);
    bufp->fullIData(oldp+1758,(1U),32);
    bufp->fullCData(oldp+1759,(0xaU),4);
    bufp->fullIData(oldp+1760,(0xbU),32);
    bufp->fullIData(oldp+1761,(0x10U),32);
    bufp->fullCData(oldp+1762,(5U),3);
    bufp->fullIData(oldp+1763,(0x60U),32);
    bufp->fullIData(oldp+1764,(0x90U),32);
    bufp->fullIData(oldp+1765,(0x310U),32);
    bufp->fullIData(oldp+1766,(0x320U),32);
    bufp->fullIData(oldp+1767,(0x23U),32);
    bufp->fullIData(oldp+1768,(0x203U),32);
    bufp->fullIData(oldp+1769,(0x20dU),32);
    bufp->fullIData(oldp+1770,(3U),32);
    bufp->fullIData(oldp+1771,(0x400000U),32);
    bufp->fullCData(oldp+1772,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__high_addr__DOT__u1_low__DOT__state),3);
    bufp->fullCData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_high__DOT__state),3);
    bufp->fullCData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__low_addr__DOT__u1_low__DOT__state),3);
}
