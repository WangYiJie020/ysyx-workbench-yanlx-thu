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
    input lsu_ready_i,

    //to mem
    output [`CPU_WIDTH-1:0] araddr_o,
    output arvalid_o,
    input arready_i,

    input [`CPU_WIDTH-1:0] rdata_i,
    input rresp_i,
    input rvalid_i,
    output rready_o,

    output [`CPU_WIDTH-1:0] awaddr_o,
    output awvalid_o,
    input awready_i,

    output [`CPU_WIDTH-1:0] wdata_o,
    output [7:0] wstrb_o,
    output wvalid_o,
    input wready_i,

    input bresp_i,
    input bvalid_i,
    output bready_o

);
    reg [`CPU_WIDTH-1:0] alu_result;
    reg [`CPU_WIDTH-1:0] rs1;
    reg [`CPU_WIDTH-1:0] rs2;
    reg [`CPU_WIDTH-1:0] csr_rdata_l_rs1;
    reg [2:0] rmask;

    
    reg flag,wvalid_tmp;

    assign rmask_o = rmask;
    assign rs1_o = rs1;
    assign alu_result_o = alu_result;
    //assign datamem_readdata_o = rdata_i;
    assign araddr_o = alu_result;
    assign awaddr_o = alu_result;
    assign datamem_readdata_o = rdata_i;

    always@(*) begin
        case(wmask_i)
            8'h01: wstrb_o = wmask_i << (alu_result[1:0]);
            8'h03: wstrb_o = wmask_i << (alu_result[1:0]);
            8'h0f: wstrb_o = wmask_i;
            default: wstrb_o = wmask_i;
        endcase
    end


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
                    next_state = S_WAIT_SEND;  
                end else begin
                    next_state = S_WAIT_SEND;
                end
            end

            S_WAIT_SEND: begin
                if (lsu_valid_o == 1 && lsu_ready_i == 1) begin
                    next_state = S_SEND;  
                end else begin
                    next_state = current_state;
                end
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
            lsu_valid_o <= 0;
            lsu_ready_o <= 0;
            flag <= 0;
            arvalid_o <= 1;
        end else begin
            current_state <= next_state;
            if(current_state == S_IDLE) lsu_ready_o <= 1;
            else if(current_state == S_RECEIVE) lsu_ready_o <= 0;
            else if(current_state == S_WAIT_SEND) lsu_ready_o <= 0;
            else if(current_state == S_SEND) lsu_ready_o <= 1;

            if(current_state == S_IDLE) begin 
                lsu_valid_o <= 0;
                awvalid_o <= 0;
                wvalid_o <= 0;
                //arvalid_o <= 0;
                rready_o <= 0;
                bready_o <= 0;
                if(arvalid_o==1 && arready_i==1) begin
                    arvalid_o <= 0;
                end 
                //datamem_readdata_o <= 0;
            end else if(current_state == S_RECEIVE) begin 
                lsu_valid_o <= 0;
                
                alu_result <= alu_result_i;
                rs1 <= rs1_i;
                wdata_o <= rs2_i;  
                
                arvalid_o <= MemRead_i;
                rready_o <= MemRead_i;        
                
                bready_o <= 1;
                rmask <= rmask_i;

                awvalid_o <= MemWrite_i;
                wvalid_o <= MemWrite_i;
                
                wb_src_o <= wb_src_i;
                csr_write_o <= csr_write_i;
                csr_wdata_src_o <= csr_wdata_src_i;
                reg_write_o <= reg_write_i;
                npc_o <= npc_i;
                csr_rdata_l_rs1_o <= csr_rdata_l_rs1_i;
                waddr_o <= waddr_i;

                //araddr_o <= alu_result;
                //awaddr_o <= alu_result;
            end else if (current_state == S_WAIT_SEND)begin
                if(MemRead_i) begin
                    if(rresp_i) lsu_valid_o <= 1;
                    else lsu_valid_o <= 0;
                end
                else if(MemWrite_i)begin
                    if(bready_o == 1 && bvalid_i == 1 && bresp_i == 0) lsu_valid_o <= 1;
                    else lsu_valid_o <= 0;
                end
                else lsu_valid_o <= 1;
                //datamem_readdata_o <= rdata_i;

                //wvalid_o <= wvalid_tmp;

                if(bresp_i == 0) begin
                    wvalid_o <= 0;
                    awvalid_o <= 0;
                end
                if(arvalid_o==1 && arready_i==1) begin
                    arvalid_o <= 0;
                end 
            end else if (current_state == S_SEND)begin
                lsu_valid_o <= 0;
                arvalid_o <= 0;
                rready_o <= 0;
                awvalid_o <= 0;
                wvalid_o <= 0;
                //datamem_readdata_o <= rdata_i;
                //arvalid_o <= MemRead_i;
                //rready_o <= MemRead_i;        
                //awvalid_o <= MemWrite_i;
                //wvalid_o <= MemWrite_i;

            end 
            
        end
    end

endmodule