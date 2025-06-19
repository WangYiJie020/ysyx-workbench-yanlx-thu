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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__imm),32);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__b_in_src),2);
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__a_in_src));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__adder_a_src));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__reg_write));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__alu_op),4);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__pc_srcs));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__rs1),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__a_in),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__b_in),32);
        bufp->chgIData(oldp+10,(((8U & (IData)(vlSelf->top__DOT__alu_op))
                                  ? vlSelf->top__DOT__b_in
                                  : ((4U & (IData)(vlSelf->top__DOT__alu_op))
                                      ? ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                          ? ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                              ? vlSelf->top__DOT__b_in
                                              : ((0x1fU 
                                                  >= vlSelf->top__DOT__b_in)
                                                  ? 
                                                 (vlSelf->top__DOT__a_in 
                                                  >> vlSelf->top__DOT__b_in)
                                                  : 0U))
                                          : ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                              ? ((0x1fU 
                                                  >= vlSelf->top__DOT__b_in)
                                                  ? 
                                                 (vlSelf->top__DOT__a_in 
                                                  << vlSelf->top__DOT__b_in)
                                                  : 0U)
                                              : (vlSelf->top__DOT__a_in 
                                                 - vlSelf->top__DOT__b_in)))
                                      : ((2U & (IData)(vlSelf->top__DOT__alu_op))
                                          ? ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                              ? (vlSelf->top__DOT__a_in 
                                                 + vlSelf->top__DOT__b_in)
                                              : (vlSelf->top__DOT__a_in 
                                                 | vlSelf->top__DOT__b_in))
                                          : ((1U & (IData)(vlSelf->top__DOT__alu_op))
                                              ? (vlSelf->top__DOT__a_in 
                                                 & vlSelf->top__DOT__b_in)
                                              : vlSelf->top__DOT__b_in))))),32);
        bufp->chgBit(oldp+11,((1U & (~ (IData)((0U 
                                                != 
                                                ((8U 
                                                  & (IData)(vlSelf->top__DOT__alu_op))
                                                  ? vlSelf->top__DOT__b_in
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? vlSelf->top__DOT__b_in
                                                     : 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__b_in)
                                                      ? 
                                                     (vlSelf->top__DOT__a_in 
                                                      >> vlSelf->top__DOT__b_in)
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->top__DOT__b_in)
                                                      ? 
                                                     (vlSelf->top__DOT__a_in 
                                                      << vlSelf->top__DOT__b_in)
                                                      : 0U)
                                                     : 
                                                    (vlSelf->top__DOT__a_in 
                                                     - vlSelf->top__DOT__b_in)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__a_in 
                                                     + vlSelf->top__DOT__b_in)
                                                     : 
                                                    (vlSelf->top__DOT__a_in 
                                                     | vlSelf->top__DOT__b_in))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__a_in 
                                                     & vlSelf->top__DOT__b_in)
                                                     : vlSelf->top__DOT__b_in))))))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+108,(vlSelf->clk));
    bufp->chgBit(oldp+109,(vlSelf->rst_n));
    bufp->chgIData(oldp+110,(vlSelf->pc),32);
    bufp->chgIData(oldp+111,(vlSelf->inst),32);
    bufp->chgIData(oldp+112,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+113,(((IData)(vlSelf->top__DOT__adder_a_src)
                               ? vlSelf->top__DOT__rs1
                               : vlSelf->pc)),32);
    bufp->chgIData(oldp+114,((((IData)(vlSelf->top__DOT__adder_a_src)
                                ? vlSelf->top__DOT__rs1
                                : vlSelf->pc) + vlSelf->top__DOT__imm)),32);
    bufp->chgIData(oldp+115,(((IData)(vlSelf->top__DOT__pc_srcs)
                               ? (((IData)(vlSelf->top__DOT__adder_a_src)
                                    ? vlSelf->top__DOT__rs1
                                    : vlSelf->pc) + vlSelf->top__DOT__imm)
                               : ((IData)(4U) + vlSelf->pc))),32);
    bufp->chgCData(oldp+116,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+117,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+118,((vlSelf->inst >> 0x19U)),7);
    bufp->chgIData(oldp+119,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+120,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+121,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+122,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
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
}
