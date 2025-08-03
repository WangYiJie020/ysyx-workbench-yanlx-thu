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
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->declBus(c+229,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+230,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+5,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+6,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+7,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+229,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+230,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+8,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+1,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+202,"raddr1", false,-1, 4,0);
    tracep->declBus(c+203,"raddr2", false,-1, 4,0);
    tracep->declBus(c+231,"rdata1", false,-1, 31,0);
    tracep->declBus(c+232,"rdata2", false,-1, 31,0);
    tracep->declBus(c+89,"a5", false,-1, 31,0);
    tracep->declBus(c+204,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+231,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+232,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+205,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+233,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+206,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+207,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+208,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+209,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+210,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+211,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+212,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+213,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+214,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+215,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+216,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+217,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+218,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+219,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+220,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+2,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+9,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+221,"csr_write", false,-1);
    tracep->declBus(c+222,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+90+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+10,"wdata", false,-1, 31,0);
    tracep->declBus(c+11,"waddr", false,-1, 4,0);
    tracep->declBit(c+12,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+94+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+13,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+14,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+15,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+16,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+17,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+18,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+19,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+20,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+21,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+22,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+23,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+24,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+25,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+26,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+27,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+28,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+29,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+30,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+31,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+234,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+32,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+33,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+34,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+35,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+36,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+37,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+38,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+39,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+40,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->declBus(c+204,"pc_i", false,-1, 31,0);
    tracep->declBus(c+231,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+232,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+205,"imm_i", false,-1, 31,0);
    tracep->declBus(c+233,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+206,"a_in_src_i", false,-1);
    tracep->declBus(c+207,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+208,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+209,"adder_a_src_i", false,-1);
    tracep->declBit(c+210,"adder_out_src_i", false,-1);
    tracep->declBus(c+211,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+212,"MemRead_i", false,-1);
    tracep->declBit(c+213,"MemWrite_i", false,-1);
    tracep->declBus(c+214,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+215,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+216,"wb_src_i", false,-1);
    tracep->declBit(c+217,"csr_write_i", false,-1);
    tracep->declBit(c+218,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+219,"reg_write_i", false,-1);
    tracep->declBus(c+220,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+2,"exu_valid_i", false,-1);
    tracep->declBit(c+9,"exu_ready_o", false,-1);
    tracep->declBus(c+13,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+14,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+15,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+16,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+17,"npc_o", false,-1, 31,0);
    tracep->declBit(c+18,"MemRead_o", false,-1);
    tracep->declBit(c+19,"MemWrite_o", false,-1);
    tracep->declBus(c+20,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+21,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+22,"wb_src_o", false,-1);
    tracep->declBit(c+23,"csr_write_o", false,-1);
    tracep->declBit(c+24,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+25,"reg_write_o", false,-1);
    tracep->declBus(c+26,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+27,"exu_valid_o", false,-1);
    tracep->declBit(c+28,"exu_ready_i", false,-1);
    tracep->declBus(c+41,"pc", false,-1, 31,0);
    tracep->declBus(c+14,"rs1", false,-1, 31,0);
    tracep->declBus(c+15,"rs2", false,-1, 31,0);
    tracep->declBus(c+42,"imm", false,-1, 31,0);
    tracep->declBus(c+43,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"a_in_src", false,-1);
    tracep->declBus(c+45,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+46,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+47,"adder_a_src", false,-1);
    tracep->declBit(c+48,"adder_out_src", false,-1);
    tracep->declBus(c+49,"alu_op", false,-1, 3,0);
    tracep->declBus(c+50,"a_in", false,-1, 31,0);
    tracep->declBus(c+51,"b_in", false,-1, 31,0);
    tracep->declBus(c+52,"a_out", false,-1, 31,0);
    tracep->declBus(c+53,"add_out", false,-1, 31,0);
    tracep->declBus(c+54,"pc_new", false,-1, 31,0);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBus(c+17,"npc", false,-1, 31,0);
    tracep->declBit(c+55,"zero", false,-1);
    tracep->declBus(c+235,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+236,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+237,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+56,"current_state", false,-1, 1,0);
    tracep->declBus(c+57,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+50,"a", false,-1, 31,0);
    tracep->declBus(c+51,"b", false,-1, 31,0);
    tracep->declBus(c+49,"op", false,-1, 3,0);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBit(c+55,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+238,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"d0", false,-1, 31,0);
    tracep->declBus(c+41,"d1", false,-1, 31,0);
    tracep->declBit(c+44,"sel", false,-1);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+238,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"d0", false,-1, 31,0);
    tracep->declBus(c+42,"d1", false,-1, 31,0);
    tracep->declBus(c+239,"d2", false,-1, 31,0);
    tracep->declBus(c+43,"d3", false,-1, 31,0);
    tracep->declBus(c+45,"sel", false,-1, 1,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+52,"a", false,-1, 31,0);
    tracep->declBus(c+42,"b", false,-1, 31,0);
    tracep->declBus(c+53,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+238,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+41,"d0", false,-1, 31,0);
    tracep->declBus(c+14,"d1", false,-1, 31,0);
    tracep->declBit(c+47,"sel", false,-1);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+238,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"d0", false,-1, 31,0);
    tracep->declBus(c+43,"d1", false,-1, 31,0);
    tracep->declBit(c+48,"sel", false,-1);
    tracep->declBus(c+54,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+58,"pc4", false,-1, 31,0);
    tracep->declBus(c+54,"pc_new", false,-1, 31,0);
    tracep->declBus(c+46,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+55,"zero", false,-1);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBus(c+17,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->declBus(c+202,"raddr1", false,-1, 4,0);
    tracep->declBus(c+203,"raddr2", false,-1, 4,0);
    tracep->declBus(c+231,"rdata1", false,-1, 31,0);
    tracep->declBus(c+232,"rdata2", false,-1, 31,0);
    tracep->declBus(c+89,"a5", false,-1, 31,0);
    tracep->declBus(c+229,"pc_i", false,-1, 31,0);
    tracep->declBus(c+230,"inst_i", false,-1, 31,0);
    tracep->declBit(c+8,"idu_valid_i", false,-1);
    tracep->declBit(c+1,"idu_ready_o", false,-1);
    tracep->declBus(c+204,"pc_o", false,-1, 31,0);
    tracep->declBus(c+231,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+232,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+205,"imm_o", false,-1, 31,0);
    tracep->declBus(c+233,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+206,"a_in_src_o", false,-1);
    tracep->declBus(c+207,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+208,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+209,"adder_a_src_o", false,-1);
    tracep->declBit(c+210,"adder_out_src_o", false,-1);
    tracep->declBus(c+211,"alu_op", false,-1, 3,0);
    tracep->declBit(c+212,"MemRead_o", false,-1);
    tracep->declBit(c+213,"MemWrite_o", false,-1);
    tracep->declBus(c+214,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+215,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+216,"wb_src_o", false,-1);
    tracep->declBit(c+217,"csr_write_o", false,-1);
    tracep->declBit(c+218,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+219,"reg_write_o", false,-1);
    tracep->declBus(c+220,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+2,"idu_valid_o", false,-1);
    tracep->declBit(c+9,"idu_ready_i", false,-1);
    tracep->declBit(c+221,"csr_write_i", false,-1);
    tracep->declBus(c+222,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+126+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+204,"pc", false,-1, 31,0);
    tracep->declBus(c+223,"inst", false,-1, 31,0);
    tracep->declBus(c+235,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+236,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+237,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+3,"current_state", false,-1, 1,0);
    tracep->declBus(c+59,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+223,"inst", false,-1, 31,0);
    tracep->declBus(c+211,"alu_op", false,-1, 3,0);
    tracep->declBus(c+224,"opcode", false,-1, 6,0);
    tracep->declBus(c+225,"funct3", false,-1, 2,0);
    tracep->declBus(c+226,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+221,"wen", false,-1);
    tracep->declBus(c+223,"inst", false,-1, 31,0);
    tracep->declBus(c+222,"wdata", false,-1, 31,0);
    tracep->declBus(c+89,"NO", false,-1, 31,0);
    tracep->declBus(c+204,"pc", false,-1, 31,0);
    tracep->declBus(c+233,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+130+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+134,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+135,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+136,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+137,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+224,"opcode", false,-1, 6,0);
    tracep->declBus(c+225,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+223,"inst", false,-1, 31,0);
    tracep->declBit(c+206,"a_in_src", false,-1);
    tracep->declBus(c+207,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+219,"reg_write", false,-1);
    tracep->declBus(c+208,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+209,"adder_a_src", false,-1);
    tracep->declBit(c+212,"MemRead", false,-1);
    tracep->declBit(c+213,"MemWrite", false,-1);
    tracep->declBus(c+214,"wmask", false,-1, 7,0);
    tracep->declBit(c+216,"wb_src", false,-1);
    tracep->declBus(c+215,"rmask", false,-1, 2,0);
    tracep->declBit(c+217,"csr_write", false,-1);
    tracep->declBit(c+210,"adder_out_src", false,-1);
    tracep->declBit(c+218,"csr_wdata_src", false,-1);
    tracep->declBus(c+224,"opcode", false,-1, 6,0);
    tracep->declBus(c+225,"funct3", false,-1, 2,0);
    tracep->declBus(c+226,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+238,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+223,"inst", false,-1, 31,0);
    tracep->declBus(c+205,"data", false,-1, 31,0);
    tracep->declBus(c+224,"opcode", false,-1, 6,0);
    tracep->declBus(c+225,"funct3", false,-1, 2,0);
    tracep->declBus(c+226,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->declBus(c+229,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+230,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+5,"npc_i", false,-1, 31,0);
    tracep->declBit(c+6,"ifu_valid_i", false,-1);
    tracep->declBit(c+7,"ifu_ready_o", false,-1);
    tracep->declBus(c+229,"pc_o", false,-1, 31,0);
    tracep->declBus(c+230,"inst_o", false,-1, 31,0);
    tracep->declBit(c+8,"ifu_valid_o", false,-1);
    tracep->declBit(c+1,"ifu_ready_i", false,-1);
    tracep->declBus(c+229,"pc", false,-1, 31,0);
    tracep->declBus(c+60,"npc", false,-1, 31,0);
    tracep->declBus(c+235,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+236,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+237,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+240,"S_WAIT_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+61,"current_state", false,-1, 1,0);
    tracep->declBus(c+62,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+238,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+241,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->declBus(c+60,"din", false,-1, 31,0);
    tracep->declBus(c+229,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBus(c+229,"pc", false,-1, 31,0);
    tracep->declBus(c+230,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->declBus(c+13,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+14,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+15,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+16,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+17,"npc_i", false,-1, 31,0);
    tracep->declBit(c+18,"MemRead_i", false,-1);
    tracep->declBit(c+19,"MemWrite_i", false,-1);
    tracep->declBus(c+20,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+21,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+22,"wb_src_i", false,-1);
    tracep->declBit(c+23,"csr_write_i", false,-1);
    tracep->declBit(c+24,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+25,"reg_write_i", false,-1);
    tracep->declBus(c+26,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+27,"lsu_valid_i", false,-1);
    tracep->declBit(c+28,"lsu_ready_o", false,-1);
    tracep->declBus(c+29,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+30,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+31,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+234,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+32,"npc_o", false,-1, 31,0);
    tracep->declBus(c+33,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+34,"wb_src_o", false,-1);
    tracep->declBit(c+35,"csr_write_o", false,-1);
    tracep->declBit(c+36,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+37,"reg_write_o", false,-1);
    tracep->declBus(c+38,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+39,"lsu_valid_o", false,-1);
    tracep->declBit(c+40,"lsu_ready_i", false,-1);
    tracep->declBus(c+29,"alu_result", false,-1, 31,0);
    tracep->declBus(c+30,"rs1", false,-1, 31,0);
    tracep->declBus(c+63,"rs2", false,-1, 31,0);
    tracep->declBus(c+242,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBit(c+64,"MemRead", false,-1);
    tracep->declBit(c+65,"MemWrite", false,-1);
    tracep->declBus(c+66,"wmask", false,-1, 7,0);
    tracep->declBus(c+33,"rmask", false,-1, 2,0);
    tracep->declBus(c+234,"datamem_readdata", false,-1, 31,0);
    tracep->declBit(c+4,"flag", false,-1);
    tracep->declBus(c+235,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+236,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+237,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+240,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+67,"current_state", false,-1, 1,0);
    tracep->declBus(c+68,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+64,"MemRead", false,-1);
    tracep->declBit(c+65,"MemWrite", false,-1);
    tracep->declBus(c+29,"address", false,-1, 31,0);
    tracep->declBus(c+63,"write_data", false,-1, 31,0);
    tracep->declBus(c+66,"wmask", false,-1, 7,0);
    tracep->declBus(c+243,"rmask", false,-1, 2,0);
    tracep->declBus(c+234,"read_data", false,-1, 31,0);
    tracep->declBus(c+69,"wmask_send", false,-1, 7,0);
    tracep->declBus(c+244,"rmask_send", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+245,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+238,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBus(c+10,"wdata", false,-1, 31,0);
    tracep->declBus(c+11,"waddr", false,-1, 4,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->declBus(c+202,"raddr1", false,-1, 4,0);
    tracep->declBus(c+231,"rdata1", false,-1, 31,0);
    tracep->declBus(c+203,"raddr2", false,-1, 4,0);
    tracep->declBus(c+232,"rdata2", false,-1, 31,0);
    tracep->declBus(c+89,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+138+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+170+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst_n", false,-1);
    tracep->declBus(c+29,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+30,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+31,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+234,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+32,"npc_i", false,-1, 31,0);
    tracep->declBus(c+33,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+34,"wb_src_i", false,-1);
    tracep->declBit(c+35,"csr_write_i", false,-1);
    tracep->declBit(c+36,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+37,"reg_write_i", false,-1);
    tracep->declBus(c+38,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+39,"wbu_valid_i", false,-1);
    tracep->declBit(c+40,"wbu_ready_o", false,-1);
    tracep->declBus(c+5,"npc_o", false,-1, 31,0);
    tracep->declBit(c+6,"wbu_valid_o", false,-1);
    tracep->declBit(c+7,"wbu_ready_i", false,-1);
    tracep->declBus(c+222,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+10,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+221,"csr_write_o", false,-1);
    tracep->declBit(c+12,"reg_write_o", false,-1);
    tracep->declBus(c+11,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+70,"mem_data", false,-1, 31,0);
    tracep->declBus(c+71,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+72,"alu_result", false,-1, 31,0);
    tracep->declBus(c+73,"rs1", false,-1, 31,0);
    tracep->declBus(c+74,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+75,"rmask", false,-1, 2,0);
    tracep->declBit(c+76,"wb_src", false,-1);
    tracep->declBit(c+77,"csr_wdata_src", false,-1);
    tracep->declBus(c+235,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+236,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+237,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+78,"current_state", false,-1, 1,0);
    tracep->declBus(c+79,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+238,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+73,"d0", false,-1, 31,0);
    tracep->declBus(c+74,"d1", false,-1, 31,0);
    tracep->declBit(c+77,"sel", false,-1);
    tracep->declBus(c+222,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+71,"read_data", false,-1, 31,0);
    tracep->declBus(c+80,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+75,"rmask", false,-1, 2,0);
    tracep->declBus(c+70,"mem_data", false,-1, 31,0);
    tracep->declBus(c+81,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+82,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+83,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+84,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+85,"byte3", false,-1, 31,0);
    tracep->declBus(c+86,"byte2", false,-1, 31,0);
    tracep->declBus(c+87,"byte1", false,-1, 31,0);
    tracep->declBus(c+88,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+238,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+72,"d0", false,-1, 31,0);
    tracep->declBus(c+70,"d1", false,-1, 31,0);
    tracep->declBit(c+76,"sel", false,-1);
    tracep->declBus(c+10,"out", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__ready_ifu_to_idu));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ready_wbu_to_ifu));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+10,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                               ? vlSelf->top__DOT__WBU__DOT__mem_data
                               : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+16,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                              | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+17,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+52,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                               ? vlSelf->top__DOT__EXU__DOT__rs1
                               : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+53,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc) 
                              + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+55,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+58,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__IFU__DOT__next_state),2);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__LSU__DOT__MemWrite));
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__LSU__DOT__wmask),8);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullCData(oldp+69,((0xffU & ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                        ? ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                           << (3U & vlSelf->top__DOT__LSU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                            ? ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                               << (3U 
                                                   & vlSelf->top__DOT__LSU__DOT__alu_result))
                                            : (IData)(vlSelf->top__DOT__LSU__DOT__wmask))))),8);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+80,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+81,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                           >> 0x1fU))) 
                               << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+82,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                 >> 0x17U)))) 
                               << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x10U)))),32);
    bufp->fullIData(oldp+83,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                 >> 0xfU)))) 
                               << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 8U)))),32);
    bufp->fullIData(oldp+84,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                 >> 7U)))) 
                               << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+85,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                              >> 0x18U)),32);
    bufp->fullIData(oldp+86,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                       >> 0x10U))),32);
    bufp->fullIData(oldp+87,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                       >> 8U))),32);
    bufp->fullIData(oldp+88,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__Rgefile__DOT__rf
                             [0xfU]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+202,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+203,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+215,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+220,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+224,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+225,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+226,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+227,(vlSelf->clk));
    bufp->fullBit(oldp+228,(vlSelf->rst_n));
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__inst_from_mem),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+233,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__LSU__DOT__datamem_readdata),32);
    bufp->fullCData(oldp+235,(0U),2);
    bufp->fullCData(oldp+236,(1U),2);
    bufp->fullCData(oldp+237,(2U),2);
    bufp->fullIData(oldp+238,(0x20U),32);
    bufp->fullIData(oldp+239,(4U),32);
    bufp->fullCData(oldp+240,(3U),2);
    bufp->fullIData(oldp+241,(0x80000000U),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+243,(vlSelf->top__DOT__LSU__DOT__Data_Mem__DOT__rmask),3);
    bufp->fullCData(oldp+244,(vlSelf->top__DOT__LSU__DOT__Data_Mem__DOT__rmask),8);
    bufp->fullIData(oldp+245,(5U),32);
}
