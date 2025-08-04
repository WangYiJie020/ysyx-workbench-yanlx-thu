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
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+249,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+28,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+29,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+2,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+3,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+4,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+5,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+6,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+249,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+7,"ifu_arvalid", false,-1);
    tracep->declBit(c+8,"ifu_arready", false,-1);
    tracep->declBus(c+1,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+9,"ifu_rresp", false,-1);
    tracep->declBit(c+10,"ifu_rvalid", false,-1);
    tracep->declBit(c+11,"ifu_rready", false,-1);
    tracep->declBit(c+12,"useless1", false,-1);
    tracep->declBit(c+13,"useless2", false,-1);
    tracep->declBit(c+14,"useless3", false,-1);
    tracep->declBit(c+15,"useless4", false,-1);
    tracep->declBus(c+222,"raddr1", false,-1, 4,0);
    tracep->declBus(c+223,"raddr2", false,-1, 4,0);
    tracep->declBus(c+250,"rdata1", false,-1, 31,0);
    tracep->declBus(c+251,"rdata2", false,-1, 31,0);
    tracep->declBus(c+109,"a5", false,-1, 31,0);
    tracep->declBus(c+224,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+250,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+251,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+225,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+252,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+226,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+227,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+228,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+229,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+230,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+231,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+232,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+233,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+234,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+235,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+236,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+237,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+238,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+239,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+240,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+16,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+30,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+241,"csr_write", false,-1);
    tracep->declBus(c+242,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+110+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+31,"wdata", false,-1, 31,0);
    tracep->declBus(c+32,"waddr", false,-1, 4,0);
    tracep->declBit(c+33,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+114+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+34,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+35,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+36,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+37,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+38,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+39,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+40,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+41,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+42,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+43,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+44,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+45,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+46,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+47,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+48,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+49,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+50,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+51,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+52,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+253,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+53,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+54,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+55,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+56,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+57,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+58,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+59,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+60,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+61,"ready_lsu_to_wbu", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+224,"pc_i", false,-1, 31,0);
    tracep->declBus(c+250,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+251,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+225,"imm_i", false,-1, 31,0);
    tracep->declBus(c+252,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+226,"a_in_src_i", false,-1);
    tracep->declBus(c+227,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+228,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+229,"adder_a_src_i", false,-1);
    tracep->declBit(c+230,"adder_out_src_i", false,-1);
    tracep->declBus(c+231,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+232,"MemRead_i", false,-1);
    tracep->declBit(c+233,"MemWrite_i", false,-1);
    tracep->declBus(c+234,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+235,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+236,"wb_src_i", false,-1);
    tracep->declBit(c+237,"csr_write_i", false,-1);
    tracep->declBit(c+238,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+239,"reg_write_i", false,-1);
    tracep->declBus(c+240,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+16,"exu_valid_i", false,-1);
    tracep->declBit(c+30,"exu_ready_o", false,-1);
    tracep->declBus(c+34,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+35,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+36,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+37,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+38,"npc_o", false,-1, 31,0);
    tracep->declBit(c+39,"MemRead_o", false,-1);
    tracep->declBit(c+40,"MemWrite_o", false,-1);
    tracep->declBus(c+41,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+42,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+43,"wb_src_o", false,-1);
    tracep->declBit(c+44,"csr_write_o", false,-1);
    tracep->declBit(c+45,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+46,"reg_write_o", false,-1);
    tracep->declBus(c+47,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+48,"exu_valid_o", false,-1);
    tracep->declBit(c+49,"exu_ready_i", false,-1);
    tracep->declBus(c+62,"pc", false,-1, 31,0);
    tracep->declBus(c+35,"rs1", false,-1, 31,0);
    tracep->declBus(c+36,"rs2", false,-1, 31,0);
    tracep->declBus(c+63,"imm", false,-1, 31,0);
    tracep->declBus(c+64,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+65,"a_in_src", false,-1);
    tracep->declBus(c+66,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+67,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+68,"adder_a_src", false,-1);
    tracep->declBit(c+69,"adder_out_src", false,-1);
    tracep->declBus(c+70,"alu_op", false,-1, 3,0);
    tracep->declBus(c+71,"a_in", false,-1, 31,0);
    tracep->declBus(c+72,"b_in", false,-1, 31,0);
    tracep->declBus(c+73,"a_out", false,-1, 31,0);
    tracep->declBus(c+74,"add_out", false,-1, 31,0);
    tracep->declBus(c+75,"pc_new", false,-1, 31,0);
    tracep->declBus(c+34,"alu_result", false,-1, 31,0);
    tracep->declBus(c+38,"npc", false,-1, 31,0);
    tracep->declBit(c+76,"zero", false,-1);
    tracep->declBus(c+254,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+255,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+256,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+77,"current_state", false,-1, 1,0);
    tracep->declBus(c+78,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+71,"a", false,-1, 31,0);
    tracep->declBus(c+72,"b", false,-1, 31,0);
    tracep->declBus(c+70,"op", false,-1, 3,0);
    tracep->declBus(c+34,"alu_result", false,-1, 31,0);
    tracep->declBit(c+76,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+257,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"d0", false,-1, 31,0);
    tracep->declBus(c+62,"d1", false,-1, 31,0);
    tracep->declBit(c+65,"sel", false,-1);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+257,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"d0", false,-1, 31,0);
    tracep->declBus(c+63,"d1", false,-1, 31,0);
    tracep->declBus(c+258,"d2", false,-1, 31,0);
    tracep->declBus(c+64,"d3", false,-1, 31,0);
    tracep->declBus(c+66,"sel", false,-1, 1,0);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+73,"a", false,-1, 31,0);
    tracep->declBus(c+63,"b", false,-1, 31,0);
    tracep->declBus(c+74,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+257,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"d0", false,-1, 31,0);
    tracep->declBus(c+35,"d1", false,-1, 31,0);
    tracep->declBit(c+68,"sel", false,-1);
    tracep->declBus(c+73,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+257,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"d0", false,-1, 31,0);
    tracep->declBus(c+64,"d1", false,-1, 31,0);
    tracep->declBit(c+69,"sel", false,-1);
    tracep->declBus(c+75,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+79,"pc4", false,-1, 31,0);
    tracep->declBus(c+75,"pc_new", false,-1, 31,0);
    tracep->declBus(c+67,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+76,"zero", false,-1);
    tracep->declBus(c+34,"alu_result", false,-1, 31,0);
    tracep->declBus(c+38,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+222,"raddr1", false,-1, 4,0);
    tracep->declBus(c+223,"raddr2", false,-1, 4,0);
    tracep->declBus(c+250,"rdata1", false,-1, 31,0);
    tracep->declBus(c+251,"rdata2", false,-1, 31,0);
    tracep->declBus(c+109,"a5", false,-1, 31,0);
    tracep->declBus(c+3,"pc_i", false,-1, 31,0);
    tracep->declBus(c+4,"inst_i", false,-1, 31,0);
    tracep->declBit(c+5,"idu_valid_i", false,-1);
    tracep->declBit(c+6,"idu_ready_o", false,-1);
    tracep->declBus(c+224,"pc_o", false,-1, 31,0);
    tracep->declBus(c+250,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+251,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+225,"imm_o", false,-1, 31,0);
    tracep->declBus(c+252,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+226,"a_in_src_o", false,-1);
    tracep->declBus(c+227,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+228,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+229,"adder_a_src_o", false,-1);
    tracep->declBit(c+230,"adder_out_src_o", false,-1);
    tracep->declBus(c+231,"alu_op", false,-1, 3,0);
    tracep->declBit(c+232,"MemRead_o", false,-1);
    tracep->declBit(c+233,"MemWrite_o", false,-1);
    tracep->declBus(c+234,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+235,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+236,"wb_src_o", false,-1);
    tracep->declBit(c+237,"csr_write_o", false,-1);
    tracep->declBit(c+238,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+239,"reg_write_o", false,-1);
    tracep->declBus(c+240,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+16,"idu_valid_o", false,-1);
    tracep->declBit(c+30,"idu_ready_i", false,-1);
    tracep->declBit(c+241,"csr_write_i", false,-1);
    tracep->declBus(c+242,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+146+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+224,"pc", false,-1, 31,0);
    tracep->declBus(c+243,"inst", false,-1, 31,0);
    tracep->declBus(c+254,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+255,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+256,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+17,"current_state", false,-1, 1,0);
    tracep->declBus(c+80,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+243,"inst", false,-1, 31,0);
    tracep->declBus(c+231,"alu_op", false,-1, 3,0);
    tracep->declBus(c+244,"opcode", false,-1, 6,0);
    tracep->declBus(c+245,"funct3", false,-1, 2,0);
    tracep->declBus(c+246,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+241,"wen", false,-1);
    tracep->declBus(c+243,"inst", false,-1, 31,0);
    tracep->declBus(c+242,"wdata", false,-1, 31,0);
    tracep->declBus(c+109,"NO", false,-1, 31,0);
    tracep->declBus(c+224,"pc", false,-1, 31,0);
    tracep->declBus(c+252,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+150+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+154,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+155,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+156,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+157,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+244,"opcode", false,-1, 6,0);
    tracep->declBus(c+245,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+243,"inst", false,-1, 31,0);
    tracep->declBit(c+226,"a_in_src", false,-1);
    tracep->declBus(c+227,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+239,"reg_write", false,-1);
    tracep->declBus(c+228,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+229,"adder_a_src", false,-1);
    tracep->declBit(c+232,"MemRead", false,-1);
    tracep->declBit(c+233,"MemWrite", false,-1);
    tracep->declBus(c+234,"wmask", false,-1, 7,0);
    tracep->declBit(c+236,"wb_src", false,-1);
    tracep->declBus(c+235,"rmask", false,-1, 2,0);
    tracep->declBit(c+237,"csr_write", false,-1);
    tracep->declBit(c+230,"adder_out_src", false,-1);
    tracep->declBit(c+238,"csr_wdata_src", false,-1);
    tracep->declBus(c+244,"opcode", false,-1, 6,0);
    tracep->declBus(c+245,"funct3", false,-1, 2,0);
    tracep->declBus(c+246,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+257,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+243,"inst", false,-1, 31,0);
    tracep->declBus(c+225,"data", false,-1, 31,0);
    tracep->declBus(c+244,"opcode", false,-1, 6,0);
    tracep->declBus(c+245,"funct3", false,-1, 2,0);
    tracep->declBus(c+246,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+249,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_o", false,-1);
    tracep->declBit(c+8,"arready_i", false,-1);
    tracep->declBus(c+1,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_i", false,-1);
    tracep->declBit(c+10,"rvalid_i", false,-1);
    tracep->declBit(c+11,"rready_o", false,-1);
    tracep->declBus(c+28,"npc_i", false,-1, 31,0);
    tracep->declBit(c+29,"ifu_valid_i", false,-1);
    tracep->declBit(c+2,"ifu_ready_o", false,-1);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->declBus(c+4,"inst_o", false,-1, 31,0);
    tracep->declBit(c+5,"ifu_valid_o", false,-1);
    tracep->declBit(c+6,"ifu_ready_i", false,-1);
    tracep->declBus(c+249,"pc", false,-1, 31,0);
    tracep->declBus(c+81,"npc", false,-1, 31,0);
    tracep->declBus(c+254,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+255,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+256,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+259,"S_WAIT_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+18,"current_state", false,-1, 1,0);
    tracep->declBus(c+82,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+257,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+260,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+249,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+249,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_i", false,-1);
    tracep->declBit(c+8,"arready_o", false,-1);
    tracep->declBus(c+1,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_o", false,-1);
    tracep->declBit(c+10,"rvalid_o", false,-1);
    tracep->declBit(c+11,"rready_i", false,-1);
    tracep->declBus(c+261,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+262,"awvalid_i", false,-1);
    tracep->declBit(c+12,"awready_o", false,-1);
    tracep->declBus(c+261,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+263,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+262,"wvalid_i", false,-1);
    tracep->declBit(c+13,"wready_o", false,-1);
    tracep->declBit(c+14,"bresp_o", false,-1);
    tracep->declBit(c+15,"bvalid_o", false,-1);
    tracep->declBit(c+262,"bready_i", false,-1);
    tracep->declBit(c+19,"ar_state", false,-1);
    tracep->declBit(c+20,"r_state", false,-1);
    tracep->declBit(c+21,"aw_state", false,-1);
    tracep->declBit(c+22,"w_state", false,-1);
    tracep->declBit(c+23,"b_state", false,-1);
    tracep->declBus(c+24,"araddr", false,-1, 31,0);
    tracep->declBus(c+25,"awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"wdata", false,-1, 31,0);
    tracep->declBit(c+264,"wvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+34,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+35,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+36,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+37,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+38,"npc_i", false,-1, 31,0);
    tracep->declBit(c+39,"MemRead_i", false,-1);
    tracep->declBit(c+40,"MemWrite_i", false,-1);
    tracep->declBus(c+41,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+42,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+43,"wb_src_i", false,-1);
    tracep->declBit(c+44,"csr_write_i", false,-1);
    tracep->declBit(c+45,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+46,"reg_write_i", false,-1);
    tracep->declBus(c+47,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+48,"lsu_valid_i", false,-1);
    tracep->declBit(c+49,"lsu_ready_o", false,-1);
    tracep->declBus(c+50,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+51,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+52,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+253,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+53,"npc_o", false,-1, 31,0);
    tracep->declBus(c+54,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+55,"wb_src_o", false,-1);
    tracep->declBit(c+56,"csr_write_o", false,-1);
    tracep->declBit(c+57,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+58,"reg_write_o", false,-1);
    tracep->declBus(c+59,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+60,"lsu_valid_o", false,-1);
    tracep->declBit(c+61,"lsu_ready_i", false,-1);
    tracep->declBus(c+50,"alu_result", false,-1, 31,0);
    tracep->declBus(c+51,"rs1", false,-1, 31,0);
    tracep->declBus(c+83,"rs2", false,-1, 31,0);
    tracep->declBus(c+265,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBit(c+84,"MemRead", false,-1);
    tracep->declBit(c+85,"MemWrite", false,-1);
    tracep->declBus(c+86,"wmask", false,-1, 7,0);
    tracep->declBus(c+54,"rmask", false,-1, 2,0);
    tracep->declBus(c+253,"datamem_readdata", false,-1, 31,0);
    tracep->declBit(c+27,"flag", false,-1);
    tracep->declBus(c+254,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+255,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+256,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+259,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+87,"current_state", false,-1, 1,0);
    tracep->declBus(c+88,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+84,"MemRead", false,-1);
    tracep->declBit(c+85,"MemWrite", false,-1);
    tracep->declBus(c+50,"address", false,-1, 31,0);
    tracep->declBus(c+83,"write_data", false,-1, 31,0);
    tracep->declBus(c+86,"wmask", false,-1, 7,0);
    tracep->declBus(c+253,"read_data", false,-1, 31,0);
    tracep->declBus(c+89,"wmask_send", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+266,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+257,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBus(c+31,"wdata", false,-1, 31,0);
    tracep->declBus(c+32,"waddr", false,-1, 4,0);
    tracep->declBit(c+33,"wen", false,-1);
    tracep->declBus(c+222,"raddr1", false,-1, 4,0);
    tracep->declBus(c+250,"rdata1", false,-1, 31,0);
    tracep->declBus(c+223,"raddr2", false,-1, 4,0);
    tracep->declBus(c+251,"rdata2", false,-1, 31,0);
    tracep->declBus(c+109,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+158+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+190+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+247,"clk", false,-1);
    tracep->declBit(c+248,"rst_n", false,-1);
    tracep->declBus(c+50,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+51,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+52,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+253,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+53,"npc_i", false,-1, 31,0);
    tracep->declBus(c+54,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+55,"wb_src_i", false,-1);
    tracep->declBit(c+56,"csr_write_i", false,-1);
    tracep->declBit(c+57,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+58,"reg_write_i", false,-1);
    tracep->declBus(c+59,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+60,"wbu_valid_i", false,-1);
    tracep->declBit(c+61,"wbu_ready_o", false,-1);
    tracep->declBus(c+28,"npc_o", false,-1, 31,0);
    tracep->declBit(c+29,"wbu_valid_o", false,-1);
    tracep->declBit(c+2,"wbu_ready_i", false,-1);
    tracep->declBus(c+242,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+31,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+241,"csr_write_o", false,-1);
    tracep->declBit(c+33,"reg_write_o", false,-1);
    tracep->declBus(c+32,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+90,"mem_data", false,-1, 31,0);
    tracep->declBus(c+91,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+92,"alu_result", false,-1, 31,0);
    tracep->declBus(c+93,"rs1", false,-1, 31,0);
    tracep->declBus(c+94,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+95,"rmask", false,-1, 2,0);
    tracep->declBit(c+96,"wb_src", false,-1);
    tracep->declBit(c+97,"csr_wdata_src", false,-1);
    tracep->declBus(c+254,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+255,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+256,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+98,"current_state", false,-1, 1,0);
    tracep->declBus(c+99,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+257,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+93,"d0", false,-1, 31,0);
    tracep->declBus(c+94,"d1", false,-1, 31,0);
    tracep->declBit(c+97,"sel", false,-1);
    tracep->declBus(c+242,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+91,"read_data", false,-1, 31,0);
    tracep->declBus(c+100,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+95,"rmask", false,-1, 2,0);
    tracep->declBus(c+90,"mem_data", false,-1, 31,0);
    tracep->declBus(c+101,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+102,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+103,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+104,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+105,"byte3", false,-1, 31,0);
    tracep->declBus(c+106,"byte2", false,-1, 31,0);
    tracep->declBus(c+107,"byte1", false,-1, 31,0);
    tracep->declBus(c+108,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+257,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"d0", false,-1, 31,0);
    tracep->declBus(c+90,"d1", false,-1, 31,0);
    tracep->declBit(c+96,"sel", false,-1);
    tracep->declBus(c+31,"out", false,-1, 31,0);
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
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__inst_ifu_to_idu),32);
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
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__Inst_Mem__DOT__ar_state));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__Inst_Mem__DOT__r_state));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__Inst_Mem__DOT__aw_state));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__Inst_Mem__DOT__w_state));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__Inst_Mem__DOT__b_state));
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__Inst_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__Inst_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__Inst_Mem__DOT__wdata),32);
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+31,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                               ? vlSelf->top__DOT__WBU__DOT__mem_data
                               : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+37,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                              | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+38,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+73,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                               ? vlSelf->top__DOT__EXU__DOT__rs1
                               : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+74,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc) 
                              + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+76,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+79,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__IFU__DOT__next_state),2);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__LSU__DOT__MemRead));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__LSU__DOT__MemWrite));
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__LSU__DOT__wmask),8);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullCData(oldp+89,((0xffU & ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                        ? ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                           << (3U & vlSelf->top__DOT__LSU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                            ? ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                               << (3U 
                                                   & vlSelf->top__DOT__LSU__DOT__alu_result))
                                            : (IData)(vlSelf->top__DOT__LSU__DOT__wmask))))),8);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+100,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+101,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+102,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+103,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+104,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+105,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+106,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+107,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+108,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+222,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+223,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+228,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+231,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+240,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+241,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+244,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+245,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+246,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+247,(vlSelf->clk));
    bufp->fullBit(oldp+248,(vlSelf->rst_n));
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+252,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__LSU__DOT__datamem_readdata),32);
    bufp->fullCData(oldp+254,(0U),2);
    bufp->fullCData(oldp+255,(1U),2);
    bufp->fullCData(oldp+256,(2U),2);
    bufp->fullIData(oldp+257,(0x20U),32);
    bufp->fullIData(oldp+258,(4U),32);
    bufp->fullCData(oldp+259,(3U),2);
    bufp->fullIData(oldp+260,(0x80000000U),32);
    bufp->fullIData(oldp+261,(0U),32);
    bufp->fullBit(oldp+262,(0U));
    bufp->fullCData(oldp+263,(0U),8);
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__Inst_Mem__DOT__wvalid));
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullIData(oldp+266,(5U),32);
}
