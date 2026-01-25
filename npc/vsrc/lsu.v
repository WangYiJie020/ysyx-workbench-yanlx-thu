`include "header.v"

import "DPI-C" function void data_counter_add();
import "DPI-C" function void send_data_request();
import "DPI-C" function void receive_data_back();

//`define LSU_DELAY
module lsu(
    input clk,
    input rst_n,
    //exu to lsu
    input [`CPU_WIDTH-1:0] alu_result_i,
    input [`CPU_WIDTH-1:0] rs1_i,
    input [`CPU_WIDTH-1:0] rs2_i,
    input [`CPU_WIDTH-1:0] csr_rdata_l_rs1_i,
    input MemRead_i,
    input MemWrite_i,
    input [3:0] wmask_i,
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
    output [3:0] arid_o,
    output [7:0] arlen_o,
    output [2:0] arsize_o,
    output [1:0] arburst_o,
    output arvalid_o,
    input arready_i,

    input [`CPU_WIDTH-1:0] rdata_i,
    input [1:0] rresp_i,
    input rlast_i,
    input [3:0] rid_i,
    input rvalid_i,
    output rready_o,

    output [`CPU_WIDTH-1:0] awaddr_o,
    output [3:0] awid_o,
    output [7:0] awlen_o,
    output [2:0] awsize_o,
    output [1:0] awburst_o,
    output awvalid_o,
    input awready_i,

    output [`CPU_WIDTH-1:0] wdata_o,
    output [3:0] wstrb_o,
    output wlast_o,
    output wvalid_o,
    input wready_i,

    input [1:0] bresp_i,
    input [3:0] bid_i,
    input bvalid_i,
    output bready_o

);
    reg [`CPU_WIDTH-1:0] alu_result;
    reg [`CPU_WIDTH-1:0] rs1;
    reg [`CPU_WIDTH-1:0] rs2;
    reg [`CPU_WIDTH-1:0] csr_rdata_l_rs1;
    reg [2:0] rmask;

    
    reg flag,wvalid_tmp;


    reg arvalid;
    reg [`CPU_WIDTH-1:0] araddr;
    reg rready;
    reg [`CPU_WIDTH-1:0] awaddr;
    reg awvalid;
    reg [`CPU_WIDTH-1:0] wdata;
    reg [3:0] wstrb;
    reg wvalid;
    reg bready;

    reg read_mem,write_mem;
  

    assign rmask_o = rmask;
    assign rs1_o = rs1;
    assign alu_result_o = alu_result;
    //assign datamem_readdata_o = rdata_i;
    //assign araddr = alu_result;
    //assign awaddr = alu_result;
    //assign datamem_readdata_o = rdata_i;
    assign arid_o = 0;
    assign arlen_o = 0;
    //assign arsize_o = 3'b010;
    assign arburst_o = 0;
    assign awid_o = 0;
    assign awlen_o = 0;
    //assign awsize_o = 3'b010;
    assign awburst_o = 0;
    //assign wlast_o = 1;

    always@(*) begin
        case(wmask_i)
            4'h1: awsize_o = 3'b000;
            4'h3: awsize_o = 3'b001;
            4'hf: awsize_o = 3'b010;
            default: awsize_o = 3'b010;
        endcase
    end

    always@(*) begin
        case(rmask_i)
            3'b100,3'b011: arsize_o = 3'b000; //lb,lbu
            3'b010,3'b001: arsize_o = 3'b001; //lh,lhu
            3'b000: arsize_o = 3'b010; //lw
            default: arsize_o = 3'b010;
        endcase
    end

    always@(*) begin
        case(wmask_i)
            4'h1: wstrb = wmask_i << alu_result_i[1:0];
            4'h3: wstrb = wmask_i << alu_result_i[1:0];
            4'hf: wstrb = wmask_i;
            default: wstrb = wmask_i;
        endcase
    end
    //assign wstrb = wmask_i << alu_result_i[1:0];


    localparam S_IDLE = 2'b00,S_MEM = 2'b01,S_OUT = 2'b10;

    reg [1:0] current_state,next_state;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (lsu_valid_i == 1 && lsu_ready_o == 1) begin
                    if(MemRead_i == 1 || MemWrite_i == 1) begin
                        next_state = S_MEM;
                    end
                    else begin
                        next_state = S_OUT;
                    end
                    
                end else begin
                    next_state = current_state;
                end
            end
            
            S_MEM: begin
                if ((rvalid_i == 1 && rready_o == 1 && rlast_i == 1)||(bvalid_i == 1 && bready_o == 1)) begin
                    next_state = S_OUT;  
                end else begin
                    next_state = S_MEM;
                end
            end

            S_OUT: begin
                if (lsu_valid_o == 1 && lsu_ready_i == 1) begin
                    next_state = S_IDLE;  
                end else begin
                    next_state = S_OUT;
                end
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
            arvalid <= 0;
        end else begin
            current_state <= next_state;
            if(current_state == S_IDLE) lsu_ready_o <= 1;
            else if(current_state == S_MEM) lsu_ready_o <= 0;
            else if(current_state == S_OUT) lsu_ready_o <= 1;

            if(current_state == S_IDLE) begin 
                lsu_valid_o <= 0;
                awvalid <= 0;
                wvalid <= 0;
                //arvalid <= 0;
                rready <= 0;
                bready <= 0;
                if(arvalid==1 && arready_i==1) begin
                    arvalid <= 0;
                end 
                //datamem_readdata_o <= 0;
                wlast_o <= 0;
            end else if(current_state == S_OUT) begin 
                lsu_valid_o <= 0;
                
                alu_result <= alu_result_i;
                rs1 <= rs1_i;
                if(wmask_i == 4'hf) wdata <= rs2_i; 
                else wdata <= rs2_i << (8*alu_result_i[1:0]);  
                //araddr <= alu_result_i;

                //arvalid <= MemRead_i;
                //rready <= MemRead_i;        
                
                //bready <= 1;
                rmask <= rmask_i;
                
                //awaddr <= alu_result_i;
                //awvalid <= MemWrite_i;
                //wvalid <= MemWrite_i;
                
                wb_src_o <= wb_src_i;
                csr_write_o <= csr_write_i;
                csr_wdata_src_o <= csr_wdata_src_i;
                reg_write_o <= reg_write_i;
                csr_rdata_l_rs1_o <= csr_rdata_l_rs1_i;
                waddr_o <= waddr_i;
                wlast_o <= 1;

                lsu_valid_o <= 1;

                //araddr_o <= alu_result;
                //awaddr_o <= alu_result;
            end else if (current_state == S_MEM)begin
                if(MemRead_i) begin
                    araddr <= alu_result_i;
                    arvalid <= 1;
                    rready <= MemRead_i;
                    read_mem <= 1;
                end 
                else if(MemWrite_i)begin
                    awaddr <= alu_result_i;
                    awvalid <= 1;
                    wvalid <= 1;
                    write_mem <= 1;
                    bready <= 1;
                end
                if(read_mem) begin
                    if(rlast_i==1&& rready_o==1&& rvalid_i==1) begin 
                        //lsu_valid_o <= 1;
                        datamem_readdata_o <= rdata_i;
                        data_counter_add();
                        receive_data_back();
                    end
                    //else lsu_valid_o <= 0;
                end
                else if(write_mem)begin
                    if(bready_o == 1 && bvalid_i == 1 && bresp_i == 0) begin 
                        //lsu_valid_o <= 1;
                        data_counter_add();
                        receive_data_back();
                    end
                    //else lsu_valid_o <= 0;
                end

                if(awvalid==1 && awready_i==1) begin  
                    awvalid <= 0;
                    send_data_request();
                end
                if(wvalid==1 && wready_i==1) begin 
                    wvalid <= 0;
                    wlast_o <= 0;
                end
                if(arvalid==1 && arready_i==1) begin 
                    arvalid <= 0;
                    send_data_request();
                end
                

            end 
            
        end
    end



    assign arvalid_o = arvalid;
    assign araddr_o = araddr;
    assign rready_o = rready;
    assign awaddr_o = awaddr;
    assign awvalid_o = awvalid;
    assign wvalid_o = wvalid;
    assign wdata_o = wdata;
    assign wstrb_o = wstrb;
    assign bready_o = bready;


endmodule