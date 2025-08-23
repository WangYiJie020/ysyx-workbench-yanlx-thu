// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+1,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+2,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+267,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+268,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+3,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+4,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+2,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+5,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+6,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+1,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+7,"ifu_arvalid", false,-1);
    tracep->declBit(c+8,"ifu_arready", false,-1);
    tracep->declBus(c+2,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+9,"ifu_rresp", false,-1);
    tracep->declBit(c+10,"ifu_rvalid", false,-1);
    tracep->declBit(c+11,"ifu_rready", false,-1);
    tracep->declBit(c+12,"useless1", false,-1);
    tracep->declBit(c+13,"useless2", false,-1);
    tracep->declBit(c+14,"useless3", false,-1);
    tracep->declBit(c+15,"useless4", false,-1);
    tracep->declBus(c+16,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+17,"sram_arvalid", false,-1);
    tracep->declBit(c+18,"sram_arready", false,-1);
    tracep->declBus(c+19,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+20,"sram_rresp", false,-1);
    tracep->declBit(c+21,"sram_rvalid", false,-1);
    tracep->declBit(c+22,"sram_rready", false,-1);
    tracep->declBus(c+23,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+24,"sram_awvalid", false,-1);
    tracep->declBit(c+25,"sram_awready", false,-1);
    tracep->declBus(c+26,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"sram_wstrb", false,-1, 7,0);
    tracep->declBit(c+28,"sram_wvalid", false,-1);
    tracep->declBit(c+29,"sram_wready", false,-1);
    tracep->declBit(c+30,"sram_bresp", false,-1);
    tracep->declBit(c+31,"sram_bvalid", false,-1);
    tracep->declBit(c+32,"sram_bready", false,-1);
    tracep->declBus(c+470,"raddr1", false,-1, 4,0);
    tracep->declBus(c+471,"raddr2", false,-1, 4,0);
    tracep->declBus(c+497,"rdata1", false,-1, 31,0);
    tracep->declBus(c+498,"rdata2", false,-1, 31,0);
    tracep->declBus(c+357,"a5", false,-1, 31,0);
    tracep->declBus(c+472,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+497,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+498,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+473,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+499,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+474,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+475,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+476,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+477,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+478,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+479,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+480,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+481,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+482,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+483,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+484,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+485,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+486,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+487,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+488,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+33,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+269,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+489,"csr_write", false,-1);
    tracep->declBus(c+490,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+358+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+270,"wdata", false,-1, 31,0);
    tracep->declBus(c+271,"waddr", false,-1, 4,0);
    tracep->declBit(c+272,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+362+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+273,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+274,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+275,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+276,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+277,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+278,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+279,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+280,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+281,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+282,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+283,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+284,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+285,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+286,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+287,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+288,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+289,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+290,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+291,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+292,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+293,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+294,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+295,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+296,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+297,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+298,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+299,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+300,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+301,"ready_lsu_to_wbu", false,-1);
    tracep->declBus(c+34,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+35,"lsu_arvalid", false,-1);
    tracep->declBit(c+302,"lsu_arready", false,-1);
    tracep->declBus(c+292,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+303,"lsu_rresp", false,-1);
    tracep->declBit(c+36,"lsu_rvalid", false,-1);
    tracep->declBit(c+37,"lsu_rready", false,-1);
    tracep->declBus(c+38,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+39,"lsu_awvalid", false,-1);
    tracep->declBit(c+304,"lsu_awready", false,-1);
    tracep->declBus(c+40,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"lsu_wstrb", false,-1, 7,0);
    tracep->declBit(c+42,"lsu_wvalid", false,-1);
    tracep->declBit(c+305,"lsu_wready", false,-1);
    tracep->declBit(c+306,"lsu_bresp", false,-1);
    tracep->declBit(c+307,"lsu_bvalid", false,-1);
    tracep->declBit(c+43,"lsu_bready", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_i_a", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_i_a", false,-1);
    tracep->declBit(c+8,"arready_o_a", false,-1);
    tracep->declBus(c+2,"rdata_o_a", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_o_a", false,-1);
    tracep->declBit(c+10,"rvalid_o_a", false,-1);
    tracep->declBit(c+11,"rready_i_a", false,-1);
    tracep->declBus(c+501,"awaddr_i_a", false,-1, 31,0);
    tracep->declBit(c+502,"awvalid_i_a", false,-1);
    tracep->declBit(c+12,"awready_o_a", false,-1);
    tracep->declBus(c+501,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+503,"wstrb_i_a", false,-1, 7,0);
    tracep->declBit(c+502,"wvalid_i_a", false,-1);
    tracep->declBit(c+13,"wready_o_a", false,-1);
    tracep->declBit(c+14,"bresp_o_a", false,-1);
    tracep->declBit(c+15,"bvalid_o_a", false,-1);
    tracep->declBit(c+502,"bready_i_a", false,-1);
    tracep->declBus(c+34,"araddr_i_b", false,-1, 31,0);
    tracep->declBit(c+35,"arvalid_i_b", false,-1);
    tracep->declBit(c+302,"arready_o_b", false,-1);
    tracep->declBus(c+292,"rdata_o_b", false,-1, 31,0);
    tracep->declBit(c+303,"rresp_o_b", false,-1);
    tracep->declBit(c+36,"rvalid_o_b", false,-1);
    tracep->declBit(c+37,"rready_i_b", false,-1);
    tracep->declBus(c+38,"awaddr_i_b", false,-1, 31,0);
    tracep->declBit(c+39,"awvalid_i_b", false,-1);
    tracep->declBit(c+304,"awready_o_b", false,-1);
    tracep->declBus(c+40,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+41,"wstrb_i_b", false,-1, 7,0);
    tracep->declBit(c+42,"wvalid_i_b", false,-1);
    tracep->declBit(c+305,"wready_o_b", false,-1);
    tracep->declBit(c+306,"bresp_o_b", false,-1);
    tracep->declBit(c+307,"bvalid_o_b", false,-1);
    tracep->declBit(c+43,"bready_i_b", false,-1);
    tracep->declBus(c+16,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+17,"arvalid_o", false,-1);
    tracep->declBit(c+18,"arready_i", false,-1);
    tracep->declBus(c+19,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+20,"rresp_i", false,-1);
    tracep->declBit(c+21,"rvalid_i", false,-1);
    tracep->declBit(c+22,"rready_o", false,-1);
    tracep->declBus(c+23,"awaddr_o", false,-1, 31,0);
    tracep->declBit(c+24,"awvalid_o", false,-1);
    tracep->declBit(c+25,"awready_i", false,-1);
    tracep->declBus(c+26,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+27,"wstrb_o", false,-1, 7,0);
    tracep->declBit(c+28,"wvalid_o", false,-1);
    tracep->declBit(c+29,"wready_i", false,-1);
    tracep->declBit(c+30,"bresp_i", false,-1);
    tracep->declBit(c+31,"bvalid_i", false,-1);
    tracep->declBit(c+32,"bready_o", false,-1);
    tracep->declBit(c+44,"ar_switch", false,-1);
    tracep->declBit(c+45,"r_switch", false,-1);
    tracep->declBit(c+46,"aw_switch", false,-1);
    tracep->declBit(c+47,"w_switch", false,-1);
    tracep->declBit(c+48,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+472,"pc_i", false,-1, 31,0);
    tracep->declBus(c+497,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+498,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+473,"imm_i", false,-1, 31,0);
    tracep->declBus(c+499,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+474,"a_in_src_i", false,-1);
    tracep->declBus(c+475,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+476,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+477,"adder_a_src_i", false,-1);
    tracep->declBit(c+478,"adder_out_src_i", false,-1);
    tracep->declBus(c+479,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+480,"MemRead_i", false,-1);
    tracep->declBit(c+481,"MemWrite_i", false,-1);
    tracep->declBus(c+482,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+483,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+484,"wb_src_i", false,-1);
    tracep->declBit(c+485,"csr_write_i", false,-1);
    tracep->declBit(c+486,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+487,"reg_write_i", false,-1);
    tracep->declBus(c+488,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+33,"exu_valid_i", false,-1);
    tracep->declBit(c+269,"exu_ready_o", false,-1);
    tracep->declBus(c+273,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+274,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+275,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+276,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+277,"npc_o", false,-1, 31,0);
    tracep->declBit(c+278,"MemRead_o", false,-1);
    tracep->declBit(c+279,"MemWrite_o", false,-1);
    tracep->declBus(c+280,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+281,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+282,"wb_src_o", false,-1);
    tracep->declBit(c+283,"csr_write_o", false,-1);
    tracep->declBit(c+284,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+285,"reg_write_o", false,-1);
    tracep->declBus(c+286,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+287,"exu_valid_o", false,-1);
    tracep->declBit(c+288,"exu_ready_i", false,-1);
    tracep->declBus(c+308,"pc", false,-1, 31,0);
    tracep->declBus(c+274,"rs1", false,-1, 31,0);
    tracep->declBus(c+275,"rs2", false,-1, 31,0);
    tracep->declBus(c+309,"imm", false,-1, 31,0);
    tracep->declBus(c+310,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+311,"a_in_src", false,-1);
    tracep->declBus(c+312,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+313,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+314,"adder_a_src", false,-1);
    tracep->declBit(c+315,"adder_out_src", false,-1);
    tracep->declBus(c+316,"alu_op", false,-1, 3,0);
    tracep->declBus(c+317,"a_in", false,-1, 31,0);
    tracep->declBus(c+318,"b_in", false,-1, 31,0);
    tracep->declBus(c+319,"a_out", false,-1, 31,0);
    tracep->declBus(c+320,"add_out", false,-1, 31,0);
    tracep->declBus(c+321,"pc_new", false,-1, 31,0);
    tracep->declBus(c+273,"alu_result", false,-1, 31,0);
    tracep->declBus(c+277,"npc", false,-1, 31,0);
    tracep->declBit(c+322,"zero", false,-1);
    tracep->declBus(c+504,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+505,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+506,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+323,"current_state", false,-1, 1,0);
    tracep->declBus(c+324,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+317,"a", false,-1, 31,0);
    tracep->declBus(c+318,"b", false,-1, 31,0);
    tracep->declBus(c+316,"op", false,-1, 3,0);
    tracep->declBus(c+273,"alu_result", false,-1, 31,0);
    tracep->declBit(c+322,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+274,"d0", false,-1, 31,0);
    tracep->declBus(c+308,"d1", false,-1, 31,0);
    tracep->declBit(c+311,"sel", false,-1);
    tracep->declBus(c+317,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+275,"d0", false,-1, 31,0);
    tracep->declBus(c+309,"d1", false,-1, 31,0);
    tracep->declBus(c+508,"d2", false,-1, 31,0);
    tracep->declBus(c+310,"d3", false,-1, 31,0);
    tracep->declBus(c+312,"sel", false,-1, 1,0);
    tracep->declBus(c+318,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+319,"a", false,-1, 31,0);
    tracep->declBus(c+309,"b", false,-1, 31,0);
    tracep->declBus(c+320,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+308,"d0", false,-1, 31,0);
    tracep->declBus(c+274,"d1", false,-1, 31,0);
    tracep->declBit(c+314,"sel", false,-1);
    tracep->declBus(c+319,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+320,"d0", false,-1, 31,0);
    tracep->declBus(c+310,"d1", false,-1, 31,0);
    tracep->declBit(c+315,"sel", false,-1);
    tracep->declBus(c+321,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+325,"pc4", false,-1, 31,0);
    tracep->declBus(c+321,"pc_new", false,-1, 31,0);
    tracep->declBus(c+313,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+322,"zero", false,-1);
    tracep->declBus(c+273,"alu_result", false,-1, 31,0);
    tracep->declBus(c+277,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+470,"raddr1", false,-1, 4,0);
    tracep->declBus(c+471,"raddr2", false,-1, 4,0);
    tracep->declBus(c+497,"rdata1", false,-1, 31,0);
    tracep->declBus(c+498,"rdata2", false,-1, 31,0);
    tracep->declBus(c+357,"a5", false,-1, 31,0);
    tracep->declBus(c+4,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBit(c+5,"idu_valid_i", false,-1);
    tracep->declBit(c+6,"idu_ready_o", false,-1);
    tracep->declBus(c+472,"pc_o", false,-1, 31,0);
    tracep->declBus(c+497,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+498,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+473,"imm_o", false,-1, 31,0);
    tracep->declBus(c+499,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+474,"a_in_src_o", false,-1);
    tracep->declBus(c+475,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+476,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+477,"adder_a_src_o", false,-1);
    tracep->declBit(c+478,"adder_out_src_o", false,-1);
    tracep->declBus(c+479,"alu_op", false,-1, 3,0);
    tracep->declBit(c+480,"MemRead_o", false,-1);
    tracep->declBit(c+481,"MemWrite_o", false,-1);
    tracep->declBus(c+482,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+483,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+484,"wb_src_o", false,-1);
    tracep->declBit(c+485,"csr_write_o", false,-1);
    tracep->declBit(c+486,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+487,"reg_write_o", false,-1);
    tracep->declBus(c+488,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+33,"idu_valid_o", false,-1);
    tracep->declBit(c+269,"idu_ready_i", false,-1);
    tracep->declBit(c+489,"csr_write_i", false,-1);
    tracep->declBus(c+490,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+394+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+472,"pc", false,-1, 31,0);
    tracep->declBus(c+491,"inst", false,-1, 31,0);
    tracep->declBus(c+504,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+505,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+506,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+49,"current_state", false,-1, 1,0);
    tracep->declBus(c+326,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+491,"inst", false,-1, 31,0);
    tracep->declBus(c+479,"alu_op", false,-1, 3,0);
    tracep->declBus(c+492,"opcode", false,-1, 6,0);
    tracep->declBus(c+493,"funct3", false,-1, 2,0);
    tracep->declBus(c+494,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+489,"wen", false,-1);
    tracep->declBus(c+491,"inst", false,-1, 31,0);
    tracep->declBus(c+490,"wdata", false,-1, 31,0);
    tracep->declBus(c+357,"NO", false,-1, 31,0);
    tracep->declBus(c+472,"pc", false,-1, 31,0);
    tracep->declBus(c+499,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+398+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+402,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+403,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+404,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+405,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+492,"opcode", false,-1, 6,0);
    tracep->declBus(c+493,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+491,"inst", false,-1, 31,0);
    tracep->declBit(c+474,"a_in_src", false,-1);
    tracep->declBus(c+475,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+487,"reg_write", false,-1);
    tracep->declBus(c+476,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+477,"adder_a_src", false,-1);
    tracep->declBit(c+480,"MemRead", false,-1);
    tracep->declBit(c+481,"MemWrite", false,-1);
    tracep->declBus(c+482,"wmask", false,-1, 7,0);
    tracep->declBit(c+484,"wb_src", false,-1);
    tracep->declBus(c+483,"rmask", false,-1, 2,0);
    tracep->declBit(c+485,"csr_write", false,-1);
    tracep->declBit(c+478,"adder_out_src", false,-1);
    tracep->declBit(c+486,"csr_wdata_src", false,-1);
    tracep->declBus(c+492,"opcode", false,-1, 6,0);
    tracep->declBus(c+493,"funct3", false,-1, 2,0);
    tracep->declBus(c+494,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+507,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+491,"inst", false,-1, 31,0);
    tracep->declBus(c+473,"data", false,-1, 31,0);
    tracep->declBus(c+492,"opcode", false,-1, 6,0);
    tracep->declBus(c+493,"funct3", false,-1, 2,0);
    tracep->declBus(c+494,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_o", false,-1);
    tracep->declBit(c+8,"arready_i", false,-1);
    tracep->declBus(c+2,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_i", false,-1);
    tracep->declBit(c+10,"rvalid_i", false,-1);
    tracep->declBit(c+11,"rready_o", false,-1);
    tracep->declBus(c+267,"npc_i", false,-1, 31,0);
    tracep->declBit(c+268,"ifu_valid_i", false,-1);
    tracep->declBit(c+3,"ifu_ready_o", false,-1);
    tracep->declBus(c+4,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBit(c+5,"ifu_valid_o", false,-1);
    tracep->declBit(c+6,"ifu_ready_i", false,-1);
    tracep->declBus(c+500,"pc", false,-1, 31,0);
    tracep->declBus(c+327,"npc", false,-1, 31,0);
    tracep->declBus(c+50,"LFSR", false,-1, 4,0);
    tracep->declBus(c+51,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+52,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+53,"lfsr_in", false,-1);
    tracep->declBit(c+54,"arvalid", false,-1);
    tracep->declBus(c+500,"araddr", false,-1, 31,0);
    tracep->declBit(c+55,"rready", false,-1);
    tracep->declBus(c+56,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+57+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+89,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+509,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+510,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+511,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+512,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+513,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+90,"current_state", false,-1, 2,0);
    tracep->declBus(c+328,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+514,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+327,"din", false,-1, 31,0);
    tracep->declBus(c+500,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+91,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+92,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+93,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+94,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+95,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+273,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+274,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+275,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+276,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+277,"npc_i", false,-1, 31,0);
    tracep->declBit(c+278,"MemRead_i", false,-1);
    tracep->declBit(c+279,"MemWrite_i", false,-1);
    tracep->declBus(c+280,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+281,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+282,"wb_src_i", false,-1);
    tracep->declBit(c+283,"csr_write_i", false,-1);
    tracep->declBit(c+284,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+285,"reg_write_i", false,-1);
    tracep->declBus(c+286,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+287,"lsu_valid_i", false,-1);
    tracep->declBit(c+288,"lsu_ready_o", false,-1);
    tracep->declBus(c+289,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+290,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+291,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+292,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+293,"npc_o", false,-1, 31,0);
    tracep->declBus(c+294,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+295,"wb_src_o", false,-1);
    tracep->declBit(c+296,"csr_write_o", false,-1);
    tracep->declBit(c+297,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+298,"reg_write_o", false,-1);
    tracep->declBus(c+299,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+300,"lsu_valid_o", false,-1);
    tracep->declBit(c+301,"lsu_ready_i", false,-1);
    tracep->declBus(c+34,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+35,"arvalid_o", false,-1);
    tracep->declBit(c+302,"arready_i", false,-1);
    tracep->declBus(c+292,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+303,"rresp_i", false,-1);
    tracep->declBit(c+36,"rvalid_i", false,-1);
    tracep->declBit(c+37,"rready_o", false,-1);
    tracep->declBus(c+38,"awaddr_o", false,-1, 31,0);
    tracep->declBit(c+39,"awvalid_o", false,-1);
    tracep->declBit(c+304,"awready_i", false,-1);
    tracep->declBus(c+40,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+41,"wstrb_o", false,-1, 7,0);
    tracep->declBit(c+42,"wvalid_o", false,-1);
    tracep->declBit(c+305,"wready_i", false,-1);
    tracep->declBit(c+306,"bresp_i", false,-1);
    tracep->declBit(c+307,"bvalid_i", false,-1);
    tracep->declBit(c+43,"bready_o", false,-1);
    tracep->declBus(c+289,"alu_result", false,-1, 31,0);
    tracep->declBus(c+290,"rs1", false,-1, 31,0);
    tracep->declBus(c+515,"rs2", false,-1, 31,0);
    tracep->declBus(c+516,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+294,"rmask", false,-1, 2,0);
    tracep->declBit(c+96,"flag", false,-1);
    tracep->declBit(c+517,"wvalid_tmp", false,-1);
    tracep->declBus(c+97,"LFSR", false,-1, 4,0);
    tracep->declBus(c+98,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+99,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+100,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+101,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+102,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+103,"lfsr_in", false,-1);
    tracep->declBit(c+329,"arvalid", false,-1);
    tracep->declBus(c+289,"araddr", false,-1, 31,0);
    tracep->declBit(c+330,"rready", false,-1);
    tracep->declBus(c+289,"awaddr", false,-1, 31,0);
    tracep->declBit(c+331,"awvalid", false,-1);
    tracep->declBus(c+332,"wdata", false,-1, 31,0);
    tracep->declBus(c+333,"wstrb", false,-1, 7,0);
    tracep->declBit(c+334,"wvalid", false,-1);
    tracep->declBit(c+335,"bready", false,-1);
    tracep->declBus(c+104,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+105+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+137,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+138,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+139+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+171,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+172+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+204+i*1,"wstrb_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+236,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+504,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+505,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+506,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+518,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+336,"current_state", false,-1, 1,0);
    tracep->declBus(c+337,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+237,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+238,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk11 ");
    tracep->declBus(c+239,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+240,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+241,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+242,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+243,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+244,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+245,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+246,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+247,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+16,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+17,"arvalid_i", false,-1);
    tracep->declBit(c+18,"arready_o", false,-1);
    tracep->declBus(c+19,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+20,"rresp_o", false,-1);
    tracep->declBit(c+21,"rvalid_o", false,-1);
    tracep->declBit(c+22,"rready_i", false,-1);
    tracep->declBus(c+23,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+24,"awvalid_i", false,-1);
    tracep->declBit(c+25,"awready_o", false,-1);
    tracep->declBus(c+26,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+27,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+28,"wvalid_i", false,-1);
    tracep->declBit(c+29,"wready_o", false,-1);
    tracep->declBit(c+30,"bresp_o", false,-1);
    tracep->declBit(c+31,"bvalid_o", false,-1);
    tracep->declBit(c+32,"bready_i", false,-1);
    tracep->declBit(c+248,"ar_state", false,-1);
    tracep->declBit(c+249,"r_state", false,-1);
    tracep->declBit(c+250,"aw_state", false,-1);
    tracep->declBit(c+251,"w_state", false,-1);
    tracep->declBit(c+519,"b_state", false,-1);
    tracep->declBus(c+252,"araddr", false,-1, 31,0);
    tracep->declBus(c+253,"awaddr", false,-1, 31,0);
    tracep->declBus(c+254,"wdata", false,-1, 31,0);
    tracep->declBus(c+255,"wstrb", false,-1, 7,0);
    tracep->declBit(c+520,"wvalid", false,-1);
    tracep->declBit(c+256,"flag_waddr", false,-1);
    tracep->declBit(c+257,"flag_wdata", false,-1);
    tracep->declBit(c+258,"flag_rdata", false,-1);
    tracep->declBit(c+259,"flag_raddr", false,-1);
    tracep->declBit(c+521,"flag_write", false,-1);
    tracep->declBus(c+260,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+261,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+262,"w_delay", false,-1, 4,0);
    tracep->declBus(c+263,"r_delay", false,-1, 4,0);
    tracep->declBus(c+264,"LFSR", false,-1, 4,0);
    tracep->declBit(c+265,"lfsr_in", false,-1);
    tracep->declBus(c+266,"write_box", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+522,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+507,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBus(c+270,"wdata", false,-1, 31,0);
    tracep->declBus(c+271,"waddr", false,-1, 4,0);
    tracep->declBit(c+272,"wen", false,-1);
    tracep->declBus(c+470,"raddr1", false,-1, 4,0);
    tracep->declBus(c+497,"rdata1", false,-1, 31,0);
    tracep->declBus(c+471,"raddr2", false,-1, 4,0);
    tracep->declBus(c+498,"rdata2", false,-1, 31,0);
    tracep->declBus(c+357,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+406+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+438+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+495,"clk", false,-1);
    tracep->declBit(c+496,"rst_n", false,-1);
    tracep->declBus(c+289,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+290,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+291,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+292,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+293,"npc_i", false,-1, 31,0);
    tracep->declBus(c+294,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+295,"wb_src_i", false,-1);
    tracep->declBit(c+296,"csr_write_i", false,-1);
    tracep->declBit(c+297,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+298,"reg_write_i", false,-1);
    tracep->declBus(c+299,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+300,"wbu_valid_i", false,-1);
    tracep->declBit(c+301,"wbu_ready_o", false,-1);
    tracep->declBus(c+267,"npc_o", false,-1, 31,0);
    tracep->declBit(c+268,"wbu_valid_o", false,-1);
    tracep->declBit(c+3,"wbu_ready_i", false,-1);
    tracep->declBus(c+490,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+270,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+489,"csr_write_o", false,-1);
    tracep->declBit(c+272,"reg_write_o", false,-1);
    tracep->declBus(c+271,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+338,"mem_data", false,-1, 31,0);
    tracep->declBus(c+339,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+340,"alu_result", false,-1, 31,0);
    tracep->declBus(c+341,"rs1", false,-1, 31,0);
    tracep->declBus(c+342,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+343,"rmask", false,-1, 2,0);
    tracep->declBit(c+344,"wb_src", false,-1);
    tracep->declBit(c+345,"csr_wdata_src", false,-1);
    tracep->declBus(c+504,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+505,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+506,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+346,"current_state", false,-1, 1,0);
    tracep->declBus(c+347,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+341,"d0", false,-1, 31,0);
    tracep->declBus(c+342,"d1", false,-1, 31,0);
    tracep->declBit(c+345,"sel", false,-1);
    tracep->declBus(c+490,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+339,"read_data", false,-1, 31,0);
    tracep->declBus(c+348,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+343,"rmask", false,-1, 2,0);
    tracep->declBus(c+338,"mem_data", false,-1, 31,0);
    tracep->declBus(c+349,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+350,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+351,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+352,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+353,"byte3", false,-1, 31,0);
    tracep->declBus(c+354,"byte2", false,-1, 31,0);
    tracep->declBus(c+355,"byte1", false,-1, 31,0);
    tracep->declBus(c+356,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+340,"d0", false,-1, 31,0);
    tracep->declBus(c+338,"d1", false,-1, 31,0);
    tracep->declBit(c+344,"sel", false,-1);
    tracep->declBus(c+270,"out", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ifu_araddr),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__ready_wbu_to_ifu));
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pc_ifu_to_idu),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ready_ifu_to_idu));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ifu_arvalid));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ifu_arready));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ifu_rresp));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__ifu_rvalid));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__ifu_rready));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__useless1));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__useless2));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__useless3));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__useless4));
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__sram_araddr),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__sram_arvalid));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__sram_arready));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__sram_rdata),32);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__sram_rresp));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__sram_rvalid));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__sram_rready));
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__sram_awvalid));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__sram_awready));
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__sram_wdata),32);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__sram_wstrb),8);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__sram_wvalid));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__sram_wready));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__sram_bresp));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__sram_bvalid));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__sram_bready));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__lsu_araddr),32);
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__lsu_arvalid));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__lsu_rvalid));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__lsu_rready));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__lsu_awaddr),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__lsu_awvalid));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__lsu_wstrb),8);
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__lsu_wvalid));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__lsu_bready));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+53,((1U & VL_REDXOR_8(vlSelf->top__DOT__IFU__DOT__LFSR))));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__IFU__DOT__current_state),3);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__IFU__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__IFU__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__IFU__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+103,((1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR))));
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0]),8);
    bufp->fullCData(oldp+205,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[1]),8);
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[2]),8);
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[3]),8);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[4]),8);
    bufp->fullCData(oldp+209,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[5]),8);
    bufp->fullCData(oldp+210,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[6]),8);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[7]),8);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[8]),8);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[9]),8);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[10]),8);
    bufp->fullCData(oldp+215,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[11]),8);
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[12]),8);
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[13]),8);
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[14]),8);
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[15]),8);
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[16]),8);
    bufp->fullCData(oldp+221,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[17]),8);
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[18]),8);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[19]),8);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[20]),8);
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[21]),8);
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[22]),8);
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[23]),8);
    bufp->fullCData(oldp+228,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[24]),8);
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[25]),8);
    bufp->fullCData(oldp+230,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[26]),8);
    bufp->fullCData(oldp+231,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[27]),8);
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[28]),8);
    bufp->fullCData(oldp+233,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[29]),8);
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[30]),8);
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[31]),8);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__LSU__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__LSU__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__LSU__DOT__unnamedblk11__DOT__j),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__LSU__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__LSU__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__LSU__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__LSU__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__LSU__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__LSU__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__LSU__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__LSU__DOT__unnamedblk9__DOT__j),32);
    bufp->fullBit(oldp+248,(vlSelf->top__DOT__Mem__DOT__ar_state));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__Mem__DOT__r_state));
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__Mem__DOT__aw_state));
    bufp->fullBit(oldp+251,(vlSelf->top__DOT__Mem__DOT__w_state));
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__Mem__DOT__araddr),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__Mem__DOT__wdata),32);
    bufp->fullCData(oldp+255,(vlSelf->top__DOT__Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+258,(vlSelf->top__DOT__Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+259,(vlSelf->top__DOT__Mem__DOT__flag_raddr));
    bufp->fullCData(oldp+260,(vlSelf->top__DOT__Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+261,(vlSelf->top__DOT__Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+262,(vlSelf->top__DOT__Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+263,(vlSelf->top__DOT__Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT__Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+265,((1U & VL_REDXOR_8(vlSelf->top__DOT__Mem__DOT__LFSR))));
    bufp->fullCData(oldp+266,(vlSelf->top__DOT__Mem__DOT__write_box),2);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+268,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+269,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+270,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                                ? vlSelf->top__DOT__WBU__DOT__mem_data
                                : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+271,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+276,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+277,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+279,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+280,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+281,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+286,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+288,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__lsu_rdata),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+294,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+296,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+297,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+298,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+300,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+301,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__lsu_arready));
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__lsu_rresp));
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__lsu_awready));
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__lsu_wready));
    bufp->fullBit(oldp+306,(vlSelf->top__DOT__lsu_bresp));
    bufp->fullBit(oldp+307,(vlSelf->top__DOT__lsu_bvalid));
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+312,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+314,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+316,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+319,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+320,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->top__DOT__EXU__DOT__rs1
                                 : vlSelf->top__DOT__EXU__DOT__pc) 
                               + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+322,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+323,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+324,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+325,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+326,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+328,(vlSelf->top__DOT__IFU__DOT__next_state),3);
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+331,(vlSelf->top__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+333,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->top__DOT__LSU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->top__DOT__LSU__DOT__alu_result))
                                             : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),8);
    bufp->fullBit(oldp+334,(vlSelf->top__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+335,(vlSelf->top__DOT__LSU__DOT__bready));
    bufp->fullCData(oldp+336,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+337,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+339,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+340,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+343,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+344,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+346,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+347,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+348,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+349,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+350,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+351,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+352,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+353,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+354,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+355,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+356,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+357,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+358,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+359,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+360,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+361,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+362,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+363,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+364,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+365,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+366,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+367,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+368,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+369,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+370,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+371,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+372,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+374,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+376,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+377,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+378,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+379,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+381,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+382,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+383,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+384,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+385,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+386,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+387,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+388,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+389,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+390,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+391,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+392,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+393,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+394,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+395,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+396,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+397,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+398,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+399,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+400,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+401,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+402,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+403,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+404,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+405,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+406,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+407,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+408,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+409,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+410,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+411,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+412,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+413,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+414,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+415,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+416,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+417,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+418,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+419,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+420,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+421,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+422,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+423,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+424,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+425,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+426,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+427,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+428,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+429,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+430,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+431,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+432,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+433,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+434,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+435,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+436,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+437,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+438,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+439,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+440,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+441,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+442,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+443,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+444,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+445,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+446,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+447,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+448,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+449,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+450,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+451,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+452,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+453,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+454,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+455,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+456,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+457,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+458,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+459,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+460,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+461,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+462,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+463,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+464,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+465,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+466,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+467,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+468,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+469,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+470,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+471,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+472,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+473,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+474,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+475,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+476,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+477,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+478,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+479,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+480,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+481,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+482,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+483,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+484,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+485,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+486,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+487,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+488,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+489,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+490,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+491,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+492,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+493,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+494,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+495,(vlSelf->clk));
    bufp->fullBit(oldp+496,(vlSelf->rst_n));
    bufp->fullIData(oldp+497,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+498,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+499,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
                                     ? ((0x300U == 
                                         (vlSelf->top__DOT__IDU__DOT__inst 
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
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (vlSelf->top__DOT__IDU__DOT__inst 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause
                                                  : 0U))))
                                     : 0U)) : 0U)),32);
    bufp->fullIData(oldp+500,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+501,(0U),32);
    bufp->fullBit(oldp+502,(0U));
    bufp->fullCData(oldp+503,(0U),8);
    bufp->fullCData(oldp+504,(0U),2);
    bufp->fullCData(oldp+505,(1U),2);
    bufp->fullCData(oldp+506,(2U),2);
    bufp->fullIData(oldp+507,(0x20U),32);
    bufp->fullIData(oldp+508,(4U),32);
    bufp->fullCData(oldp+509,(0U),3);
    bufp->fullCData(oldp+510,(1U),3);
    bufp->fullCData(oldp+511,(2U),3);
    bufp->fullCData(oldp+512,(3U),3);
    bufp->fullCData(oldp+513,(4U),3);
    bufp->fullIData(oldp+514,(0x80000000U),32);
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+516,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+517,(vlSelf->top__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+518,(3U),2);
    bufp->fullBit(oldp+519,(vlSelf->top__DOT__Mem__DOT__b_state));
    bufp->fullBit(oldp+520,(vlSelf->top__DOT__Mem__DOT__wvalid));
    bufp->fullBit(oldp+521,(vlSelf->top__DOT__Mem__DOT__flag_write));
    bufp->fullIData(oldp+522,(5U),32);
}
