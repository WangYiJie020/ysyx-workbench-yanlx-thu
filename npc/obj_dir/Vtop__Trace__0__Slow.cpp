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
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->declBus(c+1,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+2,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+215,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+3,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+220,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+1,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+2,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+212,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+220,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declBus(c+5,"raddr2", false,-1, 4,0);
    tracep->declBus(c+6,"rdata1", false,-1, 31,0);
    tracep->declBus(c+7,"rdata2", false,-1, 31,0);
    tracep->declBus(c+8,"a5", false,-1, 31,0);
    tracep->declBus(c+9,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+6,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+7,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+10,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+11,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+12,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+13,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+14,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+15,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+16,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+17,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+18,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+19,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+20,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+21,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+22,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+23,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+24,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+25,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+26,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+27,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+220,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+28,"csr_write", false,-1);
    tracep->declBus(c+29,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+30+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+34,"wdata", false,-1, 31,0);
    tracep->declBus(c+35,"waddr", false,-1, 4,0);
    tracep->declBit(c+36,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+37+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+69,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+70,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+73,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+74,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+75,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+76,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+77,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+78,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+79,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+80,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+81,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+82,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+83,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+220,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+84,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+85,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+86,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+87,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+216,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+88,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+89,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+90,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+91,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+92,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+93,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+217,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+220,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->declBus(c+9,"pc_i", false,-1, 31,0);
    tracep->declBus(c+6,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+7,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+10,"imm_i", false,-1, 31,0);
    tracep->declBus(c+11,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+12,"a_in_src_i", false,-1);
    tracep->declBus(c+13,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+14,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+15,"adder_a_src_i", false,-1);
    tracep->declBit(c+16,"adder_out_src_i", false,-1);
    tracep->declBus(c+17,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+18,"MemRead_i", false,-1);
    tracep->declBit(c+19,"MemWrite_i", false,-1);
    tracep->declBus(c+20,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+21,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+22,"wb_src_i", false,-1);
    tracep->declBit(c+23,"csr_write_i", false,-1);
    tracep->declBit(c+24,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+25,"reg_write_i", false,-1);
    tracep->declBus(c+26,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+27,"exu_valid_i", false,-1);
    tracep->declBit(c+220,"exu_ready_o", false,-1);
    tracep->declBus(c+69,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+70,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+73,"npc_o", false,-1, 31,0);
    tracep->declBit(c+74,"MemRead_o", false,-1);
    tracep->declBit(c+75,"MemWrite_o", false,-1);
    tracep->declBus(c+76,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+77,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+78,"wb_src_o", false,-1);
    tracep->declBit(c+79,"csr_write_o", false,-1);
    tracep->declBit(c+80,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+81,"reg_write_o", false,-1);
    tracep->declBus(c+82,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+83,"exu_valid_o", false,-1);
    tracep->declBit(c+220,"exu_ready_i", false,-1);
    tracep->declBus(c+94,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"rs1", false,-1, 31,0);
    tracep->declBus(c+71,"rs2", false,-1, 31,0);
    tracep->declBus(c+95,"imm", false,-1, 31,0);
    tracep->declBus(c+96,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+97,"a_in_src", false,-1);
    tracep->declBus(c+98,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+99,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+100,"adder_a_src", false,-1);
    tracep->declBit(c+101,"adder_out_src", false,-1);
    tracep->declBus(c+102,"alu_op", false,-1, 3,0);
    tracep->declBus(c+103,"a_in", false,-1, 31,0);
    tracep->declBus(c+104,"b_in", false,-1, 31,0);
    tracep->declBus(c+105,"a_out", false,-1, 31,0);
    tracep->declBus(c+222,"add_out", false,-1, 31,0);
    tracep->declBus(c+106,"pc_new", false,-1, 31,0);
    tracep->declBus(c+69,"alu_result", false,-1, 31,0);
    tracep->declBus(c+73,"npc", false,-1, 31,0);
    tracep->declBit(c+107,"zero", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+103,"a", false,-1, 31,0);
    tracep->declBus(c+104,"b", false,-1, 31,0);
    tracep->declBus(c+102,"op", false,-1, 3,0);
    tracep->declBus(c+69,"alu_result", false,-1, 31,0);
    tracep->declBit(c+107,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+223,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"d0", false,-1, 31,0);
    tracep->declBus(c+94,"d1", false,-1, 31,0);
    tracep->declBit(c+97,"sel", false,-1);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+223,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"d0", false,-1, 31,0);
    tracep->declBus(c+95,"d1", false,-1, 31,0);
    tracep->declBus(c+224,"d2", false,-1, 31,0);
    tracep->declBus(c+96,"d3", false,-1, 31,0);
    tracep->declBus(c+98,"sel", false,-1, 1,0);
    tracep->declBus(c+104,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+105,"a", false,-1, 31,0);
    tracep->declBus(c+95,"b", false,-1, 31,0);
    tracep->declBus(c+222,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+223,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"d0", false,-1, 31,0);
    tracep->declBus(c+70,"d1", false,-1, 31,0);
    tracep->declBit(c+100,"sel", false,-1);
    tracep->declBus(c+105,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+223,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+222,"d0", false,-1, 31,0);
    tracep->declBus(c+96,"d1", false,-1, 31,0);
    tracep->declBit(c+101,"sel", false,-1);
    tracep->declBus(c+106,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+108,"pc4", false,-1, 31,0);
    tracep->declBus(c+106,"pc_new", false,-1, 31,0);
    tracep->declBus(c+99,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+107,"zero", false,-1);
    tracep->declBus(c+69,"alu_result", false,-1, 31,0);
    tracep->declBus(c+73,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declBus(c+5,"raddr2", false,-1, 4,0);
    tracep->declBus(c+6,"rdata1", false,-1, 31,0);
    tracep->declBus(c+7,"rdata2", false,-1, 31,0);
    tracep->declBus(c+8,"a5", false,-1, 31,0);
    tracep->declBus(c+1,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBit(c+212,"idu_valid_i", false,-1);
    tracep->declBit(c+220,"idu_ready_o", false,-1);
    tracep->declBus(c+9,"pc_o", false,-1, 31,0);
    tracep->declBus(c+6,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+7,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+10,"imm_o", false,-1, 31,0);
    tracep->declBus(c+11,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+12,"a_in_src_o", false,-1);
    tracep->declBus(c+13,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+14,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+15,"adder_a_src_o", false,-1);
    tracep->declBit(c+16,"adder_out_src_o", false,-1);
    tracep->declBus(c+17,"alu_op", false,-1, 3,0);
    tracep->declBit(c+18,"MemRead_o", false,-1);
    tracep->declBit(c+19,"MemWrite_o", false,-1);
    tracep->declBus(c+20,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+21,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+22,"wb_src_o", false,-1);
    tracep->declBit(c+23,"csr_write_o", false,-1);
    tracep->declBit(c+24,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+25,"reg_write_o", false,-1);
    tracep->declBus(c+26,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+27,"idu_valid_o", false,-1);
    tracep->declBit(c+220,"idu_ready_i", false,-1);
    tracep->declBit(c+28,"csr_write_i", false,-1);
    tracep->declBus(c+29,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+109+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+9,"pc", false,-1, 31,0);
    tracep->declBus(c+113,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+113,"inst", false,-1, 31,0);
    tracep->declBus(c+17,"alu_op", false,-1, 3,0);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+115,"funct3", false,-1, 2,0);
    tracep->declBus(c+116,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->declBus(c+113,"inst", false,-1, 31,0);
    tracep->declBus(c+29,"wdata", false,-1, 31,0);
    tracep->declBus(c+8,"NO", false,-1, 31,0);
    tracep->declBus(c+9,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+117+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+121,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+122,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+123,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+124,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+115,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+113,"inst", false,-1, 31,0);
    tracep->declBit(c+12,"a_in_src", false,-1);
    tracep->declBus(c+13,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+25,"reg_write", false,-1);
    tracep->declBus(c+14,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+15,"adder_a_src", false,-1);
    tracep->declBit(c+18,"MemRead", false,-1);
    tracep->declBit(c+19,"MemWrite", false,-1);
    tracep->declBus(c+20,"wmask", false,-1, 7,0);
    tracep->declBit(c+22,"wb_src", false,-1);
    tracep->declBus(c+21,"rmask", false,-1, 2,0);
    tracep->declBit(c+23,"csr_write", false,-1);
    tracep->declBit(c+16,"adder_out_src", false,-1);
    tracep->declBit(c+24,"csr_wdata_src", false,-1);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+115,"funct3", false,-1, 2,0);
    tracep->declBus(c+116,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+223,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"inst", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+115,"funct3", false,-1, 2,0);
    tracep->declBus(c+116,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->declBus(c+1,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+2,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+215,"npc_i", false,-1, 31,0);
    tracep->declBit(c+3,"ifu_valid_i", false,-1);
    tracep->declBit(c+220,"ifu_ready_o", false,-1);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBit(c+212,"ifu_valid_o", false,-1);
    tracep->declBit(c+220,"ifu_ready_i", false,-1);
    tracep->declBus(c+225,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+226,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+227,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+213,"current_state", false,-1, 1,0);
    tracep->declBus(c+221,"next_state", false,-1, 1,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+214,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+223,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->declBus(c+214,"din", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->declBus(c+69,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+70,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+73,"npc_i", false,-1, 31,0);
    tracep->declBit(c+74,"MemRead_i", false,-1);
    tracep->declBit(c+75,"MemWrite_i", false,-1);
    tracep->declBus(c+76,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+77,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+78,"wb_src_i", false,-1);
    tracep->declBit(c+79,"csr_write_i", false,-1);
    tracep->declBit(c+80,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+81,"reg_write_i", false,-1);
    tracep->declBus(c+82,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+83,"lsu_valid_i", false,-1);
    tracep->declBit(c+220,"lsu_ready_o", false,-1);
    tracep->declBus(c+84,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+85,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+86,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+87,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+216,"npc_o", false,-1, 31,0);
    tracep->declBus(c+88,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+89,"wb_src_o", false,-1);
    tracep->declBit(c+90,"csr_write_o", false,-1);
    tracep->declBit(c+91,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+92,"reg_write_o", false,-1);
    tracep->declBus(c+93,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+217,"lsu_valid_o", false,-1);
    tracep->declBit(c+220,"lsu_ready_i", false,-1);
    tracep->declBus(c+84,"alu_result", false,-1, 31,0);
    tracep->declBus(c+85,"rs1", false,-1, 31,0);
    tracep->declBus(c+125,"rs2", false,-1, 31,0);
    tracep->declBus(c+229,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBit(c+126,"MemRead", false,-1);
    tracep->declBit(c+127,"MemWrite", false,-1);
    tracep->declBus(c+128,"wmask", false,-1, 7,0);
    tracep->declBus(c+88,"rmask", false,-1, 2,0);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+126,"MemRead", false,-1);
    tracep->declBit(c+127,"MemWrite", false,-1);
    tracep->declBus(c+84,"address", false,-1, 31,0);
    tracep->declBus(c+125,"write_data", false,-1, 31,0);
    tracep->declBus(c+128,"wmask", false,-1, 7,0);
    tracep->declBus(c+88,"rmask", false,-1, 2,0);
    tracep->declBus(c+87,"read_data", false,-1, 31,0);
    tracep->declBus(c+129,"wmask_send", false,-1, 7,0);
    tracep->declBus(c+130,"rmask_send", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+230,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBus(c+34,"wdata", false,-1, 31,0);
    tracep->declBus(c+35,"waddr", false,-1, 4,0);
    tracep->declBit(c+36,"wen", false,-1);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declBus(c+6,"rdata1", false,-1, 31,0);
    tracep->declBus(c+5,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"rdata2", false,-1, 31,0);
    tracep->declBus(c+8,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+131+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+163+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+218,"clk", false,-1);
    tracep->declBit(c+219,"rst_n", false,-1);
    tracep->declBus(c+84,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+85,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+86,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+87,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+216,"npc_i", false,-1, 31,0);
    tracep->declBus(c+88,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+89,"wb_src_i", false,-1);
    tracep->declBit(c+90,"csr_write_i", false,-1);
    tracep->declBit(c+91,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+92,"reg_write_i", false,-1);
    tracep->declBus(c+93,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+217,"wbu_valid_i", false,-1);
    tracep->declBit(c+220,"wbu_ready_o", false,-1);
    tracep->declBus(c+215,"npc_o", false,-1, 31,0);
    tracep->declBit(c+3,"wbu_valid_o", false,-1);
    tracep->declBit(c+220,"wbu_ready_i", false,-1);
    tracep->declBus(c+29,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+34,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+28,"csr_write_o", false,-1);
    tracep->declBit(c+36,"reg_write_o", false,-1);
    tracep->declBus(c+35,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+195,"mem_data", false,-1, 31,0);
    tracep->declBus(c+196,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+197,"alu_result", false,-1, 31,0);
    tracep->declBus(c+198,"rs1", false,-1, 31,0);
    tracep->declBus(c+199,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+200,"rmask", false,-1, 2,0);
    tracep->declBit(c+201,"wb_src", false,-1);
    tracep->declBit(c+202,"csr_wdata_src", false,-1);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+223,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"d0", false,-1, 31,0);
    tracep->declBus(c+199,"d1", false,-1, 31,0);
    tracep->declBit(c+202,"sel", false,-1);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+196,"read_data", false,-1, 31,0);
    tracep->declBus(c+203,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+200,"rmask", false,-1, 2,0);
    tracep->declBus(c+195,"mem_data", false,-1, 31,0);
    tracep->declBus(c+204,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+205,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+206,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+207,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+208,"byte3", false,-1, 31,0);
    tracep->declBus(c+209,"byte2", false,-1, 31,0);
    tracep->declBus(c+210,"byte1", false,-1, 31,0);
    tracep->declBus(c+211,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+223,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+197,"d0", false,-1, 31,0);
    tracep->declBus(c+195,"d1", false,-1, 31,0);
    tracep->declBit(c+201,"sel", false,-1);
    tracep->declBus(c+34,"out", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__inst_from_mem),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__Rgefile__DOT__rf
                            [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                       >> 0xfU))]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__Rgefile__DOT__rf
                            [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                       >> 0x14U))]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__Rgefile__DOT__rf
                            [0xfU]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullIData(oldp+11,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+26,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                               ? vlSelf->top__DOT__WBU__DOT__mem_data
                               : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+72,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                              | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+73,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__datamem_readdata_lsu_to_wbu),32);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+105,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+107,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullIData(oldp+108,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+114,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+115,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+116,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__LSU__DOT__MemWrite));
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__LSU__DOT__wmask),8);
    bufp->fullCData(oldp+129,((0xffU & ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                         ? ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                            << (3U 
                                                & vlSelf->top__DOT__LSU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                             ? ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                                << 
                                                (3U 
                                                 & vlSelf->top__DOT__LSU__DOT__alu_result))
                                             : (IData)(vlSelf->top__DOT__LSU__DOT__wmask))))),8);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__LSU__DOT__rmask),8);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+200,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+203,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+204,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+205,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+206,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+207,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+208,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+209,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+210,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+211,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__valid_ifu_to_idu));
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__IFU__DOT__current_state),2);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+218,(vlSelf->clk));
    bufp->fullBit(oldp+219,(vlSelf->rst_n));
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__ready_wbu_to_ifu));
    bufp->fullCData(oldp+221,(vlSelf->top__DOT__IFU__DOT__next_state),2);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__EXU__DOT__add_out),32);
    bufp->fullIData(oldp+223,(0x20U),32);
    bufp->fullIData(oldp+224,(4U),32);
    bufp->fullCData(oldp+225,(0U),2);
    bufp->fullCData(oldp+226,(1U),2);
    bufp->fullCData(oldp+227,(2U),2);
    bufp->fullIData(oldp+228,(0x80000000U),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullIData(oldp+230,(5U),32);
}
