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
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+268,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+1,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+31,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+32,"valid_wbu_to_ifu", false,-1);
    tracep->declBit(c+2,"ready_wbu_to_ifu", false,-1);
    tracep->declBus(c+3,"pc_ifu_to_idu", false,-1, 31,0);
    tracep->declBus(c+1,"inst_ifu_to_idu", false,-1, 31,0);
    tracep->declBit(c+4,"valid_ifu_to_idu", false,-1);
    tracep->declBit(c+5,"ready_ifu_to_idu", false,-1);
    tracep->declBus(c+268,"ifu_araddr", false,-1, 31,0);
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
    tracep->declBus(c+241,"raddr1", false,-1, 4,0);
    tracep->declBus(c+242,"raddr2", false,-1, 4,0);
    tracep->declBus(c+269,"rdata1", false,-1, 31,0);
    tracep->declBus(c+270,"rdata2", false,-1, 31,0);
    tracep->declBus(c+128,"a5", false,-1, 31,0);
    tracep->declBus(c+243,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+269,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+270,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+244,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+271,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+245,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+246,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+247,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+248,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+249,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+250,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+251,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+252,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+253,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+254,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+255,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+256,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+257,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+258,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+259,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+15,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+33,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+260,"csr_write", false,-1);
    tracep->declBus(c+261,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+129+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+34,"wdata", false,-1, 31,0);
    tracep->declBus(c+35,"waddr", false,-1, 4,0);
    tracep->declBit(c+36,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+133+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+37,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+38,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+39,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+40,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+41,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+42,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+43,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+44,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+45,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+46,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+47,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+48,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+49,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+50,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+51,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+52,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+53,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+54,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+55,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+56,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+57,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+58,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+59,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+60,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+61,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+62,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+63,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+64,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+65,"ready_lsu_to_wbu", false,-1);
    tracep->declBus(c+53,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+66,"lsu_arvalid", false,-1);
    tracep->declBit(c+16,"lsu_arready", false,-1);
    tracep->declBus(c+56,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+67,"lsu_rresp", false,-1);
    tracep->declBit(c+68,"lsu_rvalid", false,-1);
    tracep->declBit(c+69,"lsu_rready", false,-1);
    tracep->declBus(c+53,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+70,"lsu_awvalid", false,-1);
    tracep->declBit(c+71,"lsu_awready", false,-1);
    tracep->declBus(c+72,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+73,"lsu_wstrb", false,-1, 7,0);
    tracep->declBit(c+74,"lsu_wvalid", false,-1);
    tracep->declBit(c+75,"lsu_wready", false,-1);
    tracep->declBit(c+76,"lsu_bresp", false,-1);
    tracep->declBit(c+77,"lsu_bvalid", false,-1);
    tracep->declBit(c+78,"lsu_bready", false,-1);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+53,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+66,"arvalid_i", false,-1);
    tracep->declBit(c+16,"arready_o", false,-1);
    tracep->declBus(c+56,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+67,"rresp_o", false,-1);
    tracep->declBit(c+68,"rvalid_o", false,-1);
    tracep->declBit(c+69,"rready_i", false,-1);
    tracep->declBus(c+53,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+70,"awvalid_i", false,-1);
    tracep->declBit(c+71,"awready_o", false,-1);
    tracep->declBus(c+72,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+73,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+74,"wvalid_i", false,-1);
    tracep->declBit(c+75,"wready_o", false,-1);
    tracep->declBit(c+76,"bresp_o", false,-1);
    tracep->declBit(c+77,"bvalid_o", false,-1);
    tracep->declBit(c+78,"bready_i", false,-1);
    tracep->declBit(c+17,"ar_state", false,-1);
    tracep->declBit(c+79,"r_state", false,-1);
    tracep->declBit(c+80,"aw_state", false,-1);
    tracep->declBit(c+81,"w_state", false,-1);
    tracep->declBit(c+18,"b_state", false,-1);
    tracep->declBus(c+82,"araddr", false,-1, 31,0);
    tracep->declBus(c+83,"awaddr", false,-1, 31,0);
    tracep->declBus(c+84,"wdata", false,-1, 31,0);
    tracep->declBus(c+85,"wstrb", false,-1, 7,0);
    tracep->declBit(c+272,"wvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+243,"pc_i", false,-1, 31,0);
    tracep->declBus(c+269,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+270,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+244,"imm_i", false,-1, 31,0);
    tracep->declBus(c+271,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+245,"a_in_src_i", false,-1);
    tracep->declBus(c+246,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+247,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+248,"adder_a_src_i", false,-1);
    tracep->declBit(c+249,"adder_out_src_i", false,-1);
    tracep->declBus(c+250,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+251,"MemRead_i", false,-1);
    tracep->declBit(c+252,"MemWrite_i", false,-1);
    tracep->declBus(c+253,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+254,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+255,"wb_src_i", false,-1);
    tracep->declBit(c+256,"csr_write_i", false,-1);
    tracep->declBit(c+257,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+258,"reg_write_i", false,-1);
    tracep->declBus(c+259,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+15,"exu_valid_i", false,-1);
    tracep->declBit(c+33,"exu_ready_o", false,-1);
    tracep->declBus(c+37,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+38,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+39,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+40,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+41,"npc_o", false,-1, 31,0);
    tracep->declBit(c+42,"MemRead_o", false,-1);
    tracep->declBit(c+43,"MemWrite_o", false,-1);
    tracep->declBus(c+44,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+45,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+46,"wb_src_o", false,-1);
    tracep->declBit(c+47,"csr_write_o", false,-1);
    tracep->declBit(c+48,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+49,"reg_write_o", false,-1);
    tracep->declBus(c+50,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+51,"exu_valid_o", false,-1);
    tracep->declBit(c+52,"exu_ready_i", false,-1);
    tracep->declBus(c+86,"pc", false,-1, 31,0);
    tracep->declBus(c+38,"rs1", false,-1, 31,0);
    tracep->declBus(c+39,"rs2", false,-1, 31,0);
    tracep->declBus(c+87,"imm", false,-1, 31,0);
    tracep->declBus(c+88,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+89,"a_in_src", false,-1);
    tracep->declBus(c+90,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+91,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+92,"adder_a_src", false,-1);
    tracep->declBit(c+93,"adder_out_src", false,-1);
    tracep->declBus(c+94,"alu_op", false,-1, 3,0);
    tracep->declBus(c+95,"a_in", false,-1, 31,0);
    tracep->declBus(c+96,"b_in", false,-1, 31,0);
    tracep->declBus(c+97,"a_out", false,-1, 31,0);
    tracep->declBus(c+98,"add_out", false,-1, 31,0);
    tracep->declBus(c+99,"pc_new", false,-1, 31,0);
    tracep->declBus(c+37,"alu_result", false,-1, 31,0);
    tracep->declBus(c+41,"npc", false,-1, 31,0);
    tracep->declBit(c+100,"zero", false,-1);
    tracep->declBus(c+273,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+274,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+275,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+101,"current_state", false,-1, 1,0);
    tracep->declBus(c+102,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+95,"a", false,-1, 31,0);
    tracep->declBus(c+96,"b", false,-1, 31,0);
    tracep->declBus(c+94,"op", false,-1, 3,0);
    tracep->declBus(c+37,"alu_result", false,-1, 31,0);
    tracep->declBit(c+100,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+276,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"d0", false,-1, 31,0);
    tracep->declBus(c+86,"d1", false,-1, 31,0);
    tracep->declBit(c+89,"sel", false,-1);
    tracep->declBus(c+95,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+276,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"d0", false,-1, 31,0);
    tracep->declBus(c+87,"d1", false,-1, 31,0);
    tracep->declBus(c+277,"d2", false,-1, 31,0);
    tracep->declBus(c+88,"d3", false,-1, 31,0);
    tracep->declBus(c+90,"sel", false,-1, 1,0);
    tracep->declBus(c+96,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+97,"a", false,-1, 31,0);
    tracep->declBus(c+87,"b", false,-1, 31,0);
    tracep->declBus(c+98,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+276,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"d0", false,-1, 31,0);
    tracep->declBus(c+38,"d1", false,-1, 31,0);
    tracep->declBit(c+92,"sel", false,-1);
    tracep->declBus(c+97,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+276,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"d0", false,-1, 31,0);
    tracep->declBus(c+88,"d1", false,-1, 31,0);
    tracep->declBit(c+93,"sel", false,-1);
    tracep->declBus(c+99,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+103,"pc4", false,-1, 31,0);
    tracep->declBus(c+99,"pc_new", false,-1, 31,0);
    tracep->declBus(c+91,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+100,"zero", false,-1);
    tracep->declBus(c+37,"alu_result", false,-1, 31,0);
    tracep->declBus(c+41,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+241,"raddr1", false,-1, 4,0);
    tracep->declBus(c+242,"raddr2", false,-1, 4,0);
    tracep->declBus(c+269,"rdata1", false,-1, 31,0);
    tracep->declBus(c+270,"rdata2", false,-1, 31,0);
    tracep->declBus(c+128,"a5", false,-1, 31,0);
    tracep->declBus(c+3,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_i", false,-1, 31,0);
    tracep->declBit(c+4,"idu_valid_i", false,-1);
    tracep->declBit(c+5,"idu_ready_o", false,-1);
    tracep->declBus(c+243,"pc_o", false,-1, 31,0);
    tracep->declBus(c+269,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+270,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+244,"imm_o", false,-1, 31,0);
    tracep->declBus(c+271,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+245,"a_in_src_o", false,-1);
    tracep->declBus(c+246,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+247,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+248,"adder_a_src_o", false,-1);
    tracep->declBit(c+249,"adder_out_src_o", false,-1);
    tracep->declBus(c+250,"alu_op", false,-1, 3,0);
    tracep->declBit(c+251,"MemRead_o", false,-1);
    tracep->declBit(c+252,"MemWrite_o", false,-1);
    tracep->declBus(c+253,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+254,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+255,"wb_src_o", false,-1);
    tracep->declBit(c+256,"csr_write_o", false,-1);
    tracep->declBit(c+257,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+258,"reg_write_o", false,-1);
    tracep->declBus(c+259,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+15,"idu_valid_o", false,-1);
    tracep->declBit(c+33,"idu_ready_i", false,-1);
    tracep->declBit(c+260,"csr_write_i", false,-1);
    tracep->declBus(c+261,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+165+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+243,"pc", false,-1, 31,0);
    tracep->declBus(c+262,"inst", false,-1, 31,0);
    tracep->declBus(c+273,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+274,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+275,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+19,"current_state", false,-1, 1,0);
    tracep->declBus(c+104,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+262,"inst", false,-1, 31,0);
    tracep->declBus(c+250,"alu_op", false,-1, 3,0);
    tracep->declBus(c+263,"opcode", false,-1, 6,0);
    tracep->declBus(c+264,"funct3", false,-1, 2,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+260,"wen", false,-1);
    tracep->declBus(c+262,"inst", false,-1, 31,0);
    tracep->declBus(c+261,"wdata", false,-1, 31,0);
    tracep->declBus(c+128,"NO", false,-1, 31,0);
    tracep->declBus(c+243,"pc", false,-1, 31,0);
    tracep->declBus(c+271,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+169+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+173,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+174,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+175,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+176,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+263,"opcode", false,-1, 6,0);
    tracep->declBus(c+264,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+262,"inst", false,-1, 31,0);
    tracep->declBit(c+245,"a_in_src", false,-1);
    tracep->declBus(c+246,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+258,"reg_write", false,-1);
    tracep->declBus(c+247,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+248,"adder_a_src", false,-1);
    tracep->declBit(c+251,"MemRead", false,-1);
    tracep->declBit(c+252,"MemWrite", false,-1);
    tracep->declBus(c+253,"wmask", false,-1, 7,0);
    tracep->declBit(c+255,"wb_src", false,-1);
    tracep->declBus(c+254,"rmask", false,-1, 2,0);
    tracep->declBit(c+256,"csr_write", false,-1);
    tracep->declBit(c+249,"adder_out_src", false,-1);
    tracep->declBit(c+257,"csr_wdata_src", false,-1);
    tracep->declBus(c+263,"opcode", false,-1, 6,0);
    tracep->declBus(c+264,"funct3", false,-1, 2,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+276,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+262,"inst", false,-1, 31,0);
    tracep->declBus(c+244,"data", false,-1, 31,0);
    tracep->declBus(c+263,"opcode", false,-1, 6,0);
    tracep->declBus(c+264,"funct3", false,-1, 2,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+268,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+6,"arvalid_o", false,-1);
    tracep->declBit(c+7,"arready_i", false,-1);
    tracep->declBus(c+1,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+8,"rresp_i", false,-1);
    tracep->declBit(c+9,"rvalid_i", false,-1);
    tracep->declBit(c+10,"rready_o", false,-1);
    tracep->declBus(c+31,"npc_i", false,-1, 31,0);
    tracep->declBit(c+32,"ifu_valid_i", false,-1);
    tracep->declBit(c+2,"ifu_ready_o", false,-1);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"inst_o", false,-1, 31,0);
    tracep->declBit(c+4,"ifu_valid_o", false,-1);
    tracep->declBit(c+5,"ifu_ready_i", false,-1);
    tracep->declBus(c+268,"pc", false,-1, 31,0);
    tracep->declBus(c+105,"npc", false,-1, 31,0);
    tracep->declBus(c+278,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+280,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+281,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+282,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+20,"current_state", false,-1, 2,0);
    tracep->declBus(c+106,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+276,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+283,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+105,"din", false,-1, 31,0);
    tracep->declBus(c+268,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+268,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+6,"arvalid_i", false,-1);
    tracep->declBit(c+7,"arready_o", false,-1);
    tracep->declBus(c+1,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+8,"rresp_o", false,-1);
    tracep->declBit(c+9,"rvalid_o", false,-1);
    tracep->declBit(c+10,"rready_i", false,-1);
    tracep->declBus(c+284,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+285,"awvalid_i", false,-1);
    tracep->declBit(c+11,"awready_o", false,-1);
    tracep->declBus(c+284,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+286,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+285,"wvalid_i", false,-1);
    tracep->declBit(c+12,"wready_o", false,-1);
    tracep->declBit(c+13,"bresp_o", false,-1);
    tracep->declBit(c+14,"bvalid_o", false,-1);
    tracep->declBit(c+285,"bready_i", false,-1);
    tracep->declBit(c+21,"ar_state", false,-1);
    tracep->declBit(c+22,"r_state", false,-1);
    tracep->declBit(c+23,"aw_state", false,-1);
    tracep->declBit(c+24,"w_state", false,-1);
    tracep->declBit(c+25,"b_state", false,-1);
    tracep->declBus(c+26,"araddr", false,-1, 31,0);
    tracep->declBus(c+27,"awaddr", false,-1, 31,0);
    tracep->declBus(c+28,"wdata", false,-1, 31,0);
    tracep->declBus(c+29,"wstrb", false,-1, 7,0);
    tracep->declBit(c+287,"wvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+37,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+38,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+39,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+40,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+41,"npc_i", false,-1, 31,0);
    tracep->declBit(c+42,"MemRead_i", false,-1);
    tracep->declBit(c+43,"MemWrite_i", false,-1);
    tracep->declBus(c+44,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+45,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+46,"wb_src_i", false,-1);
    tracep->declBit(c+47,"csr_write_i", false,-1);
    tracep->declBit(c+48,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+49,"reg_write_i", false,-1);
    tracep->declBus(c+50,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+51,"lsu_valid_i", false,-1);
    tracep->declBit(c+52,"lsu_ready_o", false,-1);
    tracep->declBus(c+53,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+54,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+55,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+56,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+57,"npc_o", false,-1, 31,0);
    tracep->declBus(c+58,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+59,"wb_src_o", false,-1);
    tracep->declBit(c+60,"csr_write_o", false,-1);
    tracep->declBit(c+61,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+62,"reg_write_o", false,-1);
    tracep->declBus(c+63,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+64,"lsu_valid_o", false,-1);
    tracep->declBit(c+65,"lsu_ready_i", false,-1);
    tracep->declBus(c+53,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+66,"arvalid_o", false,-1);
    tracep->declBit(c+16,"arready_i", false,-1);
    tracep->declBus(c+56,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+67,"rresp_i", false,-1);
    tracep->declBit(c+68,"rvalid_i", false,-1);
    tracep->declBit(c+69,"rready_o", false,-1);
    tracep->declBus(c+53,"awaddr_o", false,-1, 31,0);
    tracep->declBit(c+70,"awvalid_o", false,-1);
    tracep->declBit(c+71,"awready_i", false,-1);
    tracep->declBus(c+72,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+73,"wstrb_o", false,-1, 7,0);
    tracep->declBit(c+74,"wvalid_o", false,-1);
    tracep->declBit(c+75,"wready_i", false,-1);
    tracep->declBit(c+76,"bresp_i", false,-1);
    tracep->declBit(c+77,"bvalid_i", false,-1);
    tracep->declBit(c+78,"bready_o", false,-1);
    tracep->declBus(c+53,"alu_result", false,-1, 31,0);
    tracep->declBus(c+54,"rs1", false,-1, 31,0);
    tracep->declBus(c+288,"rs2", false,-1, 31,0);
    tracep->declBus(c+289,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+58,"rmask", false,-1, 2,0);
    tracep->declBit(c+30,"flag", false,-1);
    tracep->declBus(c+273,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+274,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+275,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+290,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+107,"current_state", false,-1, 1,0);
    tracep->declBus(c+108,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+291,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+276,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBus(c+34,"wdata", false,-1, 31,0);
    tracep->declBus(c+35,"waddr", false,-1, 4,0);
    tracep->declBit(c+36,"wen", false,-1);
    tracep->declBus(c+241,"raddr1", false,-1, 4,0);
    tracep->declBus(c+269,"rdata1", false,-1, 31,0);
    tracep->declBus(c+242,"raddr2", false,-1, 4,0);
    tracep->declBus(c+270,"rdata2", false,-1, 31,0);
    tracep->declBus(c+128,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+177+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+209+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst_n", false,-1);
    tracep->declBus(c+53,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+54,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+55,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+56,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+57,"npc_i", false,-1, 31,0);
    tracep->declBus(c+58,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+59,"wb_src_i", false,-1);
    tracep->declBit(c+60,"csr_write_i", false,-1);
    tracep->declBit(c+61,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+62,"reg_write_i", false,-1);
    tracep->declBus(c+63,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+64,"wbu_valid_i", false,-1);
    tracep->declBit(c+65,"wbu_ready_o", false,-1);
    tracep->declBus(c+31,"npc_o", false,-1, 31,0);
    tracep->declBit(c+32,"wbu_valid_o", false,-1);
    tracep->declBit(c+2,"wbu_ready_i", false,-1);
    tracep->declBus(c+261,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+34,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+260,"csr_write_o", false,-1);
    tracep->declBit(c+36,"reg_write_o", false,-1);
    tracep->declBus(c+35,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+109,"mem_data", false,-1, 31,0);
    tracep->declBus(c+110,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+111,"alu_result", false,-1, 31,0);
    tracep->declBus(c+112,"rs1", false,-1, 31,0);
    tracep->declBus(c+113,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+114,"rmask", false,-1, 2,0);
    tracep->declBit(c+115,"wb_src", false,-1);
    tracep->declBit(c+116,"csr_wdata_src", false,-1);
    tracep->declBus(c+273,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+274,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+275,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+117,"current_state", false,-1, 1,0);
    tracep->declBus(c+118,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+276,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+112,"d0", false,-1, 31,0);
    tracep->declBus(c+113,"d1", false,-1, 31,0);
    tracep->declBit(c+116,"sel", false,-1);
    tracep->declBus(c+261,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+110,"read_data", false,-1, 31,0);
    tracep->declBus(c+119,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+114,"rmask", false,-1, 2,0);
    tracep->declBus(c+109,"mem_data", false,-1, 31,0);
    tracep->declBus(c+120,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+121,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+122,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+123,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+124,"byte3", false,-1, 31,0);
    tracep->declBus(c+125,"byte2", false,-1, 31,0);
    tracep->declBus(c+126,"byte1", false,-1, 31,0);
    tracep->declBus(c+127,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+276,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+111,"d0", false,-1, 31,0);
    tracep->declBus(c+109,"d1", false,-1, 31,0);
    tracep->declBit(c+115,"sel", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__ready_wbu_to_ifu));
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pc_ifu_to_idu),32);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__valid_ifu_to_idu));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__ready_ifu_to_idu));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ifu_arvalid));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ifu_arready));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ifu_rresp));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ifu_rvalid));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__ifu_rready));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__useless1));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__useless2));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__useless3));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__useless4));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__lsu_arready));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__Data_Mem__DOT__ar_state));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__Data_Mem__DOT__b_state));
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__IFU__DOT__current_state),3);
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__Inst_Mem__DOT__ar_state));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__Inst_Mem__DOT__r_state));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__Inst_Mem__DOT__aw_state));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__Inst_Mem__DOT__w_state));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__Inst_Mem__DOT__b_state));
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__Inst_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__Inst_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__Inst_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__Inst_Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+34,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                               ? vlSelf->top__DOT__WBU__DOT__mem_data
                               : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+40,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                              | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+41,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__lsu_rdata),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__lsu_arvalid));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__lsu_rresp));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__lsu_rvalid));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__lsu_rready));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__lsu_awvalid));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__lsu_awready));
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+73,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                        ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                           << (3U & vlSelf->top__DOT__LSU__DOT__alu_result))
                                        : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                            ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                               << (3U 
                                                   & vlSelf->top__DOT__LSU__DOT__alu_result))
                                            : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),8);
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__lsu_wvalid));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__lsu_wready));
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__lsu_bresp));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__lsu_bvalid));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__lsu_bready));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__Data_Mem__DOT__r_state));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__Data_Mem__DOT__aw_state));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__Data_Mem__DOT__w_state));
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__Data_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__Data_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__Data_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__Data_Mem__DOT__wstrb),8);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+97,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                               ? vlSelf->top__DOT__EXU__DOT__rs1
                               : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+98,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc) 
                              + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+100,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+103,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+119,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+120,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+121,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+122,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+123,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+124,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+125,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+126,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+127,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+241,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+242,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+246,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+247,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+248,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+250,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+251,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+252,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+253,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+254,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+255,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+258,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+259,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+260,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+263,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+264,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+265,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+266,(vlSelf->clk));
    bufp->fullBit(oldp+267,(vlSelf->rst_n));
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+271,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__Data_Mem__DOT__wvalid));
    bufp->fullCData(oldp+273,(0U),2);
    bufp->fullCData(oldp+274,(1U),2);
    bufp->fullCData(oldp+275,(2U),2);
    bufp->fullIData(oldp+276,(0x20U),32);
    bufp->fullIData(oldp+277,(4U),32);
    bufp->fullCData(oldp+278,(0U),3);
    bufp->fullCData(oldp+279,(1U),3);
    bufp->fullCData(oldp+280,(2U),3);
    bufp->fullCData(oldp+281,(3U),3);
    bufp->fullCData(oldp+282,(4U),3);
    bufp->fullIData(oldp+283,(0x80000000U),32);
    bufp->fullIData(oldp+284,(0U),32);
    bufp->fullBit(oldp+285,(0U));
    bufp->fullCData(oldp+286,(0U),8);
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__Inst_Mem__DOT__wvalid));
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+290,(3U),2);
    bufp->fullIData(oldp+291,(5U),32);
}
