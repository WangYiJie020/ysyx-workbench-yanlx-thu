`include "header.v"

import "DPI-C" function void idu_counter_return(input byte inst_opcode);

module idu(
    input clk,
    input rst_n,
    input reset_ifu,
    //regfiles
    output [`REG_ADDR-1:0] raddr1,
    output [`REG_ADDR-1:0] raddr2,
    input [`CPU_WIDTH-1:0] rdata1,
    input [`CPU_WIDTH-1:0] rdata2,
    input [`CPU_WIDTH-1:0] a5,
    //ifu to idu
    input [`PC_WIDTH-1:0] pc_i,
    input [`INST_WIDTH-1:0] inst_i,
    input idu_valid_i,
    output reg idu_ready_o,
    //idu to exu
    output [`PC_WIDTH-1:0] pc_o,
    output [`CPU_WIDTH-1:0] rs1_o,
    output [`CPU_WIDTH-1:0] rs2_o,
    output [`CPU_WIDTH-1:0] imm_o,
    output [`CPU_WIDTH-1:0] csr_rdata_o,
    output a_in_src_o,
    output [1:0] b_in_src_o,
    output [2:0] pc_srcs_o,
    output adder_a_src_o,
    output adder_out_src_o,
    output [3:0] alu_op,
    //idu to exu to lsu or wbu
    output MemRead_o,
    output MemWrite_o,
    output [3:0] wmask_o,
    output [2:0] rmask_o,
    output wb_src_o,
    output csr_write_o,
    output csr_wdata_src_o,
    output reg_write_o,
    output [`REG_ADDR-1:0] waddr_o,
    output reg idu_valid_o,
    input idu_ready_i,
    //write csr
    input csr_write_i,
    input [`CPU_WIDTH-1:0] csr_wdata_i,

    output [`CPU_WIDTH-1:0] csr_reg [3:0], //difftest

    output fencei,

    input [4:0]exu_rd,
    input [4:0]lsu_rd,
    input [4:0]wbu_rd
    
    
);
    reg [`PC_WIDTH-1:0] pc;
    reg [`INST_WIDTH-1:0] inst;

    wire [6:0] opcode;

    assign rs1_o = rdata1;
    assign rs2_o = rdata2;
    assign pc_o = pc;
    assign waddr_o = inst[11:7];
    assign raddr1 = inst[19:15];
    assign raddr2 = inst[24:20];
    assign opcode = inst[6:0];

    wire [7:0] wmask_tmp;
    assign wmask_o = wmask_tmp[3:0];

   
    wire opcode_r,opcode_i,opcode_s,opcode_sb,opcode_u,opcode_uj;
    reg isRAW;
    wire exu_raw,lsu_raw,wbu_raw;

    assign opcode_r = (opcode == 7'b0110011) ? 1 : 0;
    assign opcode_i = (opcode == 7'b0010011 || opcode == 7'b0000011 || opcode == 7'b1100111) ? 1 : 0;
    assign opcode_s = (opcode == 7'b0100011) ? 1 : 0;
    assign opcode_sb = (opcode == 7'b1100011) ? 1 : 0;
    assign opcode_u = (opcode == 7'b0110111 || opcode == 7'b0010111) ? 1 : 0;
    assign opcode_uj = (opcode == 7'b1101111) ? 1 : 0; 

    assign exu_raw = opcode_r ? (((raddr1 == exu_rd && raddr1 != 0) || (raddr2 == exu_rd && raddr2 != 0))? 1 : 0) :
                                    ((opcode_u || opcode_uj)? 0 : ((raddr1 == exu_rd && raddr1 != 0)? 1 : 0));

    assign lsu_raw = opcode_r ? (((raddr1 == lsu_rd && raddr1 != 0) || (raddr2 == lsu_rd && raddr2 != 0))? 1 : 0) :
                                    ((opcode_u || opcode_uj)? 0 : ((raddr1 == lsu_rd && raddr1 != 0)? 1 : 0));

    assign wbu_raw = opcode_r ? (((raddr1 == wbu_rd && raddr1 != 0) || (raddr2 == wbu_rd && raddr2 != 0))? 1 : 0) :
                                    ((opcode_u || opcode_uj)? 0 : ((raddr1 == wbu_rd && raddr1 != 0)? 1 : 0));

    assign isRAW = ((exu_raw) && (current_state == S_RECEIVE)) |
                   ((lsu_raw) && (current_state == S_RECEIVE)) |
                   ((wbu_raw) && (current_state == S_RECEIVE));

    controler Controler(
        .inst(inst),
        .a_in_src(a_in_src_o),
        .b_in_src(b_in_src_o),
        .reg_write(reg_write_o),
        .adder_a_src(adder_a_src_o),
        .pc_srcs(pc_srcs_o),
        .MemRead(MemRead_o),
        .MemWrite(MemWrite_o),
        .wmask(wmask_tmp),
        .wb_src(wb_src_o),
        .rmask(rmask_o),
        .csr_write(csr_write_o),
        .adder_out_src(adder_out_src_o),
        .csr_wdata_src(csr_wdata_src_o)
    );

    
    sext SEXT (
        .inst(inst),
        .data(imm_o)
    );

    csr CSR(
        .clk(clk),
        .wen(csr_write_i),
        .inst(inst),
        .wdata(csr_wdata_i),
        .NO(a5),
        .pc(pc),
        .rdata(csr_rdata_o),
        .csr_reg(csr_reg) //for difftest
    );
    
    alu_control ALU_Control(
        .inst(inst),
        .alu_op(alu_op)
    );

    localparam S_IDLE = 2'b00,S_RECEIVE = 2'b01,S_SEND = 2'b10;

    reg [1:0] current_state,next_state;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (idu_valid_i == 1 && idu_ready_o == 1) begin
                    next_state = S_RECEIVE;
                end else begin
                    next_state = current_state;
                end
            end
            
            S_RECEIVE: begin
                if (idu_valid_o == 1 && idu_ready_i == 1 && isRAW==0) begin
                    next_state = S_SEND;  
                end else begin
                    next_state = current_state;
                end
            end
            
            S_SEND: begin
                //if(idu_valid_o == 1 && idu_ready_i == 1) 
                    next_state = S_IDLE;
                //else 
                    //next_state = current_state;                 
            end
            
          
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n || reset_ifu==1) begin
            current_state <= S_IDLE;
            idu_valid_o <= 0;
            idu_ready_o <= 0;
        end else begin
            current_state <= next_state;
            if(inst==32'h0000100f) fencei <= 1;
            else fencei <= 0;

            if(current_state == S_IDLE) idu_ready_o <= 1;
            else if(current_state == S_RECEIVE) begin
                idu_ready_o <= 0;
            end
            else if(current_state == S_SEND) idu_ready_o <= 0;

            if(current_state == S_IDLE) begin
                idu_valid_o <= 0;
                //isRAW <= 0;
            end
            else if(current_state == S_RECEIVE) begin 
                //idu_valid_o <= 1;
                pc <= pc_i;
                inst <= inst_i;                    
                //end
                //else 
                //if(flag==1 && wbu_submit) begin 
                
               // end
                if(isRAW ) begin//current_state <= S_RECEIVE;
                    idu_valid_o <= 0;
                end
                else begin 
                    idu_valid_o <= 1;
                    
                end
                
                
            end else if (current_state == S_SEND)begin
                idu_valid_o <= 0;
                idu_counter_return({1'b0,inst[6:0]});
                
            end else begin
                idu_valid_o <= 0;
            end
            
        end
    end





endmodule