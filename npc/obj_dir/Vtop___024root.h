// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ top__DOT__valid_wbu_to_ifu;
        CData/*0:0*/ top__DOT__ready_wbu_to_ifu;
        CData/*0:0*/ top__DOT__valid_ifu_to_idu;
        CData/*0:0*/ top__DOT__ready_ifu_to_idu;
        CData/*0:0*/ top__DOT__ifu_arvalid;
        CData/*0:0*/ top__DOT__ifu_arready;
        CData/*0:0*/ top__DOT__ifu_rresp;
        CData/*0:0*/ top__DOT__ifu_rvalid;
        CData/*0:0*/ top__DOT__ifu_rready;
        CData/*0:0*/ top__DOT__useless1;
        CData/*0:0*/ top__DOT__useless2;
        CData/*0:0*/ top__DOT__useless3;
        CData/*0:0*/ top__DOT__useless4;
        CData/*0:0*/ top__DOT__a_in_src_idu_to_exu;
        CData/*1:0*/ top__DOT__b_in_src_idu_to_exu;
        CData/*2:0*/ top__DOT__pc_srcs_idu_to_exu;
        CData/*0:0*/ top__DOT__adder_a_src_idu_to_exu;
        CData/*0:0*/ top__DOT__adder_out_src_idu_to_exu;
        CData/*3:0*/ top__DOT__alu_op_idu_to_exu;
        CData/*0:0*/ top__DOT__MemRead_idu_to_exu;
        CData/*0:0*/ top__DOT__MemWrite_idu_to_exu;
        CData/*7:0*/ top__DOT__wmask_idu_to_exu;
        CData/*2:0*/ top__DOT__rmask_idu_to_exu;
        CData/*0:0*/ top__DOT__wb_src_idu_to_exu;
        CData/*0:0*/ top__DOT__csr_write_idu_to_exu;
        CData/*0:0*/ top__DOT__csr_wdata_src_idu_to_exu;
        CData/*0:0*/ top__DOT__reg_write_idu_to_exu;
        CData/*0:0*/ top__DOT__valid_idu_to_exu;
        CData/*0:0*/ top__DOT__ready_idu_to_exu;
        CData/*0:0*/ top__DOT__csr_write;
        CData/*4:0*/ top__DOT__waddr;
        CData/*0:0*/ top__DOT__reg_write;
        CData/*0:0*/ top__DOT__MemRead_exu_to_lsu;
        CData/*0:0*/ top__DOT__MemWrite_exu_to_lsu;
        CData/*7:0*/ top__DOT__wmask_exu_to_lsu;
        CData/*2:0*/ top__DOT__rmask_exu_to_lsu;
        CData/*0:0*/ top__DOT__wb_src_exu_to_lsu;
        CData/*0:0*/ top__DOT__csr_write_exu_to_lsu;
        CData/*0:0*/ top__DOT__csr_wdta_src_exu_to_lsu;
        CData/*0:0*/ top__DOT__reg_write_exu_to_lsu;
        CData/*4:0*/ top__DOT__waddr_exu_to_lsu;
        CData/*0:0*/ top__DOT__valid_exu_to_lsu;
        CData/*0:0*/ top__DOT__ready_exu_to_lsu;
        CData/*0:0*/ top__DOT__wb_src_lsu_to_wbu;
        CData/*0:0*/ top__DOT__csr_write_lsu_to_wbu;
        CData/*0:0*/ top__DOT__csr_wdata_src_lsu_to_wbu;
        CData/*0:0*/ top__DOT__reg_write_lsu_to_wbu;
        CData/*4:0*/ top__DOT__waddr_lsu_to_wbu;
        CData/*0:0*/ top__DOT__valid_lsu_to_wbu;
        CData/*0:0*/ top__DOT__ready_lsu_to_wbu;
        CData/*0:0*/ top__DOT__lsu_arvalid;
        CData/*0:0*/ top__DOT__lsu_arready;
        CData/*0:0*/ top__DOT__lsu_rresp;
        CData/*0:0*/ top__DOT__lsu_rvalid;
        CData/*0:0*/ top__DOT__lsu_rready;
        CData/*0:0*/ top__DOT__lsu_awvalid;
        CData/*0:0*/ top__DOT__lsu_awready;
        CData/*0:0*/ top__DOT__lsu_wvalid;
        CData/*0:0*/ top__DOT__lsu_wready;
        CData/*0:0*/ top__DOT__lsu_bresp;
        CData/*0:0*/ top__DOT__lsu_bvalid;
        CData/*0:0*/ top__DOT__lsu_bready;
    };
    struct {
        CData/*2:0*/ top__DOT__IFU__DOT__current_state;
        CData/*2:0*/ top__DOT__IFU__DOT__next_state;
        CData/*0:0*/ top__DOT__Inst_Mem__DOT__ar_state;
        CData/*0:0*/ top__DOT__Inst_Mem__DOT__r_state;
        CData/*0:0*/ top__DOT__Inst_Mem__DOT__aw_state;
        CData/*0:0*/ top__DOT__Inst_Mem__DOT__w_state;
        CData/*0:0*/ top__DOT__Inst_Mem__DOT__b_state;
        CData/*7:0*/ top__DOT__Inst_Mem__DOT__wstrb;
        CData/*0:0*/ top__DOT__Inst_Mem__DOT__wvalid;
        CData/*1:0*/ top__DOT__IDU__DOT__current_state;
        CData/*1:0*/ top__DOT__IDU__DOT__next_state;
        CData/*0:0*/ top__DOT__EXU__DOT__a_in_src;
        CData/*1:0*/ top__DOT__EXU__DOT__b_in_src;
        CData/*2:0*/ top__DOT__EXU__DOT__pc_srcs;
        CData/*0:0*/ top__DOT__EXU__DOT__adder_a_src;
        CData/*0:0*/ top__DOT__EXU__DOT__adder_out_src;
        CData/*3:0*/ top__DOT__EXU__DOT__alu_op;
        CData/*1:0*/ top__DOT__EXU__DOT__current_state;
        CData/*1:0*/ top__DOT__EXU__DOT__next_state;
        CData/*2:0*/ top__DOT__LSU__DOT__rmask;
        CData/*1:0*/ top__DOT__LSU__DOT__flag;
        CData/*1:0*/ top__DOT__LSU__DOT__current_state;
        CData/*1:0*/ top__DOT__LSU__DOT__next_state;
        CData/*0:0*/ top__DOT__Data_Mem__DOT__ar_state;
        CData/*0:0*/ top__DOT__Data_Mem__DOT__r_state;
        CData/*0:0*/ top__DOT__Data_Mem__DOT__aw_state;
        CData/*0:0*/ top__DOT__Data_Mem__DOT__w_state;
        CData/*0:0*/ top__DOT__Data_Mem__DOT__b_state;
        CData/*7:0*/ top__DOT__Data_Mem__DOT__wstrb;
        CData/*0:0*/ top__DOT__Data_Mem__DOT__wvalid;
        CData/*2:0*/ top__DOT__WBU__DOT__rmask;
        CData/*0:0*/ top__DOT__WBU__DOT__wb_src;
        CData/*0:0*/ top__DOT__WBU__DOT__csr_wdata_src;
        CData/*1:0*/ top__DOT__WBU__DOT__current_state;
        CData/*1:0*/ top__DOT__WBU__DOT__next_state;
        CData/*6:0*/ __Vtableidx1;
        CData/*5:0*/ __Vtableidx2;
        CData/*5:0*/ __Vtableidx4;
        CData/*5:0*/ __Vtableidx5;
        CData/*5:0*/ __Vtableidx6;
        CData/*0:0*/ __Vdly__top__DOT__lsu_rready;
        CData/*0:0*/ __Vdly__top__DOT__lsu_bready;
        CData/*1:0*/ __Vdly__top__DOT__LSU__DOT__flag;
        CData/*0:0*/ __Vdly__top__DOT__lsu_bresp;
        CData/*0:0*/ __Vdly__top__DOT__csr_write;
        CData/*4:0*/ __Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__Rgefile__DOT__rf__v0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst_n;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ __Vtableidx3;
        IData/*31:0*/ top__DOT__npc_wbu_to_ifu;
        IData/*31:0*/ top__DOT__pc_ifu_to_idu;
        IData/*31:0*/ top__DOT__ifu_rdata;
        IData/*31:0*/ top__DOT__imm_idu_to_exu;
        IData/*31:0*/ top__DOT__csr_wdata;
        IData/*31:0*/ top__DOT__csr_rdata_l_rs1_lsu_to_wbu;
        IData/*31:0*/ top__DOT__npc_lsu_to_wbu;
        IData/*31:0*/ top__DOT__lsu_rdata;
        IData/*31:0*/ top__DOT__lsu_wdata;
        IData/*31:0*/ top__DOT__IFU__DOT__pc;
        IData/*31:0*/ top__DOT__IFU__DOT__npc;
        IData/*31:0*/ top__DOT__Inst_Mem__DOT__araddr;
        IData/*31:0*/ top__DOT__Inst_Mem__DOT__awaddr;
    };
    struct {
        IData/*31:0*/ top__DOT__Inst_Mem__DOT__wdata;
        IData/*31:0*/ top__DOT__IDU__DOT__pc;
        IData/*31:0*/ top__DOT__IDU__DOT__inst;
        IData/*31:0*/ top__DOT__IDU__DOT__CSR__DOT__csr_mepc;
        IData/*31:0*/ top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
        IData/*31:0*/ top__DOT__IDU__DOT__CSR__DOT__csr_mcause;
        IData/*31:0*/ top__DOT__IDU__DOT__CSR__DOT__csr_mtvec;
        IData/*31:0*/ top__DOT__EXU__DOT__pc;
        IData/*31:0*/ top__DOT__EXU__DOT__rs1;
        IData/*31:0*/ top__DOT__EXU__DOT__rs2;
        IData/*31:0*/ top__DOT__EXU__DOT__imm;
        IData/*31:0*/ top__DOT__EXU__DOT__csr_rdata;
        IData/*31:0*/ top__DOT__EXU__DOT__a_in;
        IData/*31:0*/ top__DOT__EXU__DOT__b_in;
        IData/*31:0*/ top__DOT__EXU__DOT__pc_new;
        IData/*31:0*/ top__DOT__EXU__DOT__alu_result;
        IData/*31:0*/ top__DOT__LSU__DOT__alu_result;
        IData/*31:0*/ top__DOT__LSU__DOT__rs1;
        IData/*31:0*/ top__DOT__LSU__DOT__rs2;
        IData/*31:0*/ top__DOT__LSU__DOT__csr_rdata_l_rs1;
        IData/*31:0*/ top__DOT__Data_Mem__DOT__araddr;
        IData/*31:0*/ top__DOT__Data_Mem__DOT__awaddr;
        IData/*31:0*/ top__DOT__Data_Mem__DOT__wdata;
        IData/*31:0*/ top__DOT__WBU__DOT__mem_data;
        IData/*31:0*/ top__DOT__WBU__DOT__datamem_readdata;
        IData/*31:0*/ top__DOT__WBU__DOT__alu_result;
        IData/*31:0*/ top__DOT__WBU__DOT__rs1;
        IData/*31:0*/ top__DOT__WBU__DOT__csr_rdata_l_rs1;
        IData/*31:0*/ __Vdly__top__DOT__IFU__DOT__npc;
        IData/*31:0*/ __Vdly__top__DOT__IDU__DOT__pc;
        IData/*31:0*/ __Vdly__top__DOT__IDU__DOT__inst;
        IData/*31:0*/ __Vdly__top__DOT__Data_Mem__DOT__araddr;
        IData/*31:0*/ __Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
        IData/*31:0*/ __Vdlyvval__top__DOT__Rgefile__DOT__rf__v0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__csr_reg;
        VlUnpacked<IData/*31:0*/, 4> top__DOT____Vcellout__IDU__csr_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__reg_file;
        VlUnpacked<IData/*31:0*/, 32> top__DOT____Vcellout__Rgefile__reg_file;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__IDU__DOT____Vcellout__CSR__csr_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__Rgefile__DOT__rf;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
