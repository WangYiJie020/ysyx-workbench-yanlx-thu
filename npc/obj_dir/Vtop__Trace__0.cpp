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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__ifu_rdata),32);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__ready_wbu_to_ifu));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pc_ifu_to_idu),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__valid_ifu_to_idu));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__ready_ifu_to_idu));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__ifu_arvalid));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__ifu_arready));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__ifu_rresp));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__ifu_rvalid));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__ifu_rready));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__useless1));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__useless2));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__useless3));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__useless4));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__valid_idu_to_exu));
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__Data_Mem__DOT__LFSR),5);
        bufp->chgBit(oldp+16,((1U & VL_REDXOR_8(vlSelf->top__DOT__Data_Mem__DOT__LFSR))));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__IDU__DOT__current_state),2);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__IFU__DOT__current_state),3);
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__Inst_Mem__DOT__ar_state));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__Inst_Mem__DOT__r_state));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__Inst_Mem__DOT__aw_state));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__Inst_Mem__DOT__w_state));
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__Inst_Mem__DOT__araddr),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__Inst_Mem__DOT__awaddr),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__Inst_Mem__DOT__wdata),32);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__Inst_Mem__DOT__wstrb),8);
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__Inst_Mem__DOT__flag_waddr));
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__Inst_Mem__DOT__flag_wdata));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__Inst_Mem__DOT__flag_rdata));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__Inst_Mem__DOT__flag_raddr));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__Inst_Mem__DOT__flag_write));
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter),5);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter),5);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__Inst_Mem__DOT__LFSR),5);
        bufp->chgBit(oldp+35,((1U & VL_REDXOR_8(vlSelf->top__DOT__Inst_Mem__DOT__LFSR))));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__LSU__DOT__flag));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__valid_wbu_to_ifu));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__ready_idu_to_exu));
        bufp->chgIData(oldp+40,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                                  ? vlSelf->top__DOT__WBU__DOT__mem_data
                                  : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__waddr),5);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__reg_write));
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__EXU__DOT__rs1),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__EXU__DOT__rs2),32);
        bufp->chgIData(oldp+46,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                                 | vlSelf->top__DOT__EXU__DOT__rs1)),32);
        bufp->chgIData(oldp+47,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__MemRead_exu_to_lsu));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__wb_src_exu_to_lsu));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__csr_write_exu_to_lsu));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__reg_write_exu_to_lsu));
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__valid_exu_to_lsu));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__ready_exu_to_lsu));
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__LSU__DOT__rs1),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__lsu_rdata),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__LSU__DOT__rmask),3);
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__valid_lsu_to_wbu));
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__ready_lsu_to_wbu));
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__lsu_arvalid));
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__lsu_arready));
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__lsu_rresp));
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__lsu_rvalid));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__lsu_rready));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__lsu_awvalid));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__lsu_awready));
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+80,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                           ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                              << (3U 
                                                  & vlSelf->top__DOT__LSU__DOT__alu_result))
                                           : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                               ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->top__DOT__LSU__DOT__alu_result))
                                               : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),8);
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__lsu_wvalid));
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__lsu_wready));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__lsu_bresp));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__lsu_bvalid));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__lsu_bready));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__Data_Mem__DOT__ar_state));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__Data_Mem__DOT__r_state));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__Data_Mem__DOT__aw_state));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__Data_Mem__DOT__w_state));
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__Data_Mem__DOT__araddr),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__Data_Mem__DOT__awaddr),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__Data_Mem__DOT__wdata),32);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__Data_Mem__DOT__wstrb),8);
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__Data_Mem__DOT__flag_waddr));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__Data_Mem__DOT__flag_wdata));
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__Data_Mem__DOT__flag_rdata));
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__Data_Mem__DOT__flag_raddr));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__Data_Mem__DOT__flag_write));
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__Data_Mem__DOT__rdata_counter),5);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__Data_Mem__DOT__wdata_counter),5);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__EXU__DOT__pc),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__EXU__DOT__imm),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__EXU__DOT__a_in_src));
        bufp->chgCData(oldp+105,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__EXU__DOT__a_in),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__EXU__DOT__b_in),32);
        bufp->chgIData(oldp+112,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                   ? vlSelf->top__DOT__EXU__DOT__rs1
                                   : vlSelf->top__DOT__EXU__DOT__pc)),32);
        bufp->chgIData(oldp+113,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                    ? vlSelf->top__DOT__EXU__DOT__rs1
                                    : vlSelf->top__DOT__EXU__DOT__pc) 
                                  + vlSelf->top__DOT__EXU__DOT__imm)),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
        bufp->chgBit(oldp+115,((1U & (~ (IData)((0U 
                                                 != vlSelf->top__DOT__EXU__DOT__alu_result))))));
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__EXU__DOT__current_state),2);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__EXU__DOT__next_state),2);
        bufp->chgIData(oldp+118,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__IDU__DOT__next_state),2);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__IFU__DOT__npc),32);
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__IFU__DOT__next_state),3);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__LSU__DOT__current_state),2);
        bufp->chgCData(oldp+123,(vlSelf->top__DOT__LSU__DOT__next_state),2);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__WBU__DOT__rs1),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__WBU__DOT__rmask),3);
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__WBU__DOT__wb_src));
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__WBU__DOT__current_state),2);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__WBU__DOT__next_state),2);
        bufp->chgCData(oldp+134,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
        bufp->chgIData(oldp+135,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                               >> 0x1fU))) 
                                   << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                             >> 0x18U))),32);
        bufp->chgIData(oldp+136,((((- (IData)((1U & 
                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 0x17U)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 0x10U)))),32);
        bufp->chgIData(oldp+137,((((- (IData)((1U & 
                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 0xfU)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 8U)))),32);
        bufp->chgIData(oldp+138,((((- (IData)((1U & 
                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
        bufp->chgIData(oldp+139,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                  >> 0x18U)),32);
        bufp->chgIData(oldp+140,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x10U))),32);
        bufp->chgIData(oldp+141,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                           >> 8U))),32);
        bufp->chgIData(oldp+142,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__Rgefile__DOT__rf
                                 [0xfU]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__csr_reg[0]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__csr_reg[1]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__csr_reg[2]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__csr_reg[3]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+256,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+257,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__IDU__DOT__pc),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__imm_idu_to_exu),32);
        bufp->chgBit(oldp+260,(vlSelf->top__DOT__a_in_src_idu_to_exu));
        bufp->chgCData(oldp+261,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
        bufp->chgCData(oldp+262,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
        bufp->chgCData(oldp+265,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
        bufp->chgBit(oldp+266,(vlSelf->top__DOT__MemRead_idu_to_exu));
        bufp->chgBit(oldp+267,(vlSelf->top__DOT__MemWrite_idu_to_exu));
        bufp->chgCData(oldp+268,(vlSelf->top__DOT__wmask_idu_to_exu),8);
        bufp->chgCData(oldp+269,(vlSelf->top__DOT__rmask_idu_to_exu),3);
        bufp->chgBit(oldp+270,(vlSelf->top__DOT__wb_src_idu_to_exu));
        bufp->chgBit(oldp+271,(vlSelf->top__DOT__csr_write_idu_to_exu));
        bufp->chgBit(oldp+272,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
        bufp->chgBit(oldp+273,(vlSelf->top__DOT__reg_write_idu_to_exu));
        bufp->chgCData(oldp+274,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__csr_write));
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__csr_wdata),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__IDU__DOT__inst),32);
        bufp->chgCData(oldp+278,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
        bufp->chgCData(oldp+279,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+280,((vlSelf->top__DOT__IDU__DOT__inst 
                                  >> 0x19U)),7);
    }
    bufp->chgBit(oldp+281,(vlSelf->clk));
    bufp->chgBit(oldp+282,(vlSelf->rst_n));
    bufp->chgIData(oldp+283,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->chgIData(oldp+284,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+285,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+286,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
