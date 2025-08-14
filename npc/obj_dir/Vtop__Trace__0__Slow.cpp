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
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+290,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+40,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+41,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+2,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+3,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+4,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+5,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+290,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+6,"ifu_arvalid", false,-1);
    tracep->declBit(c+7,"ifu_arready", false,-1);
    tracep->declBus(c+1,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+8,"ifu_rresp", false,-1);
    tracep->declBit(c+9,"ifu_rvalid", false,-1);
    tracep->declBit(c+10,"ifu_rready", false,-1);
    tracep->declBit(c+11,"useless1", false,-1);
    tracep->declBit(c+12,"useless2", false,-1);
    tracep->declBit(c+13,"useless3", false,-1);
    tracep->declBit(c+14,"useless4", false,-1);
    tracep->declBus(c+263,"raddr1", false,-1, 4,0);
    tracep->declBus(c+264,"raddr2", false,-1, 4,0);
    tracep->declBus(c+291,"rdata1", false,-1, 31,0);
    tracep->declBus(c+292,"rdata2", false,-1, 31,0);
    tracep->declBus(c+150,"a5", false,-1, 31,0);
    tracep->declBus(c+265,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+291,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+292,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+266,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+293,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+267,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+268,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+269,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+270,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+271,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+272,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+273,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+274,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+275,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+276,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+277,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+278,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+279,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+280,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+281,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+15,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+42,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+282,"csr_write", false,-1);
    tracep->declBus(c+283,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+151+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+43,"wdata", false,-1, 31,0);
    tracep->declBus(c+44,"waddr", false,-1, 4,0);
    tracep->declBit(c+45,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+155+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+46,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+47,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+48,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+49,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+50,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+51,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+52,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+53,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+54,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+55,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+56,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+57,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+58,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+59,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+60,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+61,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+62,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+63,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+64,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+65,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+66,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+67,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+68,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+69,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+70,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+71,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+72,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+73,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+74,"ready_lsu_to_wbu", false,-1);
    tracep->declBus(c+62,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+75,"lsu_arvalid", false,-1);
    tracep->declBit(c+76,"lsu_arready", false,-1);
    tracep->declBus(c+65,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+77,"lsu_rresp", false,-1);
    tracep->declBit(c+78,"lsu_rvalid", false,-1);
    tracep->declBit(c+79,"lsu_rready", false,-1);
    tracep->declBus(c+62,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+80,"lsu_awvalid", false,-1);
    tracep->declBit(c+81,"lsu_awready", false,-1);
    tracep->declBus(c+82,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+83,"lsu_wstrb", false,-1, 7,0);
    tracep->declBit(c+84,"lsu_wvalid", false,-1);
    tracep->declBit(c+85,"lsu_wready", false,-1);
    tracep->declBit(c+86,"lsu_bresp", false,-1);
    tracep->declBit(c+87,"lsu_bvalid", false,-1);
    tracep->declBit(c+88,"lsu_bready", false,-1);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+62,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+75,"arvalid_i", false,-1);
    tracep->declBit(c+76,"arready_o", false,-1);
    tracep->declBus(c+65,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+77,"rresp_o", false,-1);
    tracep->declBit(c+78,"rvalid_o", false,-1);
    tracep->declBit(c+79,"rready_i", false,-1);
    tracep->declBus(c+62,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+80,"awvalid_i", false,-1);
    tracep->declBit(c+81,"awready_o", false,-1);
    tracep->declBus(c+82,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+83,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+84,"wvalid_i", false,-1);
    tracep->declBit(c+85,"wready_o", false,-1);
    tracep->declBit(c+86,"bresp_o", false,-1);
    tracep->declBit(c+87,"bvalid_o", false,-1);
    tracep->declBit(c+88,"bready_i", false,-1);
    tracep->declBit(c+89,"ar_state", false,-1);
    tracep->declBit(c+90,"r_state", false,-1);
    tracep->declBit(c+91,"aw_state", false,-1);
    tracep->declBit(c+92,"w_state", false,-1);
    tracep->declBit(c+294,"b_state", false,-1);
    tracep->declBus(c+93,"araddr", false,-1, 31,0);
    tracep->declBus(c+94,"awaddr", false,-1, 31,0);
    tracep->declBus(c+95,"wdata", false,-1, 31,0);
    tracep->declBus(c+96,"wstrb", false,-1, 7,0);
    tracep->declBit(c+295,"wvalid", false,-1);
    tracep->declBit(c+97,"flag_waddr", false,-1);
    tracep->declBit(c+98,"flag_wdata", false,-1);
    tracep->declBit(c+99,"flag_rdata", false,-1);
    tracep->declBit(c+100,"flag_raddr", false,-1);
    tracep->declBit(c+101,"flag_write", false,-1);
    tracep->declBus(c+102,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+103,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+104,"w_delay", false,-1, 4,0);
    tracep->declBus(c+105,"r_delay", false,-1, 4,0);
    tracep->declBus(c+106,"LFSR", false,-1, 4,0);
    tracep->declBit(c+107,"lfsr_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+265,"pc_i", false,-1, 31,0);
    tracep->declBus(c+291,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+292,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+266,"imm_i", false,-1, 31,0);
    tracep->declBus(c+293,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+267,"a_in_src_i", false,-1);
    tracep->declBus(c+268,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+269,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+270,"adder_a_src_i", false,-1);
    tracep->declBit(c+271,"adder_out_src_i", false,-1);
    tracep->declBus(c+272,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+273,"MemRead_i", false,-1);
    tracep->declBit(c+274,"MemWrite_i", false,-1);
    tracep->declBus(c+275,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+276,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+277,"wb_src_i", false,-1);
    tracep->declBit(c+278,"csr_write_i", false,-1);
    tracep->declBit(c+279,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+280,"reg_write_i", false,-1);
    tracep->declBus(c+281,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+15,"exu_valid_i", false,-1);
    tracep->declBit(c+42,"exu_ready_o", false,-1);
    tracep->declBus(c+46,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+47,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+48,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+49,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+50,"npc_o", false,-1, 31,0);
    tracep->declBit(c+51,"MemRead_o", false,-1);
    tracep->declBit(c+52,"MemWrite_o", false,-1);
    tracep->declBus(c+53,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+54,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+55,"wb_src_o", false,-1);
    tracep->declBit(c+56,"csr_write_o", false,-1);
    tracep->declBit(c+57,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+58,"reg_write_o", false,-1);
    tracep->declBus(c+59,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+60,"exu_valid_o", false,-1);
    tracep->declBit(c+61,"exu_ready_i", false,-1);
    tracep->declBus(c+108,"pc", false,-1, 31,0);
    tracep->declBus(c+47,"rs1", false,-1, 31,0);
    tracep->declBus(c+48,"rs2", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBus(c+110,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+111,"a_in_src", false,-1);
    tracep->declBus(c+112,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+113,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+114,"adder_a_src", false,-1);
    tracep->declBit(c+115,"adder_out_src", false,-1);
    tracep->declBus(c+116,"alu_op", false,-1, 3,0);
    tracep->declBus(c+117,"a_in", false,-1, 31,0);
    tracep->declBus(c+118,"b_in", false,-1, 31,0);
    tracep->declBus(c+119,"a_out", false,-1, 31,0);
    tracep->declBus(c+120,"add_out", false,-1, 31,0);
    tracep->declBus(c+121,"pc_new", false,-1, 31,0);
    tracep->declBus(c+46,"alu_result", false,-1, 31,0);
    tracep->declBus(c+50,"npc", false,-1, 31,0);
    tracep->declBit(c+122,"zero", false,-1);
    tracep->declBus(c+296,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+297,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+298,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+123,"current_state", false,-1, 1,0);
    tracep->declBus(c+124,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+117,"a", false,-1, 31,0);
    tracep->declBus(c+118,"b", false,-1, 31,0);
    tracep->declBus(c+116,"op", false,-1, 3,0);
    tracep->declBus(c+46,"alu_result", false,-1, 31,0);
    tracep->declBit(c+122,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+299,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"d0", false,-1, 31,0);
    tracep->declBus(c+108,"d1", false,-1, 31,0);
    tracep->declBit(c+111,"sel", false,-1);
    tracep->declBus(c+117,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+299,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"d0", false,-1, 31,0);
    tracep->declBus(c+109,"d1", false,-1, 31,0);
    tracep->declBus(c+300,"d2", false,-1, 31,0);
    tracep->declBus(c+110,"d3", false,-1, 31,0);
    tracep->declBus(c+112,"sel", false,-1, 1,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+119,"a", false,-1, 31,0);
    tracep->declBus(c+109,"b", false,-1, 31,0);
    tracep->declBus(c+120,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+299,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+108,"d0", false,-1, 31,0);
    tracep->declBus(c+47,"d1", false,-1, 31,0);
    tracep->declBit(c+114,"sel", false,-1);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+299,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"d0", false,-1, 31,0);
    tracep->declBus(c+110,"d1", false,-1, 31,0);
    tracep->declBit(c+115,"sel", false,-1);
    tracep->declBus(c+121,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+125,"pc4", false,-1, 31,0);
    tracep->declBus(c+121,"pc_new", false,-1, 31,0);
    tracep->declBus(c+113,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+122,"zero", false,-1);
    tracep->declBus(c+46,"alu_result", false,-1, 31,0);
    tracep->declBus(c+50,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+263,"raddr1", false,-1, 4,0);
    tracep->declBus(c+264,"raddr2", false,-1, 4,0);
    tracep->declBus(c+291,"rdata1", false,-1, 31,0);
    tracep->declBus(c+292,"rdata2", false,-1, 31,0);
    tracep->declBus(c+150,"a5", false,-1, 31,0);
    tracep->declBus(c+3,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_i", false,-1, 31,0);
    tracep->declBit(c+4,"idu_valid_i", false,-1);
    tracep->declBit(c+5,"idu_ready_o", false,-1);
    tracep->declBus(c+265,"pc_o", false,-1, 31,0);
    tracep->declBus(c+291,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+292,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+266,"imm_o", false,-1, 31,0);
    tracep->declBus(c+293,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+267,"a_in_src_o", false,-1);
    tracep->declBus(c+268,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+269,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+270,"adder_a_src_o", false,-1);
    tracep->declBit(c+271,"adder_out_src_o", false,-1);
    tracep->declBus(c+272,"alu_op", false,-1, 3,0);
    tracep->declBit(c+273,"MemRead_o", false,-1);
    tracep->declBit(c+274,"MemWrite_o", false,-1);
    tracep->declBus(c+275,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+276,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+277,"wb_src_o", false,-1);
    tracep->declBit(c+278,"csr_write_o", false,-1);
    tracep->declBit(c+279,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+280,"reg_write_o", false,-1);
    tracep->declBus(c+281,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+15,"idu_valid_o", false,-1);
    tracep->declBit(c+42,"idu_ready_i", false,-1);
    tracep->declBit(c+282,"csr_write_i", false,-1);
    tracep->declBus(c+283,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+187+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+265,"pc", false,-1, 31,0);
    tracep->declBus(c+284,"inst", false,-1, 31,0);
    tracep->declBus(c+296,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+297,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+298,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+16,"current_state", false,-1, 1,0);
    tracep->declBus(c+126,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+284,"inst", false,-1, 31,0);
    tracep->declBus(c+272,"alu_op", false,-1, 3,0);
    tracep->declBus(c+285,"opcode", false,-1, 6,0);
    tracep->declBus(c+286,"funct3", false,-1, 2,0);
    tracep->declBus(c+287,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+282,"wen", false,-1);
    tracep->declBus(c+284,"inst", false,-1, 31,0);
    tracep->declBus(c+283,"wdata", false,-1, 31,0);
    tracep->declBus(c+150,"NO", false,-1, 31,0);
    tracep->declBus(c+265,"pc", false,-1, 31,0);
    tracep->declBus(c+293,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+191+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+195,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+196,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+197,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+198,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+285,"opcode", false,-1, 6,0);
    tracep->declBus(c+286,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+284,"inst", false,-1, 31,0);
    tracep->declBit(c+267,"a_in_src", false,-1);
    tracep->declBus(c+268,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+280,"reg_write", false,-1);
    tracep->declBus(c+269,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+270,"adder_a_src", false,-1);
    tracep->declBit(c+273,"MemRead", false,-1);
    tracep->declBit(c+274,"MemWrite", false,-1);
    tracep->declBus(c+275,"wmask", false,-1, 7,0);
    tracep->declBit(c+277,"wb_src", false,-1);
    tracep->declBus(c+276,"rmask", false,-1, 2,0);
    tracep->declBit(c+278,"csr_write", false,-1);
    tracep->declBit(c+271,"adder_out_src", false,-1);
    tracep->declBit(c+279,"csr_wdata_src", false,-1);
    tracep->declBus(c+285,"opcode", false,-1, 6,0);
    tracep->declBus(c+286,"funct3", false,-1, 2,0);
    tracep->declBus(c+287,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+299,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+284,"inst", false,-1, 31,0);
    tracep->declBus(c+266,"data", false,-1, 31,0);
    tracep->declBus(c+285,"opcode", false,-1, 6,0);
    tracep->declBus(c+286,"funct3", false,-1, 2,0);
    tracep->declBus(c+287,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+290,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+6,"arvalid_o", false,-1);
    tracep->declBit(c+7,"arready_i", false,-1);
    tracep->declBus(c+1,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+8,"rresp_i", false,-1);
    tracep->declBit(c+9,"rvalid_i", false,-1);
    tracep->declBit(c+10,"rready_o", false,-1);
    tracep->declBus(c+40,"npc_i", false,-1, 31,0);
    tracep->declBit(c+41,"ifu_valid_i", false,-1);
    tracep->declBit(c+2,"ifu_ready_o", false,-1);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"inst_o", false,-1, 31,0);
    tracep->declBit(c+4,"ifu_valid_o", false,-1);
    tracep->declBit(c+5,"ifu_ready_i", false,-1);
    tracep->declBus(c+290,"pc", false,-1, 31,0);
    tracep->declBus(c+127,"npc", false,-1, 31,0);
    tracep->declBus(c+301,"LFSR", false,-1, 4,0);
    tracep->declBit(c+302,"lfsr_in", false,-1);
    tracep->declBit(c+6,"arvalid", false,-1);
    tracep->declBus(c+290,"araddr", false,-1, 31,0);
    tracep->declBus(c+303,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+304,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+305,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+306,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+307,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+17,"current_state", false,-1, 2,0);
    tracep->declBus(c+128,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+299,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+308,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+290,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+290,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+6,"arvalid_i", false,-1);
    tracep->declBit(c+7,"arready_o", false,-1);
    tracep->declBus(c+1,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+8,"rresp_o", false,-1);
    tracep->declBit(c+9,"rvalid_o", false,-1);
    tracep->declBit(c+10,"rready_i", false,-1);
    tracep->declBus(c+309,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+310,"awvalid_i", false,-1);
    tracep->declBit(c+11,"awready_o", false,-1);
    tracep->declBus(c+309,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+311,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+310,"wvalid_i", false,-1);
    tracep->declBit(c+12,"wready_o", false,-1);
    tracep->declBit(c+13,"bresp_o", false,-1);
    tracep->declBit(c+14,"bvalid_o", false,-1);
    tracep->declBit(c+310,"bready_i", false,-1);
    tracep->declBit(c+18,"ar_state", false,-1);
    tracep->declBit(c+19,"r_state", false,-1);
    tracep->declBit(c+20,"aw_state", false,-1);
    tracep->declBit(c+21,"w_state", false,-1);
    tracep->declBit(c+312,"b_state", false,-1);
    tracep->declBus(c+22,"araddr", false,-1, 31,0);
    tracep->declBus(c+23,"awaddr", false,-1, 31,0);
    tracep->declBus(c+24,"wdata", false,-1, 31,0);
    tracep->declBus(c+25,"wstrb", false,-1, 7,0);
    tracep->declBit(c+313,"wvalid", false,-1);
    tracep->declBit(c+26,"flag_waddr", false,-1);
    tracep->declBit(c+27,"flag_wdata", false,-1);
    tracep->declBit(c+28,"flag_rdata", false,-1);
    tracep->declBit(c+29,"flag_raddr", false,-1);
    tracep->declBit(c+30,"flag_write", false,-1);
    tracep->declBus(c+31,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+32,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+33,"w_delay", false,-1, 4,0);
    tracep->declBus(c+34,"r_delay", false,-1, 4,0);
    tracep->declBus(c+35,"LFSR", false,-1, 4,0);
    tracep->declBit(c+36,"lfsr_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+46,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+47,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+48,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+49,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+50,"npc_i", false,-1, 31,0);
    tracep->declBit(c+51,"MemRead_i", false,-1);
    tracep->declBit(c+52,"MemWrite_i", false,-1);
    tracep->declBus(c+53,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+54,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+55,"wb_src_i", false,-1);
    tracep->declBit(c+56,"csr_write_i", false,-1);
    tracep->declBit(c+57,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+58,"reg_write_i", false,-1);
    tracep->declBus(c+59,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+60,"lsu_valid_i", false,-1);
    tracep->declBit(c+61,"lsu_ready_o", false,-1);
    tracep->declBus(c+62,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+63,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+64,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+65,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+66,"npc_o", false,-1, 31,0);
    tracep->declBus(c+67,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+68,"wb_src_o", false,-1);
    tracep->declBit(c+69,"csr_write_o", false,-1);
    tracep->declBit(c+70,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+71,"reg_write_o", false,-1);
    tracep->declBus(c+72,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+73,"lsu_valid_o", false,-1);
    tracep->declBit(c+74,"lsu_ready_i", false,-1);
    tracep->declBus(c+62,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+75,"arvalid_o", false,-1);
    tracep->declBit(c+76,"arready_i", false,-1);
    tracep->declBus(c+65,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+77,"rresp_i", false,-1);
    tracep->declBit(c+78,"rvalid_i", false,-1);
    tracep->declBit(c+79,"rready_o", false,-1);
    tracep->declBus(c+62,"awaddr_o", false,-1, 31,0);
    tracep->declBit(c+80,"awvalid_o", false,-1);
    tracep->declBit(c+81,"awready_i", false,-1);
    tracep->declBus(c+82,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+83,"wstrb_o", false,-1, 7,0);
    tracep->declBit(c+84,"wvalid_o", false,-1);
    tracep->declBit(c+85,"wready_i", false,-1);
    tracep->declBit(c+86,"bresp_i", false,-1);
    tracep->declBit(c+87,"bvalid_i", false,-1);
    tracep->declBit(c+88,"bready_o", false,-1);
    tracep->declBus(c+62,"alu_result", false,-1, 31,0);
    tracep->declBus(c+63,"rs1", false,-1, 31,0);
    tracep->declBus(c+314,"rs2", false,-1, 31,0);
    tracep->declBus(c+315,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+67,"rmask", false,-1, 2,0);
    tracep->declBit(c+37,"flag", false,-1);
    tracep->declBit(c+316,"wvalid_tmp", false,-1);
    tracep->declBus(c+38,"LFSR", false,-1, 4,0);
    tracep->declBit(c+39,"lfsr_in", false,-1);
    tracep->declBus(c+296,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+297,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+298,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+317,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+129,"current_state", false,-1, 1,0);
    tracep->declBus(c+130,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+318,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+299,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBus(c+43,"wdata", false,-1, 31,0);
    tracep->declBus(c+44,"waddr", false,-1, 4,0);
    tracep->declBit(c+45,"wen", false,-1);
    tracep->declBus(c+263,"raddr1", false,-1, 4,0);
    tracep->declBus(c+291,"rdata1", false,-1, 31,0);
    tracep->declBus(c+264,"raddr2", false,-1, 4,0);
    tracep->declBus(c+292,"rdata2", false,-1, 31,0);
    tracep->declBus(c+150,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+199+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+231+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+288,"clk", false,-1);
    tracep->declBit(c+289,"rst_n", false,-1);
    tracep->declBus(c+62,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+63,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+64,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+65,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+66,"npc_i", false,-1, 31,0);
    tracep->declBus(c+67,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+68,"wb_src_i", false,-1);
    tracep->declBit(c+69,"csr_write_i", false,-1);
    tracep->declBit(c+70,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+71,"reg_write_i", false,-1);
    tracep->declBus(c+72,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+73,"wbu_valid_i", false,-1);
    tracep->declBit(c+74,"wbu_ready_o", false,-1);
    tracep->declBus(c+40,"npc_o", false,-1, 31,0);
    tracep->declBit(c+41,"wbu_valid_o", false,-1);
    tracep->declBit(c+2,"wbu_ready_i", false,-1);
    tracep->declBus(c+283,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+43,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+282,"csr_write_o", false,-1);
    tracep->declBit(c+45,"reg_write_o", false,-1);
    tracep->declBus(c+44,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+131,"mem_data", false,-1, 31,0);
    tracep->declBus(c+132,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+133,"alu_result", false,-1, 31,0);
    tracep->declBus(c+134,"rs1", false,-1, 31,0);
    tracep->declBus(c+135,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+136,"rmask", false,-1, 2,0);
    tracep->declBit(c+137,"wb_src", false,-1);
    tracep->declBit(c+138,"csr_wdata_src", false,-1);
    tracep->declBus(c+296,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+297,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+298,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+139,"current_state", false,-1, 1,0);
    tracep->declBus(c+140,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+299,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+134,"d0", false,-1, 31,0);
    tracep->declBus(c+135,"d1", false,-1, 31,0);
    tracep->declBit(c+138,"sel", false,-1);
    tracep->declBus(c+283,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+132,"read_data", false,-1, 31,0);
    tracep->declBus(c+141,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+136,"rmask", false,-1, 2,0);
    tracep->declBus(c+131,"mem_data", false,-1, 31,0);
    tracep->declBus(c+142,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+143,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+144,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+145,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+146,"byte3", false,-1, 31,0);
    tracep->declBus(c+147,"byte2", false,-1, 31,0);
    tracep->declBus(c+148,"byte1", false,-1, 31,0);
    tracep->declBus(c+149,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+299,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+133,"d0", false,-1, 31,0);
    tracep->declBus(c+131,"d1", false,-1, 31,0);
    tracep->declBit(c+137,"sel", false,-1);
    tracep->declBus(c+43,"out", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__ready_wbu_to_ifu));
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pc_ifu_to_idu),32);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__ready_ifu_to_idu));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ifu_arready));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ifu_rresp));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ifu_rvalid));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__ifu_rready));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__useless1));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__useless2));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__useless3));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__useless4));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__IFU__DOT__current_state),3);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__Inst_Mem__DOT__ar_state));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__Inst_Mem__DOT__r_state));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__Inst_Mem__DOT__aw_state));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__Inst_Mem__DOT__w_state));
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__Inst_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__Inst_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__Inst_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__Inst_Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__Inst_Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__Inst_Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__Inst_Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__Inst_Mem__DOT__flag_raddr));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__Inst_Mem__DOT__flag_write));
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__Inst_Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__Inst_Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__Inst_Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+36,((1U & VL_REDXOR_8(vlSelf->top__DOT__Inst_Mem__DOT__LFSR))));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__LSU__DOT__LFSR),5);
    bufp->fullBit(oldp+39,((1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR))));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+43,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                               ? vlSelf->top__DOT__WBU__DOT__mem_data
                               : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+49,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                              | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+50,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__lsu_rdata),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__lsu_arvalid));
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__lsu_arready));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__lsu_rresp));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__lsu_rvalid));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__lsu_rready));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__lsu_awvalid));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__lsu_awready));
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+83,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->top__DOT__LSU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->top__DOT__LSU__DOT__alu_result))
                                            : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),8);
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__lsu_wvalid));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__lsu_wready));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__lsu_bresp));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__lsu_bvalid));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__lsu_bready));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__Data_Mem__DOT__ar_state));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__Data_Mem__DOT__r_state));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__Data_Mem__DOT__aw_state));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__Data_Mem__DOT__w_state));
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__Data_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__Data_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__Data_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__Data_Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__Data_Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__Data_Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__Data_Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__Data_Mem__DOT__flag_raddr));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__Data_Mem__DOT__flag_write));
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__Data_Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__Data_Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__Data_Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__Data_Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__Data_Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+107,((1U & VL_REDXOR_8(vlSelf->top__DOT__Data_Mem__DOT__LFSR))));
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+119,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+120,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->top__DOT__EXU__DOT__rs1
                                 : vlSelf->top__DOT__EXU__DOT__pc) 
                               + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+122,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+125,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+141,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+142,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+143,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+144,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+145,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+146,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+147,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+148,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+149,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+263,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+264,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+267,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+268,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+269,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+275,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+276,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+279,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+281,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+285,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+286,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+287,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+288,(vlSelf->clk));
    bufp->fullBit(oldp+289,(vlSelf->rst_n));
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+293,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__Data_Mem__DOT__b_state));
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__Data_Mem__DOT__wvalid));
    bufp->fullCData(oldp+296,(0U),2);
    bufp->fullCData(oldp+297,(1U),2);
    bufp->fullCData(oldp+298,(2U),2);
    bufp->fullIData(oldp+299,(0x20U),32);
    bufp->fullIData(oldp+300,(4U),32);
    bufp->fullCData(oldp+301,(vlSelf->top__DOT__IFU__DOT__LFSR),5);
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__IFU__DOT__lfsr_in));
    bufp->fullCData(oldp+303,(0U),3);
    bufp->fullCData(oldp+304,(1U),3);
    bufp->fullCData(oldp+305,(2U),3);
    bufp->fullCData(oldp+306,(3U),3);
    bufp->fullCData(oldp+307,(4U),3);
    bufp->fullIData(oldp+308,(0x80000000U),32);
    bufp->fullIData(oldp+309,(0U),32);
    bufp->fullBit(oldp+310,(0U));
    bufp->fullCData(oldp+311,(0U),8);
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__Inst_Mem__DOT__b_state));
    bufp->fullBit(oldp+313,(vlSelf->top__DOT__Inst_Mem__DOT__wvalid));
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+317,(3U),2);
    bufp->fullIData(oldp+318,(5U),32);
}
