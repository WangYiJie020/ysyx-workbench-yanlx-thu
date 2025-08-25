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
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+1,"pc_to_mem", false,-1, 31,0);
    tracep->declBus(c+2,"inst_from_mem", false,-1, 31,0);
    tracep->declBus(c+325,"npc_wbu_to_ifu", false,-1, 31,0);
    tracep->declBit(c+326,"valid_wbu_to_ifu", false,-1);
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
    tracep->declBus(c+16,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+17,"axi_arvalid", false,-1);
    tracep->declBit(c+18,"axi_arready", false,-1);
    tracep->declBus(c+19,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+20,"axi_rresp", false,-1);
    tracep->declBit(c+21,"axi_rvalid", false,-1);
    tracep->declBit(c+22,"axi_rready", false,-1);
    tracep->declBus(c+23,"axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+24,"axi_awvalid", false,-1);
    tracep->declBit(c+25,"axi_awready", false,-1);
    tracep->declBus(c+26,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+28,"axi_wvalid", false,-1);
    tracep->declBit(c+29,"axi_wready", false,-1);
    tracep->declBit(c+30,"axi_bresp", false,-1);
    tracep->declBit(c+31,"axi_bvalid", false,-1);
    tracep->declBit(c+32,"axi_bready", false,-1);
    tracep->declBus(c+33,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+34,"uart_arvalid", false,-1);
    tracep->declBit(c+35,"uart_arready", false,-1);
    tracep->declBus(c+36,"uart_rdata", false,-1, 31,0);
    tracep->declBit(c+37,"uart_rresp", false,-1);
    tracep->declBit(c+38,"uart_rvalid", false,-1);
    tracep->declBit(c+39,"uart_rready", false,-1);
    tracep->declBus(c+40,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+41,"uart_awvalid", false,-1);
    tracep->declBit(c+42,"uart_awready", false,-1);
    tracep->declBus(c+43,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"uart_wstrb", false,-1, 7,0);
    tracep->declBit(c+45,"uart_wvalid", false,-1);
    tracep->declBit(c+46,"uart_wready", false,-1);
    tracep->declBit(c+47,"uart_bresp", false,-1);
    tracep->declBit(c+48,"uart_bvalid", false,-1);
    tracep->declBit(c+49,"uart_bready", false,-1);
    tracep->declBus(c+50,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+51,"sram_arvalid", false,-1);
    tracep->declBit(c+52,"sram_arready", false,-1);
    tracep->declBus(c+53,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+54,"sram_rresp", false,-1);
    tracep->declBit(c+55,"sram_rvalid", false,-1);
    tracep->declBit(c+56,"sram_rready", false,-1);
    tracep->declBus(c+57,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+58,"sram_awvalid", false,-1);
    tracep->declBit(c+59,"sram_awready", false,-1);
    tracep->declBus(c+60,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+61,"sram_wstrb", false,-1, 7,0);
    tracep->declBit(c+62,"sram_wvalid", false,-1);
    tracep->declBit(c+63,"sram_wready", false,-1);
    tracep->declBit(c+64,"sram_bresp", false,-1);
    tracep->declBit(c+65,"sram_bvalid", false,-1);
    tracep->declBit(c+66,"sram_bready", false,-1);
    tracep->declBus(c+528,"raddr1", false,-1, 4,0);
    tracep->declBus(c+529,"raddr2", false,-1, 4,0);
    tracep->declBus(c+555,"rdata1", false,-1, 31,0);
    tracep->declBus(c+556,"rdata2", false,-1, 31,0);
    tracep->declBus(c+415,"a5", false,-1, 31,0);
    tracep->declBus(c+530,"pc_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+555,"rs1_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+556,"rs2_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+531,"imm_idu_to_exu", false,-1, 31,0);
    tracep->declBus(c+557,"csr_rdata_idu_to_exu", false,-1, 31,0);
    tracep->declBit(c+532,"a_in_src_idu_to_exu", false,-1);
    tracep->declBus(c+533,"b_in_src_idu_to_exu", false,-1, 1,0);
    tracep->declBus(c+534,"pc_srcs_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+535,"adder_a_src_idu_to_exu", false,-1);
    tracep->declBit(c+536,"adder_out_src_idu_to_exu", false,-1);
    tracep->declBus(c+537,"alu_op_idu_to_exu", false,-1, 3,0);
    tracep->declBit(c+538,"MemRead_idu_to_exu", false,-1);
    tracep->declBit(c+539,"MemWrite_idu_to_exu", false,-1);
    tracep->declBus(c+540,"wmask_idu_to_exu", false,-1, 7,0);
    tracep->declBus(c+541,"rmask_idu_to_exu", false,-1, 2,0);
    tracep->declBit(c+542,"wb_src_idu_to_exu", false,-1);
    tracep->declBit(c+543,"csr_write_idu_to_exu", false,-1);
    tracep->declBit(c+544,"csr_wdata_src_idu_to_exu", false,-1);
    tracep->declBit(c+545,"reg_write_idu_to_exu", false,-1);
    tracep->declBus(c+546,"waddr_idu_to_exu", false,-1, 4,0);
    tracep->declBit(c+67,"valid_idu_to_exu", false,-1);
    tracep->declBit(c+327,"ready_idu_to_exu", false,-1);
    tracep->declBit(c+547,"csr_write", false,-1);
    tracep->declBus(c+548,"csr_wdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+416+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+328,"wdata", false,-1, 31,0);
    tracep->declBus(c+329,"waddr", false,-1, 4,0);
    tracep->declBit(c+330,"reg_write", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+420+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+331,"alu_result_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+332,"rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+333,"rs2_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+334,"csr_rdata_l_rs1_exu_to_lsu", false,-1, 31,0);
    tracep->declBus(c+335,"npc_exu_to_lsu", false,-1, 31,0);
    tracep->declBit(c+336,"MemRead_exu_to_lsu", false,-1);
    tracep->declBit(c+337,"MemWrite_exu_to_lsu", false,-1);
    tracep->declBus(c+338,"wmask_exu_to_lsu", false,-1, 7,0);
    tracep->declBus(c+339,"rmask_exu_to_lsu", false,-1, 2,0);
    tracep->declBit(c+340,"wb_src_exu_to_lsu", false,-1);
    tracep->declBit(c+341,"csr_write_exu_to_lsu", false,-1);
    tracep->declBit(c+342,"csr_wdta_src_exu_to_lsu", false,-1);
    tracep->declBit(c+343,"reg_write_exu_to_lsu", false,-1);
    tracep->declBus(c+344,"waddr_exu_to_lsu", false,-1, 4,0);
    tracep->declBit(c+345,"valid_exu_to_lsu", false,-1);
    tracep->declBit(c+346,"ready_exu_to_lsu", false,-1);
    tracep->declBus(c+347,"alu_result_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+348,"rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+349,"csr_rdata_l_rs1_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+350,"datamem_readdata_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+351,"npc_lsu_to_wbu", false,-1, 31,0);
    tracep->declBus(c+352,"rmask_lsu_to_wbu", false,-1, 2,0);
    tracep->declBit(c+353,"wb_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+354,"csr_write_lsu_to_wbu", false,-1);
    tracep->declBit(c+355,"csr_wdata_src_lsu_to_wbu", false,-1);
    tracep->declBit(c+356,"reg_write_lsu_to_wbu", false,-1);
    tracep->declBus(c+357,"waddr_lsu_to_wbu", false,-1, 4,0);
    tracep->declBit(c+358,"valid_lsu_to_wbu", false,-1);
    tracep->declBit(c+359,"ready_lsu_to_wbu", false,-1);
    tracep->declBus(c+68,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+69,"lsu_arvalid", false,-1);
    tracep->declBit(c+360,"lsu_arready", false,-1);
    tracep->declBus(c+350,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+361,"lsu_rresp", false,-1);
    tracep->declBit(c+70,"lsu_rvalid", false,-1);
    tracep->declBit(c+71,"lsu_rready", false,-1);
    tracep->declBus(c+72,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+73,"lsu_awvalid", false,-1);
    tracep->declBit(c+362,"lsu_awready", false,-1);
    tracep->declBus(c+74,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+75,"lsu_wstrb", false,-1, 7,0);
    tracep->declBit(c+76,"lsu_wvalid", false,-1);
    tracep->declBit(c+363,"lsu_wready", false,-1);
    tracep->declBit(c+364,"lsu_bresp", false,-1);
    tracep->declBit(c+365,"lsu_bvalid", false,-1);
    tracep->declBit(c+77,"lsu_bready", false,-1);
    tracep->pushNamePrefix("AXI_Arbiter ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_i_a", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_i_a", false,-1);
    tracep->declBit(c+8,"arready_o_a", false,-1);
    tracep->declBus(c+2,"rdata_o_a", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_o_a", false,-1);
    tracep->declBit(c+10,"rvalid_o_a", false,-1);
    tracep->declBit(c+11,"rready_i_a", false,-1);
    tracep->declBus(c+559,"awaddr_i_a", false,-1, 31,0);
    tracep->declBit(c+560,"awvalid_i_a", false,-1);
    tracep->declBit(c+12,"awready_o_a", false,-1);
    tracep->declBus(c+559,"wdata_i_a", false,-1, 31,0);
    tracep->declBus(c+561,"wstrb_i_a", false,-1, 7,0);
    tracep->declBit(c+560,"wvalid_i_a", false,-1);
    tracep->declBit(c+13,"wready_o_a", false,-1);
    tracep->declBit(c+14,"bresp_o_a", false,-1);
    tracep->declBit(c+15,"bvalid_o_a", false,-1);
    tracep->declBit(c+560,"bready_i_a", false,-1);
    tracep->declBus(c+68,"araddr_i_b", false,-1, 31,0);
    tracep->declBit(c+69,"arvalid_i_b", false,-1);
    tracep->declBit(c+360,"arready_o_b", false,-1);
    tracep->declBus(c+350,"rdata_o_b", false,-1, 31,0);
    tracep->declBit(c+361,"rresp_o_b", false,-1);
    tracep->declBit(c+70,"rvalid_o_b", false,-1);
    tracep->declBit(c+71,"rready_i_b", false,-1);
    tracep->declBus(c+72,"awaddr_i_b", false,-1, 31,0);
    tracep->declBit(c+73,"awvalid_i_b", false,-1);
    tracep->declBit(c+362,"awready_o_b", false,-1);
    tracep->declBus(c+74,"wdata_i_b", false,-1, 31,0);
    tracep->declBus(c+75,"wstrb_i_b", false,-1, 7,0);
    tracep->declBit(c+76,"wvalid_i_b", false,-1);
    tracep->declBit(c+363,"wready_o_b", false,-1);
    tracep->declBit(c+364,"bresp_o_b", false,-1);
    tracep->declBit(c+365,"bvalid_o_b", false,-1);
    tracep->declBit(c+77,"bready_i_b", false,-1);
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
    tracep->declBit(c+78,"ar_switch", false,-1);
    tracep->declBit(c+79,"r_switch", false,-1);
    tracep->declBit(c+80,"aw_switch", false,-1);
    tracep->declBit(c+81,"w_switch", false,-1);
    tracep->declBit(c+82,"b_switch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+530,"pc_i", false,-1, 31,0);
    tracep->declBus(c+555,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+556,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+531,"imm_i", false,-1, 31,0);
    tracep->declBus(c+557,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+532,"a_in_src_i", false,-1);
    tracep->declBus(c+533,"b_in_src_i", false,-1, 1,0);
    tracep->declBus(c+534,"pc_srcs_i", false,-1, 2,0);
    tracep->declBit(c+535,"adder_a_src_i", false,-1);
    tracep->declBit(c+536,"adder_out_src_i", false,-1);
    tracep->declBus(c+537,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+538,"MemRead_i", false,-1);
    tracep->declBit(c+539,"MemWrite_i", false,-1);
    tracep->declBus(c+540,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+541,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+542,"wb_src_i", false,-1);
    tracep->declBit(c+543,"csr_write_i", false,-1);
    tracep->declBit(c+544,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+545,"reg_write_i", false,-1);
    tracep->declBus(c+546,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+67,"exu_valid_i", false,-1);
    tracep->declBit(c+327,"exu_ready_o", false,-1);
    tracep->declBus(c+331,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+332,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+333,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+334,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+335,"npc_o", false,-1, 31,0);
    tracep->declBit(c+336,"MemRead_o", false,-1);
    tracep->declBit(c+337,"MemWrite_o", false,-1);
    tracep->declBus(c+338,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+339,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+340,"wb_src_o", false,-1);
    tracep->declBit(c+341,"csr_write_o", false,-1);
    tracep->declBit(c+342,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+343,"reg_write_o", false,-1);
    tracep->declBus(c+344,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+345,"exu_valid_o", false,-1);
    tracep->declBit(c+346,"exu_ready_i", false,-1);
    tracep->declBus(c+366,"pc", false,-1, 31,0);
    tracep->declBus(c+332,"rs1", false,-1, 31,0);
    tracep->declBus(c+333,"rs2", false,-1, 31,0);
    tracep->declBus(c+367,"imm", false,-1, 31,0);
    tracep->declBus(c+368,"csr_rdata", false,-1, 31,0);
    tracep->declBit(c+369,"a_in_src", false,-1);
    tracep->declBus(c+370,"b_in_src", false,-1, 1,0);
    tracep->declBus(c+371,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+372,"adder_a_src", false,-1);
    tracep->declBit(c+373,"adder_out_src", false,-1);
    tracep->declBus(c+374,"alu_op", false,-1, 3,0);
    tracep->declBus(c+375,"a_in", false,-1, 31,0);
    tracep->declBus(c+376,"b_in", false,-1, 31,0);
    tracep->declBus(c+377,"a_out", false,-1, 31,0);
    tracep->declBus(c+378,"add_out", false,-1, 31,0);
    tracep->declBus(c+379,"pc_new", false,-1, 31,0);
    tracep->declBus(c+331,"alu_result", false,-1, 31,0);
    tracep->declBus(c+335,"npc", false,-1, 31,0);
    tracep->declBit(c+380,"zero", false,-1);
    tracep->declBus(c+562,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+563,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+564,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+381,"current_state", false,-1, 1,0);
    tracep->declBus(c+382,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+375,"a", false,-1, 31,0);
    tracep->declBus(c+376,"b", false,-1, 31,0);
    tracep->declBus(c+374,"op", false,-1, 3,0);
    tracep->declBus(c+331,"alu_result", false,-1, 31,0);
    tracep->declBit(c+380,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_A_Src ");
    tracep->declBus(c+565,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+332,"d0", false,-1, 31,0);
    tracep->declBus(c+366,"d1", false,-1, 31,0);
    tracep->declBit(c+369,"sel", false,-1);
    tracep->declBus(c+375,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B_Src ");
    tracep->declBus(c+565,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+333,"d0", false,-1, 31,0);
    tracep->declBus(c+367,"d1", false,-1, 31,0);
    tracep->declBus(c+566,"d2", false,-1, 31,0);
    tracep->declBus(c+368,"d3", false,-1, 31,0);
    tracep->declBus(c+370,"sel", false,-1, 1,0);
    tracep->declBus(c+376,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+377,"a", false,-1, 31,0);
    tracep->declBus(c+367,"b", false,-1, 31,0);
    tracep->declBus(c+378,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_A_Src ");
    tracep->declBus(c+565,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+366,"d0", false,-1, 31,0);
    tracep->declBus(c+332,"d1", false,-1, 31,0);
    tracep->declBit(c+372,"sel", false,-1);
    tracep->declBus(c+377,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder_Out ");
    tracep->declBus(c+565,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+378,"d0", false,-1, 31,0);
    tracep->declBus(c+368,"d1", false,-1, 31,0);
    tracep->declBit(c+373,"sel", false,-1);
    tracep->declBus(c+379,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_Control ");
    tracep->declBus(c+383,"pc4", false,-1, 31,0);
    tracep->declBus(c+379,"pc_new", false,-1, 31,0);
    tracep->declBus(c+371,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+380,"zero", false,-1);
    tracep->declBus(c+331,"alu_result", false,-1, 31,0);
    tracep->declBus(c+335,"npc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+528,"raddr1", false,-1, 4,0);
    tracep->declBus(c+529,"raddr2", false,-1, 4,0);
    tracep->declBus(c+555,"rdata1", false,-1, 31,0);
    tracep->declBus(c+556,"rdata2", false,-1, 31,0);
    tracep->declBus(c+415,"a5", false,-1, 31,0);
    tracep->declBus(c+4,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBit(c+5,"idu_valid_i", false,-1);
    tracep->declBit(c+6,"idu_ready_o", false,-1);
    tracep->declBus(c+530,"pc_o", false,-1, 31,0);
    tracep->declBus(c+555,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+556,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+531,"imm_o", false,-1, 31,0);
    tracep->declBus(c+557,"csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+532,"a_in_src_o", false,-1);
    tracep->declBus(c+533,"b_in_src_o", false,-1, 1,0);
    tracep->declBus(c+534,"pc_srcs_o", false,-1, 2,0);
    tracep->declBit(c+535,"adder_a_src_o", false,-1);
    tracep->declBit(c+536,"adder_out_src_o", false,-1);
    tracep->declBus(c+537,"alu_op", false,-1, 3,0);
    tracep->declBit(c+538,"MemRead_o", false,-1);
    tracep->declBit(c+539,"MemWrite_o", false,-1);
    tracep->declBus(c+540,"wmask_o", false,-1, 7,0);
    tracep->declBus(c+541,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+542,"wb_src_o", false,-1);
    tracep->declBit(c+543,"csr_write_o", false,-1);
    tracep->declBit(c+544,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+545,"reg_write_o", false,-1);
    tracep->declBus(c+546,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+67,"idu_valid_o", false,-1);
    tracep->declBit(c+327,"idu_ready_i", false,-1);
    tracep->declBit(c+547,"csr_write_i", false,-1);
    tracep->declBus(c+548,"csr_wdata_i", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+452+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+530,"pc", false,-1, 31,0);
    tracep->declBus(c+549,"inst", false,-1, 31,0);
    tracep->declBus(c+562,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+563,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+564,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+83,"current_state", false,-1, 1,0);
    tracep->declBus(c+384,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_Control ");
    tracep->declBus(c+549,"inst", false,-1, 31,0);
    tracep->declBus(c+537,"alu_op", false,-1, 3,0);
    tracep->declBus(c+550,"opcode", false,-1, 6,0);
    tracep->declBus(c+551,"funct3", false,-1, 2,0);
    tracep->declBus(c+552,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+547,"wen", false,-1);
    tracep->declBus(c+549,"inst", false,-1, 31,0);
    tracep->declBus(c+548,"wdata", false,-1, 31,0);
    tracep->declBus(c+415,"NO", false,-1, 31,0);
    tracep->declBus(c+530,"pc", false,-1, 31,0);
    tracep->declBus(c+557,"rdata", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+456+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+460,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+461,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+462,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+463,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+550,"opcode", false,-1, 6,0);
    tracep->declBus(c+551,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controler ");
    tracep->declBus(c+549,"inst", false,-1, 31,0);
    tracep->declBit(c+532,"a_in_src", false,-1);
    tracep->declBus(c+533,"b_in_src", false,-1, 1,0);
    tracep->declBit(c+545,"reg_write", false,-1);
    tracep->declBus(c+534,"pc_srcs", false,-1, 2,0);
    tracep->declBit(c+535,"adder_a_src", false,-1);
    tracep->declBit(c+538,"MemRead", false,-1);
    tracep->declBit(c+539,"MemWrite", false,-1);
    tracep->declBus(c+540,"wmask", false,-1, 7,0);
    tracep->declBit(c+542,"wb_src", false,-1);
    tracep->declBus(c+541,"rmask", false,-1, 2,0);
    tracep->declBit(c+543,"csr_write", false,-1);
    tracep->declBit(c+536,"adder_out_src", false,-1);
    tracep->declBit(c+544,"csr_wdata_src", false,-1);
    tracep->declBus(c+550,"opcode", false,-1, 6,0);
    tracep->declBus(c+551,"funct3", false,-1, 2,0);
    tracep->declBus(c+552,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT ");
    tracep->declBus(c+565,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+549,"inst", false,-1, 31,0);
    tracep->declBus(c+531,"data", false,-1, 31,0);
    tracep->declBus(c+550,"opcode", false,-1, 6,0);
    tracep->declBus(c+551,"funct3", false,-1, 2,0);
    tracep->declBus(c+552,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+1,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+7,"arvalid_o", false,-1);
    tracep->declBit(c+8,"arready_i", false,-1);
    tracep->declBus(c+2,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+9,"rresp_i", false,-1);
    tracep->declBit(c+10,"rvalid_i", false,-1);
    tracep->declBit(c+11,"rready_o", false,-1);
    tracep->declBus(c+325,"npc_i", false,-1, 31,0);
    tracep->declBit(c+326,"ifu_valid_i", false,-1);
    tracep->declBit(c+3,"ifu_ready_o", false,-1);
    tracep->declBus(c+4,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBit(c+5,"ifu_valid_o", false,-1);
    tracep->declBit(c+6,"ifu_ready_i", false,-1);
    tracep->declBus(c+558,"pc", false,-1, 31,0);
    tracep->declBus(c+385,"npc", false,-1, 31,0);
    tracep->declBus(c+84,"LFSR", false,-1, 4,0);
    tracep->declBus(c+85,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+86,"rready_delay", false,-1, 4,0);
    tracep->declBit(c+87,"lfsr_in", false,-1);
    tracep->declBit(c+88,"arvalid", false,-1);
    tracep->declBus(c+558,"araddr", false,-1, 31,0);
    tracep->declBit(c+89,"rready", false,-1);
    tracep->declBus(c+90,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+91+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+123,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+567,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+568,"S_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+569,"S_SEND", false,-1, 2,0);
    tracep->declBus(c+570,"S_WAIT_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+571,"S_WAIT_SEND", false,-1, 2,0);
    tracep->declBus(c+124,"current_state", false,-1, 2,0);
    tracep->declBus(c+386,"next_state", false,-1, 2,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+565,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+572,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+385,"din", false,-1, 31,0);
    tracep->declBus(c+558,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+125,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+126,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+127,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+128,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+129,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+331,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+332,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+333,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+334,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+335,"npc_i", false,-1, 31,0);
    tracep->declBit(c+336,"MemRead_i", false,-1);
    tracep->declBit(c+337,"MemWrite_i", false,-1);
    tracep->declBus(c+338,"wmask_i", false,-1, 7,0);
    tracep->declBus(c+339,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+340,"wb_src_i", false,-1);
    tracep->declBit(c+341,"csr_write_i", false,-1);
    tracep->declBit(c+342,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+343,"reg_write_i", false,-1);
    tracep->declBus(c+344,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+345,"lsu_valid_i", false,-1);
    tracep->declBit(c+346,"lsu_ready_o", false,-1);
    tracep->declBus(c+347,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+348,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+349,"csr_rdata_l_rs1_o", false,-1, 31,0);
    tracep->declBus(c+350,"datamem_readdata_o", false,-1, 31,0);
    tracep->declBus(c+351,"npc_o", false,-1, 31,0);
    tracep->declBus(c+352,"rmask_o", false,-1, 2,0);
    tracep->declBit(c+353,"wb_src_o", false,-1);
    tracep->declBit(c+354,"csr_write_o", false,-1);
    tracep->declBit(c+355,"csr_wdata_src_o", false,-1);
    tracep->declBit(c+356,"reg_write_o", false,-1);
    tracep->declBus(c+357,"waddr_o", false,-1, 4,0);
    tracep->declBit(c+358,"lsu_valid_o", false,-1);
    tracep->declBit(c+359,"lsu_ready_i", false,-1);
    tracep->declBus(c+68,"araddr_o", false,-1, 31,0);
    tracep->declBit(c+69,"arvalid_o", false,-1);
    tracep->declBit(c+360,"arready_i", false,-1);
    tracep->declBus(c+350,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+361,"rresp_i", false,-1);
    tracep->declBit(c+70,"rvalid_i", false,-1);
    tracep->declBit(c+71,"rready_o", false,-1);
    tracep->declBus(c+72,"awaddr_o", false,-1, 31,0);
    tracep->declBit(c+73,"awvalid_o", false,-1);
    tracep->declBit(c+362,"awready_i", false,-1);
    tracep->declBus(c+74,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+75,"wstrb_o", false,-1, 7,0);
    tracep->declBit(c+76,"wvalid_o", false,-1);
    tracep->declBit(c+363,"wready_i", false,-1);
    tracep->declBit(c+364,"bresp_i", false,-1);
    tracep->declBit(c+365,"bvalid_i", false,-1);
    tracep->declBit(c+77,"bready_o", false,-1);
    tracep->declBus(c+347,"alu_result", false,-1, 31,0);
    tracep->declBus(c+348,"rs1", false,-1, 31,0);
    tracep->declBus(c+573,"rs2", false,-1, 31,0);
    tracep->declBus(c+574,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+352,"rmask", false,-1, 2,0);
    tracep->declBit(c+130,"flag", false,-1);
    tracep->declBit(c+575,"wvalid_tmp", false,-1);
    tracep->declBus(c+131,"LFSR", false,-1, 4,0);
    tracep->declBus(c+132,"arvalid_delay", false,-1, 4,0);
    tracep->declBus(c+133,"rready_delay", false,-1, 4,0);
    tracep->declBus(c+134,"awvalid_delay", false,-1, 4,0);
    tracep->declBus(c+135,"wvalid_delay", false,-1, 4,0);
    tracep->declBus(c+136,"bready_delay", false,-1, 4,0);
    tracep->declBit(c+137,"lfsr_in", false,-1);
    tracep->declBit(c+387,"arvalid", false,-1);
    tracep->declBus(c+347,"araddr", false,-1, 31,0);
    tracep->declBit(c+388,"rready", false,-1);
    tracep->declBus(c+347,"awaddr", false,-1, 31,0);
    tracep->declBit(c+389,"awvalid", false,-1);
    tracep->declBus(c+390,"wdata", false,-1, 31,0);
    tracep->declBus(c+391,"wstrb", false,-1, 7,0);
    tracep->declBit(c+392,"wvalid", false,-1);
    tracep->declBit(c+393,"bready", false,-1);
    tracep->declBus(c+138,"arvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+139+i*1,"araddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+171,"rready_buffer", false,-1, 31,0);
    tracep->declBus(c+172,"awvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+173+i*1,"awaddr_buffer", true,(i+0), 31,0);
    }
    tracep->declBus(c+205,"wvalid_buffer", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+206+i*1,"wdata_buffer", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+238+i*1,"wstrb_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+270,"bready_buffer", false,-1, 31,0);
    tracep->declBus(c+562,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+563,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+564,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+576,"S_WAIT_SEND", false,-1, 1,0);
    tracep->declBus(c+394,"current_state", false,-1, 1,0);
    tracep->declBus(c+395,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+271,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+272,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk11 ");
    tracep->declBus(c+273,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+274,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+275,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+276,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+277,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+278,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+279,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+280,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+281,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+50,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+51,"arvalid_i", false,-1);
    tracep->declBit(c+52,"arready_o", false,-1);
    tracep->declBus(c+53,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+54,"rresp_o", false,-1);
    tracep->declBit(c+55,"rvalid_o", false,-1);
    tracep->declBit(c+56,"rready_i", false,-1);
    tracep->declBus(c+57,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+58,"awvalid_i", false,-1);
    tracep->declBit(c+59,"awready_o", false,-1);
    tracep->declBus(c+60,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+61,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+62,"wvalid_i", false,-1);
    tracep->declBit(c+63,"wready_o", false,-1);
    tracep->declBit(c+64,"bresp_o", false,-1);
    tracep->declBit(c+65,"bvalid_o", false,-1);
    tracep->declBit(c+66,"bready_i", false,-1);
    tracep->declBit(c+282,"ar_state", false,-1);
    tracep->declBit(c+283,"r_state", false,-1);
    tracep->declBit(c+284,"aw_state", false,-1);
    tracep->declBit(c+285,"w_state", false,-1);
    tracep->declBit(c+577,"b_state", false,-1);
    tracep->declBus(c+286,"araddr", false,-1, 31,0);
    tracep->declBus(c+287,"awaddr", false,-1, 31,0);
    tracep->declBus(c+288,"wdata", false,-1, 31,0);
    tracep->declBus(c+289,"wstrb", false,-1, 7,0);
    tracep->declBit(c+578,"wvalid", false,-1);
    tracep->declBit(c+290,"flag_waddr", false,-1);
    tracep->declBit(c+291,"flag_wdata", false,-1);
    tracep->declBit(c+292,"flag_rdata", false,-1);
    tracep->declBit(c+293,"flag_raddr", false,-1);
    tracep->declBit(c+579,"flag_write", false,-1);
    tracep->declBus(c+294,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+295,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+296,"w_delay", false,-1, 4,0);
    tracep->declBus(c+297,"r_delay", false,-1, 4,0);
    tracep->declBus(c+298,"LFSR", false,-1, 4,0);
    tracep->declBit(c+299,"lfsr_in", false,-1);
    tracep->declBus(c+300,"write_box", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rgefile ");
    tracep->declBus(c+580,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+565,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBus(c+328,"wdata", false,-1, 31,0);
    tracep->declBus(c+329,"waddr", false,-1, 4,0);
    tracep->declBit(c+330,"wen", false,-1);
    tracep->declBus(c+528,"raddr1", false,-1, 4,0);
    tracep->declBus(c+555,"rdata1", false,-1, 31,0);
    tracep->declBus(c+529,"raddr2", false,-1, 4,0);
    tracep->declBus(c+556,"rdata2", false,-1, 31,0);
    tracep->declBus(c+415,"value1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+464+i*1,"reg_file", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+496+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UART ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+33,"araddr_i", false,-1, 31,0);
    tracep->declBit(c+34,"arvalid_i", false,-1);
    tracep->declBit(c+35,"arready_o", false,-1);
    tracep->declBus(c+36,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+37,"rresp_o", false,-1);
    tracep->declBit(c+38,"rvalid_o", false,-1);
    tracep->declBit(c+39,"rready_i", false,-1);
    tracep->declBus(c+40,"awaddr_i", false,-1, 31,0);
    tracep->declBit(c+41,"awvalid_i", false,-1);
    tracep->declBit(c+42,"awready_o", false,-1);
    tracep->declBus(c+43,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+44,"wstrb_i", false,-1, 7,0);
    tracep->declBit(c+45,"wvalid_i", false,-1);
    tracep->declBit(c+46,"wready_o", false,-1);
    tracep->declBit(c+47,"bresp_o", false,-1);
    tracep->declBit(c+48,"bvalid_o", false,-1);
    tracep->declBit(c+49,"bready_i", false,-1);
    tracep->declBit(c+301,"ar_state", false,-1);
    tracep->declBit(c+302,"r_state", false,-1);
    tracep->declBit(c+303,"aw_state", false,-1);
    tracep->declBit(c+304,"w_state", false,-1);
    tracep->declBit(c+581,"b_state", false,-1);
    tracep->declBus(c+305,"araddr", false,-1, 31,0);
    tracep->declBus(c+306,"awaddr", false,-1, 31,0);
    tracep->declBus(c+307,"wdata", false,-1, 31,0);
    tracep->declBus(c+308,"wstrb", false,-1, 7,0);
    tracep->declBit(c+582,"wvalid", false,-1);
    tracep->declBit(c+309,"flag_waddr", false,-1);
    tracep->declBit(c+310,"flag_wdata", false,-1);
    tracep->declBit(c+311,"flag_rdata", false,-1);
    tracep->declBit(c+312,"flag_raddr", false,-1);
    tracep->declBit(c+583,"flag_write", false,-1);
    tracep->declBus(c+313,"rdata_counter", false,-1, 4,0);
    tracep->declBus(c+314,"wdata_counter", false,-1, 4,0);
    tracep->declBus(c+315,"w_delay", false,-1, 4,0);
    tracep->declBus(c+316,"r_delay", false,-1, 4,0);
    tracep->declBus(c+317,"LFSR", false,-1, 4,0);
    tracep->declBit(c+318,"lfsr_in", false,-1);
    tracep->declBus(c+319,"write_box", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+347,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+348,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+349,"csr_rdata_l_rs1_i", false,-1, 31,0);
    tracep->declBus(c+350,"datamem_readdata_i", false,-1, 31,0);
    tracep->declBus(c+351,"npc_i", false,-1, 31,0);
    tracep->declBus(c+352,"rmask_i", false,-1, 2,0);
    tracep->declBit(c+353,"wb_src_i", false,-1);
    tracep->declBit(c+354,"csr_write_i", false,-1);
    tracep->declBit(c+355,"csr_wdata_src_i", false,-1);
    tracep->declBit(c+356,"reg_write_i", false,-1);
    tracep->declBus(c+357,"waddr_i", false,-1, 4,0);
    tracep->declBit(c+358,"wbu_valid_i", false,-1);
    tracep->declBit(c+359,"wbu_ready_o", false,-1);
    tracep->declBus(c+325,"npc_o", false,-1, 31,0);
    tracep->declBit(c+326,"wbu_valid_o", false,-1);
    tracep->declBit(c+3,"wbu_ready_i", false,-1);
    tracep->declBus(c+548,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+328,"wdata_o", false,-1, 31,0);
    tracep->declBit(c+547,"csr_write_o", false,-1);
    tracep->declBit(c+330,"reg_write_o", false,-1);
    tracep->declBus(c+329,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+396,"mem_data", false,-1, 31,0);
    tracep->declBus(c+397,"datamem_readdata", false,-1, 31,0);
    tracep->declBus(c+398,"alu_result", false,-1, 31,0);
    tracep->declBus(c+399,"rs1", false,-1, 31,0);
    tracep->declBus(c+400,"csr_rdata_l_rs1", false,-1, 31,0);
    tracep->declBus(c+401,"rmask", false,-1, 2,0);
    tracep->declBit(c+402,"wb_src", false,-1);
    tracep->declBit(c+403,"csr_wdata_src", false,-1);
    tracep->declBus(c+562,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+563,"S_RECEIVE", false,-1, 1,0);
    tracep->declBus(c+564,"S_SEND", false,-1, 1,0);
    tracep->declBus(c+404,"current_state", false,-1, 1,0);
    tracep->declBus(c+405,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("Csr_Wdata ");
    tracep->declBus(c+565,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+399,"d0", false,-1, 31,0);
    tracep->declBus(c+400,"d1", false,-1, 31,0);
    tracep->declBit(c+403,"sel", false,-1);
    tracep->declBus(c+548,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SEXT_Mem ");
    tracep->declBus(c+397,"read_data", false,-1, 31,0);
    tracep->declBus(c+406,"addr_low2", false,-1, 1,0);
    tracep->declBus(c+401,"rmask", false,-1, 2,0);
    tracep->declBus(c+396,"mem_data", false,-1, 31,0);
    tracep->declBus(c+407,"sbyte3", false,-1, 31,0);
    tracep->declBus(c+408,"sbyte2", false,-1, 31,0);
    tracep->declBus(c+409,"sbyte1", false,-1, 31,0);
    tracep->declBus(c+410,"sbyte0", false,-1, 31,0);
    tracep->declBus(c+411,"byte3", false,-1, 31,0);
    tracep->declBus(c+412,"byte2", false,-1, 31,0);
    tracep->declBus(c+413,"byte1", false,-1, 31,0);
    tracep->declBus(c+414,"byte0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+565,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+398,"d0", false,-1, 31,0);
    tracep->declBus(c+396,"d1", false,-1, 31,0);
    tracep->declBit(c+402,"sel", false,-1);
    tracep->declBus(c+328,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst_n", false,-1);
    tracep->declBus(c+16,"axi_araddr_i", false,-1, 31,0);
    tracep->declBit(c+17,"axi_arvalid_i", false,-1);
    tracep->declBit(c+18,"axi_arready_o", false,-1);
    tracep->declBus(c+19,"axi_rdata_o", false,-1, 31,0);
    tracep->declBit(c+20,"axi_rresp_o", false,-1);
    tracep->declBit(c+21,"axi_rvalid_o", false,-1);
    tracep->declBit(c+22,"axi_rready_i", false,-1);
    tracep->declBus(c+23,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBit(c+24,"axi_awvalid_i", false,-1);
    tracep->declBit(c+25,"axi_awready_o", false,-1);
    tracep->declBus(c+26,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+27,"axi_wstrb_i", false,-1, 7,0);
    tracep->declBit(c+28,"axi_wvalid_i", false,-1);
    tracep->declBit(c+29,"axi_wready_o", false,-1);
    tracep->declBit(c+30,"axi_bresp_o", false,-1);
    tracep->declBit(c+31,"axi_bvalid_o", false,-1);
    tracep->declBit(c+32,"axi_bready_i", false,-1);
    tracep->declBus(c+50,"sram_araddr_o", false,-1, 31,0);
    tracep->declBit(c+51,"sram_arvalid_o", false,-1);
    tracep->declBit(c+52,"sram_arready_i", false,-1);
    tracep->declBus(c+53,"sram_rdata_i", false,-1, 31,0);
    tracep->declBit(c+54,"sram_rresp_i", false,-1);
    tracep->declBit(c+55,"sram_rvalid_i", false,-1);
    tracep->declBit(c+56,"sram_rready_o", false,-1);
    tracep->declBus(c+57,"sram_awaddr_o", false,-1, 31,0);
    tracep->declBit(c+58,"sram_awvalid_o", false,-1);
    tracep->declBit(c+59,"sram_awready_i", false,-1);
    tracep->declBus(c+60,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+61,"sram_wstrb_o", false,-1, 7,0);
    tracep->declBit(c+62,"sram_wvalid_o", false,-1);
    tracep->declBit(c+63,"sram_wready_i", false,-1);
    tracep->declBit(c+64,"sram_bresp_i", false,-1);
    tracep->declBit(c+65,"sram_bvalid_i", false,-1);
    tracep->declBit(c+66,"sram_bready_o", false,-1);
    tracep->declBus(c+33,"uart_araddr_o", false,-1, 31,0);
    tracep->declBit(c+34,"uart_arvalid_o", false,-1);
    tracep->declBit(c+35,"uart_arready_i", false,-1);
    tracep->declBus(c+36,"uart_rdata_i", false,-1, 31,0);
    tracep->declBit(c+37,"uart_rresp_i", false,-1);
    tracep->declBit(c+38,"uart_rvalid_i", false,-1);
    tracep->declBit(c+39,"uart_rready_o", false,-1);
    tracep->declBus(c+40,"uart_awaddr_o", false,-1, 31,0);
    tracep->declBit(c+41,"uart_awvalid_o", false,-1);
    tracep->declBit(c+42,"uart_awready_i", false,-1);
    tracep->declBus(c+43,"uart_wdata_o", false,-1, 31,0);
    tracep->declBus(c+44,"uart_wstrb_o", false,-1, 7,0);
    tracep->declBit(c+45,"uart_wvalid_o", false,-1);
    tracep->declBit(c+46,"uart_wready_i", false,-1);
    tracep->declBit(c+47,"uart_bresp_i", false,-1);
    tracep->declBit(c+48,"uart_bvalid_i", false,-1);
    tracep->declBit(c+49,"uart_bready_o", false,-1);
    tracep->declBit(c+320,"ar_switch", false,-1);
    tracep->declBit(c+321,"r_switch", false,-1);
    tracep->declBit(c+322,"aw_switch", false,-1);
    tracep->declBit(c+323,"w_switch", false,-1);
    tracep->declBit(c+324,"b_switch", false,-1);
    tracep->popNamePrefix(2);
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
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__axi_araddr),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__axi_arvalid));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__axi_arready));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__axi_rdata),32);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__axi_rresp));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__axi_rvalid));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__axi_rready));
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__axi_awaddr),32);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__axi_awvalid));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__axi_awready));
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__axi_wdata),32);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__axi_wvalid));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__axi_wready));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__axi_bresp));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__axi_bvalid));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__axi_bready));
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__uart_araddr),32);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__uart_arvalid));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__uart_arready));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__uart_rdata),32);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__uart_rresp));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__uart_rvalid));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__uart_rready));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__uart_awvalid));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__uart_awready));
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__uart_wdata),32);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__uart_wstrb),8);
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__uart_wvalid));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__uart_wready));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__uart_bresp));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__uart_bvalid));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__uart_bready));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__sram_araddr),32);
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__sram_arvalid));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__sram_arready));
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__sram_rdata),32);
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__sram_rresp));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__sram_rvalid));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__sram_rready));
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__sram_awvalid));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__sram_awready));
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__sram_wdata),32);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__sram_wstrb),8);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__sram_wvalid));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__sram_wready));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__sram_bresp));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__sram_bvalid));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__sram_bready));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__valid_idu_to_exu));
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__lsu_araddr),32);
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__lsu_arvalid));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__lsu_rvalid));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__lsu_rready));
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__lsu_awaddr),32);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__lsu_awvalid));
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__lsu_wstrb),8);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__lsu_wvalid));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__lsu_bready));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__AXI_Arbiter__DOT__ar_switch));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__AXI_Arbiter__DOT__r_switch));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__AXI_Arbiter__DOT__aw_switch));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__AXI_Arbiter__DOT__w_switch));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__AXI_Arbiter__DOT__b_switch));
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__IDU__DOT__current_state),2);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__IFU__DOT__LFSR),5);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__IFU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__IFU__DOT__rready_delay),5);
    bufp->fullBit(oldp+87,((1U & VL_REDXOR_8(vlSelf->top__DOT__IFU__DOT__LFSR))));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__IFU__DOT__arvalid));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__IFU__DOT__rready));
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__IFU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__IFU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__IFU__DOT__rready_buffer),32);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__IFU__DOT__current_state),3);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__IFU__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__IFU__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__IFU__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__IFU__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__IFU__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__LSU__DOT__flag));
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__LSU__DOT__LFSR),5);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__LSU__DOT__arvalid_delay),5);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__LSU__DOT__rready_delay),5);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__LSU__DOT__awvalid_delay),5);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__LSU__DOT__wvalid_delay),5);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__LSU__DOT__bready_delay),5);
    bufp->fullBit(oldp+137,((1U & VL_REDXOR_8(vlSelf->top__DOT__LSU__DOT__LFSR))));
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__LSU__DOT__arvalid_buffer),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[0]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[1]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[2]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[3]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[4]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[5]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[6]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[7]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[8]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[9]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[10]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[11]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[12]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[13]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[14]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[15]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[16]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[17]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[18]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[19]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[20]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[21]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[22]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[23]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[24]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[25]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[26]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[27]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[28]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[29]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[30]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__LSU__DOT__araddr_buffer[31]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__LSU__DOT__rready_buffer),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__LSU__DOT__awvalid_buffer),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[0]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[1]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[2]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[3]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[4]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[5]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[6]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[7]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[8]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[9]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[10]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[11]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[12]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[13]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[14]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[15]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[16]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[17]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[18]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[19]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[20]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[21]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[22]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[23]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[24]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[25]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[26]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[27]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[28]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[29]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[30]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__LSU__DOT__awaddr_buffer[31]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__LSU__DOT__wvalid_buffer),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[0]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[1]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[2]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[3]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[4]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[5]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[6]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[7]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[8]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[9]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[10]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[11]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[12]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[13]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[14]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[15]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[16]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[17]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[18]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[19]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[20]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[21]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[22]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[23]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[24]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[25]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[26]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[27]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[28]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[29]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[30]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__LSU__DOT__wdata_buffer[31]),32);
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[0]),8);
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[1]),8);
    bufp->fullCData(oldp+240,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[2]),8);
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[3]),8);
    bufp->fullCData(oldp+242,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[4]),8);
    bufp->fullCData(oldp+243,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[5]),8);
    bufp->fullCData(oldp+244,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[6]),8);
    bufp->fullCData(oldp+245,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[7]),8);
    bufp->fullCData(oldp+246,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[8]),8);
    bufp->fullCData(oldp+247,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[9]),8);
    bufp->fullCData(oldp+248,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[10]),8);
    bufp->fullCData(oldp+249,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[11]),8);
    bufp->fullCData(oldp+250,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[12]),8);
    bufp->fullCData(oldp+251,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[13]),8);
    bufp->fullCData(oldp+252,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[14]),8);
    bufp->fullCData(oldp+253,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[15]),8);
    bufp->fullCData(oldp+254,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[16]),8);
    bufp->fullCData(oldp+255,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[17]),8);
    bufp->fullCData(oldp+256,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[18]),8);
    bufp->fullCData(oldp+257,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[19]),8);
    bufp->fullCData(oldp+258,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[20]),8);
    bufp->fullCData(oldp+259,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[21]),8);
    bufp->fullCData(oldp+260,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[22]),8);
    bufp->fullCData(oldp+261,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[23]),8);
    bufp->fullCData(oldp+262,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[24]),8);
    bufp->fullCData(oldp+263,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[25]),8);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[26]),8);
    bufp->fullCData(oldp+265,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[27]),8);
    bufp->fullCData(oldp+266,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[28]),8);
    bufp->fullCData(oldp+267,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[29]),8);
    bufp->fullCData(oldp+268,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[30]),8);
    bufp->fullCData(oldp+269,(vlSelf->top__DOT__LSU__DOT__wstrb_buffer[31]),8);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__LSU__DOT__bready_buffer),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__LSU__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__LSU__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__LSU__DOT__unnamedblk11__DOT__j),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__LSU__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__LSU__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__LSU__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__LSU__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__LSU__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__LSU__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__LSU__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__LSU__DOT__unnamedblk9__DOT__j),32);
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__Mem__DOT__ar_state));
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__Mem__DOT__r_state));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__Mem__DOT__aw_state));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__Mem__DOT__w_state));
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__Mem__DOT__araddr),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__Mem__DOT__awaddr),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__Mem__DOT__wdata),32);
    bufp->fullCData(oldp+289,(vlSelf->top__DOT__Mem__DOT__wstrb),8);
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__Mem__DOT__flag_waddr));
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__Mem__DOT__flag_wdata));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__Mem__DOT__flag_rdata));
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__Mem__DOT__flag_raddr));
    bufp->fullCData(oldp+294,(vlSelf->top__DOT__Mem__DOT__rdata_counter),5);
    bufp->fullCData(oldp+295,(vlSelf->top__DOT__Mem__DOT__wdata_counter),5);
    bufp->fullCData(oldp+296,(vlSelf->top__DOT__Mem__DOT__w_delay),5);
    bufp->fullCData(oldp+297,(vlSelf->top__DOT__Mem__DOT__r_delay),5);
    bufp->fullCData(oldp+298,(vlSelf->top__DOT__Mem__DOT__LFSR),5);
    bufp->fullBit(oldp+299,((1U & VL_REDXOR_8(vlSelf->top__DOT__Mem__DOT__LFSR))));
    bufp->fullCData(oldp+300,(vlSelf->top__DOT__Mem__DOT__write_box),2);
    bufp->fullBit(oldp+301,(vlSelf->top__DOT__UART__DOT__ar_state));
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__UART__DOT__r_state));
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__UART__DOT__aw_state));
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__UART__DOT__w_state));
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__UART__DOT__araddr),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__UART__DOT__awaddr),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__UART__DOT__wdata),32);
    bufp->fullCData(oldp+308,(vlSelf->top__DOT__UART__DOT__wstrb),8);
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__UART__DOT__flag_waddr));
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__UART__DOT__flag_wdata));
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__UART__DOT__flag_rdata));
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__UART__DOT__flag_raddr));
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__UART__DOT__rdata_counter),5);
    bufp->fullCData(oldp+314,(vlSelf->top__DOT__UART__DOT__wdata_counter),5);
    bufp->fullCData(oldp+315,(vlSelf->top__DOT__UART__DOT__w_delay),5);
    bufp->fullCData(oldp+316,(vlSelf->top__DOT__UART__DOT__r_delay),5);
    bufp->fullCData(oldp+317,(vlSelf->top__DOT__UART__DOT__LFSR),5);
    bufp->fullBit(oldp+318,((1U & VL_REDXOR_8(vlSelf->top__DOT__UART__DOT__LFSR))));
    bufp->fullCData(oldp+319,(vlSelf->top__DOT__UART__DOT__write_box),2);
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__Xbar__DOT__ar_switch));
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__Xbar__DOT__r_switch));
    bufp->fullBit(oldp+322,(vlSelf->top__DOT__Xbar__DOT__aw_switch));
    bufp->fullBit(oldp+323,(vlSelf->top__DOT__Xbar__DOT__w_switch));
    bufp->fullBit(oldp+324,(vlSelf->top__DOT__Xbar__DOT__b_switch));
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__npc_wbu_to_ifu),32);
    bufp->fullBit(oldp+326,(vlSelf->top__DOT__valid_wbu_to_ifu));
    bufp->fullBit(oldp+327,(vlSelf->top__DOT__ready_idu_to_exu));
    bufp->fullIData(oldp+328,(((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                                ? vlSelf->top__DOT__WBU__DOT__mem_data
                                : vlSelf->top__DOT__WBU__DOT__alu_result)),32);
    bufp->fullCData(oldp+329,(vlSelf->top__DOT__waddr),5);
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__reg_write));
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__EXU__DOT__alu_result),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__EXU__DOT__rs1),32);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__EXU__DOT__rs2),32);
    bufp->fullIData(oldp+334,((vlSelf->top__DOT__EXU__DOT__csr_rdata 
                               | vlSelf->top__DOT__EXU__DOT__rs1)),32);
    bufp->fullIData(oldp+335,(((4U & (IData)(vlSelf->top__DOT__EXU__DOT__pc_srcs))
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
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__MemRead_exu_to_lsu));
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__MemWrite_exu_to_lsu));
    bufp->fullCData(oldp+338,(vlSelf->top__DOT__wmask_exu_to_lsu),8);
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__rmask_exu_to_lsu),3);
    bufp->fullBit(oldp+340,(vlSelf->top__DOT__wb_src_exu_to_lsu));
    bufp->fullBit(oldp+341,(vlSelf->top__DOT__csr_write_exu_to_lsu));
    bufp->fullBit(oldp+342,(vlSelf->top__DOT__csr_wdta_src_exu_to_lsu));
    bufp->fullBit(oldp+343,(vlSelf->top__DOT__reg_write_exu_to_lsu));
    bufp->fullCData(oldp+344,(vlSelf->top__DOT__waddr_exu_to_lsu),5);
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__valid_exu_to_lsu));
    bufp->fullBit(oldp+346,(vlSelf->top__DOT__ready_exu_to_lsu));
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__LSU__DOT__alu_result),32);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__LSU__DOT__rs1),32);
    bufp->fullIData(oldp+349,(vlSelf->top__DOT__csr_rdata_l_rs1_lsu_to_wbu),32);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__lsu_rdata),32);
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__npc_lsu_to_wbu),32);
    bufp->fullCData(oldp+352,(vlSelf->top__DOT__LSU__DOT__rmask),3);
    bufp->fullBit(oldp+353,(vlSelf->top__DOT__wb_src_lsu_to_wbu));
    bufp->fullBit(oldp+354,(vlSelf->top__DOT__csr_write_lsu_to_wbu));
    bufp->fullBit(oldp+355,(vlSelf->top__DOT__csr_wdata_src_lsu_to_wbu));
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__reg_write_lsu_to_wbu));
    bufp->fullCData(oldp+357,(vlSelf->top__DOT__waddr_lsu_to_wbu),5);
    bufp->fullBit(oldp+358,(vlSelf->top__DOT__valid_lsu_to_wbu));
    bufp->fullBit(oldp+359,(vlSelf->top__DOT__ready_lsu_to_wbu));
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__lsu_arready));
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__lsu_rresp));
    bufp->fullBit(oldp+362,(vlSelf->top__DOT__lsu_awready));
    bufp->fullBit(oldp+363,(vlSelf->top__DOT__lsu_wready));
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__lsu_bresp));
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__lsu_bvalid));
    bufp->fullIData(oldp+366,(vlSelf->top__DOT__EXU__DOT__pc),32);
    bufp->fullIData(oldp+367,(vlSelf->top__DOT__EXU__DOT__imm),32);
    bufp->fullIData(oldp+368,(vlSelf->top__DOT__EXU__DOT__csr_rdata),32);
    bufp->fullBit(oldp+369,(vlSelf->top__DOT__EXU__DOT__a_in_src));
    bufp->fullCData(oldp+370,(vlSelf->top__DOT__EXU__DOT__b_in_src),2);
    bufp->fullCData(oldp+371,(vlSelf->top__DOT__EXU__DOT__pc_srcs),3);
    bufp->fullBit(oldp+372,(vlSelf->top__DOT__EXU__DOT__adder_a_src));
    bufp->fullBit(oldp+373,(vlSelf->top__DOT__EXU__DOT__adder_out_src));
    bufp->fullCData(oldp+374,(vlSelf->top__DOT__EXU__DOT__alu_op),4);
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__EXU__DOT__a_in),32);
    bufp->fullIData(oldp+376,(vlSelf->top__DOT__EXU__DOT__b_in),32);
    bufp->fullIData(oldp+377,(((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                ? vlSelf->top__DOT__EXU__DOT__rs1
                                : vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullIData(oldp+378,((((IData)(vlSelf->top__DOT__EXU__DOT__adder_a_src)
                                 ? vlSelf->top__DOT__EXU__DOT__rs1
                                 : vlSelf->top__DOT__EXU__DOT__pc) 
                               + vlSelf->top__DOT__EXU__DOT__imm)),32);
    bufp->fullIData(oldp+379,(vlSelf->top__DOT__EXU__DOT__pc_new),32);
    bufp->fullBit(oldp+380,((1U & (~ (IData)((0U != vlSelf->top__DOT__EXU__DOT__alu_result))))));
    bufp->fullCData(oldp+381,(vlSelf->top__DOT__EXU__DOT__current_state),2);
    bufp->fullCData(oldp+382,(vlSelf->top__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+383,(((IData)(4U) + vlSelf->top__DOT__EXU__DOT__pc)),32);
    bufp->fullCData(oldp+384,(vlSelf->top__DOT__IDU__DOT__next_state),2);
    bufp->fullIData(oldp+385,(vlSelf->top__DOT__IFU__DOT__npc),32);
    bufp->fullCData(oldp+386,(vlSelf->top__DOT__IFU__DOT__next_state),3);
    bufp->fullBit(oldp+387,(vlSelf->top__DOT__LSU__DOT__arvalid));
    bufp->fullBit(oldp+388,(vlSelf->top__DOT__LSU__DOT__rready));
    bufp->fullBit(oldp+389,(vlSelf->top__DOT__LSU__DOT__awvalid));
    bufp->fullIData(oldp+390,(vlSelf->top__DOT__LSU__DOT__wdata),32);
    bufp->fullCData(oldp+391,((0xffU & ((1U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                         ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                            << (3U 
                                                & vlSelf->top__DOT__LSU__DOT__alu_result))
                                         : ((3U == (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))
                                             ? ((IData)(vlSelf->top__DOT__wmask_exu_to_lsu) 
                                                << 
                                                (3U 
                                                 & vlSelf->top__DOT__LSU__DOT__alu_result))
                                             : (IData)(vlSelf->top__DOT__wmask_exu_to_lsu))))),8);
    bufp->fullBit(oldp+392,(vlSelf->top__DOT__LSU__DOT__wvalid));
    bufp->fullBit(oldp+393,(vlSelf->top__DOT__LSU__DOT__bready));
    bufp->fullCData(oldp+394,(vlSelf->top__DOT__LSU__DOT__current_state),2);
    bufp->fullCData(oldp+395,(vlSelf->top__DOT__LSU__DOT__next_state),2);
    bufp->fullIData(oldp+396,(vlSelf->top__DOT__WBU__DOT__mem_data),32);
    bufp->fullIData(oldp+397,(vlSelf->top__DOT__WBU__DOT__datamem_readdata),32);
    bufp->fullIData(oldp+398,(vlSelf->top__DOT__WBU__DOT__alu_result),32);
    bufp->fullIData(oldp+399,(vlSelf->top__DOT__WBU__DOT__rs1),32);
    bufp->fullIData(oldp+400,(vlSelf->top__DOT__WBU__DOT__csr_rdata_l_rs1),32);
    bufp->fullCData(oldp+401,(vlSelf->top__DOT__WBU__DOT__rmask),3);
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__WBU__DOT__wb_src));
    bufp->fullBit(oldp+403,(vlSelf->top__DOT__WBU__DOT__csr_wdata_src));
    bufp->fullCData(oldp+404,(vlSelf->top__DOT__WBU__DOT__current_state),2);
    bufp->fullCData(oldp+405,(vlSelf->top__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+406,((3U & vlSelf->top__DOT__WBU__DOT__alu_result)),2);
    bufp->fullIData(oldp+407,((((- (IData)((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+408,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 0x10U)))),32);
    bufp->fullIData(oldp+409,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+410,((((- (IData)((1U & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata))),32);
    bufp->fullIData(oldp+411,((vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                               >> 0x18U)),32);
    bufp->fullIData(oldp+412,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 0x10U))),32);
    bufp->fullIData(oldp+413,((0xffU & (vlSelf->top__DOT__WBU__DOT__datamem_readdata 
                                        >> 8U))),32);
    bufp->fullIData(oldp+414,((0xffU & vlSelf->top__DOT__WBU__DOT__datamem_readdata)),32);
    bufp->fullIData(oldp+415,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+416,(vlSelf->top__DOT__csr_reg[0]),32);
    bufp->fullIData(oldp+417,(vlSelf->top__DOT__csr_reg[1]),32);
    bufp->fullIData(oldp+418,(vlSelf->top__DOT__csr_reg[2]),32);
    bufp->fullIData(oldp+419,(vlSelf->top__DOT__csr_reg[3]),32);
    bufp->fullIData(oldp+420,(vlSelf->top__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+421,(vlSelf->top__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+422,(vlSelf->top__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+423,(vlSelf->top__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+424,(vlSelf->top__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+425,(vlSelf->top__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+426,(vlSelf->top__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+427,(vlSelf->top__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+428,(vlSelf->top__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+429,(vlSelf->top__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+430,(vlSelf->top__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+431,(vlSelf->top__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+432,(vlSelf->top__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+433,(vlSelf->top__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+434,(vlSelf->top__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+435,(vlSelf->top__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+436,(vlSelf->top__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+437,(vlSelf->top__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+438,(vlSelf->top__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+439,(vlSelf->top__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+440,(vlSelf->top__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+441,(vlSelf->top__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+442,(vlSelf->top__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+443,(vlSelf->top__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+444,(vlSelf->top__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+445,(vlSelf->top__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+446,(vlSelf->top__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+447,(vlSelf->top__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+448,(vlSelf->top__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+449,(vlSelf->top__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+450,(vlSelf->top__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+451,(vlSelf->top__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+452,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[0]),32);
    bufp->fullIData(oldp+453,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[1]),32);
    bufp->fullIData(oldp+454,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[2]),32);
    bufp->fullIData(oldp+455,(vlSelf->top__DOT____Vcellout__IDU__csr_reg[3]),32);
    bufp->fullIData(oldp+456,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0]),32);
    bufp->fullIData(oldp+457,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1]),32);
    bufp->fullIData(oldp+458,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2]),32);
    bufp->fullIData(oldp+459,(vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3]),32);
    bufp->fullIData(oldp+460,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+461,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+462,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+463,(vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+464,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0]),32);
    bufp->fullIData(oldp+465,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1]),32);
    bufp->fullIData(oldp+466,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2]),32);
    bufp->fullIData(oldp+467,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3]),32);
    bufp->fullIData(oldp+468,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4]),32);
    bufp->fullIData(oldp+469,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5]),32);
    bufp->fullIData(oldp+470,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6]),32);
    bufp->fullIData(oldp+471,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7]),32);
    bufp->fullIData(oldp+472,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8]),32);
    bufp->fullIData(oldp+473,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9]),32);
    bufp->fullIData(oldp+474,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[10]),32);
    bufp->fullIData(oldp+475,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[11]),32);
    bufp->fullIData(oldp+476,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[12]),32);
    bufp->fullIData(oldp+477,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[13]),32);
    bufp->fullIData(oldp+478,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[14]),32);
    bufp->fullIData(oldp+479,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[15]),32);
    bufp->fullIData(oldp+480,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[16]),32);
    bufp->fullIData(oldp+481,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[17]),32);
    bufp->fullIData(oldp+482,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[18]),32);
    bufp->fullIData(oldp+483,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[19]),32);
    bufp->fullIData(oldp+484,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[20]),32);
    bufp->fullIData(oldp+485,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[21]),32);
    bufp->fullIData(oldp+486,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[22]),32);
    bufp->fullIData(oldp+487,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[23]),32);
    bufp->fullIData(oldp+488,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[24]),32);
    bufp->fullIData(oldp+489,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[25]),32);
    bufp->fullIData(oldp+490,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[26]),32);
    bufp->fullIData(oldp+491,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[27]),32);
    bufp->fullIData(oldp+492,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[28]),32);
    bufp->fullIData(oldp+493,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[29]),32);
    bufp->fullIData(oldp+494,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[30]),32);
    bufp->fullIData(oldp+495,(vlSelf->top__DOT____Vcellout__Rgefile__reg_file[31]),32);
    bufp->fullIData(oldp+496,(vlSelf->top__DOT__Rgefile__DOT__rf[0]),32);
    bufp->fullIData(oldp+497,(vlSelf->top__DOT__Rgefile__DOT__rf[1]),32);
    bufp->fullIData(oldp+498,(vlSelf->top__DOT__Rgefile__DOT__rf[2]),32);
    bufp->fullIData(oldp+499,(vlSelf->top__DOT__Rgefile__DOT__rf[3]),32);
    bufp->fullIData(oldp+500,(vlSelf->top__DOT__Rgefile__DOT__rf[4]),32);
    bufp->fullIData(oldp+501,(vlSelf->top__DOT__Rgefile__DOT__rf[5]),32);
    bufp->fullIData(oldp+502,(vlSelf->top__DOT__Rgefile__DOT__rf[6]),32);
    bufp->fullIData(oldp+503,(vlSelf->top__DOT__Rgefile__DOT__rf[7]),32);
    bufp->fullIData(oldp+504,(vlSelf->top__DOT__Rgefile__DOT__rf[8]),32);
    bufp->fullIData(oldp+505,(vlSelf->top__DOT__Rgefile__DOT__rf[9]),32);
    bufp->fullIData(oldp+506,(vlSelf->top__DOT__Rgefile__DOT__rf[10]),32);
    bufp->fullIData(oldp+507,(vlSelf->top__DOT__Rgefile__DOT__rf[11]),32);
    bufp->fullIData(oldp+508,(vlSelf->top__DOT__Rgefile__DOT__rf[12]),32);
    bufp->fullIData(oldp+509,(vlSelf->top__DOT__Rgefile__DOT__rf[13]),32);
    bufp->fullIData(oldp+510,(vlSelf->top__DOT__Rgefile__DOT__rf[14]),32);
    bufp->fullIData(oldp+511,(vlSelf->top__DOT__Rgefile__DOT__rf[15]),32);
    bufp->fullIData(oldp+512,(vlSelf->top__DOT__Rgefile__DOT__rf[16]),32);
    bufp->fullIData(oldp+513,(vlSelf->top__DOT__Rgefile__DOT__rf[17]),32);
    bufp->fullIData(oldp+514,(vlSelf->top__DOT__Rgefile__DOT__rf[18]),32);
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__Rgefile__DOT__rf[19]),32);
    bufp->fullIData(oldp+516,(vlSelf->top__DOT__Rgefile__DOT__rf[20]),32);
    bufp->fullIData(oldp+517,(vlSelf->top__DOT__Rgefile__DOT__rf[21]),32);
    bufp->fullIData(oldp+518,(vlSelf->top__DOT__Rgefile__DOT__rf[22]),32);
    bufp->fullIData(oldp+519,(vlSelf->top__DOT__Rgefile__DOT__rf[23]),32);
    bufp->fullIData(oldp+520,(vlSelf->top__DOT__Rgefile__DOT__rf[24]),32);
    bufp->fullIData(oldp+521,(vlSelf->top__DOT__Rgefile__DOT__rf[25]),32);
    bufp->fullIData(oldp+522,(vlSelf->top__DOT__Rgefile__DOT__rf[26]),32);
    bufp->fullIData(oldp+523,(vlSelf->top__DOT__Rgefile__DOT__rf[27]),32);
    bufp->fullIData(oldp+524,(vlSelf->top__DOT__Rgefile__DOT__rf[28]),32);
    bufp->fullIData(oldp+525,(vlSelf->top__DOT__Rgefile__DOT__rf[29]),32);
    bufp->fullIData(oldp+526,(vlSelf->top__DOT__Rgefile__DOT__rf[30]),32);
    bufp->fullIData(oldp+527,(vlSelf->top__DOT__Rgefile__DOT__rf[31]),32);
    bufp->fullCData(oldp+528,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+529,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+530,(vlSelf->top__DOT__IDU__DOT__pc),32);
    bufp->fullIData(oldp+531,(vlSelf->top__DOT__imm_idu_to_exu),32);
    bufp->fullBit(oldp+532,(vlSelf->top__DOT__a_in_src_idu_to_exu));
    bufp->fullCData(oldp+533,(vlSelf->top__DOT__b_in_src_idu_to_exu),2);
    bufp->fullCData(oldp+534,(vlSelf->top__DOT__pc_srcs_idu_to_exu),3);
    bufp->fullBit(oldp+535,(vlSelf->top__DOT__adder_a_src_idu_to_exu));
    bufp->fullBit(oldp+536,(vlSelf->top__DOT__adder_out_src_idu_to_exu));
    bufp->fullCData(oldp+537,(vlSelf->top__DOT__alu_op_idu_to_exu),4);
    bufp->fullBit(oldp+538,(vlSelf->top__DOT__MemRead_idu_to_exu));
    bufp->fullBit(oldp+539,(vlSelf->top__DOT__MemWrite_idu_to_exu));
    bufp->fullCData(oldp+540,(vlSelf->top__DOT__wmask_idu_to_exu),8);
    bufp->fullCData(oldp+541,(vlSelf->top__DOT__rmask_idu_to_exu),3);
    bufp->fullBit(oldp+542,(vlSelf->top__DOT__wb_src_idu_to_exu));
    bufp->fullBit(oldp+543,(vlSelf->top__DOT__csr_write_idu_to_exu));
    bufp->fullBit(oldp+544,(vlSelf->top__DOT__csr_wdata_src_idu_to_exu));
    bufp->fullBit(oldp+545,(vlSelf->top__DOT__reg_write_idu_to_exu));
    bufp->fullCData(oldp+546,((0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+547,(vlSelf->top__DOT__csr_write));
    bufp->fullIData(oldp+548,(vlSelf->top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+549,(vlSelf->top__DOT__IDU__DOT__inst),32);
    bufp->fullCData(oldp+550,((0x7fU & vlSelf->top__DOT__IDU__DOT__inst)),7);
    bufp->fullCData(oldp+551,((7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+552,((vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+553,(vlSelf->clk));
    bufp->fullBit(oldp+554,(vlSelf->rst_n));
    bufp->fullIData(oldp+555,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+556,(vlSelf->top__DOT__Rgefile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__IDU__DOT__inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+557,(((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))
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
    bufp->fullIData(oldp+558,(vlSelf->top__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+559,(0U),32);
    bufp->fullBit(oldp+560,(0U));
    bufp->fullCData(oldp+561,(0U),8);
    bufp->fullCData(oldp+562,(0U),2);
    bufp->fullCData(oldp+563,(1U),2);
    bufp->fullCData(oldp+564,(2U),2);
    bufp->fullIData(oldp+565,(0x20U),32);
    bufp->fullIData(oldp+566,(4U),32);
    bufp->fullCData(oldp+567,(0U),3);
    bufp->fullCData(oldp+568,(1U),3);
    bufp->fullCData(oldp+569,(2U),3);
    bufp->fullCData(oldp+570,(3U),3);
    bufp->fullCData(oldp+571,(4U),3);
    bufp->fullIData(oldp+572,(0x80000000U),32);
    bufp->fullIData(oldp+573,(vlSelf->top__DOT__LSU__DOT__rs2),32);
    bufp->fullIData(oldp+574,(vlSelf->top__DOT__LSU__DOT__csr_rdata_l_rs1),32);
    bufp->fullBit(oldp+575,(vlSelf->top__DOT__LSU__DOT__wvalid_tmp));
    bufp->fullCData(oldp+576,(3U),2);
    bufp->fullBit(oldp+577,(vlSelf->top__DOT__Mem__DOT__b_state));
    bufp->fullBit(oldp+578,(vlSelf->top__DOT__Mem__DOT__wvalid));
    bufp->fullBit(oldp+579,(vlSelf->top__DOT__Mem__DOT__flag_write));
    bufp->fullIData(oldp+580,(5U),32);
    bufp->fullBit(oldp+581,(vlSelf->top__DOT__UART__DOT__b_state));
    bufp->fullBit(oldp+582,(vlSelf->top__DOT__UART__DOT__wvalid));
    bufp->fullBit(oldp+583,(vlSelf->top__DOT__UART__DOT__flag_write));
}
