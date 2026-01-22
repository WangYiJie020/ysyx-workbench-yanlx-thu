`include "header.v"

import "DPI-C" function void difftest_next_step(input byte difftest_check);

module wbu(
    input clk,
    input rst_n,
    //lsu to wbu
    input [`CPU_WIDTH-1:0] alu_result_i,
    input [`CPU_WIDTH-1:0] rs1_i,
    input [`CPU_WIDTH-1:0] csr_rdata_l_rs1_i,
    input [`CPU_WIDTH-1:0] datamem_readdata_i,
    input [2:0] rmask_i,
    input wb_src_i,
    input csr_write_i,
    input csr_wdata_src_i,
    input reg_write_i,
    input [`REG_ADDR-1:0] waddr_i,

    input wbu_valid_i,
    output reg wbu_ready_o,

    //wbu to ifu

    //write back
    output [`CPU_WIDTH-1:0] csr_wdata_o,
    output [`CPU_WIDTH-1:0] wdata_o,
    output csr_write_o,
    output reg_write_o,
    output reg [`REG_ADDR-1:0] waddr_o
);

    wire [`CPU_WIDTH-1:0] mem_data;
    reg [`CPU_WIDTH-1:0] datamem_readdata;
    reg [`CPU_WIDTH-1:0] alu_result,rs1,csr_rdata_l_rs1;
    reg [2:0] rmask;
    reg wb_src;
    reg csr_wdata_src;
    reg difftest_check;
    reg difftest_check_flag;

    sext_mem SEXT_Mem(
        .read_data(datamem_readdata),
        .addr_low2(alu_result[1:0]),
        .rmask(rmask),
        .mem_data(mem_data)
    );

    mux21 WB(
        .d0(alu_result),
        .d1(mem_data),
        .sel(wb_src),
        .out(wdata_o)
    );

    mux21 Csr_Wdata(
        .d0(rs1),
        .d1(csr_rdata_l_rs1),
        .sel(csr_wdata_src),
        .out(csr_wdata_o)
    );

    localparam S_IDLE = 2'b00,S_RECEIVE = 2'b01,S_SEND = 2'b10;

    reg [1:0] current_state,next_state;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (wbu_valid_i == 1 && wbu_ready_o == 1) begin
                    next_state = S_RECEIVE;
                end else begin
                    next_state = current_state;
                end
            end
            
            S_RECEIVE: begin
                next_state = S_SEND;  
                
            end
            
            S_SEND: begin
                next_state = S_IDLE;                 
            end
            
          
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n) begin
            current_state <= S_IDLE;
            wbu_ready_o <= 0;
        end else begin
            current_state <= next_state;

            if(current_state == S_IDLE) wbu_ready_o <= 1;
            else if(current_state == S_RECEIVE) wbu_ready_o <= 0;
            else if(current_state == S_SEND) wbu_ready_o <= 1;

            if(current_state == S_IDLE) begin 
                
                difftest_check <= 0; 
                difftest_check_flag <= 0;
            end
            else if(current_state == S_RECEIVE) begin 
                
                alu_result <= alu_result_i;
                rs1 <= rs1_i;
                csr_rdata_l_rs1 <= csr_rdata_l_rs1_i;
                datamem_readdata <= datamem_readdata_i;
                rmask <= rmask_i;
                wb_src <= wb_src_i;
                csr_wdata_src <= csr_wdata_src_i;
                csr_write_o <= csr_write_i;
                reg_write_o <= reg_write_i;
                waddr_o <= waddr_i;
                difftest_check <= 0; 
                
                if(difftest_check == 0 && difftest_check_flag == 0) begin 
                    difftest_check <= 1; //此时检查寄存器
                    difftest_check_flag <= 1;
                end
                else difftest_check <= 0;
                
            end else if (current_state == S_SEND)begin
                difftest_check_flag <= 0;
                
                
            end else begin
                difftest_check <= 0; 
                difftest_check_flag <= 0;
                
            end
            
        end
    end

    always@(*) begin
        difftest_next_step({7'd0,difftest_check});
    end

endmodule