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
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+1,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+2,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+81,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+82,"valid_wbu_to_ifu", false,-1);
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
    tracep->declBus(c+304,"raddr1", false,-1, 4,0);
    tracep->declBus(c+305,"raddr2", false,-1, 4,0);
    tracep->declBus(c+331,"rdata1", false,-1, 31,0);
    tracep->declBus(c+332,"rdata2", false,-1, 31,0);
    tracep->declBus(c+191,"a5", false,-1, 31,0);
    tracep->declBus(c+306,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+331,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+332,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+307,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+333,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+308,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+309,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+310,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+311,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+312,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+313,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+314,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+315,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+316,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+317,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+318,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+319,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+320,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+321,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+322,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+16,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+83,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+323,"csr_write", false,-1);
    tracep->declBus(c+324,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+192+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+84,"wdata", false,-1, 31,0);
    tracep->declBus(c+85,"waddr", false,-1, 4,0);
    tracep->declBit(c+86,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+196+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+87,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+88,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+90,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+91,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+92,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+93,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+94,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+95,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+96,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+97,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+98,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+99,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+100,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+101,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+102,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+103,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+104,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+105,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+106,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+107,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+108,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+109,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+110,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+111,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+112,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+113,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+114,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+115,"ready_lsu_to_wbu", false,-1);
    tracep->declBus(c+103,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+116,"lsu_arvalid", false,-1);
    tracep->declBit(c+117,"lsu_arready", false,-1);
    tracep->declBus(c+106,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+118,"lsu_rresp", false,-1);
    tracep->declBit(c+119,"lsu_rvalid", false,-1);
    tracep->declBit(c+120,"lsu_rready", false,-1);
    tracep->declBus(c+103,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+121,"lsu_awvalid", false,-1);
    tracep->declBit(c+122,"lsu_awready", false,-1);
    tracep->declBus(c+123,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+124,"lsu_wstrb", false,-1, 7,0);
    tracep->declBit(c+125,"lsu_wvalid", false,-1);
    tracep->declBit(c+126,"lsu_wready", false,-1);
    tracep->declBit(c+127,"lsu_bresp", false,-1);
    tracep->declBit(c+128,"lsu_bvalid", false,-1);
    tracep->declBit(c+129,"lsu_bready", false,-1);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+103,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+116,"arvalid_i", false,-1);
    tracep->declBit(c+117,"arready_o", false,-1);
    tracep->declBus(c+106,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+118,"rresp_o", false,-1);
    tracep->declBit(c+119,"rvalid_o", false,-1);
    tracep->declBit(c+120,"rready_i", false,-1);
    tracep->declBus(c+103,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+121,"awvalid_i", false,-1);
    tracep->declBit(c+122,"awready_o", false,-1);
    tracep->declBus(c+123,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+124,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+125,"wvalid_i", false,-1);
    tracep->declBit(c+126,"wready_o", false,-1);
    tracep->declBit(c+127,"bresp_o", false,-1);
    tracep->declBit(c+128,"bvalid_o", false,-1);
    tracep->declBit(c+129,"bready_i", false,-1);
    tracep->declBit(c+130,"ar_state", false,-1);
    tracep->declBit(c+131,"r_state", false,-1);
    tracep->declBit(c+132,"aw_state", false,-1);
    tracep->declBit(c+133,"w_state", false,-1);
    tracep->declBit(c+335,"b_state", false,-1);
    tracep->declBus(c+134,"araddr", false,-1, 31,0);
    tracep->declBus(c+135,"awaddr", false,-1, 31,0);
    tracep->declBus(c+136,"wdata", false,-1, 31,0);
    tracep->declBus(c+137,"wstrb", false,-1, 7,0);
    tracep->declBit(c+336,"wvalid", false,-1);
    tracep->declBit(c+138,"flag_waddr", false,-1);
    tracep->declBit(c+139,"flag_wdata", false,-1);
    tracep->declBit(c+140,"flag_rdata", false,-1);
    tracep->declBit(c+141,"flag_raddr", false,-1);
    tracep->declBit(c+142,"flag_write", false,-1);
    tracep->declBus(c+143,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+144,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+145,"w_delay", false,-1, 4,0);
    tracep->declBus(c+146,"r_delay", false,-1, 4,0);
    tracep->declBus(c+147,"LFSR", false,-1, 4,0);
    tracep->declBit(c+148,"lfsr_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+306,"pc_i", false,-1, 31,0);
    tracep->declBus(c+331,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+332,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+307,"imm_i", false,-1, 31,0);
    tracep->declBus(c+333,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+308,"a_in_src_i", false,-1);
    tracep->declBus(c+309,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+310,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+311,"adder_a_src_i", false,-1);
    tracep->declBit(c+312,"adder_out_src_i", false,-1);
    tracep->declBus(c+313,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+314,"MemRead_i", false,-1);
    tracep->declBit(c+315,"MemWrite_i", false,-1);
    tracep->declBus(c+316,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+317,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+318,"wb_src_i", false,-1);
    tracep->declBit(c+319,"csr_write_i", false,-1);
    tracep->declBit(c+320,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+321,"reg_write_i", false,-1);
    tracep->declBus(c+322,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+16,"exu_valid_i", false,-1);
    tracep->declBit(c+83,"exu_ready_o", false,-1);
    tracep->declBus(c+87,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+88,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+90,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+91,"npc_o", false,-1, 31,0);
    tracep->declBit(c+92,"MemRead_o", false,-1);
    tracep->declBit(c+93,"MemWrite_o", false,-1);
    tracep->declBus(c+94,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+95,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+96,"wb_src_o", false,-1);
    tracep->declBit(c+97,"csr_write_o", false,-1);
    tracep->declBit(c+98,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+99,"reg_write_o", false,-1);
    tracep->declBus(c+100,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+101,"exu_valid_o", false,-1);
    tracep->declBit(c+102,"exu_ready_i", false,-1);
    tracep->declBus(c+149,"pc", false,-1, 31,0);
    tracep->declBus(c+88,"rs1", false,-1, 31,0);
    tracep->declBus(c+89,"rs2", false,-1, 31,0);
    tracep->declBus(c+150,"imm", false,-1, 31,0);
    tracep->declBus(c+151,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+152,"a_in_src", false,-1);
    tracep->declBus(c+153,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+154,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+155,"adder_a_src", false,-1);
    tracep->declBit(c+156,"adder_out_src", false,-1);
    tracep->declBus(c+157,"alu_op", false,-1, 3,0);
    tracep->declBus(c+158,"a_in", false,-1, 31,0);
    tracep->declBus(c+159,"b_in", false,-1, 31,0);
    tracep->declBus(c+160,"a_out", false,-1, 31,0);
    tracep->declBus(c+161,"add_out", false,-1, 31,0);
    tracep->declBus(c+162,"pc_new", false,-1, 31,0);
    tracep->declBus(c+87,"alu_result", false,-1, 31,0);
    tracep->declBus(c+91,"npc", false,-1, 31,0);
    tracep->declBit(c+163,"zero", false,-1);
    tracep->declBus(c+337,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+338,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+339,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+164,"current_state", false,-1, 1,0);
    tracep->declBus(c+165,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+158,"a", false,-1, 31,0);
    tracep->declBus(c+159,"b", false,-1, 31,0);
    tracep->declBus(c+157,"op", false,-1, 3,0);
    tracep->declBus(c+87,"alu_result", false,-1, 31,0);
    tracep->declBit(c+163,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+340,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+88,"d0", false,-1, 31,0);
    tracep->declBus(c+149,"d1", false,-1, 31,0);
    tracep->declBit(c+152,"sel", false,-1);
    tracep->declBus(c+158,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+340,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+89,"d0", false,-1, 31,0);
    tracep->declBus(c+150,"d1", false,-1, 31,0);
    tracep->declBus(c+341,"d2", false,-1, 31,0);
    tracep->declBus(c+151,"d3", false,-1, 31,0);
    tracep->declBus(c+153,"sel", false,-1, 1,0);
    tracep->declBus(c+159,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+160,"a", false,-1, 31,0);
    tracep->declBus(c+150,"b", false,-1, 31,0);
    tracep->declBus(c+161,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+340,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"d0", false,-1, 31,0);
    tracep->declBus(c+88,"d1", false,-1, 31,0);
    tracep->declBit(c+155,"sel", false,-1);
    tracep->declBus(c+160,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+340,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+161,"d0", false,-1, 31,0);
    tracep->declBus(c+151,"d1", false,-1, 31,0);
    tracep->declBit(c+156,"sel", false,-1);
    tracep->declBus(c+162,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+166,"pc4", false,-1, 31,0);
    tracep->declBus(c+162,"pc_new", false,-1, 31,0);
    tracep->declBus(c+154,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+163,"zero", false,-1);
    tracep->declBus(c+87,"alu_result", false,-1, 31,0);
    tracep->declBus(c+91,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+304,"raddr1", false,-1, 4,0);
    tracep->declBus(c+305,"raddr2", false,-1, 4,0);
    tracep->declBus(c+331,"rdata1", false,-1, 31,0);
    tracep->declBus(c+332,"rdata2", false,-1, 31,0);
    tracep->declBus(c+191,"a5", false,-1, 31,0);
    tracep->declBus(c+4,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBit(c+5,"idu_valid_i", false,-1);
    tracep->declBit(c+6,"idu_ready_o", false,-1);
    tracep->declBus(c+306,"pc_o", false,-1, 31,0);
    tracep->declBus(c+331,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+332,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+307,"imm_o", false,-1, 31,0);
    tracep->declBus(c+333,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+308,"a_in_src_o", false,-1);
    tracep->declBus(c+309,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+310,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+311,"adder_a_src_o", false,-1);
    tracep->declBit(c+312,"adder_out_src_o", false,-1);
    tracep->declBus(c+313,"alu_op", false,-1, 3,0);
    tracep->declBit(c+314,"MemRead_o", false,-1);
    tracep->declBit(c+315,"MemWrite_o", false,-1);
    tracep->declBus(c+316,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+317,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+318,"wb_src_o", false,-1);
    tracep->declBit(c+319,"csr_write_o", false,-1);
    tracep->declBit(c+320,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+321,"reg_write_o", false,-1);
    tracep->declBus(c+322,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+16,"idu_valid_o", false,-1);
    tracep->declBit(c+83,"idu_ready_i", false,-1);
    tracep->declBit(c+323,"csr_write_i", false,-1);
    tracep->declBus(c+324,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+228+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+306,"pc", false,-1, 31,0);
    tracep->declBus(c+325,"inst", false,-1, 31,0);
    tracep->declBus(c+337,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+338,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+339,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+17,"current_state", false,-1, 1,0);
    tracep->declBus(c+167,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+325,"inst", false,-1, 31,0);
    tracep->declBus(c+313,"alu_op", false,-1, 3,0);
    tracep->declBus(c+326,"opcode", false,-1, 6,0);
    tracep->declBus(c+327,"funct3", false,-1, 2,0);
    tracep->declBus(c+328,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->declBus(c+325,"inst", false,-1, 31,0);
    tracep->declBus(c+324,"wdata", false,-1, 31,0);
    tracep->declBus(c+191,"NO", false,-1, 31,0);
    tracep->declBus(c+306,"pc", false,-1, 31,0);
    tracep->declBus(c+333,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+232+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+236,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+237,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+238,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+239,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+326,"opcode", false,-1, 6,0);
    tracep->declBus(c+327,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+325,"inst", false,-1, 31,0);
    tracep->declBit(c+308,"a_in_src", false,-1);
    tracep->declBus(c+309,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+321,"reg_write", false,-1);
    tracep->declBus(c+310,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+311,"adder_a_src", false,-1);
    tracep->declBit(c+314,"MemRead", false,-1);
    tracep->declBit(c+315,"MemWrite", false,-1);
    tracep->declBus(c+316,"wmask", false,-1, 7,0);
    tracep->declBit(c+318,"wb_src", false,-1);
    tracep->declBus(c+317,"rmask", false,-1, 2,0);
    tracep->declBit(c+319,"csr_write", false,-1);
    tracep->declBit(c+312,"adder_out_src", false,-1);
    tracep->declBit(c+320,"csr_wdata_src", false,-1);
    tracep->declBus(c+326,"opcode", false,-1, 6,0);
    tracep->declBus(c+327,"funct3", false,-1, 2,0);
    tracep->declBus(c+328,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+340,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+325,"inst", false,-1, 31,0);
    tracep->declBus(c+307,"data", false,-1, 31,0);
    tracep->declBus(c+326,"opcode", false,-1, 6,0);
    tracep->declBus(c+327,"funct3", false,-1, 2,0);
    tracep->declBus(c+328,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_o", false,-1);
    tracep->declBit(c+8,"arready_i", false,-1);
    tracep->declBus(c+2,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_i", false,-1);
    tracep->declBit(c+10,"rvalid_i", false,-1);
    tracep->declBit(c+11,"rready_o", false,-1);
    tracep->declBus(c+81,"npc_i", false,-1, 31,0);
    tracep->declBit(c+82,"ifu_valid_i", false,-1);
    tracep->declBit(c+3,"ifu_ready_o", false,-1);
    tracep->declBus(c+4,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBit(c+5,"ifu_valid_o", false,-1);
    tracep->declBit(c+6,"ifu_ready_i", false,-1);
    tracep->declBus(c+334,"pc", false,-1, 31,0);
    tracep->declBus(c+168,"npc", false,-1, 31,0);
    tracep->declBus(c+18,"LFSR", false,-1, 4,0);
    tracep->declBus(c+19,"arvalid_delay", false,-1, 4,0);
    tracep->declBit(c+20,"lfsr_in", false,-1);
    tracep->declBit(c+21,"arvalid", false,-1);
    tracep->declBus(c+334,"araddr", false,-1, 31,0);
    tracep->declBus(c+22,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+23+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+342,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+343,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+344,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+345,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+346,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+55,"current_state", false,-1, 2,0);
    tracep->declBus(c+169,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+340,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+347,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+168,"din", false,-1, 31,0);
    tracep->declBus(c+334,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+56,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+57,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+58,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Inst_Mem ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_i", false,-1);
    tracep->declBit(c+8,"arready_o", false,-1);
    tracep->declBus(c+2,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_o", false,-1);
    tracep->declBit(c+10,"rvalid_o", false,-1);
    tracep->declBit(c+11,"rready_i", false,-1);
    tracep->declBus(c+348,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+349,"awvalid_i", false,-1);
    tracep->declBit(c+12,"awready_o", false,-1);
    tracep->declBus(c+348,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+350,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+349,"wvalid_i", false,-1);
    tracep->declBit(c+13,"wready_o", false,-1);
    tracep->declBit(c+14,"bresp_o", false,-1);
    tracep->declBit(c+15,"bvalid_o", false,-1);
    tracep->declBit(c+349,"bready_i", false,-1);
    tracep->declBit(c+59,"ar_state", false,-1);
    tracep->declBit(c+60,"r_state", false,-1);
    tracep->declBit(c+61,"aw_state", false,-1);
    tracep->declBit(c+62,"w_state", false,-1);
    tracep->declBit(c+351,"b_state", false,-1);
    tracep->declBus(c+63,"araddr", false,-1, 31,0);
    tracep->declBus(c+64,"awaddr", false,-1, 31,0);
    tracep->declBus(c+65,"wdata", false,-1, 31,0);
    tracep->declBus(c+66,"wstrb", false,-1, 7,0);
    tracep->declBit(c+352,"wvalid", false,-1);
    tracep->declBit(c+67,"flag_waddr", false,-1);
    tracep->declBit(c+68,"flag_wdata", false,-1);
    tracep->declBit(c+69,"flag_rdata", false,-1);
    tracep->declBit(c+70,"flag_raddr", false,-1);
    tracep->declBit(c+71,"flag_write", false,-1);
    tracep->declBus(c+72,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+73,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+74,"w_delay", false,-1, 4,0);
    tracep->declBus(c+75,"r_delay", false,-1, 4,0);
    tracep->declBus(c+76,"LFSR", false,-1, 4,0);
    tracep->declBit(c+77,"lfsr_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+87,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+88,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+90,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+91,"npc_i", false,-1, 31,0);
    tracep->declBit(c+92,"MemRead_i", false,-1);
    tracep->declBit(c+93,"MemWrite_i", false,-1);
    tracep->declBus(c+94,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+95,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+96,"wb_src_i", false,-1);
    tracep->declBit(c+97,"csr_write_i", false,-1);
    tracep->declBit(c+98,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+99,"reg_write_i", false,-1);
    tracep->declBus(c+100,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+101,"lsu_valid_i", false,-1);
    tracep->declBit(c+102,"lsu_ready_o", false,-1);
    tracep->declBus(c+103,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+104,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+105,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+106,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+107,"npc_o", false,-1, 31,0);
    tracep->declBus(c+108,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+109,"wb_src_o", false,-1);
    tracep->declBit(c+110,"csr_write_o", false,-1);
    tracep->declBit(c+111,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+112,"reg_write_o", false,-1);
    tracep->declBus(c+113,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+114,"lsu_valid_o", false,-1);
    tracep->declBit(c+115,"lsu_ready_i", false,-1);
    tracep->declBus(c+103,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+116,"arvalid_o", false,-1);
    tracep->declBit(c+117,"arready_i", false,-1);
    tracep->declBus(c+106,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+118,"rresp_i", false,-1);
    tracep->declBit(c+119,"rvalid_i", false,-1);
    tracep->declBit(c+120,"rready_o", false,-1);
    tracep->declBus(c+103,"awaddr_o", false,-1, 31,0);
    tracep->declBit(c+121,"awvalid_o", false,-1);
    tracep->declBit(c+122,"awready_i", false,-1);
    tracep->declBus(c+123,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+124,"wstrb_o", false,-1, 7,0);
    tracep->declBit(c+125,"wvalid_o", false,-1);
    tracep->declBit(c+126,"wready_i", false,-1);
    tracep->declBit(c+127,"bresp_i", false,-1);
    tracep->declBit(c+128,"bvalid_i", false,-1);
    tracep->declBit(c+129,"bready_o", false,-1);
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBus(c+104,"rs1", false,-1, 31,0);
    tracep->declBus(c+353,"rs2", false,-1, 31,0);
    tracep->declBus(c+354,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+108,"rmask", false,-1, 2,0);
    tracep->declBit(c+78,"flag", false,-1);
    tracep->declBit(c+355,"wvalid_tmp", false,-1);
    tracep->declBus(c+79,"LFSR", false,-1, 4,0);
    tracep->declBit(c+80,"lfsr_in", false,-1);
    tracep->declBus(c+337,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+338,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+339,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+356,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+170,"current_state", false,-1, 1,0);
    tracep->declBus(c+171,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+357,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+340,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBus(c+84,"wdata", false,-1, 31,0);
    tracep->declBus(c+85,"waddr", false,-1, 4,0);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->declBus(c+304,"raddr1", false,-1, 4,0);
    tracep->declBus(c+331,"rdata1", false,-1, 31,0);
    tracep->declBus(c+305,"raddr2", false,-1, 4,0);
    tracep->declBus(c+332,"rdata2", false,-1, 31,0);
    tracep->declBus(c+191,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+240+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+272+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+329,"clk", false,-1);
    tracep->declBit(c+330,"rst_n", false,-1);
    tracep->declBus(c+103,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+104,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+105,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+106,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+107,"npc_i", false,-1, 31,0);
    tracep->declBus(c+108,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+109,"wb_src_i", false,-1);
    tracep->declBit(c+110,"csr_write_i", false,-1);
    tracep->declBit(c+111,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+112,"reg_write_i", false,-1);
    tracep->declBus(c+113,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+114,"wbu_valid_i", false,-1);
    tracep->declBit(c+115,"wbu_ready_o", false,-1);
    tracep->declBus(c+81,"npc_o", false,-1, 31,0);
    tracep->declBit(c+82,"wbu_valid_o", false,-1);
    tracep->declBit(c+3,"wbu_ready_i", false,-1);
    tracep->declBus(c+324,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+84,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+323,"csr_write_o", false,-1);
    tracep->declBit(c+86,"reg_write_o", false,-1);
    tracep->declBus(c+85,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+172,"mem_data", false,-1, 31,0);
    tracep->declBus(c+173,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+174,"alu_result", false,-1, 31,0);
    tracep->declBus(c+175,"rs1", false,-1, 31,0);
    tracep->declBus(c+176,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+177,"rmask", false,-1, 2,0);
    tracep->declBit(c+178,"wb_src", false,-1);
    tracep->declBit(c+179,"csr_wdata_src", false,-1);
    tracep->declBus(c+337,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+338,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+339,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+180,"current_state", false,-1, 1,0);
    tracep->declBus(c+181,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+340,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+175,"d0", false,-1, 31,0);
    tracep->declBus(c+176,"d1", false,-1, 31,0);
    tracep->declBit(c+179,"sel", false,-1);
    tracep->declBus(c+324,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+173,"read_data", false,-1, 31,0);
    tracep->declBus(c+182,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+177,"rmask", false,-1, 2,0);
    tracep->declBus(c+172,"mem_data", false,-1, 31,0);
    tracep->declBus(c+183,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+184,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+185,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+186,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+187,"byte3", false,-1, 31,0);
    tracep->declBus(c+188,"byte2", false,-1, 31,0);
    tracep->declBus(c+189,"byte1", false,-1, 31,0);
    tracep->declBus(c+190,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+340,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+174,"d0", false,-1, 31,0);
    tracep->declBus(c+172,"d1", false,-1, 31,0);
    tracep->declBit(c+178,"sel", false,-1);
    tracep->declBus(c+84,"out", false,-1, 31,0);
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
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullBit(oldp+20,((1U & VL_REDXOR_8(vlSelf->top__DOT__IFU__DOT__LFSR))));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__IFU__DOT__arvalid));
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__IFU__DOT__current_state),3);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__IFU__DOT__unnamedblk3__DOT__j),32);
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__Inst_Mem__DOT__ar_state));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__Inst_Mem__DOT__r_state));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__Inst_Mem__DOT__aw_state));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__Inst_Mem__DOT__w_state));
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__Inst_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__Inst_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__Inst_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__Inst_Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__Inst_Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__Inst_Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__Inst_Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__Inst_Mem__DOT__flag_raddr));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__Inst_Mem__DOT__flag_write));
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__Inst_Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__Inst_Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__Inst_Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__Inst_Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__Inst_Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+77,((1U & VL_REDXOR_8(vlSelf->top__DOT__Inst_Mem__DOT__LFSR))));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__LSU__DOT__LFSR),5);
    bufp->fullBit(oldp+80,((1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR))));
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+84,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                               ? vlSelf->top__DOT__WBU__DOT__mem_data
                               : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+90,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                              | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+91,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__lsu_rdata),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__lsu_arvalid));
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__lsu_arready));
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__lsu_rresp));
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__lsu_rvalid));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__lsu_rready));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__lsu_awvalid));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__lsu_awready));
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+124,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->top__DOT__LSU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->top__DOT__LSU__DOT__alu_result))
                                             : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),8);
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__lsu_wvalid));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__lsu_wready));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__lsu_bresp));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__lsu_bvalid));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__lsu_bready));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__Data_Mem__DOT__ar_state));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__Data_Mem__DOT__r_state));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__Data_Mem__DOT__aw_state));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__Data_Mem__DOT__w_state));
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__Data_Mem__DOT__araddr),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__Data_Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__Data_Mem__DOT__wdata),32);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__Data_Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__Data_Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__Data_Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__Data_Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__Data_Mem__DOT__flag_raddr));
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__Data_Mem__DOT__flag_write));
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__Data_Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__Data_Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__Data_Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__Data_Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__Data_Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+148,((1U & VL_REDXOR_8(vlSelf->top__DOT__Data_Mem__DOT__LFSR))));
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+160,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+161,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->top__DOT__EXU__DOT__rs1
                                 : vlSelf->top__DOT__EXU__DOT__pc) 
                               + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+163,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+166,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+167,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+169,(vlSelf->top__DOT__IFU__DOT__next_state),3);
    bufp->fullCData(oldp+170,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+171,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+180,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+182,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+183,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+184,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+185,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+186,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+187,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+188,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+189,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+190,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+304,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+305,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+308,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+309,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+310,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+314,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+316,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+317,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+318,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+322,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+323,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+326,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+327,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+328,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+329,(vlSelf->clk));
    bufp->fullBit(oldp+330,(vlSelf->rst_n));
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+333,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullIData(oldp+334,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullBit(oldp+335,(vlSelf->top__DOT__Data_Mem__DOT__b_state));
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__Data_Mem__DOT__wvalid));
    bufp->fullCData(oldp+337,(0U),2);
    bufp->fullCData(oldp+338,(1U),2);
    bufp->fullCData(oldp+339,(2U),2);
    bufp->fullIData(oldp+340,(0x20U),32);
    bufp->fullIData(oldp+341,(4U),32);
    bufp->fullCData(oldp+342,(0U),3);
    bufp->fullCData(oldp+343,(1U),3);
    bufp->fullCData(oldp+344,(2U),3);
    bufp->fullCData(oldp+345,(3U),3);
    bufp->fullCData(oldp+346,(4U),3);
    bufp->fullIData(oldp+347,(0x80000000U),32);
    bufp->fullIData(oldp+348,(0U),32);
    bufp->fullBit(oldp+349,(0U));
    bufp->fullCData(oldp+350,(0U),8);
    bufp->fullBit(oldp+351,(vlSelf->top__DOT__Inst_Mem__DOT__b_state));
    bufp->fullBit(oldp+352,(vlSelf->top__DOT__Inst_Mem__DOT__wvalid));
    bufp->fullIData(oldp+353,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+354,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+355,(vlSelf->top__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+356,(3U),2);
    bufp->fullIData(oldp+357,(5U),32);
}
