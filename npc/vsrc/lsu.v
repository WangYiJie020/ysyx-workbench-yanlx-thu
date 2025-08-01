`include "header.v"
module lsu(
    input clk,
    input rst_n,
    //exu to lsu
    input [`CPU_WIDTH-1:0] alu_result_i,
    input [`CPU_WIDTH-1:0] rs1_i,
    input [`CPU_WIDTH-1:0] rs2_i,
    input [`CPU_WIDTH-1:0] csr_rdata_l_rs1_i,
    input [`PC_WIDTH-1:0] npc_i,
    input MemRead_i,
    input MemWrite_i,
    input [7:0] wmask_i,
    input [2:0] rmask_i,
    input wb_src_i,
    input csr_write_i,
    input csr_wdata_src_i,
    input reg_write_i,
    input [`REG_ADDR-1:0] waddr_i,

    input lsu_valid_i,
    output reg lsu_ready_o,
    
    //lsu to wbu
    output [`CPU_WIDTH-1:0] alu_result_o,
    output [`CPU_WIDTH-1:0] rs1_o,
    output reg [`CPU_WIDTH-1:0] csr_rdata_l_rs1_o,
    output [`CPU_WIDTH-1:0] datamem_readdata_o,
    output reg [`PC_WIDTH-1:0] npc_o,
    output [2:0] rmask_o,
    output reg wb_src_o,
    output reg csr_write_o,
    output reg csr_wdata_src_o,
    output reg reg_write_o,
    output reg [`REG_ADDR-1:0] waddr_o,

    output reg lsu_valid_o,
    input lsu_ready_i

);
    reg [`CPU_WIDTH-1:0] alu_result;
    reg [`CPU_WIDTH-1:0] rs1;
    reg [`CPU_WIDTH-1:0] rs2;
    reg [`CPU_WIDTH-1:0] csr_rdata_l_rs1;
    reg MemRead;
    reg MemWrite;
    reg [7:0] wmask;
    reg [2:0] rmask;

    assign rmask_o = rmask;
    assign rs1_o = rs1;
    assign alu_result_o = alu_result;

    data_mem Data_Mem(
        .MemRead(MemRead),
        .MemWrite(MemWrite),
        .address(alu_result),
        .write_data(rs2),
        .wmask(wmask),
        .rmask(rmask),
        .read_data(datamem_readdata_o)
    );
/*
    assign lsu_ready_o = lsu_ready_i;

    always@(posedge clk) begin
        if(lsu_valid_i && lsu_ready_i) begin
            alu_result <= alu_result_i;
            rs1 <= rs1_i;
            rs2 <= rs2_i;            
            MemRead <= MemRead_i;
            MemWrite <= MemWrite_i;
            wmask <= wmask_i;
            rmask <= rmask_i;
            alu_result <= alu_result_i;

            wb_src_o <= wb_src_i;
            csr_write_o <= csr_write_i;
            csr_wdata_src_o <= csr_wdata_src_i;
            reg_write_o <= reg_write_i;
            npc_o <= npc_i;
            csr_rdata_l_rs1_o <= csr_rdata_l_rs1_i;
            waddr_o <= waddr_i;
        end
    end

    always@(posedge clk) begin
        if(!rst_n) lsu_valid_o <= 1'b0;
        else if(lsu_ready_o) lsu_valid_o <= lsu_valid_i;
    end
*/

    localparam S_IDLE = 2'b00,S_RECEIVE = 2'b01,S_SEND = 2'b10,S_WAIT_SEND = 2'b11;

    reg [1:0] current_state,next_state;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (lsu_valid_i == 1 && lsu_ready_o == 1) begin
                    next_state = S_RECEIVE;
                end else begin
                    next_state = current_state;
                end
            end
            
            S_RECEIVE: begin
                if (lsu_valid_o == 1 && lsu_ready_i == 1) begin
                    next_state = S_SEND;  
                end else begin
                    next_state = current_state;
                end
            end

            //S_WAIT_SEND: begin
            //    if (lsu_valid_o == 1 && lsu_ready_i == 1) begin
            //        next_state = S_SEND;  
            //    end else begin
            //        next_state = current_state;
            //    end
            //end
            
            S_SEND: begin
                next_state = S_IDLE;                 
            end
            
          
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n) begin
            current_state <= S_IDLE;
            lsu_valid_o <= 0;
            lsu_ready_o <= 0;
        end else begin
            current_state <= next_state;
            if(current_state == S_IDLE) lsu_ready_o <= 1;
            else if(current_state == S_RECEIVE) lsu_ready_o <= 0;
            if(current_state == S_RECEIVE) begin 
                lsu_valid_o <= 1;

                alu_result <= alu_result_i;
                rs1 <= rs1_i;
                rs2 <= rs2_i;            
                MemRead <= MemRead_i;
                MemWrite <= MemWrite_i;
                wmask <= wmask_i;
                rmask <= rmask_i;
                alu_result <= alu_result_i;
                wb_src_o <= wb_src_i;
                csr_write_o <= csr_write_i;
                csr_wdata_src_o <= csr_wdata_src_i;
                reg_write_o <= reg_write_i;
                npc_o <= npc_i;
                csr_rdata_l_rs1_o <= csr_rdata_l_rs1_i;
                waddr_o <= waddr_i;
            //end else if (current_state == S_WAIT_SEND)begin
            //    lsu_valid_o <= 1;
                //MemRead <= 0;
                //MemWrite <= 0;
            //end else if (current_state == S_SEND)begin
                //MemRead <= 0;
                //MemWrite <= 0;
                lsu_valid_o <= 1;
            end else begin
                MemRead <= 0;
                MemWrite <= 0;
                lsu_valid_o <= 0;
            end
            
        end
    end

endmodule