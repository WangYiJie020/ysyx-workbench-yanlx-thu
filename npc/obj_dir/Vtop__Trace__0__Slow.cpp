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
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+1,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+2,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+128,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+129,"valid_wbu_to_ifu", false,-1);
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
    tracep->declBus(c+353,"raddr1", false,-1, 4,0);
    tracep->declBus(c+354,"raddr2", false,-1, 4,0);
    tracep->declBus(c+380,"rdata1", false,-1, 31,0);
    tracep->declBus(c+381,"rdata2", false,-1, 31,0);
    tracep->declBus(c+240,"a5", false,-1, 31,0);
    tracep->declBus(c+355,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+380,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+381,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+356,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+382,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+357,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+358,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+359,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+360,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+361,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+362,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+363,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+364,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+365,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+366,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+367,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+368,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+369,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+370,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+371,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+16,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+130,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+372,"csr_write", false,-1);
    tracep->declBus(c+373,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+241+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+131,"wdata", false,-1, 31,0);
    tracep->declBus(c+132,"waddr", false,-1, 4,0);
    tracep->declBit(c+133,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+245+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+134,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+135,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+136,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+137,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+138,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+139,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+140,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+141,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+142,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+143,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+144,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+145,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+146,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+147,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+148,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+149,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+150,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+151,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+152,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+153,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+154,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+155,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+156,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+157,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+158,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+159,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+160,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+161,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+162,"ready_lsu_to_wbu", false,-1);
    tracep->declBus(c+163,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+164,"lsu_arvalid", false,-1);
    tracep->declBit(c+165,"lsu_arready", false,-1);
    tracep->declBus(c+153,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+166,"lsu_rresp", false,-1);
    tracep->declBit(c+167,"lsu_rvalid", false,-1);
    tracep->declBit(c+17,"lsu_rready", false,-1);
    tracep->declBus(c+150,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+168,"lsu_awvalid", false,-1);
    tracep->declBit(c+169,"lsu_awready", false,-1);
    tracep->declBus(c+170,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+171,"lsu_wstrb", false,-1, 7,0);
    tracep->declBit(c+172,"lsu_wvalid", false,-1);
    tracep->declBit(c+173,"lsu_wready", false,-1);
    tracep->declBit(c+174,"lsu_bresp", false,-1);
    tracep->declBit(c+175,"lsu_bvalid", false,-1);
    tracep->declBit(c+176,"lsu_bready", false,-1);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+163,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+164,"arvalid_i", false,-1);
    tracep->declBit(c+165,"arready_o", false,-1);
    tracep->declBus(c+153,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+166,"rresp_o", false,-1);
    tracep->declBit(c+167,"rvalid_o", false,-1);
    tracep->declBit(c+17,"rready_i", false,-1);
    tracep->declBus(c+150,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+168,"awvalid_i", false,-1);
    tracep->declBit(c+169,"awready_o", false,-1);
    tracep->declBus(c+170,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+171,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+172,"wvalid_i", false,-1);
    tracep->declBit(c+173,"wready_o", false,-1);
    tracep->declBit(c+174,"bresp_o", false,-1);
    tracep->declBit(c+175,"bvalid_o", false,-1);
    tracep->declBit(c+176,"bready_i", false,-1);
    tracep->declBit(c+177,"ar_state", false,-1);
    tracep->declBit(c+178,"r_state", false,-1);
    tracep->declBit(c+179,"aw_state", false,-1);
    tracep->declBit(c+180,"w_state", false,-1);
    tracep->declBit(c+384,"b_state", false,-1);
    tracep->declBus(c+181,"araddr", false,-1, 31,0);
    tracep->declBus(c+182,"awaddr", false,-1, 31,0);
    tracep->declBus(c+183,"wdata", false,-1, 31,0);
    tracep->declBus(c+184,"wstrb", false,-1, 7,0);
    tracep->declBit(c+385,"wvalid", false,-1);
    tracep->declBit(c+185,"flag_waddr", false,-1);
    tracep->declBit(c+186,"flag_wdata", false,-1);
    tracep->declBit(c+187,"flag_rdata", false,-1);
    tracep->declBit(c+188,"flag_raddr", false,-1);
    tracep->declBit(c+189,"flag_write", false,-1);
    tracep->declBus(c+190,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+191,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+192,"w_delay", false,-1, 4,0);
    tracep->declBus(c+193,"r_delay", false,-1, 4,0);
    tracep->declBus(c+194,"LFSR", false,-1, 4,0);
    tracep->declBit(c+195,"lfsr_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+355,"pc_i", false,-1, 31,0);
    tracep->declBus(c+380,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+381,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+356,"imm_i", false,-1, 31,0);
    tracep->declBus(c+382,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+357,"a_in_src_i", false,-1);
    tracep->declBus(c+358,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+359,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+360,"adder_a_src_i", false,-1);
    tracep->declBit(c+361,"adder_out_src_i", false,-1);
    tracep->declBus(c+362,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+363,"MemRead_i", false,-1);
    tracep->declBit(c+364,"MemWrite_i", false,-1);
    tracep->declBus(c+365,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+366,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+367,"wb_src_i", false,-1);
    tracep->declBit(c+368,"csr_write_i", false,-1);
    tracep->declBit(c+369,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+370,"reg_write_i", false,-1);
    tracep->declBus(c+371,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+16,"exu_valid_i", false,-1);
    tracep->declBit(c+130,"exu_ready_o", false,-1);
    tracep->declBus(c+134,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+135,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+136,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+137,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+138,"npc_o", false,-1, 31,0);
    tracep->declBit(c+139,"MemRead_o", false,-1);
    tracep->declBit(c+140,"MemWrite_o", false,-1);
    tracep->declBus(c+141,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+142,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+143,"wb_src_o", false,-1);
    tracep->declBit(c+144,"csr_write_o", false,-1);
    tracep->declBit(c+145,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+146,"reg_write_o", false,-1);
    tracep->declBus(c+147,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+148,"exu_valid_o", false,-1);
    tracep->declBit(c+149,"exu_ready_i", false,-1);
    tracep->declBus(c+196,"pc", false,-1, 31,0);
    tracep->declBus(c+135,"rs1", false,-1, 31,0);
    tracep->declBus(c+136,"rs2", false,-1, 31,0);
    tracep->declBus(c+197,"imm", false,-1, 31,0);
    tracep->declBus(c+198,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+199,"a_in_src", false,-1);
    tracep->declBus(c+200,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+201,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+202,"adder_a_src", false,-1);
    tracep->declBit(c+203,"adder_out_src", false,-1);
    tracep->declBus(c+204,"alu_op", false,-1, 3,0);
    tracep->declBus(c+205,"a_in", false,-1, 31,0);
    tracep->declBus(c+206,"b_in", false,-1, 31,0);
    tracep->declBus(c+207,"a_out", false,-1, 31,0);
    tracep->declBus(c+208,"add_out", false,-1, 31,0);
    tracep->declBus(c+209,"pc_new", false,-1, 31,0);
    tracep->declBus(c+134,"alu_result", false,-1, 31,0);
    tracep->declBus(c+138,"npc", false,-1, 31,0);
    tracep->declBit(c+210,"zero", false,-1);
    tracep->declBus(c+386,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+387,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+388,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+211,"current_state", false,-1, 1,0);
    tracep->declBus(c+212,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+205,"a", false,-1, 31,0);
    tracep->declBus(c+206,"b", false,-1, 31,0);
    tracep->declBus(c+204,"op", false,-1, 3,0);
    tracep->declBus(c+134,"alu_result", false,-1, 31,0);
    tracep->declBit(c+210,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+389,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+135,"d0", false,-1, 31,0);
    tracep->declBus(c+196,"d1", false,-1, 31,0);
    tracep->declBit(c+199,"sel", false,-1);
    tracep->declBus(c+205,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+389,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+136,"d0", false,-1, 31,0);
    tracep->declBus(c+197,"d1", false,-1, 31,0);
    tracep->declBus(c+390,"d2", false,-1, 31,0);
    tracep->declBus(c+198,"d3", false,-1, 31,0);
    tracep->declBus(c+200,"sel", false,-1, 1,0);
    tracep->declBus(c+206,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+207,"a", false,-1, 31,0);
    tracep->declBus(c+197,"b", false,-1, 31,0);
    tracep->declBus(c+208,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+389,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+196,"d0", false,-1, 31,0);
    tracep->declBus(c+135,"d1", false,-1, 31,0);
    tracep->declBit(c+202,"sel", false,-1);
    tracep->declBus(c+207,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+389,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+208,"d0", false,-1, 31,0);
    tracep->declBus(c+198,"d1", false,-1, 31,0);
    tracep->declBit(c+203,"sel", false,-1);
    tracep->declBus(c+209,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+213,"pc4", false,-1, 31,0);
    tracep->declBus(c+209,"pc_new", false,-1, 31,0);
    tracep->declBus(c+201,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+210,"zero", false,-1);
    tracep->declBus(c+134,"alu_result", false,-1, 31,0);
    tracep->declBus(c+138,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+353,"raddr1", false,-1, 4,0);
    tracep->declBus(c+354,"raddr2", false,-1, 4,0);
    tracep->declBus(c+380,"rdata1", false,-1, 31,0);
    tracep->declBus(c+381,"rdata2", false,-1, 31,0);
    tracep->declBus(c+240,"a5", false,-1, 31,0);
    tracep->declBus(c+4,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBit(c+5,"idu_valid_i", false,-1);
    tracep->declBit(c+6,"idu_ready_o", false,-1);
    tracep->declBus(c+355,"pc_o", false,-1, 31,0);
    tracep->declBus(c+380,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+381,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+356,"imm_o", false,-1, 31,0);
    tracep->declBus(c+382,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+357,"a_in_src_o", false,-1);
    tracep->declBus(c+358,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+359,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+360,"adder_a_src_o", false,-1);
    tracep->declBit(c+361,"adder_out_src_o", false,-1);
    tracep->declBus(c+362,"alu_op", false,-1, 3,0);
    tracep->declBit(c+363,"MemRead_o", false,-1);
    tracep->declBit(c+364,"MemWrite_o", false,-1);
    tracep->declBus(c+365,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+366,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+367,"wb_src_o", false,-1);
    tracep->declBit(c+368,"csr_write_o", false,-1);
    tracep->declBit(c+369,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+370,"reg_write_o", false,-1);
    tracep->declBus(c+371,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+16,"idu_valid_o", false,-1);
    tracep->declBit(c+130,"idu_ready_i", false,-1);
    tracep->declBit(c+372,"csr_write_i", false,-1);
    tracep->declBus(c+373,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+277+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+355,"pc", false,-1, 31,0);
    tracep->declBus(c+374,"inst", false,-1, 31,0);
    tracep->declBus(c+386,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+387,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+388,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+18,"current_state", false,-1, 1,0);
    tracep->declBus(c+214,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+374,"inst", false,-1, 31,0);
    tracep->declBus(c+362,"alu_op", false,-1, 3,0);
    tracep->declBus(c+375,"opcode", false,-1, 6,0);
    tracep->declBus(c+376,"funct3", false,-1, 2,0);
    tracep->declBus(c+377,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+372,"wen", false,-1);
    tracep->declBus(c+374,"inst", false,-1, 31,0);
    tracep->declBus(c+373,"wdata", false,-1, 31,0);
    tracep->declBus(c+240,"NO", false,-1, 31,0);
    tracep->declBus(c+355,"pc", false,-1, 31,0);
    tracep->declBus(c+382,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+281+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+285,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+286,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+287,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+288,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+375,"opcode", false,-1, 6,0);
    tracep->declBus(c+376,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+374,"inst", false,-1, 31,0);
    tracep->declBit(c+357,"a_in_src", false,-1);
    tracep->declBus(c+358,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+370,"reg_write", false,-1);
    tracep->declBus(c+359,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+360,"adder_a_src", false,-1);
    tracep->declBit(c+363,"MemRead", false,-1);
    tracep->declBit(c+364,"MemWrite", false,-1);
    tracep->declBus(c+365,"wmask", false,-1, 7,0);
    tracep->declBit(c+367,"wb_src", false,-1);
    tracep->declBus(c+366,"rmask", false,-1, 2,0);
    tracep->declBit(c+368,"csr_write", false,-1);
    tracep->declBit(c+361,"adder_out_src", false,-1);
    tracep->declBit(c+369,"csr_wdata_src", false,-1);
    tracep->declBus(c+375,"opcode", false,-1, 6,0);
    tracep->declBus(c+376,"funct3", false,-1, 2,0);
    tracep->declBus(c+377,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+389,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+374,"inst", false,-1, 31,0);
    tracep->declBus(c+356,"data", false,-1, 31,0);
    tracep->declBus(c+375,"opcode", false,-1, 6,0);
    tracep->declBus(c+376,"funct3", false,-1, 2,0);
    tracep->declBus(c+377,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_o", false,-1);
    tracep->declBit(c+8,"arready_i", false,-1);
    tracep->declBus(c+2,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_i", false,-1);
    tracep->declBit(c+10,"rvalid_i", false,-1);
    tracep->declBit(c+11,"rready_o", false,-1);
    tracep->declBus(c+128,"npc_i", false,-1, 31,0);
    tracep->declBit(c+129,"ifu_valid_i", false,-1);
    tracep->declBit(c+3,"ifu_ready_o", false,-1);
    tracep->declBus(c+4,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBit(c+5,"ifu_valid_o", false,-1);
    tracep->declBit(c+6,"ifu_ready_i", false,-1);
    tracep->declBus(c+383,"pc", false,-1, 31,0);
    tracep->declBus(c+215,"npc", false,-1, 31,0);
    tracep->declBus(c+19,"LFSR", false,-1, 4,0);
    tracep->declBus(c+20,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+21,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+22,"lfsr_in", false,-1);
    tracep->declBit(c+23,"arvalid", false,-1);
    tracep->declBus(c+383,"araddr", false,-1, 31,0);
    tracep->declBit(c+24,"rready", false,-1);
    tracep->declBus(c+25,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+26+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+58,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+391,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+392,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+393,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+394,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+395,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+59,"current_state", false,-1, 2,0);
    tracep->declBus(c+216,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+389,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+396,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+215,"din", false,-1, 31,0);
    tracep->declBus(c+383,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+60,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+61,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+62,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+63,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+64,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_i", false,-1);
    tracep->declBit(c+8,"arready_o", false,-1);
    tracep->declBus(c+2,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_o", false,-1);
    tracep->declBit(c+10,"rvalid_o", false,-1);
    tracep->declBit(c+11,"rready_i", false,-1);
    tracep->declBus(c+397,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+398,"awvalid_i", false,-1);
    tracep->declBit(c+12,"awready_o", false,-1);
    tracep->declBus(c+397,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+399,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+398,"wvalid_i", false,-1);
    tracep->declBit(c+13,"wready_o", false,-1);
    tracep->declBit(c+14,"bresp_o", false,-1);
    tracep->declBit(c+15,"bvalid_o", false,-1);
    tracep->declBit(c+398,"bready_i", false,-1);
    tracep->declBit(c+65,"ar_state", false,-1);
    tracep->declBit(c+66,"r_state", false,-1);
    tracep->declBit(c+67,"aw_state", false,-1);
    tracep->declBit(c+68,"w_state", false,-1);
    tracep->declBit(c+400,"b_state", false,-1);
    tracep->declBus(c+69,"araddr", false,-1, 31,0);
    tracep->declBus(c+70,"awaddr", false,-1, 31,0);
    tracep->declBus(c+71,"wdata", false,-1, 31,0);
    tracep->declBus(c+72,"wstrb", false,-1, 7,0);
    tracep->declBit(c+401,"wvalid", false,-1);
    tracep->declBit(c+73,"flag_waddr", false,-1);
    tracep->declBit(c+74,"flag_wdata", false,-1);
    tracep->declBit(c+75,"flag_rdata", false,-1);
    tracep->declBit(c+76,"flag_raddr", false,-1);
    tracep->declBit(c+77,"flag_write", false,-1);
    tracep->declBus(c+78,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+79,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+80,"w_delay", false,-1, 4,0);
    tracep->declBus(c+81,"r_delay", false,-1, 4,0);
    tracep->declBus(c+82,"LFSR", false,-1, 4,0);
    tracep->declBit(c+83,"lfsr_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+134,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+135,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+136,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+137,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+138,"npc_i", false,-1, 31,0);
    tracep->declBit(c+139,"MemRead_i", false,-1);
    tracep->declBit(c+140,"MemWrite_i", false,-1);
    tracep->declBus(c+141,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+142,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+143,"wb_src_i", false,-1);
    tracep->declBit(c+144,"csr_write_i", false,-1);
    tracep->declBit(c+145,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+146,"reg_write_i", false,-1);
    tracep->declBus(c+147,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+148,"lsu_valid_i", false,-1);
    tracep->declBit(c+149,"lsu_ready_o", false,-1);
    tracep->declBus(c+150,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+151,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+152,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+153,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+154,"npc_o", false,-1, 31,0);
    tracep->declBus(c+155,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+156,"wb_src_o", false,-1);
    tracep->declBit(c+157,"csr_write_o", false,-1);
    tracep->declBit(c+158,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+159,"reg_write_o", false,-1);
    tracep->declBus(c+160,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+161,"lsu_valid_o", false,-1);
    tracep->declBit(c+162,"lsu_ready_i", false,-1);
    tracep->declBus(c+163,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+164,"arvalid_o", false,-1);
    tracep->declBit(c+165,"arready_i", false,-1);
    tracep->declBus(c+153,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+166,"rresp_i", false,-1);
    tracep->declBit(c+167,"rvalid_i", false,-1);
    tracep->declBit(c+17,"rready_o", false,-1);
    tracep->declBus(c+150,"awaddr_o", false,-1, 31,0);
    tracep->declBit(c+168,"awvalid_o", false,-1);
    tracep->declBit(c+169,"awready_i", false,-1);
    tracep->declBus(c+170,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+171,"wstrb_o", false,-1, 7,0);
    tracep->declBit(c+172,"wvalid_o", false,-1);
    tracep->declBit(c+173,"wready_i", false,-1);
    tracep->declBit(c+174,"bresp_i", false,-1);
    tracep->declBit(c+175,"bvalid_i", false,-1);
    tracep->declBit(c+176,"bready_o", false,-1);
    tracep->declBus(c+150,"alu_result", false,-1, 31,0);
    tracep->declBus(c+151,"rs1", false,-1, 31,0);
    tracep->declBus(c+402,"rs2", false,-1, 31,0);
    tracep->declBus(c+403,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+155,"rmask", false,-1, 2,0);
    tracep->declBit(c+84,"flag", false,-1);
    tracep->declBit(c+404,"wvalid_tmp", false,-1);
    tracep->declBus(c+85,"LFSR", false,-1, 4,0);
    tracep->declBus(c+86,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+87,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+88,"lfsr_in", false,-1);
    tracep->declBit(c+217,"arvalid", false,-1);
    tracep->declBus(c+405,"araddr", false,-1, 31,0);
    tracep->declBit(c+218,"rready", false,-1);
    tracep->declBus(c+89,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+90+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+122,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+386,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+387,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+388,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+406,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+219,"current_state", false,-1, 1,0);
    tracep->declBus(c+220,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+124,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+125,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+126,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+127,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+407,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+389,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBus(c+131,"wdata", false,-1, 31,0);
    tracep->declBus(c+132,"waddr", false,-1, 4,0);
    tracep->declBit(c+133,"wen", false,-1);
    tracep->declBus(c+353,"raddr1", false,-1, 4,0);
    tracep->declBus(c+380,"rdata1", false,-1, 31,0);
    tracep->declBus(c+354,"raddr2", false,-1, 4,0);
    tracep->declBus(c+381,"rdata2", false,-1, 31,0);
    tracep->declBus(c+240,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+289+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+321+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+378,"clk", false,-1);
    tracep->declBit(c+379,"rst_n", false,-1);
    tracep->declBus(c+150,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+151,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+152,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+153,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+154,"npc_i", false,-1, 31,0);
    tracep->declBus(c+155,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+156,"wb_src_i", false,-1);
    tracep->declBit(c+157,"csr_write_i", false,-1);
    tracep->declBit(c+158,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+159,"reg_write_i", false,-1);
    tracep->declBus(c+160,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+161,"wbu_valid_i", false,-1);
    tracep->declBit(c+162,"wbu_ready_o", false,-1);
    tracep->declBus(c+128,"npc_o", false,-1, 31,0);
    tracep->declBit(c+129,"wbu_valid_o", false,-1);
    tracep->declBit(c+3,"wbu_ready_i", false,-1);
    tracep->declBus(c+373,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+131,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+372,"csr_write_o", false,-1);
    tracep->declBit(c+133,"reg_write_o", false,-1);
    tracep->declBus(c+132,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+221,"mem_data", false,-1, 31,0);
    tracep->declBus(c+222,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+223,"alu_result", false,-1, 31,0);
    tracep->declBus(c+224,"rs1", false,-1, 31,0);
    tracep->declBus(c+225,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+226,"rmask", false,-1, 2,0);
    tracep->declBit(c+227,"wb_src", false,-1);
    tracep->declBit(c+228,"csr_wdata_src", false,-1);
    tracep->declBus(c+386,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+387,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+388,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+229,"current_state", false,-1, 1,0);
    tracep->declBus(c+230,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+389,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+224,"d0", false,-1, 31,0);
    tracep->declBus(c+225,"d1", false,-1, 31,0);
    tracep->declBit(c+228,"sel", false,-1);
    tracep->declBus(c+373,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+222,"read_data", false,-1, 31,0);
    tracep->declBus(c+231,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+226,"rmask", false,-1, 2,0);
    tracep->declBus(c+221,"mem_data", false,-1, 31,0);
    tracep->declBus(c+232,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+233,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+234,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+235,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+236,"byte3", false,-1, 31,0);
    tracep->declBus(c+237,"byte2", false,-1, 31,0);
    tracep->declBus(c+238,"byte1", false,-1, 31,0);
    tracep->declBus(c+239,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+389,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+223,"d0", false,-1, 31,0);
    tracep->declBus(c+221,"d1", false,-1, 31,0);
    tracep->declBit(c+227,"sel", false,-1);
    tracep->declBus(c+131,"out", false,-1, 31,0);
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
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__lsu_rready));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+22,((1U & VL_REDXOR_8(vlSelf->top__DOT__IFU__DOT__LFSR))));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__IFU__DOT__current_state),3);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__IFU__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__IFU__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__IFU__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__Inst_Mem__DOT__ar_state));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__Inst_Mem__DOT__r_state));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__Inst_Mem__DOT__aw_state));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__Inst_Mem__DOT__w_state));
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__Inst_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__Inst_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__Inst_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__Inst_Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__Inst_Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__Inst_Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__Inst_Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__Inst_Mem__DOT__flag_raddr));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__Inst_Mem__DOT__flag_write));
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__Inst_Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__Inst_Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__Inst_Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+83,((1U & VL_REDXOR_8(vlSelf->top__DOT__Inst_Mem__DOT__LFSR))));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__LSU__DOT__rready_delay),5);
    bufp->fullBit(oldp+88,((1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR))));
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__LSU__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__LSU__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__LSU__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__LSU__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__LSU__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+131,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                                ? vlSelf->top__DOT__WBU__DOT__mem_data
                                : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+137,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+138,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+144,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__lsu_rdata),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+159,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__lsu_araddr),32);
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__lsu_arvalid));
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__lsu_arready));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__lsu_rresp));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__lsu_rvalid));
    bufp->fullBit(oldp+168,(vlSelf->top__DOT__lsu_awvalid));
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__lsu_awready));
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+171,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->top__DOT__LSU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->top__DOT__LSU__DOT__alu_result))
                                             : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),8);
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__lsu_wvalid));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__lsu_wready));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__lsu_bresp));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__lsu_bvalid));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__lsu_bready));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__Data_Mem__DOT__ar_state));
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__Data_Mem__DOT__r_state));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__Data_Mem__DOT__aw_state));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__Data_Mem__DOT__w_state));
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__Data_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__Data_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Data_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+184,(vlSelf->top__DOT__Data_Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__Data_Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__Data_Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__Data_Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__Data_Mem__DOT__flag_raddr));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__Data_Mem__DOT__flag_write));
    bufp->fullCData(oldp+190,(vlSelf->top__DOT__Data_Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+191,(vlSelf->top__DOT__Data_Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__Data_Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__Data_Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+194,(vlSelf->top__DOT__Data_Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+195,((1U & VL_REDXOR_8(vlSelf->top__DOT__Data_Mem__DOT__LFSR))));
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+200,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+201,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+203,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+207,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+208,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->top__DOT__EXU__DOT__rs1
                                 : vlSelf->top__DOT__EXU__DOT__pc) 
                               + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+210,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+213,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__IFU__DOT__next_state),3);
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__LSU__DOT__rready));
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+227,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+230,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+231,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+232,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+233,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+234,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+235,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+236,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+237,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+238,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+239,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+334,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+336,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+337,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+339,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+340,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+345,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+346,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+349,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+352,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+353,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+354,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+358,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+359,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+362,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+363,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+365,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+366,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+367,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+368,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+369,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+371,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+372,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+374,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+375,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+376,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+377,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+378,(vlSelf->clk));
    bufp->fullBit(oldp+379,(vlSelf->rst_n));
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+381,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+382,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullIData(oldp+383,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullBit(oldp+384,(vlSelf->top__DOT__Data_Mem__DOT__b_state));
    bufp->fullBit(oldp+385,(vlSelf->top__DOT__Data_Mem__DOT__wvalid));
    bufp->fullCData(oldp+386,(0U),2);
    bufp->fullCData(oldp+387,(1U),2);
    bufp->fullCData(oldp+388,(2U),2);
    bufp->fullIData(oldp+389,(0x20U),32);
    bufp->fullIData(oldp+390,(4U),32);
    bufp->fullCData(oldp+391,(0U),3);
    bufp->fullCData(oldp+392,(1U),3);
    bufp->fullCData(oldp+393,(2U),3);
    bufp->fullCData(oldp+394,(3U),3);
    bufp->fullCData(oldp+395,(4U),3);
    bufp->fullIData(oldp+396,(0x80000000U),32);
    bufp->fullIData(oldp+397,(0U),32);
    bufp->fullBit(oldp+398,(0U));
    bufp->fullCData(oldp+399,(0U),8);
    bufp->fullBit(oldp+400,(vlSelf->top__DOT__Inst_Mem__DOT__b_state));
    bufp->fullBit(oldp+401,(vlSelf->top__DOT__Inst_Mem__DOT__wvalid));
    bufp->fullIData(oldp+402,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+403,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+404,(vlSelf->top__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullIData(oldp+405,(vlSelf->top__DOT__LSU__DOT__araddr),32);
    bufp->fullCData(oldp+406,(3U),2);
    bufp->fullIData(oldp+407,(5U),32);
}
