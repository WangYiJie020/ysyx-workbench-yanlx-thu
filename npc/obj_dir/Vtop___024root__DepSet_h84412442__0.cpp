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

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
    __Vfunc_pmem_read__4__Vfuncout = 0;
    CData/*0:0*/ __Vdly__top__DOT__IFU__DOT__arvalid;
    __Vdly__top__DOT__IFU__DOT__arvalid = 0;
    CData/*4:0*/ __Vdly__top__DOT__IFU__DOT__LFSR;
    __Vdly__top__DOT__IFU__DOT__LFSR = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v32;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v33;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v34;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v34 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v35;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v35 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v36;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v36 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v37;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v37 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v38;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v38 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v39;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v39 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v40;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v40 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v41;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v41 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v42;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v42 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v43;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v43 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v44;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v44 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v45;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v45 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v46;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v46 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v47;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v47 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v48;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v48 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v49;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v49 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v50;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v50 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v51;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v51 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v52;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v52 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v53;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v53 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v54;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v54 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v55;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v55 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v56;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v56 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v57;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v57 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v58;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v58 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v59;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v59 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v60;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v60 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v61;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v61 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v62;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v62 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v63;
    __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v63 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v64;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v64 = 0;
    CData/*0:0*/ __Vdly__top__DOT__Mem__DOT__ar_state;
    __Vdly__top__DOT__Mem__DOT__ar_state = 0;
    CData/*0:0*/ __Vdly__top__DOT__Mem__DOT__flag_rdata;
    __Vdly__top__DOT__Mem__DOT__flag_rdata = 0;
    CData/*4:0*/ __Vdly__top__DOT__Mem__DOT__rdata_counter;
    __Vdly__top__DOT__Mem__DOT__rdata_counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__Mem__DOT__aw_state;
    __Vdly__top__DOT__Mem__DOT__aw_state = 0;
    CData/*0:0*/ __Vdly__top__DOT__Mem__DOT__w_state;
    __Vdly__top__DOT__Mem__DOT__w_state = 0;
    CData/*1:0*/ __Vdly__top__DOT__Mem__DOT__write_box;
    __Vdly__top__DOT__Mem__DOT__write_box = 0;
    CData/*4:0*/ __Vdly__top__DOT__Mem__DOT__wdata_counter;
    __Vdly__top__DOT__Mem__DOT__wdata_counter = 0;
    CData/*1:0*/ __Vdly__top__DOT__sram_bresp;
    __Vdly__top__DOT__sram_bresp = 0;
    CData/*4:0*/ __Vdly__top__DOT__Mem__DOT__LFSR;
    __Vdly__top__DOT__Mem__DOT__LFSR = 0;
    CData/*0:0*/ __Vdly__top__DOT__UART__DOT__ar_state;
    __Vdly__top__DOT__UART__DOT__ar_state = 0;
    CData/*0:0*/ __Vdly__top__DOT__UART__DOT__flag_rdata;
    __Vdly__top__DOT__UART__DOT__flag_rdata = 0;
    CData/*4:0*/ __Vdly__top__DOT__UART__DOT__rdata_counter;
    __Vdly__top__DOT__UART__DOT__rdata_counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__UART__DOT__aw_state;
    __Vdly__top__DOT__UART__DOT__aw_state = 0;
    CData/*0:0*/ __Vdly__top__DOT__UART__DOT__w_state;
    __Vdly__top__DOT__UART__DOT__w_state = 0;
    CData/*1:0*/ __Vdly__top__DOT__uart_bresp;
    __Vdly__top__DOT__uart_bresp = 0;
    CData/*1:0*/ __Vdly__top__DOT__UART__DOT__write_box;
    __Vdly__top__DOT__UART__DOT__write_box = 0;
    CData/*4:0*/ __Vdly__top__DOT__UART__DOT__wdata_counter;
    __Vdly__top__DOT__UART__DOT__wdata_counter = 0;
    CData/*4:0*/ __Vdly__top__DOT__UART__DOT__LFSR;
    __Vdly__top__DOT__UART__DOT__LFSR = 0;
    QData/*63:0*/ __Vdly__top__DOT__CLINT__DOT__time_counter;
    __Vdly__top__DOT__CLINT__DOT__time_counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__CLINT__DOT__ar_state;
    __Vdly__top__DOT__CLINT__DOT__ar_state = 0;
    CData/*0:0*/ __Vdly__top__DOT__CLINT__DOT__flag_rdata;
    __Vdly__top__DOT__CLINT__DOT__flag_rdata = 0;
    CData/*4:0*/ __Vdly__top__DOT__CLINT__DOT__rdata_counter;
    __Vdly__top__DOT__CLINT__DOT__rdata_counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__CLINT__DOT__aw_state;
    __Vdly__top__DOT__CLINT__DOT__aw_state = 0;
    CData/*0:0*/ __Vdly__top__DOT__CLINT__DOT__w_state;
    __Vdly__top__DOT__CLINT__DOT__w_state = 0;
    CData/*1:0*/ __Vdly__top__DOT__CLINT__DOT__write_box;
    __Vdly__top__DOT__CLINT__DOT__write_box = 0;
    CData/*4:0*/ __Vdly__top__DOT__CLINT__DOT__wdata_counter;
    __Vdly__top__DOT__CLINT__DOT__wdata_counter = 0;
    CData/*1:0*/ __Vdly__top__DOT__clint_bresp;
    __Vdly__top__DOT__clint_bresp = 0;
    CData/*4:0*/ __Vdly__top__DOT__CLINT__DOT__LFSR;
    __Vdly__top__DOT__CLINT__DOT__LFSR = 0;
    CData/*4:0*/ __Vdly__top__DOT__LSU__DOT__LFSR;
    __Vdly__top__DOT__LSU__DOT__LFSR = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v0;
    __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v0 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v32;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v32;
    __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v32 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v33;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v33 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v34;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v34 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v35;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v35 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v36;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v36 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v37;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v37 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v38;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v38 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v39;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v39 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v40;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v40 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v41;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v41 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v42;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v42 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v43;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v43 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v44;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v44 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v45;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v45 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v46;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v46 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v47;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v47 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v48;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v48 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v49;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v49 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v50;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v50 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v51;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v51 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v52;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v52 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v53;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v53 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v54;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v54 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v55;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v55 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v56;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v56 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v57;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v57 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v58;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v58 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v59;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v59 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v60;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v60 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v61;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v61 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v62;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v62 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v63;
    __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v63 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v0;
    __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v32;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v32;
    __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v33;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v34;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v34 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v35;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v35 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v36;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v36 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v37;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v37 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v38;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v38 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v39;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v39 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v40;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v40 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v41;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v41 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v42;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v42 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v43;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v43 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v44;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v44 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v45;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v45 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v46;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v46 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v47;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v47 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v48;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v48 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v49;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v49 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v50;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v50 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v51;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v51 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v52;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v52 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v53;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v53 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v54;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v54 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v55;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v55 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v56;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v56 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v57;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v57 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v58;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v58 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v59;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v59 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v60;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v60 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v61;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v61 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v62;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v62 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v63;
    __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v63 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v0;
    __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v32;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v32;
    __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v33;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v34;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v34 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v35;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v35 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v36;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v36 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v37;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v37 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v38;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v38 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v39;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v39 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v40;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v40 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v41;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v41 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v42;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v42 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v43;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v43 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v44;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v44 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v45;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v45 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v46;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v46 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v47;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v47 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v48;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v48 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v49;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v49 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v50;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v50 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v51;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v51 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v52;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v52 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v53;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v53 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v54;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v54 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v55;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v55 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v56;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v56 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v57;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v57 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v58;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v58 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v59;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v59 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v60;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v60 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v61;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v61 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v62;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v62 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v63;
    __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v63 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v0;
    __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v32;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v32;
    __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v33;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v34;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v34 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v35;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v35 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v36;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v36 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v37;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v37 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v38;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v38 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v39;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v39 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v40;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v40 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v41;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v41 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v42;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v42 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v43;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v43 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v44;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v44 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v45;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v45 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v46;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v46 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v47;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v47 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v48;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v48 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v49;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v49 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v50;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v50 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v51;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v51 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v52;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v52 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v53;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v53 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v54;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v54 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v55;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v55 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v56;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v56 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v57;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v57 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v58;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v58 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v59;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v59 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v60;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v60 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v61;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v61 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v62;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v62 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v63;
    __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v63 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v64;
    __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v64 = 0;
    // Body
    __Vdly__top__DOT__CLINT__DOT__time_counter = vlSelf->top__DOT__CLINT__DOT__time_counter;
    __Vdly__top__DOT__CLINT__DOT__w_state = vlSelf->top__DOT__CLINT__DOT__w_state;
    __Vdly__top__DOT__CLINT__DOT__aw_state = vlSelf->top__DOT__CLINT__DOT__aw_state;
    __Vdly__top__DOT__UART__DOT__ar_state = vlSelf->top__DOT__UART__DOT__ar_state;
    __Vdly__top__DOT__CLINT__DOT__LFSR = vlSelf->top__DOT__CLINT__DOT__LFSR;
    __Vdly__top__DOT__UART__DOT__LFSR = vlSelf->top__DOT__UART__DOT__LFSR;
    __Vdly__top__DOT__Mem__DOT__LFSR = vlSelf->top__DOT__Mem__DOT__LFSR;
    __Vdly__top__DOT__IFU__DOT__LFSR = vlSelf->top__DOT__IFU__DOT__LFSR;
    __Vdly__top__DOT__LSU__DOT__LFSR = vlSelf->top__DOT__LSU__DOT__LFSR;
    __Vdly__top__DOT__CLINT__DOT__ar_state = vlSelf->top__DOT__CLINT__DOT__ar_state;
    __Vdly__top__DOT__UART__DOT__w_state = vlSelf->top__DOT__UART__DOT__w_state;
    __Vdly__top__DOT__UART__DOT__aw_state = vlSelf->top__DOT__UART__DOT__aw_state;
    __Vdly__top__DOT__Mem__DOT__w_state = vlSelf->top__DOT__Mem__DOT__w_state;
    __Vdly__top__DOT__Mem__DOT__aw_state = vlSelf->top__DOT__Mem__DOT__aw_state;
    __Vdly__top__DOT__Mem__DOT__ar_state = vlSelf->top__DOT__Mem__DOT__ar_state;
    __Vdly__top__DOT__clint_bresp = vlSelf->top__DOT__clint_bresp;
    __Vdly__top__DOT__CLINT__DOT__wdata_counter = vlSelf->top__DOT__CLINT__DOT__wdata_counter;
    __Vdly__top__DOT__CLINT__DOT__write_box = vlSelf->top__DOT__CLINT__DOT__write_box;
    __Vdly__top__DOT__UART__DOT__rdata_counter = vlSelf->top__DOT__UART__DOT__rdata_counter;
    __Vdly__top__DOT__UART__DOT__flag_rdata = vlSelf->top__DOT__UART__DOT__flag_rdata;
    __Vdly__top__DOT__CLINT__DOT__rdata_counter = vlSelf->top__DOT__CLINT__DOT__rdata_counter;
    __Vdly__top__DOT__CLINT__DOT__flag_rdata = vlSelf->top__DOT__CLINT__DOT__flag_rdata;
    __Vdly__top__DOT__Mem__DOT__rdata_counter = vlSelf->top__DOT__Mem__DOT__rdata_counter;
    __Vdly__top__DOT__Mem__DOT__flag_rdata = vlSelf->top__DOT__Mem__DOT__flag_rdata;
    __Vdly__top__DOT__UART__DOT__wdata_counter = vlSelf->top__DOT__UART__DOT__wdata_counter;
    __Vdly__top__DOT__UART__DOT__write_box = vlSelf->top__DOT__UART__DOT__write_box;
    __Vdly__top__DOT__uart_bresp = vlSelf->top__DOT__uart_bresp;
    __Vdly__top__DOT__Mem__DOT__wdata_counter = vlSelf->top__DOT__Mem__DOT__wdata_counter;
    __Vdly__top__DOT__Mem__DOT__write_box = vlSelf->top__DOT__Mem__DOT__write_box;
    __Vdly__top__DOT__sram_bresp = vlSelf->top__DOT__sram_bresp;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0 = 0U;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32 = 0U;
    __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v64 = 0U;
    vlSelf->__Vdly__top__DOT__LSU__DOT__bready = vlSelf->top__DOT__LSU__DOT__bready;
    vlSelf->__Vdly__top__DOT__LSU__DOT__wvalid = vlSelf->top__DOT__LSU__DOT__wvalid;
    vlSelf->__Vdly__top__DOT__LSU__DOT__awvalid = vlSelf->top__DOT__LSU__DOT__awvalid;
    vlSelf->__Vdly__top__DOT__LSU__DOT__arvalid = vlSelf->top__DOT__LSU__DOT__arvalid;
    __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v0 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v32 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v0 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v32 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v0 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v32 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v64 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v0 = 0U;
    __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v32 = 0U;
    vlSelf->__Vdly__top__DOT__csr_write = vlSelf->top__DOT__csr_write;
    vlSelf->__Vdly__top__DOT__IFU__DOT__npc = vlSelf->top__DOT__IFU__DOT__npc;
    __Vdly__top__DOT__IFU__DOT__arvalid = vlSelf->top__DOT__IFU__DOT__arvalid;
    vlSelf->__Vdly__top__DOT__IDU__DOT__pc = vlSelf->top__DOT__IDU__DOT__pc;
    vlSelf->__Vdly__top__DOT__IDU__DOT__inst = vlSelf->top__DOT__IDU__DOT__inst;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->top__DOT__LSU__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdly__top__DOT__uart_bresp = 1U;
        vlSelf->top__DOT__LSU__DOT__flag = 0U;
        vlSelf->top__DOT__CLINT__DOT__r_state = 0U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch = 1U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch = 1U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch = 1U;
    }
    vlSelf->top__DOT__Xbar__DOT__r_switch = (1U & (
                                                   (~ (IData)(vlSelf->rst_n)) 
                                                   | (~ 
                                                      ((0xa0000048U 
                                                        == vlSelf->top__DOT__axi_araddr) 
                                                       | (0xa000004cU 
                                                          == vlSelf->top__DOT__axi_araddr)))));
    vlSelf->top__DOT__Xbar__DOT__ar_switch = (1U & 
                                              ((~ (IData)(vlSelf->rst_n)) 
                                               | (~ 
                                                  ((0xa0000048U 
                                                    == vlSelf->top__DOT__axi_araddr) 
                                                   | (0xa000004cU 
                                                      == vlSelf->top__DOT__axi_araddr)))));
    if (vlSelf->rst_n) {
        if ((3U != (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__IFU__DOT__unnamedblk5__DOT__j = 0x20U;
            vlSelf->top__DOT__IFU__DOT__unnamedblk3__DOT__j = 0x20U;
        }
        if ((3U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__i = 0x20U;
            vlSelf->top__DOT__IFU__DOT__unnamedblk4__DOT__i = 0x20U;
            vlSelf->top__DOT__IFU__DOT__rready_buffer = 0U;
            vlSelf->top__DOT__IFU__DOT__arvalid_buffer = 0U;
            __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0 = 1U;
            vlSelf->top__DOT__IFU__DOT__rready_delay 
                = vlSelf->top__DOT__IFU__DOT__LFSR;
            vlSelf->top__DOT__IFU__DOT__arvalid_delay 
                = vlSelf->top__DOT__IFU__DOT__LFSR;
        } else {
            vlSelf->top__DOT__IFU__DOT__rready_buffer 
                = ((vlSelf->top__DOT__IFU__DOT__rready_buffer 
                    << 1U) | (IData)(vlSelf->top__DOT__IFU__DOT__rready));
            vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                = ((vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                    << 1U) | (IData)(vlSelf->top__DOT__IFU__DOT__arvalid));
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v32 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0U];
            __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32 = 1U;
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v33 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [1U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v34 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [2U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v35 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [3U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v36 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [4U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v37 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [5U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v38 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [6U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v39 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [7U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v40 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [8U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v41 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [9U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v42 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0xaU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v43 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0xbU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v44 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0xcU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v45 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0xdU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v46 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0xeU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v47 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0xfU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v48 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x10U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v49 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x11U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v50 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x12U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v51 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x13U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v52 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x14U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v53 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x15U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v54 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x16U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v55 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x17U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v56 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x18U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v57 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x19U];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v58 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x1aU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v59 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x1bU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v60 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x1cU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v61 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x1dU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v62 
                = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x1eU];
            __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v63 
                = vlSelf->top__DOT__IFU__DOT__pc;
        }
        if ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__LSU__DOT__unnamedblk10__DOT__i = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk2__DOT__i = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk8__DOT__i = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk4__DOT__i = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk6__DOT__i = 0x20U;
            vlSelf->top__DOT__LSU__DOT__awvalid_buffer = 0U;
            vlSelf->top__DOT__LSU__DOT__wvalid_buffer = 0U;
            vlSelf->top__DOT__LSU__DOT__bready_buffer = 0U;
            vlSelf->top__DOT__LSU__DOT__arvalid_buffer = 0U;
            vlSelf->top__DOT__LSU__DOT__rready_buffer = 0U;
            __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v0 = 1U;
            __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v0 = 1U;
            __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v0 = 1U;
            __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v0 = 1U;
            vlSelf->top__DOT__LSU__DOT__bready_delay 
                = vlSelf->top__DOT__LSU__DOT__LFSR;
            vlSelf->top__DOT__LSU__DOT__rready_delay 
                = vlSelf->top__DOT__LSU__DOT__LFSR;
            vlSelf->top__DOT__LSU__DOT__awvalid_delay 
                = vlSelf->top__DOT__LSU__DOT__LFSR;
            vlSelf->top__DOT__LSU__DOT__arvalid_delay 
                = vlSelf->top__DOT__LSU__DOT__LFSR;
            vlSelf->top__DOT__LSU__DOT__wvalid_delay 
                = vlSelf->top__DOT__LSU__DOT__LFSR;
        } else {
            vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                = ((vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                    << 1U) | (IData)(vlSelf->top__DOT__LSU__DOT__awvalid));
            vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                = ((vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                    << 1U) | (IData)(vlSelf->top__DOT__LSU__DOT__wvalid));
            vlSelf->top__DOT__LSU__DOT__bready_buffer 
                = ((vlSelf->top__DOT__LSU__DOT__bready_buffer 
                    << 1U) | (IData)(vlSelf->top__DOT__LSU__DOT__bready));
            vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                = ((vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                    << 1U) | (IData)(vlSelf->top__DOT__LSU__DOT__arvalid));
            vlSelf->top__DOT__LSU__DOT__rready_buffer 
                = ((vlSelf->top__DOT__LSU__DOT__rready_buffer 
                    << 1U) | (IData)(vlSelf->top__DOT__LSU__DOT__rready));
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v32 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0U];
            __Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v32 = 1U;
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v33 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [1U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v34 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [2U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v35 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [3U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v36 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [4U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v37 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [5U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v38 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [6U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v39 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [7U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v40 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [8U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v41 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [9U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v42 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0xaU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v43 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0xbU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v44 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0xcU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v45 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0xdU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v46 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0xeU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v47 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0xfU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v48 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x10U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v49 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x11U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v50 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x12U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v51 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x13U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v52 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x14U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v53 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x15U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v54 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x16U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v55 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x17U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v56 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x18U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v57 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x19U];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v58 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x1aU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v59 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x1bU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v60 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x1cU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v61 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x1dU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v62 
                = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x1eU];
            __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v63 
                = vlSelf->top__DOT__LSU__DOT__wdata;
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v32 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0U];
            __Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v32 = 1U;
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v33 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [1U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v34 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [2U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v35 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [3U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v36 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [4U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v37 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [5U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v38 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [6U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v39 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [7U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v40 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [8U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v41 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [9U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v42 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0xaU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v43 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0xbU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v44 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0xcU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v45 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0xdU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v46 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0xeU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v47 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0xfU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v48 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x10U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v49 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x11U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v50 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x12U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v51 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x13U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v52 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x14U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v53 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x15U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v54 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x16U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v55 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x17U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v56 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x18U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v57 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x19U];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v58 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x1aU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v59 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x1bU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v60 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x1cU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v61 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x1dU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v62 
                = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x1eU];
            __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v63 
                = vlSelf->top__DOT__LSU__DOT__alu_result;
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v32 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0U];
            __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v32 = 1U;
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v33 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [1U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v34 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [2U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v35 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [3U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v36 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [4U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v37 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [5U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v38 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [6U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v39 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [7U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v40 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [8U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v41 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [9U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v42 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0xaU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v43 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0xbU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v44 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0xcU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v45 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0xdU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v46 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0xeU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v47 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0xfU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v48 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x10U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v49 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x11U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v50 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x12U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v51 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x13U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v52 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x14U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v53 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x15U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v54 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x16U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v55 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x17U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v56 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x18U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v57 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x19U];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v58 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x1aU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v59 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x1bU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v60 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x1cU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v61 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x1dU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v62 
                = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x1eU];
            __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v63 
                = vlSelf->top__DOT__LSU__DOT__alu_result;
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v32 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0U];
            __Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v32 = 1U;
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v33 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [1U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v34 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [2U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v35 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [3U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v36 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [4U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v37 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [5U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v38 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [6U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v39 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [7U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v40 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [8U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v41 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [9U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v42 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0xaU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v43 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0xbU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v44 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0xcU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v45 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0xdU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v46 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0xeU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v47 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0xfU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v48 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x10U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v49 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x11U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v50 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x12U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v51 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x13U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v52 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x14U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v53 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x15U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v54 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x16U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v55 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x17U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v56 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x18U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v57 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x19U];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v58 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x1aU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v59 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x1bU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v60 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x1cU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v61 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x1dU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v62 
                = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x1eU];
            __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v63 
                = (0xfU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                            ? (0xffU & ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                        << (3U & vlSelf->top__DOT__LSU__DOT__alu_result)))
                            : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                ? (0xffU & ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->top__DOT__LSU__DOT__alu_result)))
                                : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))));
        }
        if ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__current_state))) {
            vlSelf->top__DOT__LSU__DOT__unnamedblk9__DOT__j = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk7__DOT__j = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk5__DOT__j = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk3__DOT__j = 0x20U;
            vlSelf->top__DOT__LSU__DOT__unnamedblk11__DOT__j = 0x20U;
        }
        __Vdly__top__DOT__CLINT__DOT__time_counter 
            = (1ULL + vlSelf->top__DOT__CLINT__DOT__time_counter);
        __Vdly__top__DOT__CLINT__DOT__LFSR = (((IData)(vlSelf->top__DOT__CLINT__DOT__lfsr_in) 
                                               << 4U) 
                                              | (0xfU 
                                                 & ((IData)(vlSelf->top__DOT__CLINT__DOT__LFSR) 
                                                    >> 1U)));
        __Vdly__top__DOT__UART__DOT__LFSR = (((IData)(vlSelf->top__DOT__UART__DOT__lfsr_in) 
                                              << 4U) 
                                             | (0xfU 
                                                & ((IData)(vlSelf->top__DOT__UART__DOT__LFSR) 
                                                   >> 1U)));
        __Vdly__top__DOT__Mem__DOT__LFSR = (((IData)(vlSelf->top__DOT__Mem__DOT__lfsr_in) 
                                             << 4U) 
                                            | (0xfU 
                                               & ((IData)(vlSelf->top__DOT__Mem__DOT__LFSR) 
                                                  >> 1U)));
        __Vdly__top__DOT__IFU__DOT__LFSR = (((IData)(vlSelf->top__DOT__IFU__DOT__lfsr_in) 
                                             << 4U) 
                                            | (0xfU 
                                               & ((IData)(vlSelf->top__DOT__IFU__DOT__LFSR) 
                                                  >> 1U)));
        __Vdly__top__DOT__LSU__DOT__LFSR = (((IData)(vlSelf->top__DOT__LSU__DOT__lfsr_in) 
                                             << 4U) 
                                            | (0xfU 
                                               & ((IData)(vlSelf->top__DOT__LSU__DOT__LFSR) 
                                                  >> 1U)));
        if (((0x80000000U <= vlSelf->top__DOT__axi_awaddr) 
             & (0x80ffffffU >= vlSelf->top__DOT__axi_awaddr))) {
            vlSelf->top__DOT__Xbar__DOT__b_switch = 1U;
            vlSelf->top__DOT__Xbar__DOT__w_switch = 1U;
            vlSelf->top__DOT__Xbar__DOT__aw_switch = 1U;
        } else if ((0xa00003f8U == vlSelf->top__DOT__axi_awaddr)) {
            vlSelf->top__DOT__Xbar__DOT__b_switch = 0U;
            vlSelf->top__DOT__Xbar__DOT__w_switch = 0U;
            vlSelf->top__DOT__Xbar__DOT__aw_switch = 0U;
        }
        if (vlSelf->top__DOT__ifu_arvalid) {
            vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch = 0U;
            vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch = 0U;
        } else if (vlSelf->top__DOT__lsu_arvalid) {
            vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch = 1U;
            vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch = 1U;
        }
        if (vlSelf->top__DOT__CLINT__DOT__flag_waddr) {
            __Vdly__top__DOT__CLINT__DOT__write_box 
                = (1U | (IData)(__Vdly__top__DOT__CLINT__DOT__write_box));
        }
        if (vlSelf->top__DOT__CLINT__DOT__flag_wdata) {
            __Vdly__top__DOT__CLINT__DOT__write_box 
                = (2U | (IData)(__Vdly__top__DOT__CLINT__DOT__write_box));
        }
        if ((3U == (IData)(vlSelf->top__DOT__CLINT__DOT__write_box))) {
            if (((IData)(vlSelf->top__DOT__CLINT__DOT__wdata_counter) 
                 == (IData)(vlSelf->top__DOT__CLINT__DOT__w_delay))) {
                __Vdly__top__DOT__CLINT__DOT__wdata_counter = 0U;
                __Vdly__top__DOT__clint_bresp = 0U;
                vlSelf->top__DOT__clint_bvalid = 1U;
                __Vdly__top__DOT__CLINT__DOT__write_box = 0U;
                vlSelf->top__DOT__CLINT__DOT__w_delay 
                    = vlSelf->top__DOT__CLINT__DOT__LFSR;
            } else {
                __Vdly__top__DOT__CLINT__DOT__wdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__CLINT__DOT__wdata_counter)));
                __Vdly__top__DOT__clint_bresp = 2U;
                vlSelf->top__DOT__clint_bvalid = 0U;
            }
        } else {
            __Vdly__top__DOT__clint_bresp = 2U;
            vlSelf->top__DOT__clint_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__CLINT__DOT__time_counter = 0ULL;
        __Vdly__top__DOT__CLINT__DOT__LFSR = 1U;
        __Vdly__top__DOT__UART__DOT__LFSR = 1U;
        __Vdly__top__DOT__Mem__DOT__LFSR = 1U;
        __Vdly__top__DOT__IFU__DOT__LFSR = 1U;
        __Vdly__top__DOT__LSU__DOT__LFSR = 1U;
        vlSelf->top__DOT__IFU__DOT__rready_buffer = 0xffffffffU;
        vlSelf->top__DOT__IFU__DOT__arvalid_buffer = 0U;
        vlSelf->top__DOT__LSU__DOT__arvalid_buffer = 0U;
        __Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v64 = 1U;
        vlSelf->top__DOT__LSU__DOT__rready_buffer = 0xffffffffU;
        __Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v64 = 1U;
        vlSelf->top__DOT__Xbar__DOT__b_switch = 1U;
        vlSelf->top__DOT__Xbar__DOT__w_switch = 1U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch = 0U;
        vlSelf->top__DOT__Xbar__DOT__aw_switch = 1U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch = 0U;
        __Vdly__top__DOT__clint_bresp = 2U;
        vlSelf->top__DOT__clint_bvalid = 0U;
        vlSelf->top__DOT__CLINT__DOT__w_delay = vlSelf->top__DOT__CLINT__DOT__LFSR;
        __Vdly__top__DOT__CLINT__DOT__wdata_counter = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__UART__DOT__flag_raddr) {
            __Vdly__top__DOT__UART__DOT__flag_rdata = 1U;
        } else if (vlSelf->top__DOT__UART__DOT__flag_rdata) {
            if (((IData)(vlSelf->top__DOT__UART__DOT__rdata_counter) 
                 == (IData)(vlSelf->top__DOT__UART__DOT__r_delay))) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__UART__DOT__araddr, __Vfunc_pmem_read__4__Vfuncout);
                __Vdly__top__DOT__UART__DOT__rdata_counter = 0U;
                vlSelf->top__DOT__uart_rdata = __Vfunc_pmem_read__4__Vfuncout;
                vlSelf->top__DOT__uart_rresp = 0U;
                vlSelf->top__DOT__uart_rvalid = 1U;
                __Vdly__top__DOT__UART__DOT__flag_rdata = 0U;
                vlSelf->top__DOT__UART__DOT__r_delay 
                    = vlSelf->top__DOT__UART__DOT__LFSR;
            } else {
                __Vdly__top__DOT__UART__DOT__rdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__UART__DOT__rdata_counter)));
                vlSelf->top__DOT__uart_rresp = 2U;
                vlSelf->top__DOT__uart_rvalid = 0U;
            }
        } else {
            vlSelf->top__DOT__uart_rvalid = 0U;
            __Vdly__top__DOT__UART__DOT__rdata_counter = 0U;
            vlSelf->top__DOT__uart_rresp = 2U;
        }
    } else {
        vlSelf->top__DOT__UART__DOT__r_state = 0U;
        vlSelf->top__DOT__uart_rvalid = 0U;
        __Vdly__top__DOT__UART__DOT__rdata_counter = 0U;
        __Vdly__top__DOT__UART__DOT__flag_rdata = 0U;
        vlSelf->top__DOT__UART__DOT__r_delay = vlSelf->top__DOT__UART__DOT__LFSR;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__CLINT__DOT__flag_raddr) {
            __Vdly__top__DOT__CLINT__DOT__flag_rdata = 1U;
        } else if (vlSelf->top__DOT__CLINT__DOT__flag_rdata) {
            if (((IData)(vlSelf->top__DOT__CLINT__DOT__rdata_counter) 
                 == (IData)(vlSelf->top__DOT__CLINT__DOT__r_delay))) {
                __Vdly__top__DOT__CLINT__DOT__rdata_counter = 0U;
                vlSelf->top__DOT__clint_rresp = 0U;
                vlSelf->top__DOT__clint_rvalid = 1U;
                __Vdly__top__DOT__CLINT__DOT__flag_rdata = 0U;
                vlSelf->top__DOT__CLINT__DOT__r_delay 
                    = vlSelf->top__DOT__CLINT__DOT__LFSR;
                vlSelf->top__DOT__CLINT__DOT__rlast_o = 1U;
                if ((0xa0000048U == vlSelf->top__DOT__CLINT__DOT__araddr)) {
                    vlSelf->top__DOT__clint_rdata = (IData)(vlSelf->top__DOT__CLINT__DOT__time_counter);
                } else if ((0xa000004cU == vlSelf->top__DOT__CLINT__DOT__araddr)) {
                    vlSelf->top__DOT__clint_rdata = (IData)(
                                                            (vlSelf->top__DOT__CLINT__DOT__time_counter 
                                                             >> 0x20U));
                }
            } else {
                __Vdly__top__DOT__CLINT__DOT__rdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__CLINT__DOT__rdata_counter)));
                vlSelf->top__DOT__clint_rresp = 2U;
                vlSelf->top__DOT__clint_rvalid = 0U;
                vlSelf->top__DOT__CLINT__DOT__rlast_o = 0U;
            }
        } else {
            vlSelf->top__DOT__clint_rvalid = 0U;
            __Vdly__top__DOT__CLINT__DOT__rdata_counter = 0U;
            vlSelf->top__DOT__clint_rresp = 2U;
            vlSelf->top__DOT__CLINT__DOT__rlast_o = 0U;
        }
    } else {
        vlSelf->top__DOT__clint_rvalid = 0U;
        __Vdly__top__DOT__CLINT__DOT__rdata_counter = 0U;
        __Vdly__top__DOT__CLINT__DOT__flag_rdata = 0U;
        vlSelf->top__DOT__CLINT__DOT__r_delay = vlSelf->top__DOT__CLINT__DOT__LFSR;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__Mem__DOT__flag_raddr) {
            __Vdly__top__DOT__Mem__DOT__flag_rdata = 1U;
        } else if (vlSelf->top__DOT__Mem__DOT__flag_rdata) {
            if (((IData)(vlSelf->top__DOT__Mem__DOT__rdata_counter) 
                 == (IData)(vlSelf->top__DOT__Mem__DOT__r_delay))) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__Mem__DOT__araddr, __Vfunc_pmem_read__2__Vfuncout);
                __Vdly__top__DOT__Mem__DOT__rdata_counter = 0U;
                vlSelf->top__DOT__sram_rdata = __Vfunc_pmem_read__2__Vfuncout;
                vlSelf->top__DOT__sram_rresp = 0U;
                vlSelf->top__DOT__Mem__DOT__rlast_o = 1U;
                vlSelf->top__DOT__sram_rvalid = 1U;
                __Vdly__top__DOT__Mem__DOT__flag_rdata = 0U;
                vlSelf->top__DOT__Mem__DOT__r_delay 
                    = vlSelf->top__DOT__Mem__DOT__LFSR;
            } else {
                __Vdly__top__DOT__Mem__DOT__rdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Mem__DOT__rdata_counter)));
                vlSelf->top__DOT__sram_rresp = 2U;
                vlSelf->top__DOT__Mem__DOT__rlast_o = 0U;
                vlSelf->top__DOT__sram_rvalid = 0U;
            }
        } else {
            vlSelf->top__DOT__sram_rvalid = 0U;
            __Vdly__top__DOT__Mem__DOT__rdata_counter = 0U;
            vlSelf->top__DOT__sram_rresp = 2U;
            vlSelf->top__DOT__Mem__DOT__rlast_o = 0U;
        }
    } else {
        vlSelf->top__DOT__Mem__DOT__r_state = 0U;
        vlSelf->top__DOT__sram_rvalid = 0U;
        __Vdly__top__DOT__Mem__DOT__rdata_counter = 0U;
        __Vdly__top__DOT__Mem__DOT__flag_rdata = 0U;
        vlSelf->top__DOT__Mem__DOT__rlast_o = 0U;
        vlSelf->top__DOT__Mem__DOT__r_delay = vlSelf->top__DOT__Mem__DOT__LFSR;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__UART__DOT__flag_waddr) {
            __Vdly__top__DOT__UART__DOT__write_box 
                = (1U | (IData)(__Vdly__top__DOT__UART__DOT__write_box));
        }
        if (vlSelf->top__DOT__UART__DOT__flag_wdata) {
            __Vdly__top__DOT__UART__DOT__write_box 
                = (2U | (IData)(__Vdly__top__DOT__UART__DOT__write_box));
        }
        if ((3U == (IData)(vlSelf->top__DOT__UART__DOT__write_box))) {
            if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__UART__DOT__wdata_counter) 
                             == (IData)(vlSelf->top__DOT__UART__DOT__w_delay)))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->top__DOT__UART__DOT__wdata));
                __Vdly__top__DOT__UART__DOT__wdata_counter = 0U;
                __Vdly__top__DOT__uart_bresp = 0U;
                vlSelf->top__DOT__uart_bvalid = 1U;
                __Vdly__top__DOT__UART__DOT__write_box = 0U;
                vlSelf->top__DOT__UART__DOT__w_delay 
                    = vlSelf->top__DOT__UART__DOT__LFSR;
            } else {
                __Vdly__top__DOT__UART__DOT__wdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__UART__DOT__wdata_counter)));
                __Vdly__top__DOT__uart_bresp = 1U;
                vlSelf->top__DOT__uart_bvalid = 0U;
            }
        } else {
            __Vdly__top__DOT__uart_bresp = 1U;
            vlSelf->top__DOT__uart_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__uart_bresp = 1U;
        vlSelf->top__DOT__uart_bvalid = 0U;
        vlSelf->top__DOT__UART__DOT__w_delay = vlSelf->top__DOT__UART__DOT__LFSR;
        __Vdly__top__DOT__UART__DOT__wdata_counter = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__Mem__DOT__flag_waddr) {
            __Vdly__top__DOT__Mem__DOT__write_box = 
                (1U | (IData)(__Vdly__top__DOT__Mem__DOT__write_box));
        }
        if (vlSelf->top__DOT__Mem__DOT__flag_wdata) {
            __Vdly__top__DOT__Mem__DOT__write_box = 
                (2U | (IData)(__Vdly__top__DOT__Mem__DOT__write_box));
        }
        if ((3U == (IData)(vlSelf->top__DOT__Mem__DOT__write_box))) {
            if (((IData)(vlSelf->top__DOT__Mem__DOT__wdata_counter) 
                 == (IData)(vlSelf->top__DOT__Mem__DOT__w_delay))) {
                Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__Mem__DOT__awaddr, vlSelf->top__DOT__Mem__DOT__wdata, (IData)(vlSelf->top__DOT__Mem__DOT__wstrb));
                __Vdly__top__DOT__Mem__DOT__wdata_counter = 0U;
                __Vdly__top__DOT__sram_bresp = 0U;
                vlSelf->top__DOT__sram_bvalid = 1U;
                __Vdly__top__DOT__Mem__DOT__write_box = 0U;
                vlSelf->top__DOT__Mem__DOT__w_delay 
                    = vlSelf->top__DOT__Mem__DOT__LFSR;
            } else {
                __Vdly__top__DOT__Mem__DOT__wdata_counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Mem__DOT__wdata_counter)));
                __Vdly__top__DOT__sram_bresp = 2U;
                vlSelf->top__DOT__sram_bvalid = 0U;
            }
        } else {
            __Vdly__top__DOT__sram_bresp = 2U;
            vlSelf->top__DOT__sram_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__sram_bresp = 2U;
        vlSelf->top__DOT__sram_bvalid = 0U;
        vlSelf->top__DOT__Mem__DOT__w_delay = vlSelf->top__DOT__Mem__DOT__LFSR;
        __Vdly__top__DOT__Mem__DOT__wdata_counter = 0U;
    }
    if (__Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v0) {
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
    if (__Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v32) {
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[1U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v32;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[2U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v33;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[3U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v34;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[4U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v35;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[5U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v36;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[6U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v37;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[7U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v38;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[8U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v39;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[9U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v40;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xaU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v41;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xbU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v42;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xcU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v43;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xdU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v44;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xeU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v45;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0xfU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v46;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x10U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v47;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x11U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v48;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x12U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v49;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x13U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v50;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x14U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v51;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x15U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v52;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x16U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v53;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x17U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v54;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x18U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v55;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x19U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v56;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1aU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v57;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1bU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v58;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1cU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v59;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1dU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v60;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1eU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v61;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0x1fU] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v62;
        vlSelf->top__DOT__IFU__DOT__araddr_buffer[0U] 
            = __Vdlyvval__top__DOT__IFU__DOT__araddr_buffer__v63;
    }
    if (__Vdlyvset__top__DOT__IFU__DOT__araddr_buffer__v64) {
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
    if (__Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v0) {
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[1U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[2U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[3U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[4U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[5U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[6U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[7U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[8U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[9U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xaU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xbU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xcU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xdU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xeU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xfU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x10U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x11U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x12U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x13U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x14U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x15U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x16U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x17U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x18U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x19U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1aU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1bU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1cU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1dU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1eU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__wdata_buffer__v32) {
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[1U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v32;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[2U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v33;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[3U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v34;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[4U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v35;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[5U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v36;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[6U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v37;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[7U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v38;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[8U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v39;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[9U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v40;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xaU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v41;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xbU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v42;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xcU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v43;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xdU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v44;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xeU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v45;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0xfU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v46;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x10U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v47;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x11U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v48;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x12U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v49;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x13U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v50;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x14U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v51;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x15U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v52;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x16U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v53;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x17U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v54;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x18U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v55;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x19U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v56;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1aU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v57;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1bU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v58;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1cU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v59;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1dU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v60;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1eU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v61;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0x1fU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v62;
        vlSelf->top__DOT__LSU__DOT__wdata_buffer[0U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wdata_buffer__v63;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v0) {
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[1U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[2U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[3U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[4U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[5U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[6U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[7U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[8U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[9U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xaU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xbU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xcU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xdU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xeU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xfU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x10U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x11U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x12U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x13U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x14U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x15U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x16U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x17U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x18U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x19U] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1aU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1bU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1cU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1dU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1eU] = 0U;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__awaddr_buffer__v32) {
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[1U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v32;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[2U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v33;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[3U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v34;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[4U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v35;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[5U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v36;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[6U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v37;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[7U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v38;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[8U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v39;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[9U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v40;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xaU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v41;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xbU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v42;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xcU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v43;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xdU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v44;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xeU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v45;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0xfU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v46;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x10U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v47;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x11U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v48;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x12U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v49;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x13U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v50;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x14U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v51;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x15U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v52;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x16U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v53;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x17U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v54;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x18U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v55;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x19U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v56;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1aU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v57;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1bU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v58;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1cU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v59;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1dU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v60;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1eU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v61;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0x1fU] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v62;
        vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0U] 
            = __Vdlyvval__top__DOT__LSU__DOT__awaddr_buffer__v63;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v0) {
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[1U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[2U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[3U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[4U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[5U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[6U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[7U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[8U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[9U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xaU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xbU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xcU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xdU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xeU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xfU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x10U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x11U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x12U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x13U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x14U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x15U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x16U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x17U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x18U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x19U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1aU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1bU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1cU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1dU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1eU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v32) {
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[1U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v32;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[2U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v33;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[3U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v34;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[4U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v35;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[5U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v36;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[6U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v37;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[7U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v38;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[8U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v39;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[9U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v40;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xaU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v41;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xbU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v42;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xcU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v43;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xdU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v44;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xeU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v45;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xfU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v46;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x10U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v47;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x11U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v48;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x12U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v49;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x13U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v50;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x14U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v51;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x15U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v52;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x16U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v53;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x17U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v54;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x18U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v55;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x19U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v56;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1aU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v57;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1bU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v58;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1cU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v59;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1dU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v60;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1eU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v61;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1fU] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v62;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0U] 
            = __Vdlyvval__top__DOT__LSU__DOT__araddr_buffer__v63;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__araddr_buffer__v64) {
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[1U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[2U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[3U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[4U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[5U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[6U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[7U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[8U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[9U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xaU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xbU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xcU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xdU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xeU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0xfU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x10U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x11U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x12U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x13U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x14U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x15U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x16U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x17U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x18U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x19U] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1aU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1bU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1cU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1dU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1eU] = 0U;
        vlSelf->top__DOT__LSU__DOT__araddr_buffer[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v0) {
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[1U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[2U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[3U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[4U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[5U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[6U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[7U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[8U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[9U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xaU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xbU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xcU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xdU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xeU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xfU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x10U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x11U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x12U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x13U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x14U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x15U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x16U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x17U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x18U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x19U] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1aU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1bU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1cU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1dU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1eU] = 0U;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__LSU__DOT__wstrb_buffer__v32) {
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[1U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v32;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[2U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v33;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[3U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v34;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[4U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v35;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[5U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v36;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[6U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v37;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[7U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v38;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[8U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v39;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[9U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v40;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xaU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v41;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xbU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v42;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xcU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v43;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xdU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v44;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xeU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v45;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0xfU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v46;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x10U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v47;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x11U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v48;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x12U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v49;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x13U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v50;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x14U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v51;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x15U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v52;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x16U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v53;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x17U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v54;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x18U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v55;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x19U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v56;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1aU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v57;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1bU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v58;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1cU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v59;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1dU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v60;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1eU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v61;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0x1fU] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v62;
        vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0U] 
            = __Vdlyvval__top__DOT__LSU__DOT__wstrb_buffer__v63;
    }
    vlSelf->top__DOT__IFU__DOT__LFSR = __Vdly__top__DOT__IFU__DOT__LFSR;
    vlSelf->top__DOT__LSU__DOT__LFSR = __Vdly__top__DOT__LSU__DOT__LFSR;
    vlSelf->top__DOT__CLINT__DOT__write_box = __Vdly__top__DOT__CLINT__DOT__write_box;
    vlSelf->top__DOT__CLINT__DOT__wdata_counter = __Vdly__top__DOT__CLINT__DOT__wdata_counter;
    vlSelf->top__DOT__UART__DOT__flag_rdata = __Vdly__top__DOT__UART__DOT__flag_rdata;
    vlSelf->top__DOT__UART__DOT__rdata_counter = __Vdly__top__DOT__UART__DOT__rdata_counter;
    vlSelf->top__DOT__CLINT__DOT__flag_rdata = __Vdly__top__DOT__CLINT__DOT__flag_rdata;
    vlSelf->top__DOT__CLINT__DOT__rdata_counter = __Vdly__top__DOT__CLINT__DOT__rdata_counter;
    vlSelf->top__DOT__CLINT__DOT__time_counter = __Vdly__top__DOT__CLINT__DOT__time_counter;
    vlSelf->top__DOT__CLINT__DOT__LFSR = __Vdly__top__DOT__CLINT__DOT__LFSR;
    vlSelf->top__DOT__Mem__DOT__flag_rdata = __Vdly__top__DOT__Mem__DOT__flag_rdata;
    vlSelf->top__DOT__Mem__DOT__rdata_counter = __Vdly__top__DOT__Mem__DOT__rdata_counter;
    vlSelf->top__DOT__UART__DOT__write_box = __Vdly__top__DOT__UART__DOT__write_box;
    vlSelf->top__DOT__UART__DOT__wdata_counter = __Vdly__top__DOT__UART__DOT__wdata_counter;
    vlSelf->top__DOT__UART__DOT__LFSR = __Vdly__top__DOT__UART__DOT__LFSR;
    vlSelf->top__DOT__Mem__DOT__write_box = __Vdly__top__DOT__Mem__DOT__write_box;
    vlSelf->top__DOT__Mem__DOT__wdata_counter = __Vdly__top__DOT__Mem__DOT__wdata_counter;
    vlSelf->top__DOT__Mem__DOT__LFSR = __Vdly__top__DOT__Mem__DOT__LFSR;
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch) {
        vlSelf->top__DOT__AXI_Arbiter__DOT__bid_o_b = 0U;
    }
    vlSelf->top__DOT__ifu_rready = (1U & ((0x10U & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                           ? ((8U & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x1eU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x1dU)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x1cU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x1bU)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x1aU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x19U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x18U))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x16U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x15U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x14U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x13U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x12U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0x10U)))))
                                           : ((8U & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0xeU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0xdU)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0xcU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0xbU)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 0xaU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 9U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 8U))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 7U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 6U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 5U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 4U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 3U)
                                                     : 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__IFU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__IFU__DOT__rready_buffer 
                                                     >> 1U)
                                                     : vlSelf->top__DOT__IFU__DOT__rready_buffer))))));
    vlSelf->top__DOT__lsu_bready = (1U & ((0x10U & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                           ? ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x1eU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x1dU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x1cU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x1bU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x1aU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x19U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x18U))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x16U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x15U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x14U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x13U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x12U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0x10U)))))
                                           : ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0xeU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0xdU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0xcU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0xbU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 0xaU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 9U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 8U))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 7U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 6U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 5U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 4U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 3U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__bready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__bready_buffer 
                                                     >> 1U)
                                                     : vlSelf->top__DOT__LSU__DOT__bready_buffer))))));
    vlSelf->top__DOT__lsu_rready = (1U & ((0x10U & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                           ? ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x1eU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x1dU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x1cU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x1bU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x1aU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x19U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x18U))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x16U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x15U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x14U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x13U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x12U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0x10U)))))
                                           : ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0xeU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0xdU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0xcU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0xbU)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 0xaU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 9U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 8U))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 7U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 6U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 5U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 4U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 3U)
                                                     : 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__rready_delay))
                                                     ? 
                                                    (vlSelf->top__DOT__LSU__DOT__rready_buffer 
                                                     >> 1U)
                                                     : vlSelf->top__DOT__LSU__DOT__rready_buffer))))));
    vlSelf->top__DOT__IFU__DOT__lfsr_in = (1U & VL_REDXOR_8(vlSelf->top__DOT__IFU__DOT__LFSR));
    if ((0x10U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((8U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                        vlSelf->top__DOT__ifu_arvalid 
                            = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                     >> 0x1fU));
                        vlSelf->top__DOT__ifu_araddr 
                            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                            [0x1fU];
                    } else {
                        vlSelf->top__DOT__ifu_arvalid 
                            = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                     >> 0x1eU));
                        vlSelf->top__DOT__ifu_araddr 
                            = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                            [0x1eU];
                    }
                } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1dU));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1dU];
                } else {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1cU));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1cU];
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1bU));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1bU];
                } else {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x1aU));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x1aU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x19U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x19U];
            } else {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x18U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x18U];
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x17U));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x17U];
                } else {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0x16U));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0x16U];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x15U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x15U];
            } else {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x14U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x14U];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x13U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x13U];
            } else {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0x12U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0x12U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 0x11U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x11U];
        } else {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 0x10U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [0x10U];
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0xfU));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0xfU];
                } else {
                    vlSelf->top__DOT__ifu_arvalid = 
                        (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                               >> 0xeU));
                    vlSelf->top__DOT__ifu_araddr = 
                        vlSelf->top__DOT__IFU__DOT__araddr_buffer
                        [0xeU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xdU));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xdU];
            } else {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xcU));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xcU];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xbU));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xbU];
            } else {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 0xaU));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [0xaU];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 9U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [9U];
        } else {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 8U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [8U];
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 7U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [7U];
            } else {
                vlSelf->top__DOT__ifu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                    >> 6U));
                vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                    [6U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 5U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [5U];
        } else {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 4U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [4U];
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 3U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [3U];
        } else {
            vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                                   >> 2U));
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
                [2U];
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_delay))) {
        vlSelf->top__DOT__ifu_arvalid = (1U & (vlSelf->top__DOT__IFU__DOT__arvalid_buffer 
                                               >> 1U));
        vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [1U];
    } else {
        vlSelf->top__DOT__ifu_arvalid = (1U & vlSelf->top__DOT__IFU__DOT__arvalid_buffer);
        vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__IFU__DOT__araddr_buffer
            [0U];
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
        if ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                    if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                        vlSelf->top__DOT__lsu_awvalid 
                            = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                     >> 0x1fU));
                        vlSelf->top__DOT__lsu_awaddr 
                            = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                            [0x1fU];
                    } else {
                        vlSelf->top__DOT__lsu_awvalid 
                            = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                     >> 0x1eU));
                        vlSelf->top__DOT__lsu_awaddr 
                            = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                            [0x1eU];
                    }
                } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0x1dU));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0x1dU];
                } else {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0x1cU));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0x1cU];
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0x1bU));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0x1bU];
                } else {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0x1aU));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0x1aU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0x19U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0x19U];
            } else {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0x18U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0x18U];
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0x17U));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0x17U];
                } else {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0x16U));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0x16U];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0x15U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0x15U];
            } else {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0x14U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0x14U];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0x13U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0x13U];
            } else {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0x12U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0x12U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 0x11U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x11U];
        } else {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 0x10U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [0x10U];
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
        if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0xfU));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0xfU];
                } else {
                    vlSelf->top__DOT__lsu_awvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                               >> 0xeU));
                    vlSelf->top__DOT__lsu_awaddr = 
                        vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                        [0xeU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0xdU));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0xdU];
            } else {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0xcU));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0xcU];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0xbU));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0xbU];
            } else {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 0xaU));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [0xaU];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 9U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [9U];
        } else {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 8U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [8U];
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
        if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 7U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [7U];
            } else {
                vlSelf->top__DOT__lsu_awvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                    >> 6U));
                vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                    [6U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 5U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [5U];
        } else {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 4U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [4U];
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
        if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 3U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [3U];
        } else {
            vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                                   >> 2U));
            vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
                [2U];
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__awvalid_delay))) {
        vlSelf->top__DOT__lsu_awvalid = (1U & (vlSelf->top__DOT__LSU__DOT__awvalid_buffer 
                                               >> 1U));
        vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
            [1U];
    } else {
        vlSelf->top__DOT__lsu_awvalid = (1U & vlSelf->top__DOT__LSU__DOT__awvalid_buffer);
        vlSelf->top__DOT__lsu_awaddr = vlSelf->top__DOT__LSU__DOT__awaddr_buffer
            [0U];
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
        if ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                    if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                        vlSelf->top__DOT__lsu_arvalid 
                            = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                     >> 0x1fU));
                        vlSelf->top__DOT__lsu_araddr 
                            = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                            [0x1fU];
                    } else {
                        vlSelf->top__DOT__lsu_arvalid 
                            = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                     >> 0x1eU));
                        vlSelf->top__DOT__lsu_araddr 
                            = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                            [0x1eU];
                    }
                } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0x1dU));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0x1dU];
                } else {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0x1cU));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0x1cU];
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0x1bU));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0x1bU];
                } else {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0x1aU));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0x1aU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0x19U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0x19U];
            } else {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0x18U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0x18U];
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0x17U));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0x17U];
                } else {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0x16U));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0x16U];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0x15U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0x15U];
            } else {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0x14U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0x14U];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0x13U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0x13U];
            } else {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0x12U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0x12U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 0x11U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x11U];
        } else {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 0x10U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [0x10U];
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
        if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0xfU));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0xfU];
                } else {
                    vlSelf->top__DOT__lsu_arvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                               >> 0xeU));
                    vlSelf->top__DOT__lsu_araddr = 
                        vlSelf->top__DOT__LSU__DOT__araddr_buffer
                        [0xeU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0xdU));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0xdU];
            } else {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0xcU));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0xcU];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0xbU));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0xbU];
            } else {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 0xaU));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [0xaU];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 9U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [9U];
        } else {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 8U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [8U];
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
        if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 7U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [7U];
            } else {
                vlSelf->top__DOT__lsu_arvalid = (1U 
                                                 & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                    >> 6U));
                vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                    [6U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 5U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [5U];
        } else {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 4U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [4U];
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
        if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 3U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [3U];
        } else {
            vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                                   >> 2U));
            vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
                [2U];
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__arvalid_delay))) {
        vlSelf->top__DOT__lsu_arvalid = (1U & (vlSelf->top__DOT__LSU__DOT__arvalid_buffer 
                                               >> 1U));
        vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
            [1U];
    } else {
        vlSelf->top__DOT__lsu_arvalid = (1U & vlSelf->top__DOT__LSU__DOT__arvalid_buffer);
        vlSelf->top__DOT__lsu_araddr = vlSelf->top__DOT__LSU__DOT__araddr_buffer
            [0U];
    }
    vlSelf->top__DOT__LSU__DOT__lfsr_in = (1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR));
    if ((0x10U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
        if ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                    if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                        vlSelf->top__DOT__lsu_wstrb 
                            = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                            [0x1fU];
                        vlSelf->top__DOT__lsu_wvalid 
                            = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                     >> 0x1fU));
                        vlSelf->top__DOT__lsu_wdata 
                            = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                            [0x1fU];
                    } else {
                        vlSelf->top__DOT__lsu_wstrb 
                            = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                            [0x1eU];
                        vlSelf->top__DOT__lsu_wvalid 
                            = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                     >> 0x1eU));
                        vlSelf->top__DOT__lsu_wdata 
                            = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                            [0x1eU];
                    }
                } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0x1dU];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0x1dU));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0x1dU];
                } else {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0x1cU];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0x1cU));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0x1cU];
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0x1bU];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0x1bU));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0x1bU];
                } else {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0x1aU];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0x1aU));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0x1aU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0x19U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0x19U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0x19U];
            } else {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0x18U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0x18U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0x18U];
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0x17U];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0x17U));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0x17U];
                } else {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0x16U];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0x16U));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0x16U];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0x15U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0x15U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0x15U];
            } else {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0x14U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0x14U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0x14U];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0x13U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0x13U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0x13U];
            } else {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0x12U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0x12U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0x12U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x11U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 0x11U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x11U];
        } else {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [0x10U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 0x10U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [0x10U];
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
        if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0xfU];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0xfU));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0xfU];
                } else {
                    vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                        [0xeU];
                    vlSelf->top__DOT__lsu_wvalid = 
                        (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                               >> 0xeU));
                    vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                        [0xeU];
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0xdU];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0xdU));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0xdU];
            } else {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0xcU];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0xcU));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0xcU];
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0xbU];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0xbU));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0xbU];
            } else {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [0xaU];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 0xaU));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [0xaU];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [9U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 9U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [9U];
        } else {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [8U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 8U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [8U];
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
        if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [7U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 7U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [7U];
            } else {
                vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                    [6U];
                vlSelf->top__DOT__lsu_wvalid = (1U 
                                                & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                   >> 6U));
                vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                    [6U];
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [5U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 5U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [5U];
        } else {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [4U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 4U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [4U];
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
        if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [3U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 3U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [3U];
        } else {
            vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
                [2U];
            vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                                  >> 2U));
            vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
                [2U];
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__LSU__DOT__wvalid_delay))) {
        vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
            [1U];
        vlSelf->top__DOT__lsu_wvalid = (1U & (vlSelf->top__DOT__LSU__DOT__wvalid_buffer 
                                              >> 1U));
        vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
            [1U];
    } else {
        vlSelf->top__DOT__lsu_wstrb = vlSelf->top__DOT__LSU__DOT__wstrb_buffer
            [0U];
        vlSelf->top__DOT__lsu_wvalid = (1U & vlSelf->top__DOT__LSU__DOT__wvalid_buffer);
        vlSelf->top__DOT__lsu_wdata = vlSelf->top__DOT__LSU__DOT__wdata_buffer
            [0U];
    }
    vlSelf->top__DOT__CLINT__DOT__lfsr_in = (1U & VL_REDXOR_8(vlSelf->top__DOT__CLINT__DOT__LFSR));
    if (vlSelf->top__DOT__Xbar__DOT__r_switch) {
        vlSelf->top__DOT__axi_rresp = vlSelf->top__DOT__sram_rresp;
        vlSelf->top__DOT__axi_rvalid = vlSelf->top__DOT__sram_rvalid;
    } else {
        vlSelf->top__DOT__axi_rresp = vlSelf->top__DOT__clint_rresp;
        vlSelf->top__DOT__axi_rvalid = vlSelf->top__DOT__clint_rvalid;
    }
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch) {
        vlSelf->top__DOT__AXI_Arbiter__DOT__rlast_o_b = 0U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__rid_o_b = 0U;
        vlSelf->top__DOT__axi_rready = vlSelf->top__DOT__lsu_rready;
        vlSelf->top__DOT__lsu_rvalid = vlSelf->top__DOT__axi_rvalid;
    } else {
        vlSelf->top__DOT__axi_rready = vlSelf->top__DOT__ifu_rready;
    }
    if (vlSelf->top__DOT__Xbar__DOT__r_switch) {
        vlSelf->top__DOT__axi_rdata = vlSelf->top__DOT__sram_rdata;
        vlSelf->top__DOT__sram_rready = vlSelf->top__DOT__axi_rready;
    } else {
        vlSelf->top__DOT__axi_rdata = vlSelf->top__DOT__clint_rdata;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch)))) {
        vlSelf->top__DOT__AXI_Arbiter__DOT__rlast_o_a = 0U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__rid_o_a = 0U;
    }
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
    } else {
        vlSelf->top__DOT__valid_idu_to_exu = 0U;
        vlSelf->top__DOT__ready_ifu_to_idu = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch)))) {
        vlSelf->top__DOT__ifu_rdata = vlSelf->top__DOT__axi_rdata;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__clint_awready) 
             & (IData)(vlSelf->top__DOT__clint_awvalid))) {
            vlSelf->top__DOT__CLINT__DOT__awaddr = vlSelf->top__DOT__clint_awaddr;
            vlSelf->top__DOT__CLINT__DOT__flag_waddr = 1U;
        } else {
            vlSelf->top__DOT__CLINT__DOT__flag_waddr = 0U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__clint_bresp))) {
            vlSelf->top__DOT__CLINT__DOT__flag_wdata = 0U;
        } else if (((IData)(vlSelf->top__DOT__clint_wready) 
                    & (IData)(vlSelf->top__DOT__clint_wvalid))) {
            vlSelf->top__DOT__CLINT__DOT__wdata = vlSelf->top__DOT__clint_wdata;
            vlSelf->top__DOT__CLINT__DOT__wstrb = vlSelf->top__DOT__clint_wstrb;
            vlSelf->top__DOT__CLINT__DOT__flag_wdata = 1U;
        } else {
            vlSelf->top__DOT__CLINT__DOT__flag_wdata = 0U;
        }
        if (((IData)(vlSelf->top__DOT__uart_arready) 
             & (IData)(vlSelf->top__DOT__uart_arvalid))) {
            vlSelf->top__DOT__UART__DOT__araddr = vlSelf->top__DOT__uart_araddr;
            vlSelf->top__DOT__UART__DOT__flag_raddr = 1U;
        } else {
            vlSelf->top__DOT__UART__DOT__flag_raddr = 0U;
        }
        if (((IData)(vlSelf->top__DOT__clint_arready) 
             & (IData)(vlSelf->top__DOT__clint_arvalid))) {
            vlSelf->top__DOT__CLINT__DOT__araddr = vlSelf->top__DOT__clint_araddr;
            vlSelf->top__DOT__CLINT__DOT__flag_raddr = 1U;
        } else {
            vlSelf->top__DOT__CLINT__DOT__flag_raddr = 0U;
        }
        if (((IData)(vlSelf->top__DOT__sram_arready) 
             & (IData)(vlSelf->top__DOT__sram_arvalid))) {
            vlSelf->top__DOT__Mem__DOT__araddr = vlSelf->top__DOT__sram_araddr;
            vlSelf->top__DOT__Mem__DOT__flag_raddr = 1U;
        } else {
            vlSelf->top__DOT__Mem__DOT__flag_raddr = 0U;
        }
        if (((IData)(vlSelf->top__DOT__uart_awready) 
             & (IData)(vlSelf->top__DOT__uart_awvalid))) {
            vlSelf->top__DOT__UART__DOT__awaddr = vlSelf->top__DOT__uart_awaddr;
            vlSelf->top__DOT__UART__DOT__flag_waddr = 1U;
        } else {
            vlSelf->top__DOT__UART__DOT__flag_waddr = 0U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__uart_bresp))) {
            vlSelf->top__DOT__UART__DOT__flag_wdata = 0U;
        } else if (((IData)(vlSelf->top__DOT__uart_wready) 
                    & (IData)(vlSelf->top__DOT__uart_wvalid))) {
            vlSelf->top__DOT__UART__DOT__wdata = vlSelf->top__DOT__uart_wdata;
            vlSelf->top__DOT__UART__DOT__wstrb = vlSelf->top__DOT__uart_wstrb;
            vlSelf->top__DOT__UART__DOT__flag_wdata = 1U;
        } else {
            vlSelf->top__DOT__UART__DOT__flag_wdata = 0U;
        }
        if (((IData)(vlSelf->top__DOT__sram_awready) 
             & (IData)(vlSelf->top__DOT__sram_awvalid))) {
            vlSelf->top__DOT__Mem__DOT__awaddr = vlSelf->top__DOT__sram_awaddr;
            vlSelf->top__DOT__Mem__DOT__flag_waddr = 1U;
        } else {
            vlSelf->top__DOT__Mem__DOT__flag_waddr = 0U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__sram_bresp))) {
            vlSelf->top__DOT__Mem__DOT__flag_wdata = 0U;
        } else if (((IData)(vlSelf->top__DOT__sram_wready) 
                    & (IData)(vlSelf->top__DOT__sram_wvalid))) {
            vlSelf->top__DOT__Mem__DOT__wdata = vlSelf->top__DOT__sram_wdata;
            vlSelf->top__DOT__Mem__DOT__wstrb = vlSelf->top__DOT__sram_wstrb;
            vlSelf->top__DOT__Mem__DOT__flag_wdata = 1U;
        } else {
            vlSelf->top__DOT__Mem__DOT__flag_wdata = 0U;
        }
        vlSelf->top__DOT__IDU__DOT__current_state = vlSelf->top__DOT__IDU__DOT__next_state;
        if ((0U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            if (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid) 
                 & (IData)(vlSelf->top__DOT__ifu_arready))) {
                __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            }
            vlSelf->top__DOT__valid_ifu_to_idu = ((IData)(vlSelf->top__DOT__ifu_rvalid) 
                                                  & (IData)(vlSelf->top__DOT__IFU__DOT__rready));
            vlSelf->top__DOT__pc_ifu_to_idu = vlSelf->top__DOT__IFU__DOT__pc;
            vlSelf->top__DOT__IFU__DOT__rready = 1U;
        } else if ((2U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            vlSelf->top__DOT__valid_ifu_to_idu = 1U;
            vlSelf->top__DOT__IFU__DOT__rready = 0U;
            vlSelf->top__DOT__pc_ifu_to_idu = vlSelf->top__DOT__IFU__DOT__pc;
        } else if ((3U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 1U;
            __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            vlSelf->top__DOT__valid_ifu_to_idu = 0U;
            vlSelf->top__DOT__IFU__DOT__rready = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 1U;
            __Vdly__top__DOT__IFU__DOT__arvalid = 1U;
            vlSelf->top__DOT__valid_ifu_to_idu = 0U;
            vlSelf->__Vdly__top__DOT__IFU__DOT__npc 
                = vlSelf->top__DOT__npc_wbu_to_ifu;
            vlSelf->top__DOT__IFU__DOT__rready = 1U;
        } else if ((4U == (IData)(vlSelf->top__DOT__IFU__DOT__current_state))) {
            vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
            if (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid) 
                 & (IData)(vlSelf->top__DOT__ifu_arready))) {
                __Vdly__top__DOT__IFU__DOT__arvalid = 0U;
            }
            vlSelf->top__DOT__valid_ifu_to_idu = (1U 
                                                  & (~ (IData)(vlSelf->top__DOT__ifu_rresp)));
            vlSelf->top__DOT__IFU__DOT__rready = 1U;
        }
    } else {
        vlSelf->top__DOT__CLINT__DOT__awaddr = 0U;
        vlSelf->top__DOT__CLINT__DOT__flag_waddr = 0U;
        vlSelf->top__DOT__CLINT__DOT__wdata = 0U;
        vlSelf->top__DOT__CLINT__DOT__wstrb = 0U;
        vlSelf->top__DOT__CLINT__DOT__flag_wdata = 0U;
        vlSelf->top__DOT__UART__DOT__araddr = 0U;
        vlSelf->top__DOT__CLINT__DOT__araddr = 0U;
        vlSelf->top__DOT__Mem__DOT__araddr = 0U;
        vlSelf->top__DOT__UART__DOT__awaddr = 0U;
        vlSelf->top__DOT__UART__DOT__flag_waddr = 0U;
        vlSelf->top__DOT__UART__DOT__wdata = 0U;
        vlSelf->top__DOT__UART__DOT__wstrb = 0U;
        vlSelf->top__DOT__UART__DOT__flag_wdata = 0U;
        vlSelf->top__DOT__Mem__DOT__awaddr = 0U;
        vlSelf->top__DOT__Mem__DOT__flag_waddr = 0U;
        vlSelf->top__DOT__Mem__DOT__wdata = 0U;
        vlSelf->top__DOT__Mem__DOT__wstrb = 0U;
        vlSelf->top__DOT__Mem__DOT__flag_wdata = 0U;
        vlSelf->top__DOT__IDU__DOT__current_state = 0U;
        __Vdly__top__DOT__IFU__DOT__arvalid = 1U;
        vlSelf->top__DOT__IFU__DOT__rready = 0U;
        vlSelf->top__DOT__valid_ifu_to_idu = 0U;
        vlSelf->top__DOT__ready_wbu_to_ifu = 0U;
        vlSelf->__Vdly__top__DOT__IFU__DOT__npc = 0x80000000U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch)))) {
        vlSelf->top__DOT__ifu_rvalid = vlSelf->top__DOT__axi_rvalid;
        vlSelf->top__DOT__ifu_rresp = vlSelf->top__DOT__axi_rresp;
    }
    vlSelf->top__DOT__UART__DOT__lfsr_in = (1U & VL_REDXOR_8(vlSelf->top__DOT__UART__DOT__LFSR));
    vlSelf->top__DOT__Mem__DOT__lfsr_in = (1U & VL_REDXOR_8(vlSelf->top__DOT__Mem__DOT__LFSR));
    vlSelf->top__DOT__axi_bvalid = ((IData)(vlSelf->top__DOT__Xbar__DOT__b_switch)
                                     ? (IData)(vlSelf->top__DOT__sram_bvalid)
                                     : (IData)(vlSelf->top__DOT__uart_bvalid));
    vlSelf->top__DOT__axi_bready = ((IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch) 
                                    & (IData)(vlSelf->top__DOT__lsu_bready));
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch) {
        vlSelf->top__DOT__axi_awvalid = vlSelf->top__DOT__lsu_awvalid;
        vlSelf->top__DOT__axi_awaddr = vlSelf->top__DOT__lsu_awaddr;
    } else {
        vlSelf->top__DOT__axi_awvalid = 0U;
        vlSelf->top__DOT__axi_awaddr = 0U;
    }
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch) {
        vlSelf->top__DOT__axi_arvalid = vlSelf->top__DOT__lsu_arvalid;
        vlSelf->top__DOT__axi_araddr = vlSelf->top__DOT__lsu_araddr;
    } else {
        vlSelf->top__DOT__axi_arvalid = vlSelf->top__DOT__ifu_arvalid;
        vlSelf->top__DOT__axi_araddr = vlSelf->top__DOT__ifu_araddr;
    }
    if (vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch) {
        vlSelf->top__DOT__axi_wstrb = vlSelf->top__DOT__lsu_wstrb;
        vlSelf->top__DOT__axi_wdata = vlSelf->top__DOT__lsu_wdata;
        vlSelf->top__DOT__axi_wvalid = vlSelf->top__DOT__lsu_wvalid;
    } else {
        vlSelf->top__DOT__axi_wstrb = 0U;
        vlSelf->top__DOT__axi_wdata = 0U;
        vlSelf->top__DOT__axi_wvalid = 0U;
    }
    vlSelf->top__DOT__clint_bresp = __Vdly__top__DOT__clint_bresp;
    vlSelf->top__DOT__uart_bresp = __Vdly__top__DOT__uart_bresp;
    vlSelf->top__DOT__sram_bresp = __Vdly__top__DOT__sram_bresp;
    vlSelf->top__DOT__IFU__DOT__arvalid = __Vdly__top__DOT__IFU__DOT__arvalid;
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__b_switch)))) {
        vlSelf->top__DOT__uart_bready = vlSelf->top__DOT__axi_bready;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__r_switch)))) {
        vlSelf->top__DOT__clint_rready = vlSelf->top__DOT__axi_rready;
    }
    if (vlSelf->top__DOT__Xbar__DOT__b_switch) {
        vlSelf->top__DOT__sram_bready = vlSelf->top__DOT__axi_bready;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__CLINT__DOT__aw_state)) 
             & (IData)(vlSelf->top__DOT__clint_awvalid))) {
            vlSelf->top__DOT__clint_awready = 1U;
            __Vdly__top__DOT__CLINT__DOT__aw_state = 1U;
        } else if (vlSelf->top__DOT__CLINT__DOT__aw_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__clint_awvalid)))) {
                __Vdly__top__DOT__CLINT__DOT__aw_state = 0U;
            }
            vlSelf->top__DOT__clint_awready = 0U;
        }
        if (((~ (IData)(vlSelf->top__DOT__CLINT__DOT__w_state)) 
             & (IData)(vlSelf->top__DOT__clint_wvalid))) {
            vlSelf->top__DOT__clint_wready = 1U;
            __Vdly__top__DOT__CLINT__DOT__w_state = 1U;
        } else if (vlSelf->top__DOT__CLINT__DOT__w_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__clint_wvalid)))) {
                __Vdly__top__DOT__CLINT__DOT__w_state = 0U;
            }
            vlSelf->top__DOT__clint_wready = 0U;
        }
        if (((~ (IData)(vlSelf->top__DOT__UART__DOT__ar_state)) 
             & (IData)(vlSelf->top__DOT__uart_arvalid))) {
            vlSelf->top__DOT__uart_arready = 1U;
            __Vdly__top__DOT__UART__DOT__ar_state = 1U;
        } else if (vlSelf->top__DOT__UART__DOT__ar_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__uart_arvalid)))) {
                __Vdly__top__DOT__UART__DOT__ar_state = 0U;
            }
            vlSelf->top__DOT__uart_arready = 0U;
        }
        if (((~ (IData)(vlSelf->top__DOT__CLINT__DOT__ar_state)) 
             & (IData)(vlSelf->top__DOT__clint_arvalid))) {
            vlSelf->top__DOT__clint_arready = 1U;
            __Vdly__top__DOT__CLINT__DOT__ar_state = 1U;
        } else if (vlSelf->top__DOT__CLINT__DOT__ar_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__clint_arvalid)))) {
                __Vdly__top__DOT__CLINT__DOT__ar_state = 0U;
            }
            vlSelf->top__DOT__clint_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__clint_awready = 0U;
        __Vdly__top__DOT__CLINT__DOT__aw_state = 0U;
        vlSelf->top__DOT__clint_wready = 0U;
        __Vdly__top__DOT__CLINT__DOT__w_state = 0U;
        vlSelf->top__DOT__uart_arready = 0U;
        __Vdly__top__DOT__UART__DOT__ar_state = 0U;
        vlSelf->top__DOT__clint_arready = 0U;
        __Vdly__top__DOT__CLINT__DOT__ar_state = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__ar_switch)))) {
        vlSelf->top__DOT__Xbar__DOT__clint_arburst_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__clint_arsize_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__clint_arlen_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__clint_arid_o = 0U;
        vlSelf->top__DOT__clint_araddr = vlSelf->top__DOT__axi_araddr;
    }
    if (vlSelf->top__DOT__Xbar__DOT__ar_switch) {
        vlSelf->top__DOT__Xbar__DOT__sram_arburst_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__sram_arsize_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__sram_arlen_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__sram_arid_o = 0U;
        vlSelf->top__DOT__sram_araddr = vlSelf->top__DOT__axi_araddr;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__aw_switch)))) {
        vlSelf->top__DOT__Xbar__DOT__uart_awburst_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__uart_awsize_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__uart_awlen_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__uart_awid_o = 0U;
        vlSelf->top__DOT__uart_awaddr = vlSelf->top__DOT__axi_awaddr;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__w_switch)))) {
        vlSelf->top__DOT__Xbar__DOT__uart_wlast_o = 0U;
        vlSelf->top__DOT__uart_wstrb = vlSelf->top__DOT__axi_wstrb;
        vlSelf->top__DOT__uart_wdata = vlSelf->top__DOT__axi_wdata;
    }
    if (vlSelf->top__DOT__Xbar__DOT__aw_switch) {
        vlSelf->top__DOT__Xbar__DOT__sram_awburst_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__sram_awsize_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__sram_awlen_o = 0U;
        vlSelf->top__DOT__Xbar__DOT__sram_awid_o = 0U;
        vlSelf->top__DOT__sram_awaddr = vlSelf->top__DOT__axi_awaddr;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch)))) {
        vlSelf->top__DOT__AXI_Arbiter__DOT__bid_o_a = 0U;
        vlSelf->top__DOT__AXI_Arbiter__DOT__bvalid_o_a 
            = vlSelf->top__DOT__axi_bvalid;
    }
    if (vlSelf->top__DOT__Xbar__DOT__w_switch) {
        vlSelf->top__DOT__Xbar__DOT__sram_wlast_o = 0U;
        vlSelf->top__DOT__sram_wstrb = vlSelf->top__DOT__axi_wstrb;
        vlSelf->top__DOT__sram_wdata = vlSelf->top__DOT__axi_wdata;
    }
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__ifu_rdata))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 837, "");
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__ar_switch)))) {
        vlSelf->top__DOT__clint_arvalid = vlSelf->top__DOT__axi_arvalid;
    }
    vlSelf->top__DOT__axi_bresp = ((IData)(vlSelf->top__DOT__Xbar__DOT__b_switch)
                                    ? (IData)(vlSelf->top__DOT__sram_bresp)
                                    : (IData)(vlSelf->top__DOT__uart_bresp));
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch)))) {
        vlSelf->top__DOT__AXI_Arbiter__DOT__bresp_o_a 
            = vlSelf->top__DOT__axi_bresp;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__Mem__DOT__ar_state)) 
             & (IData)(vlSelf->top__DOT__sram_arvalid))) {
            vlSelf->top__DOT__sram_arready = 1U;
            __Vdly__top__DOT__Mem__DOT__ar_state = 1U;
        } else if (vlSelf->top__DOT__Mem__DOT__ar_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__sram_arvalid)))) {
                __Vdly__top__DOT__Mem__DOT__ar_state = 0U;
            }
            vlSelf->top__DOT__sram_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__sram_arready = 0U;
        __Vdly__top__DOT__Mem__DOT__ar_state = 0U;
    }
    if (vlSelf->top__DOT__Xbar__DOT__ar_switch) {
        vlSelf->top__DOT__sram_arvalid = vlSelf->top__DOT__axi_arvalid;
        vlSelf->top__DOT__axi_arready = vlSelf->top__DOT__sram_arready;
    } else {
        vlSelf->top__DOT__axi_arready = vlSelf->top__DOT__clint_arready;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__UART__DOT__aw_state)) 
             & (IData)(vlSelf->top__DOT__uart_awvalid))) {
            vlSelf->top__DOT__uart_awready = 1U;
            __Vdly__top__DOT__UART__DOT__aw_state = 1U;
        } else if (vlSelf->top__DOT__UART__DOT__aw_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__uart_awvalid)))) {
                __Vdly__top__DOT__UART__DOT__aw_state = 0U;
            }
            vlSelf->top__DOT__uart_awready = 0U;
        }
    } else {
        vlSelf->top__DOT__uart_awready = 0U;
        __Vdly__top__DOT__UART__DOT__aw_state = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__aw_switch)))) {
        vlSelf->top__DOT__uart_awvalid = vlSelf->top__DOT__axi_awvalid;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__UART__DOT__w_state)) 
             & (IData)(vlSelf->top__DOT__uart_wvalid))) {
            vlSelf->top__DOT__uart_wready = 1U;
            __Vdly__top__DOT__UART__DOT__w_state = 1U;
        } else if (vlSelf->top__DOT__UART__DOT__w_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__uart_wvalid)))) {
                __Vdly__top__DOT__UART__DOT__w_state = 0U;
            }
            vlSelf->top__DOT__uart_wready = 0U;
        }
    } else {
        vlSelf->top__DOT__uart_wready = 0U;
        __Vdly__top__DOT__UART__DOT__w_state = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Xbar__DOT__w_switch)))) {
        vlSelf->top__DOT__uart_wvalid = vlSelf->top__DOT__axi_wvalid;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__Mem__DOT__aw_state)) 
             & (IData)(vlSelf->top__DOT__sram_awvalid))) {
            vlSelf->top__DOT__sram_awready = 1U;
            __Vdly__top__DOT__Mem__DOT__aw_state = 1U;
        } else if (vlSelf->top__DOT__Mem__DOT__aw_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__sram_awvalid)))) {
                __Vdly__top__DOT__Mem__DOT__aw_state = 0U;
            }
            vlSelf->top__DOT__sram_awready = 0U;
        }
    } else {
        vlSelf->top__DOT__sram_awready = 0U;
        __Vdly__top__DOT__Mem__DOT__aw_state = 0U;
    }
    if (vlSelf->top__DOT__Xbar__DOT__aw_switch) {
        vlSelf->top__DOT__sram_awvalid = vlSelf->top__DOT__axi_awvalid;
        vlSelf->top__DOT__axi_awready = vlSelf->top__DOT__sram_awready;
    } else {
        vlSelf->top__DOT__axi_awready = vlSelf->top__DOT__uart_awready;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__Mem__DOT__w_state)) 
             & (IData)(vlSelf->top__DOT__sram_wvalid))) {
            vlSelf->top__DOT__sram_wready = 1U;
            __Vdly__top__DOT__Mem__DOT__w_state = 1U;
        } else if (vlSelf->top__DOT__Mem__DOT__w_state) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__sram_wvalid)))) {
                __Vdly__top__DOT__Mem__DOT__w_state = 0U;
            }
            vlSelf->top__DOT__sram_wready = 0U;
        }
    } else {
        vlSelf->top__DOT__sram_wready = 0U;
        __Vdly__top__DOT__Mem__DOT__w_state = 0U;
    }
    if (vlSelf->top__DOT__Xbar__DOT__w_switch) {
        vlSelf->top__DOT__sram_wvalid = vlSelf->top__DOT__axi_wvalid;
        vlSelf->top__DOT__axi_wready = vlSelf->top__DOT__sram_wready;
    } else {
        vlSelf->top__DOT__axi_wready = vlSelf->top__DOT__uart_wready;
    }
    vlSelf->top__DOT__IFU__DOT__current_state = ((IData)(vlSelf->rst_n)
                                                  ? (IData)(vlSelf->top__DOT__IFU__DOT__next_state)
                                                  : 0U);
    vlSelf->top__DOT__CLINT__DOT__aw_state = __Vdly__top__DOT__CLINT__DOT__aw_state;
    vlSelf->top__DOT__CLINT__DOT__w_state = __Vdly__top__DOT__CLINT__DOT__w_state;
    vlSelf->top__DOT__UART__DOT__ar_state = __Vdly__top__DOT__UART__DOT__ar_state;
    vlSelf->top__DOT__CLINT__DOT__ar_state = __Vdly__top__DOT__CLINT__DOT__ar_state;
    vlSelf->top__DOT__Mem__DOT__ar_state = __Vdly__top__DOT__Mem__DOT__ar_state;
    vlSelf->top__DOT__UART__DOT__aw_state = __Vdly__top__DOT__UART__DOT__aw_state;
    vlSelf->top__DOT__UART__DOT__w_state = __Vdly__top__DOT__UART__DOT__w_state;
    vlSelf->top__DOT__Mem__DOT__aw_state = __Vdly__top__DOT__Mem__DOT__aw_state;
    vlSelf->top__DOT__Mem__DOT__w_state = __Vdly__top__DOT__Mem__DOT__w_state;
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch)))) {
        vlSelf->top__DOT__ifu_arready = vlSelf->top__DOT__axi_arready;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch)))) {
        vlSelf->top__DOT__AXI_Arbiter__DOT__awready_o_a 
            = vlSelf->top__DOT__axi_awready;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch)))) {
        vlSelf->top__DOT__AXI_Arbiter__DOT__wready_o_a 
            = vlSelf->top__DOT__axi_wready;
    }
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
