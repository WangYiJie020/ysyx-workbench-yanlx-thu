// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst_n)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    CData/*0:0*/ __Vdly__top__DOT__IFU__DOT__arvalid;
    __Vdly__top__DOT__IFU__DOT__arvalid = 0;
    CData/*4:0*/ __Vdly__top__DOT__IFU__DOT__LFSR;
    __Vdly__top__DOT__IFU__DOT__LFSR = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v0;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v1;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v2;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v3;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v4;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v4 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v5;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v5 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v6;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v6 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v7;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v7 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v8;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v8 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v9;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v9 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v10;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v10 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v11;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v11 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v12;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v12 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v13;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v13 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v14;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v14 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v15;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v15 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v16;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v16 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v17;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v17 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v18;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v18 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v19;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v19 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v20;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v20 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v21;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v21 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v22;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v22 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v23;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v23 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v24;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v24 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v25;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v25 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v26;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v26 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v27;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v27 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v28;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v28 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v29;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v29 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v30;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v30 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v31;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v31 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32 = 0;
    CData/*0:0*/ __Vdly__top__DOT__Inst_Mem__DOT__flag_rdata;
    __Vdly__top__DOT__Inst_Mem__DOT__flag_rdata = 0;
    CData/*4:0*/ __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter;
    __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__Inst_Mem__DOT__flag_write;
    __Vdly__top__DOT__Inst_Mem__DOT__flag_write = 0;
    CData/*4:0*/ __Vdly__top__DOT__Inst_Mem__DOT__wdata_counter;
    __Vdly__top__DOT__Inst_Mem__DOT__wdata_counter = 0;
    CData/*4:0*/ __Vdly__top__DOT__Inst_Mem__DOT__LFSR;
    __Vdly__top__DOT__Inst_Mem__DOT__LFSR = 0;
    // Body
    vlSelf->__Vdly__top__DOT__Data_Mem__DOT__w_state 
        = vlSelf->top__DOT__Data_Mem__DOT__w_state;
    __Vdly__top__DOT__IFU__DOT__LFSR = vlSelf->top__DOT__IFU__DOT__LFSR;
    vlSelf->__Vdly__top__DOT__Data_Mem__DOT__LFSR = vlSelf->top__DOT__Data_Mem__DOT__LFSR;
    __Vdly__top__DOT__Inst_Mem__DOT__LFSR = vlSelf->top__DOT__Inst_Mem__DOT__LFSR;
    __Vdly__top__DOT__Inst_Mem__DOT__wdata_counter 
        = vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter;
    __Vdly__top__DOT__Inst_Mem__DOT__flag_write = vlSelf->top__DOT__Inst_Mem__DOT__flag_write;
    __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter 
        = vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter;
    __Vdly__top__DOT__Inst_Mem__DOT__flag_rdata = vlSelf->top__DOT__Inst_Mem__DOT__flag_rdata;
    vlSelf->__Vdly__top__DOT__Data_Mem__DOT__rdata_counter 
        = vlSelf->top__DOT__Data_Mem__DOT__rdata_counter;
    vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_rdata 
        = vlSelf->top__DOT__Data_Mem__DOT__flag_rdata;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0 = 0U;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32 = 0U;
    vlSelf->__Vdly__top__DOT__Data_Mem__DOT__wdata_counter 
        = vlSelf->top__DOT__Data_Mem__DOT__wdata_counter;
    vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_write 
        = vlSelf->top__DOT__Data_Mem__DOT__flag_write;
    vlSelf->__Vdly__top__DOT__lsu_bresp = vlSelf->top__DOT__lsu_bresp;
    vlSelf->__Vdly__top__DOT__lsu_wdata = vlSelf->top__DOT__lsu_wdata;
    vlSelf->__Vdly__top__DOT__LSU__DOT__alu_result 
        = vlSelf->top__DOT__LSU__DOT__alu_result;
    vlSelf->__Vdly__top__DOT__lsu_bready = vlSelf->top__DOT__lsu_bready;
    vlSelf->__Vdly__top__DOT__lsu_wvalid = vlSelf->top__DOT__lsu_wvalid;
    vlSelf->__Vdly__top__DOT__lsu_awvalid = vlSelf->top__DOT__lsu_awvalid;
    vlSelf->__Vdly__top__DOT__lsu_arvalid = vlSelf->top__DOT__lsu_arvalid;
    vlSelf->__Vdly__top__DOT__csr_write = vlSelf->top__DOT__csr_write;
    vlSelf->__Vdly__top__DOT__IFU__DOT__npc = vlSelf->top__DOT__IFU__DOT__npc;
    __Vdly__top__DOT__IFU__DOT__arvalid = vlSelf->top__DOT__IFU__DOT__arvalid;
    vlSelf->__Vdly__top__DOT__IDU__DOT__pc = vlSelf->top__DOT__IDU__DOT__pc;
    vlSelf->__Vdly__top__DOT__IDU__DOT__inst = vlSelf->top__DOT__IDU__DOT__inst;
    vlSelf->top__DOT__useless1 = 0U;
    vlSelf->top__DOT__Inst_Mem__DOT__aw_state = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->__Vdly__top__DOT__lsu_bresp = 1U;
        vlSelf->top__DOT__LSU__DOT__flag = 0U;
        vlSelf->top__DOT__useless3 = 1U;
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__j = 0x20U;
        vlSelf->top__DOT__LSU__DOT__LFSR = (((IData)(vlSelf->top__DOT__LSU__DOT__lfsr_in) 
                                             << 4U) 
                                            | (0xfU 
                                               & ((IData)(vlSelf->top__DOT__LSU__DOT__LFSR) 
                                                  >> 1U)));
        __Vdly__top__DOT__IFU__DOT__LFSR = (((IData)(vlSelf->top__DOT__IFU__DOT__lfsr_in) 
                                             << 4U) 
                                            | (0xfU 
                                               & ((IData)(vlSelf->top__DOT__IFU__DOT__LFSR) 
                                                  >> 1U)));
        vlSelf->__Vdly__top__DOT__Data_Mem__DOT__LFSR 
            = (((IData)(vlSelf->top__DOT__Data_Mem__DOT__lfsr_in) 
                << 4U) | (0xfU & ((IData)(vlSelf->top__DOT__Data_Mem__DOT__LFSR) 
                                  >> 1U)));
        __Vdly__top__DOT__Inst_Mem__DOT__LFSR = (((IData)(vlSelf->top__DOT__Inst_Mem__DOT__lfsr_in) 
                                                  << 4U) 
                                                 | (0xfU 
                                                    & ((IData)(vlSelf->top__DOT__Inst_Mem__DOT__LFSR) 
                                                       >> 1U)));
        vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
            = ((vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                << 1U) | (IData)(vlSelf->top__DOT__IFU__DOT__arvalid));
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v0 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0U];
        __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0 = 1U;
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v1 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [1U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v2 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [2U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v3 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [3U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v4 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [4U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v5 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [5U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v6 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [6U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v7 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [7U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v8 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [8U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v9 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [9U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v10 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0xaU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v11 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0xbU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v12 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0xcU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v13 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0xdU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v14 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0xeU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v15 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0xfU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v16 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x10U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v17 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x11U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v18 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x12U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v19 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x13U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v20 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x14U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v21 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x15U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v22 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x16U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v23 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x17U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v24 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x18U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v25 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x19U];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v26 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x1aU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v27 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x1bU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v28 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x1cU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v29 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x1dU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v30 
            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0x1eU];
        __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v31 
            = vlSelf->top__DOT__IFU__DOT__pc;
        if (vlSelf->top__DOT__Inst_Mem__DOT__w_state) {
            vlSelf->top__DOT__Inst_Mem__DOT__w_state = 0U;
            vlSelf->top__DOT__useless2 = 0U;
        }
    } else {
        vlSelf->top__DOT__LSU__DOT__LFSR = 1U;
        __Vdly__top__DOT__IFU__DOT__LFSR = 1U;
        vlSelf->__Vdly__top__DOT__Data_Mem__DOT__LFSR = 1U;
        __Vdly__top__DOT__Inst_Mem__DOT__LFSR = 1U;
        vlSelf->top__DOT__IFU__DOT__arvalid_buffer = 0xffffffffU;
        __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32 = 1U;
        vlSelf->top__DOT__useless2 = 0U;
        vlSelf->top__DOT__Inst_Mem__DOT__w_state = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__Inst_Mem__DOT__flag_waddr) 
             & (IData)(vlSelf->top__DOT__Inst_Mem__DOT__flag_wdata))) {
            __Vdly__top__DOT__Inst_Mem__DOT__flag_write = 1U;
        } else if (vlSelf->top__DOT__Inst_Mem__DOT__flag_write) {
            if (((IData)(vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter) 
                 == (IData)(vlSelf->top__DOT__Inst_Mem__DOT__w_delay))) {
                Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__Inst_Mem__DOT__awaddr, vlSelf->top__DOT__Inst_Mem__DOT__wdata, (IData)(vlSelf->top__DOT__Inst_Mem__DOT__wstrb));
                __Vdly__top__DOT__Inst_Mem__DOT__wdata_counter = 0U;
                vlSelf->top__DOT__useless3 = 0U;
                vlSelf->top__DOT__useless4 = 1U;
                __Vdly__top__DOT__Inst_Mem__DOT__flag_write = 0U;
                vlSelf->top__DOT__Inst_Mem__DOT__w_delay 
                    = vlSelf->top__DOT__Inst_Mem__DOT__LFSR;
            } else {
                __Vdly__top__DOT__Inst_Mem__DOT__wdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter)));
                vlSelf->top__DOT__useless3 = 1U;
                vlSelf->top__DOT__useless4 = 0U;
            }
        } else {
            vlSelf->top__DOT__useless3 = 1U;
            vlSelf->top__DOT__useless4 = 0U;
        }
    } else {
        vlSelf->top__DOT__useless3 = 1U;
        vlSelf->top__DOT__useless4 = 0U;
        vlSelf->top__DOT__Inst_Mem__DOT__w_delay = vlSelf->top__DOT__Inst_Mem__DOT__LFSR;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__Inst_Mem__DOT__awaddr = 0U;
        vlSelf->top__DOT__Inst_Mem__DOT__wdata = 0U;
        vlSelf->top__DOT__Inst_Mem__DOT__wstrb = 0U;
    }
    if (__Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0) {
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[1U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v0;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[2U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v1;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[3U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v2;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[4U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v3;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[5U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v4;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[6U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v5;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[7U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v6;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[8U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v7;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[9U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v8;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xaU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v9;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xbU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v10;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xcU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v11;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xdU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v12;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xeU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v13;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xfU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v14;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x10U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v15;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x11U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v16;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x12U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v17;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x13U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v18;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x14U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v19;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x15U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v20;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x16U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v21;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x17U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v22;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x18U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v23;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x19U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v24;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1aU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v25;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1bU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v26;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1cU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v27;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1dU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v28;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1eU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v29;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1fU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v30;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v31;
    }
    if (__Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32) {
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[1U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[2U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[3U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[4U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[5U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[6U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[7U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[8U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[9U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xaU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xbU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xcU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xdU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xeU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xfU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x10U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x11U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x12U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x13U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x14U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x15U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x16U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x17U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x18U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x19U] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1aU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1bU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1cU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1dU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1eU] = 0U;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1fU] = 0U;
    }
    vlSelf->top__DOT__Inst_Mem__DOT__flag_write = __Vdly__top__DOT__Inst_Mem__DOT__flag_write;
    vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter 
        = __Vdly__top__DOT__Inst_Mem__DOT__wdata_counter;
    vlSelf->top__DOT__LSU__DOT__lfsr_in = (1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR));
    vlSelf->top__DOT__Inst_Mem__DOT__flag_waddr = 0U;
    vlSelf->top__DOT__Inst_Mem__DOT__flag_wdata = 0U;
    if (vlSelf->rst_n) {
        if ((0U == (IData)(vlSelf->top__DOT__IDU__DOT__current_state))) {
            vlSelf->top__DOT__ready_ifu_to_idu = 1U;
            vlSelf->top__DOT__valid_idu_to_exu = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__current_state))) {
            vlSelf->top__DOT__ready_ifu_to_idu = 0U;
            vlSelf->top__DOT__valid_idu_to_exu = 1U;
            vlSelf->__Vdly__top__DOT__IDU__DOT__pc 
                = vlSelf->top__DOT__pc_ifu_to_idu;
            vlSelf->__Vdly__top__DOT__IDU__DOT__inst 
                = vlSelf->top__DOT__ifu_rdata;
        } else if ((2U == (IData)(vlSelf->top__DOT__IDU__DOT__current_state))) {
            vlSelf->top__DOT__ready_ifu_to_idu = 1U;
            vlSelf->top__DOT__valid_idu_to_exu = 1U;
        } else {
            vlSelf->top__DOT__valid_idu_to_exu = 0U;
        }
        vlSelf->top__DOT__IDU__DOT__current_state = vlSelf->top__DOT__IDU__DOT__next_state;
        if ((0U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            if (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid) 
                 & (IData)(vlSelf->top__DOT__ifu_arready))) {
                __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            }
            vlSelf->top__DOT__valid_ifu_to_idu = ((IData)(vlSelf->top__DOT__ifu_rvalid) 
                                                  & (IData)(vlSelf->top__DOT__ifu_rready));
            vlSelf->top__DOT__pc_ifu_to_idu = vlSelf->top__DOT__IFU__DOT__pc;
            vlSelf->top__DOT__ifu_rready = 1U;
        } else if ((2U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            vlSelf->top__DOT__valid_ifu_to_idu = 1U;
            vlSelf->top__DOT__ifu_rready = 0U;
            vlSelf->top__DOT__pc_ifu_to_idu = vlSelf->top__DOT__IFU__DOT__pc;
            vlSelf->top__DOT__IFU__DOT__arvalid_delay 
                = vlSelf->top__DOT__IFU__DOT__LFSR;
        } else if ((3U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 1U;
            __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            vlSelf->top__DOT__valid_ifu_to_idu = 0U;
            vlSelf->top__DOT__ifu_rready = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 1U;
            __Vdly__top__DOT__IFU__DOT__arvalid = 1U;
            vlSelf->top__DOT__valid_ifu_to_idu = 0U;
            vlSelf->__Vdly__top__DOT__IFU__DOT__npc 
                = vlSelf->top__DOT__npc_wbu_to_ifu;
            vlSelf->top__DOT__ifu_rready = 1U;
        } else if ((4U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            if (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid) 
                 & (IData)(vlSelf->top__DOT__ifu_arready))) {
                __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            }
            vlSelf->top__DOT__valid_ifu_to_idu = vlSelf->top__DOT__ifu_rresp;
            vlSelf->top__DOT__ifu_rready = 1U;
        }
    } else {
        vlSelf->top__DOT__valid_idu_to_exu = 0U;
        vlSelf->top__DOT__ready_ifu_to_idu = 0U;
        vlSelf->top__DOT__IDU__DOT__current_state = 0U;
        __Vdly__top__DOT__IFU__DOT__arvalid = 1U;
        vlSelf->top__DOT__ifu_rready = 0U;
        vlSelf->top__DOT__valid_ifu_to_idu = 0U;
        vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
        vlSelf->__Vdly__top__DOT__IFU__DOT__npc = 0x80000000U;
    }
    vlSelf->top__DOT__IFU__DOT__arvalid = __Vdly__top__DOT__IFU__DOT__arvalid;
    vlSelf->top__DOT__IFU__DOT__LFSR = __Vdly__top__DOT__IFU__DOT__LFSR;
    vlSelf->top__DOT__IFU__DOT__lfsr_in = (1U & VL_REDXOR_8(vlSelf->top__DOT__IFU__DOT__LFSR));
    vlSelf->top__DOT__IFU__DOT__current_state = ((IData)(vlSelf->rst_n)
                                                  ? (IData)(vlSelf->top__DOT__IFU__DOT__next_state)
                                                  : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__Inst_Mem__DOT__flag_raddr) {
            __Vdly__top__DOT__Inst_Mem__DOT__flag_rdata = 1U;
        } else if (vlSelf->top__DOT__Inst_Mem__DOT__flag_rdata) {
            if (((IData)(vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter) 
                 == (IData)(vlSelf->top__DOT__Inst_Mem__DOT__r_delay))) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__Inst_Mem__DOT__araddr, __Vfunc_pmem_read__2__Vfuncout);
                __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter = 0U;
                vlSelf->top__DOT__ifu_rdata = __Vfunc_pmem_read__2__Vfuncout;
                vlSelf->top__DOT__ifu_rresp = 1U;
                vlSelf->top__DOT__ifu_rvalid = 1U;
                __Vdly__top__DOT__Inst_Mem__DOT__flag_rdata = 0U;
                vlSelf->top__DOT__Inst_Mem__DOT__r_delay 
                    = vlSelf->top__DOT__Inst_Mem__DOT__LFSR;
            } else {
                __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter)));
                vlSelf->top__DOT__ifu_rresp = 0U;
                vlSelf->top__DOT__ifu_rvalid = 0U;
            }
        } else {
            vlSelf->top__DOT__ifu_rvalid = 0U;
            __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter = 0U;
            vlSelf->top__DOT__ifu_rresp = 0U;
        }
    } else {
        vlSelf->top__DOT__Inst_Mem__DOT__r_state = 0U;
        vlSelf->top__DOT__ifu_rvalid = 0U;
        __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter = 0U;
        __Vdly__top__DOT__Inst_Mem__DOT__flag_rdata = 0U;
        vlSelf->top__DOT__Inst_Mem__DOT__r_delay = vlSelf->top__DOT__Inst_Mem__DOT__LFSR;
    }
    vlSelf->top__DOT__Inst_Mem__DOT__flag_rdata = __Vdly__top__DOT__Inst_Mem__DOT__flag_rdata;
    vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter 
        = __Vdly__top__DOT__Inst_Mem__DOT__rdata_counter;
    vlSelf->top__DOT__Inst_Mem__DOT__LFSR = __Vdly__top__DOT__Inst_Mem__DOT__LFSR;
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__ifu_rdata))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 428, "");
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ifu_arready) 
             & (IData)(vlSelf->top__DOT__ifu_arvalid))) {
            vlSelf->top__DOT__Inst_Mem__DOT__araddr 
                = vlSelf->top__DOT__ifu_araddr;
            vlSelf->top__DOT__Inst_Mem__DOT__flag_raddr = 1U;
        } else {
            vlSelf->top__DOT__Inst_Mem__DOT__flag_raddr = 0U;
        }
        if (((~ (IData)(vlSelf->top__DOT__Inst_Mem__DOT__ar_state)) 
             & (IData)(vlSelf->top__DOT__ifu_arvalid))) {
            vlSelf->top__DOT__ifu_arready = 1U;
            vlSelf->top__DOT__Inst_Mem__DOT__ar_state = 1U;
        } else {
            vlSelf->top__DOT__Inst_Mem__DOT__ar_state = 0U;
            vlSelf->top__DOT__ifu_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__Inst_Mem__DOT__araddr = 0U;
        vlSelf->top__DOT__ifu_arready = 0U;
        vlSelf->top__DOT__Inst_Mem__DOT__ar_state = 0U;
    }
    vlSelf->top__DOT__Inst_Mem__DOT__lfsr_in = (1U 
                                                & VL_REDXOR_8(vlSelf->top__DOT__Inst_Mem__DOT__LFSR));
    if ((0x10U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((8U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                        vlSelf->top__DOT__ifu_araddr 
                            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                            [0x1fU];
                        vlSelf->top__DOT__ifu_arvalid 
                            = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                     >> 0x1fU));
                    } else {
                        vlSelf->top__DOT__ifu_araddr 
                            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                            [0x1eU];
                        vlSelf->top__DOT__ifu_arvalid 
                            = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                     >> 0x1eU));
                    }
                } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1dU];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1dU));
                } else {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1cU];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1cU));
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1bU];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1bU));
                } else {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1aU];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1aU));
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x19U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x19U));
            } else {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x18U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x18U));
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x17U];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x17U));
                } else {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x16U];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x16U));
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x15U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x15U));
            } else {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x14U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x14U));
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x13U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x13U));
            } else {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x12U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x12U));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x11U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 0x11U));
        } else {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x10U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 0x10U));
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0xfU];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0xfU));
                } else {
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0xeU];
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0xeU));
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xdU];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xdU));
            } else {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xcU];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xcU));
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xbU];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xbU));
            } else {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xaU];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xaU));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [9U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 9U));
        } else {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [8U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 8U));
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [7U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 7U));
            } else {
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [6U];
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 6U));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [5U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 5U));
        } else {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [4U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 4U));
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [3U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 3U));
        } else {
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [2U];
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 2U));
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [1U];
        vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                               >> 1U));
    } else {
        vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0U];
        vlSelf->top__DOT__ifu_arvalid = (1U & vlSelf->top__DOT__IFU__DOT__arvalid_buffer);
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h4a96c7c5_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h1dd48d1a_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hb056201f_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
    __Vfunc_pmem_read__4__Vfuncout = 0;
    // Body
    vlSelf->top__DOT__IFU__DOT__npc = vlSelf->__Vdly__top__DOT__IFU__DOT__npc;
    if (vlSelf->rst_n) {
        if ((0U == (IData)(vlSelf->top__DOT__WBU__DOT__current_state))) {
            vlSelf->top__DOT__ready_lsu_to_wbu = 1U;
            vlSelf->top__DOT__valid_wbu_to_ifu = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__WBU__DOT__current_state))) {
            vlSelf->top__DOT__ready_lsu_to_wbu = 0U;
            vlSelf->top__DOT__valid_wbu_to_ifu = 1U;
            vlSelf->top__DOT__WBU__DOT__alu_result 
                = vlSelf->top__DOT__LSU__DOT__alu_result;
            vlSelf->top__DOT__WBU__DOT__rs1 = vlSelf->top__DOT__LSU__DOT__rs1;
            vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1 
                = vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu;
            vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                = vlSelf->top__DOT__lsu_rdata;
            vlSelf->top__DOT__npc_wbu_to_ifu = vlSelf->top__DOT__npc_lsu_to_wbu;
            vlSelf->top__DOT__WBU__DOT__rmask = vlSelf->top__DOT__LSU__DOT__rmask;
            vlSelf->top__DOT__WBU__DOT__wb_src = vlSelf->top__DOT__wb_src_lsu_to_wbu;
            vlSelf->top__DOT__WBU__DOT__csr_wdata_src 
                = vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu;
            vlSelf->__Vdly__top__DOT__csr_write = vlSelf->top__DOT__csr_write_lsu_to_wbu;
            vlSelf->top__DOT__reg_write = vlSelf->top__DOT__reg_write_lsu_to_wbu;
            vlSelf->top__DOT__waddr = vlSelf->top__DOT__waddr_lsu_to_wbu;
        } else if ((2U == (IData)(vlSelf->top__DOT__WBU__DOT__current_state))) {
            vlSelf->top__DOT__ready_lsu_to_wbu = 1U;
            vlSelf->top__DOT__valid_wbu_to_ifu = 1U;
        } else {
            vlSelf->top__DOT__valid_wbu_to_ifu = 0U;
        }
    } else {
        vlSelf->top__DOT__valid_wbu_to_ifu = 0U;
        vlSelf->top__DOT__ready_lsu_to_wbu = 0U;
    }
    vlSelf->top__DOT__WBU__DOT__mem_data = ((4U & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                             ? ((2U 
                                                 & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                 ? vlSelf->top__DOT__WBU__DOT__datamem_readdata
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                  ? vlSelf->top__DOT__WBU__DOT__datamem_readdata
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                    >> 0x18U)
                                                    : 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                       >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__WBU__DOT__datamem_readdata)))))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                 >> 0x1fU))) 
                                                     << 8U) 
                                                    | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                       >> 0x18U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                    >> 0x17U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                          >> 0x10U))))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                    >> 0xfU)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                          >> 8U)))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->top__DOT__WBU__DOT__datamem_readdata))))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__WBU__DOT__datamem_readdata)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__WBU__DOT__rmask))
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->top__DOT__WBU__DOT__alu_result)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                >> 0x1fU))) 
                                                    << 0x10U) 
                                                   | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                      >> 0x10U))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__WBU__DOT__datamem_readdata)))
                                                  : vlSelf->top__DOT__WBU__DOT__datamem_readdata)));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                             << 6U) | (((IData)(vlSelf->top__DOT__valid_wbu_to_ifu) 
                                        << 5U) | (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->top__DOT__IFU__DOT__current_state)))));
    vlSelf->top__DOT__IFU__DOT__next_state = Vtop__ConstPool__TABLE_h4a96c7c5_0
        [vlSelf->__Vtableidx1];
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__WBU__DOT__current_state = vlSelf->top__DOT__WBU__DOT__next_state;
        if ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 1U;
            if (((IData)(vlSelf->top__DOT__lsu_arvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_arready))) {
                vlSelf->__Vdly__top__DOT__lsu_arvalid = 0U;
            }
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
            vlSelf->__Vdly__top__DOT__lsu_awvalid = 0U;
            vlSelf->__Vdly__top__DOT__lsu_wvalid = 0U;
            vlSelf->top__DOT__lsu_rready = 0U;
            vlSelf->__Vdly__top__DOT__lsu_bready = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 0U;
            vlSelf->__Vdly__top__DOT__lsu_arvalid = vlSelf->top__DOT__MemRead_exu_to_lsu;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
            vlSelf->__Vdly__top__DOT__LSU__DOT__alu_result 
                = vlSelf->top__DOT__EXU__DOT__alu_result;
            vlSelf->top__DOT__LSU__DOT__rs1 = vlSelf->top__DOT__EXU__DOT__rs1;
            vlSelf->__Vdly__top__DOT__lsu_wdata = vlSelf->top__DOT__EXU__DOT__rs2;
            vlSelf->top__DOT__lsu_rready = vlSelf->top__DOT__MemRead_exu_to_lsu;
            vlSelf->__Vdly__top__DOT__lsu_bready = 1U;
            vlSelf->top__DOT__LSU__DOT__rmask = vlSelf->top__DOT__rmask_exu_to_lsu;
            vlSelf->__Vdly__top__DOT__lsu_awvalid = vlSelf->top__DOT__MemWrite_exu_to_lsu;
            vlSelf->__Vdly__top__DOT__lsu_wvalid = vlSelf->top__DOT__MemWrite_exu_to_lsu;
            vlSelf->top__DOT__wb_src_lsu_to_wbu = vlSelf->top__DOT__wb_src_exu_to_lsu;
            vlSelf->top__DOT__csr_write_lsu_to_wbu 
                = vlSelf->top__DOT__csr_write_exu_to_lsu;
            vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu 
                = vlSelf->top__DOT__csr_wdta_src_exu_to_lsu;
            vlSelf->top__DOT__reg_write_lsu_to_wbu 
                = vlSelf->top__DOT__reg_write_exu_to_lsu;
            vlSelf->top__DOT__npc_lsu_to_wbu = ((4U 
                                                 & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))
                                                   : 
                                                  ((1U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))
                                                   : 
                                                  ((1U 
                                                    == vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? 
                                                  ((0U 
                                                    != vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc))
                                                   : 
                                                  ((0U 
                                                    != vlSelf->top__DOT__EXU__DOT__alu_result)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__EXU__DOT__pc)
                                                    : vlSelf->top__DOT__EXU__DOT__pc_new))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
                                                   ? vlSelf->top__DOT__EXU__DOT__pc_new
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__EXU__DOT__pc))));
            vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu 
                = (vlSelf->top__DOT__EXU__DOT__csr_rdata 
                   | vlSelf->top__DOT__EXU__DOT__rs1);
            vlSelf->top__DOT__waddr_lsu_to_wbu = vlSelf->top__DOT__waddr_exu_to_lsu;
        } else if ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 0U;
            if (((IData)(vlSelf->top__DOT__lsu_awvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_awready))) {
                vlSelf->__Vdly__top__DOT__lsu_awvalid = 0U;
            }
            if (((IData)(vlSelf->top__DOT__lsu_wvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_wready))) {
                vlSelf->__Vdly__top__DOT__lsu_wvalid = 0U;
            }
            if (((IData)(vlSelf->top__DOT__lsu_arvalid) 
                 & (IData)(vlSelf->top__DOT__lsu_arready))) {
                vlSelf->__Vdly__top__DOT__lsu_arvalid = 0U;
            }
            vlSelf->top__DOT__valid_lsu_to_wbu = (1U 
                                                  & ((IData)(vlSelf->top__DOT__MemRead_exu_to_lsu)
                                                      ? (IData)(vlSelf->top__DOT__lsu_rresp)
                                                      : 
                                                     ((~ (IData)(vlSelf->top__DOT__MemWrite_exu_to_lsu)) 
                                                      | (((IData)(vlSelf->top__DOT__lsu_bready) 
                                                          & (IData)(vlSelf->top__DOT__lsu_bvalid)) 
                                                         & (~ (IData)(vlSelf->top__DOT__lsu_bresp))))));
        } else if ((2U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__ready_exu_to_lsu = 1U;
            vlSelf->__Vdly__top__DOT__lsu_arvalid = 0U;
            vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
            vlSelf->top__DOT__lsu_rready = 0U;
            vlSelf->__Vdly__top__DOT__lsu_awvalid = 0U;
            vlSelf->__Vdly__top__DOT__lsu_wvalid = 0U;
        }
    } else {
        vlSelf->top__DOT__WBU__DOT__current_state = 0U;
        vlSelf->__Vdly__top__DOT__lsu_arvalid = 1U;
        vlSelf->top__DOT__valid_lsu_to_wbu = 0U;
        vlSelf->top__DOT__ready_exu_to_lsu = 0U;
    }
    vlSelf->top__DOT__lsu_bready = vlSelf->__Vdly__top__DOT__lsu_bready;
    vlSelf->__Vtableidx6 = (((IData)(vlSelf->top__DOT__ready_wbu_to_ifu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_wbu_to_ifu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_lsu_to_wbu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_lsu_to_wbu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__WBU__DOT__current_state)))));
    vlSelf->top__DOT__WBU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx6];
    vlSelf->top__DOT__LSU__DOT__current_state = ((IData)(vlSelf->rst_n)
                                                  ? (IData)(vlSelf->top__DOT__LSU__DOT__next_state)
                                                  : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__Data_Mem__DOT__flag_raddr) {
            vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_rdata = 1U;
        } else if (vlSelf->top__DOT__Data_Mem__DOT__flag_rdata) {
            if (((IData)(vlSelf->top__DOT__Data_Mem__DOT__rdata_counter) 
                 == (IData)(vlSelf->top__DOT__Data_Mem__DOT__r_delay))) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__Data_Mem__DOT__araddr, __Vfunc_pmem_read__4__Vfuncout);
                vlSelf->__Vdly__top__DOT__Data_Mem__DOT__rdata_counter = 0U;
                vlSelf->top__DOT__lsu_rdata = __Vfunc_pmem_read__4__Vfuncout;
                vlSelf->top__DOT__lsu_rresp = 1U;
                vlSelf->top__DOT__lsu_rvalid = 1U;
                vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_rdata = 0U;
                vlSelf->top__DOT__Data_Mem__DOT__r_delay 
                    = vlSelf->top__DOT__Data_Mem__DOT__LFSR;
            } else {
                vlSelf->__Vdly__top__DOT__Data_Mem__DOT__rdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Data_Mem__DOT__rdata_counter)));
                vlSelf->top__DOT__lsu_rresp = 0U;
                vlSelf->top__DOT__lsu_rvalid = 0U;
            }
        } else {
            vlSelf->top__DOT__lsu_rvalid = 0U;
            vlSelf->__Vdly__top__DOT__Data_Mem__DOT__rdata_counter = 0U;
            vlSelf->top__DOT__lsu_rresp = 0U;
        }
    } else {
        vlSelf->top__DOT__Data_Mem__DOT__r_state = 0U;
        vlSelf->top__DOT__lsu_rvalid = 0U;
        vlSelf->__Vdly__top__DOT__Data_Mem__DOT__rdata_counter = 0U;
        vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_rdata = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__r_delay = vlSelf->top__DOT__Data_Mem__DOT__LFSR;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__Data_Mem__DOT__flag_waddr) 
             & (IData)(vlSelf->top__DOT__Data_Mem__DOT__flag_wdata))) {
            vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_write = 1U;
        } else if (vlSelf->top__DOT__Data_Mem__DOT__flag_write) {
            if (((IData)(vlSelf->top__DOT__Data_Mem__DOT__wdata_counter) 
                 == (IData)(vlSelf->top__DOT__Data_Mem__DOT__w_delay))) {
                Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__Data_Mem__DOT__awaddr, vlSelf->top__DOT__Data_Mem__DOT__wdata, (IData)(vlSelf->top__DOT__Data_Mem__DOT__wstrb));
                vlSelf->__Vdly__top__DOT__Data_Mem__DOT__wdata_counter = 0U;
                vlSelf->__Vdly__top__DOT__lsu_bresp = 0U;
                vlSelf->top__DOT__lsu_bvalid = 1U;
                vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_write = 0U;
                vlSelf->top__DOT__Data_Mem__DOT__w_delay 
                    = vlSelf->top__DOT__Data_Mem__DOT__LFSR;
            } else {
                vlSelf->__Vdly__top__DOT__Data_Mem__DOT__wdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Data_Mem__DOT__wdata_counter)));
                vlSelf->__Vdly__top__DOT__lsu_bresp = 1U;
                vlSelf->top__DOT__lsu_bvalid = 0U;
            }
        } else {
            vlSelf->__Vdly__top__DOT__lsu_bresp = 1U;
            vlSelf->top__DOT__lsu_bvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__lsu_bresp = 1U;
        vlSelf->top__DOT__lsu_bvalid = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__w_delay = vlSelf->top__DOT__Data_Mem__DOT__LFSR;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsu_arready) 
             & (IData)(vlSelf->top__DOT__lsu_arvalid))) {
            vlSelf->top__DOT__Data_Mem__DOT__araddr 
                = vlSelf->top__DOT__LSU__DOT__alu_result;
            vlSelf->top__DOT__Data_Mem__DOT__flag_raddr = 1U;
        } else {
            vlSelf->top__DOT__Data_Mem__DOT__flag_raddr = 0U;
        }
        if (((IData)(vlSelf->top__DOT__lsu_awready) 
             & (IData)(vlSelf->top__DOT__lsu_awvalid))) {
            vlSelf->top__DOT__Data_Mem__DOT__awaddr 
                = vlSelf->top__DOT__LSU__DOT__alu_result;
            vlSelf->top__DOT__Data_Mem__DOT__flag_waddr = 1U;
        } else {
            vlSelf->top__DOT__Data_Mem__DOT__flag_waddr = 0U;
        }
        if (vlSelf->top__DOT__lsu_bresp) {
            if (((IData)(vlSelf->top__DOT__lsu_wready) 
                 & (IData)(vlSelf->top__DOT__lsu_wvalid))) {
                vlSelf->top__DOT__Data_Mem__DOT__wdata 
                    = vlSelf->top__DOT__lsu_wdata;
                vlSelf->top__DOT__Data_Mem__DOT__wstrb 
                    = (0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                 ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                    << (3U & vlSelf->top__DOT__LSU__DOT__alu_result))
                                 : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                     ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                        << (3U & vlSelf->top__DOT__LSU__DOT__alu_result))
                                     : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))));
                vlSelf->top__DOT__Data_Mem__DOT__flag_wdata = 1U;
            } else {
                vlSelf->top__DOT__Data_Mem__DOT__flag_wdata = 0U;
            }
        } else {
            vlSelf->top__DOT__Data_Mem__DOT__flag_wdata = 0U;
        }
        if (((~ (IData)(vlSelf->top__DOT__Data_Mem__DOT__ar_state)) 
             & (IData)(vlSelf->top__DOT__lsu_arvalid))) {
            vlSelf->top__DOT__lsu_arready = 1U;
            vlSelf->top__DOT__Data_Mem__DOT__ar_state = 1U;
        } else {
            vlSelf->top__DOT__Data_Mem__DOT__ar_state = 0U;
            vlSelf->top__DOT__lsu_arready = 0U;
        }
        if (((~ (IData)(vlSelf->top__DOT__Data_Mem__DOT__aw_state)) 
             & (IData)(vlSelf->top__DOT__lsu_awvalid))) {
            vlSelf->top__DOT__lsu_awready = 1U;
            vlSelf->top__DOT__Data_Mem__DOT__aw_state = 1U;
        } else {
            vlSelf->top__DOT__Data_Mem__DOT__aw_state = 0U;
            vlSelf->top__DOT__lsu_awready = 0U;
        }
        if (((~ (IData)(vlSelf->top__DOT__Data_Mem__DOT__w_state)) 
             & (IData)(vlSelf->top__DOT__lsu_wvalid))) {
            vlSelf->top__DOT__lsu_wready = 1U;
            vlSelf->__Vdly__top__DOT__Data_Mem__DOT__w_state = 1U;
        } else if (vlSelf->top__DOT__Data_Mem__DOT__w_state) {
            vlSelf->__Vdly__top__DOT__Data_Mem__DOT__w_state = 0U;
            vlSelf->top__DOT__lsu_wready = 0U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__EXU__DOT__current_state))) {
            vlSelf->top__DOT__ready_idu_to_exu = 1U;
            vlSelf->top__DOT__valid_exu_to_lsu = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__EXU__DOT__current_state))) {
            vlSelf->top__DOT__ready_idu_to_exu = 0U;
            vlSelf->top__DOT__valid_exu_to_lsu = 1U;
            vlSelf->top__DOT__EXU__DOT__pc = vlSelf->top__DOT__IDU__DOT__pc;
            vlSelf->top__DOT__EXU__DOT__rs1 = vlSelf->top__DOT__Rgefile__DOT__rf
                [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                           >> 0xfU))];
            vlSelf->top__DOT__EXU__DOT__rs2 = vlSelf->top__DOT__Rgefile__DOT__rf
                [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                           >> 0x14U))];
            vlSelf->top__DOT__EXU__DOT__imm = vlSelf->top__DOT__imm_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__csr_rdata = 
                ((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
                  ? ((0U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                   >> 0xcU))) ? ((0x73U 
                                                  == vlSelf->top__DOT__IDU__DOT__inst)
                                                  ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                                  : 
                                                 ((0x30200073U 
                                                   == vlSelf->top__DOT__IDU__DOT__inst)
                                                   ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                                   : 0U))
                      : (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xcU))) 
                          | (2U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                          >> 0xcU))))
                          ? ((0x300U == (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))
                              ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus
                              : ((0x305U == (vlSelf->top__DOT__IDU__DOT__inst 
                                             >> 0x14U))
                                  ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec
                                  : ((0x341U == (vlSelf->top__DOT__IDU__DOT__inst 
                                                 >> 0x14U))
                                      ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc
                                      : ((0x342U == 
                                          (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0x14U))
                                          ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause
                                          : 0U)))) : 0U))
                  : 0U);
            vlSelf->top__DOT__EXU__DOT__a_in_src = vlSelf->top__DOT__a_in_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__b_in_src = vlSelf->top__DOT__b_in_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__pc_srcs = vlSelf->top__DOT__pc_srcs_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__adder_a_src 
                = vlSelf->top__DOT__adder_a_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__adder_out_src 
                = vlSelf->top__DOT__adder_out_src_idu_to_exu;
            vlSelf->top__DOT__EXU__DOT__alu_op = vlSelf->top__DOT__alu_op_idu_to_exu;
            vlSelf->top__DOT__MemRead_exu_to_lsu = vlSelf->top__DOT__MemRead_idu_to_exu;
            vlSelf->top__DOT__MemWrite_exu_to_lsu = vlSelf->top__DOT__MemWrite_idu_to_exu;
            vlSelf->top__DOT__wmask_exu_to_lsu = vlSelf->top__DOT__wmask_idu_to_exu;
            vlSelf->top__DOT__rmask_exu_to_lsu = vlSelf->top__DOT__rmask_idu_to_exu;
            vlSelf->top__DOT__wb_src_exu_to_lsu = vlSelf->top__DOT__wb_src_idu_to_exu;
            vlSelf->top__DOT__csr_write_exu_to_lsu 
                = vlSelf->top__DOT__csr_write_idu_to_exu;
            vlSelf->top__DOT__csr_wdta_src_exu_to_lsu 
                = vlSelf->top__DOT__csr_wdata_src_idu_to_exu;
            vlSelf->top__DOT__reg_write_exu_to_lsu 
                = vlSelf->top__DOT__reg_write_idu_to_exu;
            vlSelf->top__DOT__waddr_exu_to_lsu = (0x1fU 
                                                  & (vlSelf->top__DOT__IDU__DOT__inst 
                                                     >> 7U));
        } else if ((2U == (IData)(vlSelf->top__DOT__EXU__DOT__current_state))) {
            vlSelf->top__DOT__ready_idu_to_exu = 1U;
            vlSelf->top__DOT__valid_exu_to_lsu = 1U;
        } else {
            vlSelf->top__DOT__valid_exu_to_lsu = 0U;
        }
        vlSelf->top__DOT__EXU__DOT__current_state = vlSelf->top__DOT__EXU__DOT__next_state;
    } else {
        vlSelf->top__DOT__Data_Mem__DOT__araddr = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__awaddr = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__flag_waddr = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__wdata = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__wstrb = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__flag_wdata = 0U;
        vlSelf->top__DOT__lsu_arready = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__ar_state = 0U;
        vlSelf->top__DOT__lsu_awready = 0U;
        vlSelf->top__DOT__Data_Mem__DOT__aw_state = 0U;
        vlSelf->top__DOT__lsu_wready = 0U;
        vlSelf->__Vdly__top__DOT__Data_Mem__DOT__w_state = 0U;
        vlSelf->top__DOT__valid_exu_to_lsu = 0U;
        vlSelf->top__DOT__ready_idu_to_exu = 0U;
        vlSelf->top__DOT__EXU__DOT__current_state = 0U;
    }
    vlSelf->top__DOT__Data_Mem__DOT__flag_rdata = vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_rdata;
    vlSelf->top__DOT__Data_Mem__DOT__rdata_counter 
        = vlSelf->__Vdly__top__DOT__Data_Mem__DOT__rdata_counter;
    vlSelf->top__DOT__Data_Mem__DOT__flag_write = vlSelf->__Vdly__top__DOT__Data_Mem__DOT__flag_write;
    vlSelf->top__DOT__Data_Mem__DOT__wdata_counter 
        = vlSelf->__Vdly__top__DOT__Data_Mem__DOT__wdata_counter;
    vlSelf->top__DOT__Data_Mem__DOT__LFSR = vlSelf->__Vdly__top__DOT__Data_Mem__DOT__LFSR;
    vlSelf->top__DOT__Data_Mem__DOT__lfsr_in = (1U 
                                                & VL_REDXOR_8(vlSelf->top__DOT__Data_Mem__DOT__LFSR));
    vlSelf->top__DOT__lsu_wdata = vlSelf->__Vdly__top__DOT__lsu_wdata;
    vlSelf->top__DOT__lsu_bresp = vlSelf->__Vdly__top__DOT__lsu_bresp;
    vlSelf->top__DOT__LSU__DOT__alu_result = vlSelf->__Vdly__top__DOT__LSU__DOT__alu_result;
    vlSelf->top__DOT__lsu_arvalid = vlSelf->__Vdly__top__DOT__lsu_arvalid;
    vlSelf->top__DOT__lsu_awvalid = vlSelf->__Vdly__top__DOT__lsu_awvalid;
    vlSelf->top__DOT__Data_Mem__DOT__w_state = vlSelf->__Vdly__top__DOT__Data_Mem__DOT__w_state;
    vlSelf->top__DOT__lsu_wvalid = vlSelf->__Vdly__top__DOT__lsu_wvalid;
    vlSelf->top__DOT__EXU__DOT__a_in = ((IData)(vlSelf->top__DOT__EXU__DOT__a_in_src)
                                         ? vlSelf->top__DOT__EXU__DOT__pc
                                         : vlSelf->top__DOT__EXU__DOT__rs1);
    vlSelf->top__DOT__EXU__DOT__pc_new = ((IData)(vlSelf->top__DOT__EXU__DOT__adder_out_src)
                                           ? vlSelf->top__DOT__EXU__DOT__csr_rdata
                                           : (((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                                : vlSelf->top__DOT__EXU__DOT__pc) 
                                              + vlSelf->top__DOT__EXU__DOT__imm));
    vlSelf->top__DOT__EXU__DOT__b_in = ((2U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                         ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                             ? vlSelf->top__DOT__EXU__DOT__csr_rdata
                                             : 4U) : 
                                        ((1U & (IData)(vlSelf->top__DOT__EXU__DOT__b_in_src))
                                          ? vlSelf->top__DOT__EXU__DOT__imm
                                          : vlSelf->top__DOT__EXU__DOT__rs2));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top__DOT__ready_idu_to_exu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_idu_to_exu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_ifu_to_idu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_ifu_to_idu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__current_state)))));
    vlSelf->top__DOT__IDU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx2];
    vlSelf->__Vtableidx5 = (((IData)(vlSelf->top__DOT__ready_exu_to_lsu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_exu_to_lsu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_lsu_to_wbu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_lsu_to_wbu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__LSU__DOT__current_state)))));
    vlSelf->top__DOT__LSU__DOT__next_state = Vtop__ConstPool__TABLE_hb056201f_0
        [vlSelf->__Vtableidx5];
    vlSelf->top__DOT__EXU__DOT__alu_result = ((8U & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                   ? vlSelf->top__DOT__EXU__DOT__b_in
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? vlSelf->top__DOT__EXU__DOT__b_in
                                                     : 
                                                    (VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT__a_in, vlSelf->top__DOT__EXU__DOT__b_in)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    ((vlSelf->top__DOT__EXU__DOT__a_in 
                                                      < vlSelf->top__DOT__EXU__DOT__b_in)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__EXU__DOT__a_in, 
                                                                   (0x1fU 
                                                                    & vlSelf->top__DOT__EXU__DOT__b_in)))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__EXU__DOT__b_in))
                                                     : 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__EXU__DOT__b_in)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     - vlSelf->top__DOT__EXU__DOT__b_in)
                                                     : 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     + vlSelf->top__DOT__EXU__DOT__b_in)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     ^ vlSelf->top__DOT__EXU__DOT__b_in)
                                                     : 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     | vlSelf->top__DOT__EXU__DOT__b_in))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT__a_in 
                                                     & vlSelf->top__DOT__EXU__DOT__b_in)
                                                     : vlSelf->top__DOT__EXU__DOT__b_in))));
    vlSelf->__Vtableidx4 = (((IData)(vlSelf->top__DOT__ready_exu_to_lsu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__valid_exu_to_lsu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__ready_idu_to_exu) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__valid_idu_to_exu) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->top__DOT__EXU__DOT__current_state)))));
    vlSelf->top__DOT__EXU__DOT__next_state = Vtop__ConstPool__TABLE_h1dd48d1a_0
        [vlSelf->__Vtableidx4];
}

void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc, IData/*31:0*/ csr_reg_0, IData/*31:0*/ csr_reg_1, IData/*31:0*/ csr_reg_2, IData/*31:0*/ csr_reg_3);

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [1U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [2U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [3U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [4U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [5U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [6U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [7U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [8U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [9U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xaU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xbU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xcU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xdU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xeU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xfU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x10U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x11U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x12U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x13U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x14U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x15U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x16U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x17U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x18U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x19U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1aU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1bU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1cU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1dU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1eU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1fU], vlSelf->top__DOT__ifu_araddr, 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [0U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [1U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [2U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [3U]);
}
