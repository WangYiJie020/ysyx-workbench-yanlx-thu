`include "header.v"
module exu(
    input clk,
    input rst_n,
    input reset_ifu,
    //idu to exu
    input [`PC_WIDTH-1:0] pc_i,
    input [`CPU_WIDTH-1:0] rs1_i,
    input [`CPU_WIDTH-1:0] rs2_i,
    input [`CPU_WIDTH-1:0] imm_i,
    input [`CPU_WIDTH-1:0] csr_rdata_i,
    input a_in_src_i,
    input [1:0] b_in_src_i,
    input [2:0] pc_srcs_i,
    input adder_a_src_i,
    input adder_out_src_i,
    input [3:0] alu_op_i,
    //idu to exu to lsu or wbu
    input MemRead_i,
    input MemWrite_i,
    input [3:0] wmask_i,
    input [2:0] rmask_i,
    input wb_src_i,
    input csr_write_i,
    input csr_wdata_src_i,
    input reg_write_i,
    input [`REG_ADDR-1:0] waddr_i,

    input exu_valid_i,
    output reg exu_ready_o,

    //exu to lsu
    output [`CPU_WIDTH-1:0] alu_result_o,
    output [`CPU_WIDTH-1:0] rs1_o,
    output [`CPU_WIDTH-1:0] rs2_o,
    output [`CPU_WIDTH-1:0] csr_rdata_l_rs1_o,
    output [`PC_WIDTH-1:0] npc_o,
    output reg MemRead_o,
    output reg MemWrite_o,
    output reg [3:0] wmask_o,
    output reg [2:0] rmask_o,
    output reg wb_src_o,
    output reg csr_write_o,
    output reg csr_wdata_src_o,
    output reg reg_write_o,
    output reg [`REG_ADDR-1:0] waddr_o,

    output reg exu_valid_o,
    input exu_ready_i,

    output npc_valid,
    output rd_exu_valid,
    
    output [`CPU_WIDTH-1:0] pc_o //difftest
    
);

    reg [`PC_WIDTH-1:0] pc;
    reg [`CPU_WIDTH-1:0] rs1,rs2,imm,csr_rdata;
    reg a_in_src;
    reg [1:0] b_in_src;
    reg [2:0] pc_srcs;
    reg adder_a_src;
    reg adder_out_src;
    reg [3:0] alu_op;
    reg npc_flag;

    wire [`CPU_WIDTH-1:0] a_in,b_in,a_out,add_out,pc_new,alu_result;
    wire [`PC_WIDTH-1:0] npc;
    wire zero;

    assign alu_result_o = alu_result;
    assign rs1_o = rs1;
    assign rs2_o = rs2;
    assign csr_rdata_l_rs1_o = csr_rdata | rs1;
    assign npc_o = npc;

    mux21 Adder_A_Src(
        .d0(pc),
        .d1(rs1),
        .sel(adder_a_src),
        .out(a_out)
    );

    adder Adder(
        .a(a_out),
        .b(imm),
        .out(add_out)
    );

    mux21 Adder_Out(
        .d0(add_out),
        .d1(csr_rdata),
        .sel(adder_out_src),
        .out(pc_new)
    );

    branch_control Branch_Control(
        .pc4(pc+4),
        .pc_new(pc_new),
        .pc_srcs(pc_srcs),
        .zero(zero),
        .alu_result(alu_result),
        .npc(npc)
    );

    mux21 ALU_A_Src(
        .d0(rs1),
        .d1(pc),
        .sel(a_in_src),
        .out(a_in)
    );

    mux41 ALU_B_Src(
        .d0(rs2),
        .d1(imm),
        .d2(32'd4),
        .d3(csr_rdata),
        .sel(b_in_src),
        .out(b_in)
    );

    alu ALU(
        .a(a_in),
        .b(b_in),
        .op(alu_op),
        .alu_result(alu_result),
        .zero(zero)
    );


localparam S_IDLE = 2'b00,S_RECEIVE = 2'b01,S_SEND = 2'b10;

    reg [1:0] current_state,next_state;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (exu_valid_i == 1 && exu_ready_o == 1) begin
                    next_state = S_RECEIVE;
                end else begin
                    next_state = current_state;
                end
            end
            
            S_RECEIVE: begin
                //if (exu_valid_o == 1 && exu_ready_i == 1) begin
                    next_state = S_SEND;  
                //end else begin
                //    next_state = current_state;
                //end
            end
            
            S_SEND: begin
                if (exu_valid_o == 1 && exu_ready_i == 1) begin
                    next_state = S_IDLE;  
                end else begin
                    next_state = current_state;
                end                
            end
            
          
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n) begin
            current_state <= S_IDLE;
            exu_valid_o <= 0;
            exu_ready_o <= 0;
        end else begin
            current_state <= next_state;
            
            if(current_state == S_IDLE) exu_ready_o <= 1;
            else if(current_state == S_RECEIVE) exu_ready_o <= 0;
            else if(current_state == S_SEND) exu_ready_o <= 0;

            if(current_state == S_IDLE) begin
                exu_valid_o <= 0;
                npc_valid <= 0;
                rd_exu_valid <= 0;
                npc_flag <= 0;

                if (exu_valid_i == 1 && exu_ready_o == 1) begin
                    pc <= pc_i;
                    rs1 <= rs1_i;
                    rs2 <=rs2_i;
                    imm <= imm_i;
                    csr_rdata <= csr_rdata_i;
                    a_in_src <= a_in_src_i;
                    b_in_src <= b_in_src_i;
                    pc_srcs <= pc_srcs_i;
                    adder_a_src <= adder_a_src_i;
                    adder_out_src <= adder_out_src_i;
                    alu_op <= alu_op_i;
                    MemRead_o <= MemRead_i;
                    MemWrite_o <= MemWrite_i;
                    wmask_o <= wmask_i;
                    rmask_o <= rmask_i;
                    wb_src_o <= wb_src_i;
                    csr_write_o <= csr_write_i;
                    csr_wdata_src_o <= csr_wdata_src_i;
                    reg_write_o <= reg_write_i;
                    waddr_o <= waddr_i;
                    pc_o <= pc_i;
                end
                
            end
            else if(current_state == S_RECEIVE) begin 
                exu_valid_o <= 1;

                
                rd_exu_valid <= 0;

                
                
                //if(npc_flag==0) begin
                    npc_valid <= 1;
                    //npc_flag <= 1;
                //end
                //else npc_valid <= 0;
                //if(exu_valid_o == 1 && exu_ready_i == 1) exu_valid_o <= 0;
            end else if (current_state == S_SEND)begin
                if(exu_valid_o == 1 && exu_ready_i == 1) exu_valid_o <= 0;
                npc_flag <= 0;
                npc_valid <= 0;
                rd_exu_valid <= 1;
            end 

            

            
            
        end
    end

endmodule