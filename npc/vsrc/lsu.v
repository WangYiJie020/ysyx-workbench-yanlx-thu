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

    reg [4:0] LFSR, arvalid_delay, rready_delay, awvalid_delay, wvalid_delay, bready_delay;
    reg lfsr_in;

    reg arvalid;
    reg [`CPU_WIDTH-1:0] araddr;
    reg rready;
    reg [`CPU_WIDTH-1:0] awaddr;
    reg awvalid;
    reg [`CPU_WIDTH-1:0] wdata;
    reg [3:0] wstrb;
    reg wvalid;
    reg bready;

    reg [31:0] arvalid_buffer ;
    reg [`CPU_WIDTH-1:0] araddr_buffer [31:0];
    reg [31:0] rready_buffer ;
    reg [31:0] awvalid_buffer ;
    reg [`CPU_WIDTH-1:0] awaddr_buffer [31:0];
    reg [31:0] wvalid_buffer ;
    reg [`CPU_WIDTH-1:0] wdata_buffer [31:0];
    reg [3:0] wstrb_buffer [31:0];
    reg [31:0] bready_buffer;

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
            arvalid <= 0;
        end else begin
            current_state <= next_state;
            if(current_state == S_IDLE) lsu_ready_o <= 1;
            else if(current_state == S_RECEIVE) lsu_ready_o <= 0;
            else if(current_state == S_WAIT_SEND) lsu_ready_o <= 0;
            else if(current_state == S_SEND) lsu_ready_o <= 1;

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
            end else if(current_state == S_RECEIVE) begin 
                lsu_valid_o <= 0;
                
                alu_result <= alu_result_i;
                rs1 <= rs1_i;
                if(wmask_i == 4'hf) wdata <= rs2_i; 
                else wdata <= rs2_i << (8*alu_result_i[1:0]);  
                araddr <= alu_result_i;

                arvalid <= MemRead_i;
                rready <= MemRead_i;        
                
                bready <= 1;
                rmask <= rmask_i;
                
                awaddr <= alu_result_i;
                awvalid <= MemWrite_i;
                wvalid <= MemWrite_i;
                
                wb_src_o <= wb_src_i;
                csr_write_o <= csr_write_i;
                csr_wdata_src_o <= csr_wdata_src_i;
                reg_write_o <= reg_write_i;
                csr_rdata_l_rs1_o <= csr_rdata_l_rs1_i;
                waddr_o <= waddr_i;
                wlast_o <= 1;

                //araddr_o <= alu_result;
                //awaddr_o <= alu_result;
            end else if (current_state == S_WAIT_SEND)begin
                if(MemRead_i) begin
                    if(rlast_i==1&& rready_o==1&& rvalid_i==1) begin 
                        lsu_valid_o <= 1;
                        datamem_readdata_o <= rdata_i;
                        data_counter_add();
                        receive_data_back();
                    end
                    else lsu_valid_o <= 0;
                end
                else if(MemWrite_i)begin
                    if(bready_o == 1 && bvalid_i == 1 && bresp_i == 0) begin 
                        lsu_valid_o <= 1;
                        data_counter_add();
                        receive_data_back();
                    end
                    else lsu_valid_o <= 0;
                end
                else lsu_valid_o <= 1;

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
                

            end else if (current_state == S_SEND)begin
                lsu_valid_o <= 0;
                arvalid <= 0;
                rready <= 0;
                awvalid <= 0;
                wvalid <= 0;
                wlast_o <= 0;

            end 
            
        end
    end


`ifdef LSU_DELAY

    assign lfsr_in = LFSR[4] ^ LFSR[3] ^ LFSR[2] ^ LFSR[1] ^ LFSR[0];
    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) LFSR <= 5'b00001;
        else begin
            LFSR <= {lfsr_in,LFSR[4:1]};
        end
    end


    always @(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            for(integer i=0; i<32; i=i+1) begin
                araddr_buffer[i] <= 32'd0;
                arvalid_buffer[i] <= 1'b0;
                rready_buffer[i] <= 1'b1;
            end
        end
        else begin
            if(current_state == S_IDLE) begin
                arvalid_delay <= LFSR;
                for(integer i=0; i<32; i=i+1) begin
                    araddr_buffer[i] <= 32'd0;
                    arvalid_buffer[i] <= 1'b0;
                end
            end
            else begin
                for(integer j=1; j<32; j=j+1) begin
                    araddr_buffer[j] <= araddr_buffer[j-1];
                    arvalid_buffer[j] <= arvalid_buffer[j-1];
                end
                araddr_buffer[0] <= araddr;
                arvalid_buffer[0] <= arvalid;
            end

            if(current_state == S_IDLE) begin
                rready_delay <= LFSR;
                for(integer i=0; i<32; i=i+1) begin
                    rready_buffer[i] <= 1'b0;
                end
            end
            else begin
                for(integer j=1; j<32; j=j+1) begin
                    rready_buffer[j] <= rready_buffer[j-1];
                end
                rready_buffer[0] <= rready;
            end

            if(current_state == S_IDLE) begin
                awvalid_delay <= LFSR;
                for(integer i=0; i<32; i=i+1) begin
                    awaddr_buffer[i] <= 32'd0;
                    awvalid_buffer[i] <= 1'b0;
                end
            end
            else begin
                for(integer j=1; j<32; j=j+1) begin
                    awaddr_buffer[j] <= awaddr_buffer[j-1];
                    awvalid_buffer[j] <= awvalid_buffer[j-1];
                end
                awaddr_buffer[0] <= awaddr;
                awvalid_buffer[0] <= awvalid;
            end

            if(current_state == S_IDLE) begin
                wvalid_delay <= LFSR;
                for(integer i=0; i<32; i=i+1) begin
                    wdata_buffer[i] <= 32'd0;
                    wvalid_buffer[i] <= 1'b0;
                    wstrb_buffer[i] <= 4'd0;
                end
            end
            else begin
                for(integer j=1; j<32; j=j+1) begin
                    wdata_buffer[j] <= wdata_buffer[j-1];
                    wvalid_buffer[j] <= wvalid_buffer[j-1];
                    wstrb_buffer[j] <= wstrb_buffer[j-1];
                end
                wdata_buffer[0] <= wdata;
                wvalid_buffer[0] <= wvalid;
                wstrb_buffer[0] <= wstrb;
            end

            if(current_state == S_IDLE) begin
                bready_delay <= LFSR;
                for(integer i=0; i<32; i=i+1) begin
                    bready_buffer[i] <= 1'b0;
                end
            end
            else begin
                for(integer j=1; j<32; j=j+1) begin
                    bready_buffer[j] <= bready_buffer[j-1];
                end
                bready_buffer[0] <= bready;
            end
        end
    end

    always@(*)begin
        case(arvalid_delay)
            5'd0:  begin arvalid_o = arvalid_buffer[0]; araddr_o = araddr_buffer[0]; end
            5'd1:  begin arvalid_o = arvalid_buffer[1]; araddr_o = araddr_buffer[1]; end
            5'd2:  begin arvalid_o = arvalid_buffer[2]; araddr_o = araddr_buffer[2]; end
            5'd3:  begin arvalid_o = arvalid_buffer[3]; araddr_o = araddr_buffer[3]; end
            5'd4:  begin arvalid_o = arvalid_buffer[4]; araddr_o = araddr_buffer[4]; end
            5'd5:  begin arvalid_o = arvalid_buffer[5]; araddr_o = araddr_buffer[5]; end
            5'd6:  begin arvalid_o = arvalid_buffer[6]; araddr_o = araddr_buffer[6]; end
            5'd7:  begin arvalid_o = arvalid_buffer[7]; araddr_o = araddr_buffer[7]; end
            5'd8:  begin arvalid_o = arvalid_buffer[8]; araddr_o = araddr_buffer[8]; end
            5'd9:  begin arvalid_o = arvalid_buffer[9]; araddr_o = araddr_buffer[9]; end
            5'd10: begin arvalid_o = arvalid_buffer[10]; araddr_o = araddr_buffer[10]; end
            5'd11: begin arvalid_o = arvalid_buffer[11]; araddr_o = araddr_buffer[11]; end
            5'd12: begin arvalid_o = arvalid_buffer[12]; araddr_o = araddr_buffer[12]; end
            5'd13: begin arvalid_o = arvalid_buffer[13]; araddr_o = araddr_buffer[13]; end
            5'd14: begin arvalid_o = arvalid_buffer[14]; araddr_o = araddr_buffer[14]; end
            5'd15: begin arvalid_o = arvalid_buffer[15]; araddr_o = araddr_buffer[15]; end
            5'd16: begin arvalid_o = arvalid_buffer[16]; araddr_o = araddr_buffer[16]; end
            5'd17: begin arvalid_o = arvalid_buffer[17]; araddr_o = araddr_buffer[17]; end
            5'd18: begin arvalid_o = arvalid_buffer[18]; araddr_o = araddr_buffer[18]; end
            5'd19: begin arvalid_o = arvalid_buffer[19]; araddr_o = araddr_buffer[19]; end
            5'd20: begin arvalid_o = arvalid_buffer[20]; araddr_o = araddr_buffer[20]; end
            5'd21: begin arvalid_o = arvalid_buffer[21]; araddr_o = araddr_buffer[21]; end
            5'd22: begin arvalid_o = arvalid_buffer[22]; araddr_o = araddr_buffer[22]; end
            5'd23: begin arvalid_o = arvalid_buffer[23]; araddr_o = araddr_buffer[23]; end
            5'd24: begin arvalid_o = arvalid_buffer[24]; araddr_o = araddr_buffer[24]; end
            5'd25: begin arvalid_o = arvalid_buffer[25]; araddr_o = araddr_buffer[25]; end
            5'd26: begin arvalid_o = arvalid_buffer[26]; araddr_o = araddr_buffer[26]; end
            5'd27: begin arvalid_o = arvalid_buffer[27]; araddr_o = araddr_buffer[27]; end
            5'd28: begin arvalid_o = arvalid_buffer[28]; araddr_o = araddr_buffer[28]; end
            5'd29: begin arvalid_o = arvalid_buffer[29]; araddr_o = araddr_buffer[29]; end
            5'd30: begin arvalid_o = arvalid_buffer[30]; araddr_o = araddr_buffer[30]; end
            5'd31: begin arvalid_o = arvalid_buffer[31]; araddr_o = araddr_buffer[31]; end
            default: begin arvalid_o = arvalid_buffer[0]; araddr_o = araddr_buffer[0]; end
        endcase
    end

    always@(*)begin
        case(rready_delay)
            5'd0:  begin rready_o = rready_buffer[0]; end
            5'd1:  begin rready_o = rready_buffer[1]; end
            5'd2:  begin rready_o = rready_buffer[2]; end
            5'd3:  begin rready_o = rready_buffer[3]; end
            5'd4:  begin rready_o = rready_buffer[4]; end
            5'd5:  begin rready_o = rready_buffer[5]; end
            5'd6:  begin rready_o = rready_buffer[6]; end
            5'd7:  begin rready_o = rready_buffer[7]; end
            5'd8:  begin rready_o = rready_buffer[8]; end
            5'd9:  begin rready_o = rready_buffer[9]; end
            5'd10: begin rready_o = rready_buffer[10]; end
            5'd11: begin rready_o = rready_buffer[11]; end
            5'd12: begin rready_o = rready_buffer[12]; end
            5'd13: begin rready_o = rready_buffer[13]; end
            5'd14: begin rready_o = rready_buffer[14]; end
            5'd15: begin rready_o = rready_buffer[15]; end
            5'd16: begin rready_o = rready_buffer[16]; end
            5'd17: begin rready_o = rready_buffer[17]; end
            5'd18: begin rready_o = rready_buffer[18]; end
            5'd19: begin rready_o = rready_buffer[19]; end
            5'd20: begin rready_o = rready_buffer[20]; end
            5'd21: begin rready_o = rready_buffer[21]; end
            5'd22: begin rready_o = rready_buffer[22]; end
            5'd23: begin rready_o = rready_buffer[23]; end
            5'd24: begin rready_o = rready_buffer[24]; end
            5'd25: begin rready_o = rready_buffer[25]; end
            5'd26: begin rready_o = rready_buffer[26]; end
            5'd27: begin rready_o = rready_buffer[27]; end
            5'd28: begin rready_o = rready_buffer[28]; end
            5'd29: begin rready_o = rready_buffer[29]; end
            5'd30: begin rready_o = rready_buffer[30]; end
            5'd31: begin rready_o = rready_buffer[31]; end
            default: begin rready_o = rready_buffer[0]; end
        endcase
    end

    always@(*)begin
        case(awvalid_delay)
            5'd0:  begin awvalid_o = awvalid_buffer[0]; awaddr_o = awaddr_buffer[0]; end
            5'd1:  begin awvalid_o = awvalid_buffer[1]; awaddr_o = awaddr_buffer[1]; end
            5'd2:  begin awvalid_o = awvalid_buffer[2]; awaddr_o = awaddr_buffer[2]; end
            5'd3:  begin awvalid_o = awvalid_buffer[3]; awaddr_o = awaddr_buffer[3]; end
            5'd4:  begin awvalid_o = awvalid_buffer[4]; awaddr_o = awaddr_buffer[4]; end
            5'd5:  begin awvalid_o = awvalid_buffer[5]; awaddr_o = awaddr_buffer[5]; end
            5'd6:  begin awvalid_o = awvalid_buffer[6]; awaddr_o = awaddr_buffer[6]; end
            5'd7:  begin awvalid_o = awvalid_buffer[7]; awaddr_o = awaddr_buffer[7]; end
            5'd8:  begin awvalid_o = awvalid_buffer[8]; awaddr_o = awaddr_buffer[8]; end
            5'd9:  begin awvalid_o = awvalid_buffer[9]; awaddr_o = awaddr_buffer[9]; end
            5'd10: begin awvalid_o = awvalid_buffer[10]; awaddr_o = awaddr_buffer[10]; end
            5'd11: begin awvalid_o = awvalid_buffer[11]; awaddr_o = awaddr_buffer[11]; end
            5'd12: begin awvalid_o = awvalid_buffer[12]; awaddr_o = awaddr_buffer[12]; end
            5'd13: begin awvalid_o = awvalid_buffer[13]; awaddr_o = awaddr_buffer[13]; end
            5'd14: begin awvalid_o = awvalid_buffer[14]; awaddr_o = awaddr_buffer[14]; end
            5'd15: begin awvalid_o = awvalid_buffer[15]; awaddr_o = awaddr_buffer[15]; end
            5'd16: begin awvalid_o = awvalid_buffer[16]; awaddr_o = awaddr_buffer[16]; end
            5'd17: begin awvalid_o = awvalid_buffer[17]; awaddr_o = awaddr_buffer[17]; end
            5'd18: begin awvalid_o = awvalid_buffer[18]; awaddr_o = awaddr_buffer[18]; end
            5'd19: begin awvalid_o = awvalid_buffer[19]; awaddr_o = awaddr_buffer[19]; end
            5'd20: begin awvalid_o = awvalid_buffer[20]; awaddr_o = awaddr_buffer[20]; end
            5'd21: begin awvalid_o = awvalid_buffer[21]; awaddr_o = awaddr_buffer[21]; end
            5'd22: begin awvalid_o = awvalid_buffer[22]; awaddr_o = awaddr_buffer[22]; end
            5'd23: begin awvalid_o = awvalid_buffer[23]; awaddr_o = awaddr_buffer[23]; end
            5'd24: begin awvalid_o = awvalid_buffer[24]; awaddr_o = awaddr_buffer[24]; end
            5'd25: begin awvalid_o = awvalid_buffer[25]; awaddr_o = awaddr_buffer[25]; end
            5'd26: begin awvalid_o = awvalid_buffer[26]; awaddr_o = awaddr_buffer[26]; end
            5'd27: begin awvalid_o = awvalid_buffer[27]; awaddr_o = awaddr_buffer[27]; end
            5'd28: begin awvalid_o = awvalid_buffer[28]; awaddr_o = awaddr_buffer[28]; end
            5'd29: begin awvalid_o = awvalid_buffer[29]; awaddr_o = awaddr_buffer[29]; end
            5'd30: begin awvalid_o = awvalid_buffer[30]; awaddr_o = awaddr_buffer[30]; end
            5'd31: begin awvalid_o = awvalid_buffer[31]; awaddr_o = awaddr_buffer[31]; end
            default: begin awvalid_o = awvalid_buffer[0]; awaddr_o = awaddr_buffer[0]; end
        endcase
    end

    always@(*)begin
        case(wvalid_delay)
            5'd0:  begin wvalid_o = wvalid_buffer[0]; wdata_o = wdata_buffer[0]; wstrb_o = wstrb_buffer[0]; end
            5'd1:  begin wvalid_o = wvalid_buffer[1]; wdata_o = wdata_buffer[1]; wstrb_o = wstrb_buffer[1];end
            5'd2:  begin wvalid_o = wvalid_buffer[2]; wdata_o = wdata_buffer[2]; wstrb_o = wstrb_buffer[2];end
            5'd3:  begin wvalid_o = wvalid_buffer[3]; wdata_o = wdata_buffer[3]; wstrb_o = wstrb_buffer[3];end
            5'd4:  begin wvalid_o = wvalid_buffer[4]; wdata_o = wdata_buffer[4]; wstrb_o = wstrb_buffer[4];end
            5'd5:  begin wvalid_o = wvalid_buffer[5]; wdata_o = wdata_buffer[5]; wstrb_o = wstrb_buffer[5];end
            5'd6:  begin wvalid_o = wvalid_buffer[6]; wdata_o = wdata_buffer[6]; wstrb_o = wstrb_buffer[6];end
            5'd7:  begin wvalid_o = wvalid_buffer[7]; wdata_o = wdata_buffer[7]; wstrb_o = wstrb_buffer[7];end
            5'd8:  begin wvalid_o = wvalid_buffer[8]; wdata_o = wdata_buffer[8]; wstrb_o = wstrb_buffer[8];end
            5'd9:  begin wvalid_o = wvalid_buffer[9]; wdata_o = wdata_buffer[9]; wstrb_o = wstrb_buffer[9];end
            5'd10: begin wvalid_o = wvalid_buffer[10]; wdata_o = wdata_buffer[10]; wstrb_o = wstrb_buffer[10];end
            5'd11: begin wvalid_o = wvalid_buffer[11]; wdata_o = wdata_buffer[11]; wstrb_o = wstrb_buffer[11];end
            5'd12: begin wvalid_o = wvalid_buffer[12]; wdata_o = wdata_buffer[12]; wstrb_o = wstrb_buffer[12];end
            5'd13: begin wvalid_o = wvalid_buffer[13]; wdata_o = wdata_buffer[13]; wstrb_o = wstrb_buffer[13];end
            5'd14: begin wvalid_o = wvalid_buffer[14]; wdata_o = wdata_buffer[14]; wstrb_o = wstrb_buffer[14];end
            5'd15: begin wvalid_o = wvalid_buffer[15]; wdata_o = wdata_buffer[15]; wstrb_o = wstrb_buffer[15];end
            5'd16: begin wvalid_o = wvalid_buffer[16]; wdata_o = wdata_buffer[16]; wstrb_o = wstrb_buffer[16];end
            5'd17: begin wvalid_o = wvalid_buffer[17]; wdata_o = wdata_buffer[17]; wstrb_o = wstrb_buffer[17];end
            5'd18: begin wvalid_o = wvalid_buffer[18]; wdata_o = wdata_buffer[18]; wstrb_o = wstrb_buffer[18];end
            5'd19: begin wvalid_o = wvalid_buffer[19]; wdata_o = wdata_buffer[19]; wstrb_o = wstrb_buffer[19];end
            5'd20: begin wvalid_o = wvalid_buffer[20]; wdata_o = wdata_buffer[20]; wstrb_o = wstrb_buffer[20];end
            5'd21: begin wvalid_o = wvalid_buffer[21]; wdata_o = wdata_buffer[21]; wstrb_o = wstrb_buffer[21];end
            5'd22: begin wvalid_o = wvalid_buffer[22]; wdata_o = wdata_buffer[22]; wstrb_o = wstrb_buffer[22];end
            5'd23: begin wvalid_o = wvalid_buffer[23]; wdata_o = wdata_buffer[23]; wstrb_o = wstrb_buffer[23];end
            5'd24: begin wvalid_o = wvalid_buffer[24]; wdata_o = wdata_buffer[24]; wstrb_o = wstrb_buffer[24];end
            5'd25: begin wvalid_o = wvalid_buffer[25]; wdata_o = wdata_buffer[25]; wstrb_o = wstrb_buffer[25];end
            5'd26: begin wvalid_o = wvalid_buffer[26]; wdata_o = wdata_buffer[26]; wstrb_o = wstrb_buffer[26];end
            5'd27: begin wvalid_o = wvalid_buffer[27]; wdata_o = wdata_buffer[27]; wstrb_o = wstrb_buffer[27];end
            5'd28: begin wvalid_o = wvalid_buffer[28]; wdata_o = wdata_buffer[28]; wstrb_o = wstrb_buffer[28];end
            5'd29: begin wvalid_o = wvalid_buffer[29]; wdata_o = wdata_buffer[29]; wstrb_o = wstrb_buffer[29];end
            5'd30: begin wvalid_o = wvalid_buffer[30]; wdata_o = wdata_buffer[30]; wstrb_o = wstrb_buffer[30];end
            5'd31: begin wvalid_o = wvalid_buffer[31]; wdata_o = wdata_buffer[31]; wstrb_o = wstrb_buffer[31];end
            default: begin wvalid_o = wvalid_buffer[0]; wdata_o = wdata_buffer[0]; wstrb_o = wstrb_buffer[0];end
        endcase
    end

    always@(*)begin
        case(bready_delay)
            5'd0:  begin bready_o = bready_buffer[0]; end
            5'd1:  begin bready_o = bready_buffer[1]; end
            5'd2:  begin bready_o = bready_buffer[2]; end
            5'd3:  begin bready_o = bready_buffer[3]; end
            5'd4:  begin bready_o = bready_buffer[4]; end
            5'd5:  begin bready_o = bready_buffer[5]; end
            5'd6:  begin bready_o = bready_buffer[6]; end
            5'd7:  begin bready_o = bready_buffer[7]; end
            5'd8:  begin bready_o = bready_buffer[8]; end
            5'd9:  begin bready_o = bready_buffer[9]; end
            5'd10: begin bready_o = bready_buffer[10]; end
            5'd11: begin bready_o = bready_buffer[11]; end
            5'd12: begin bready_o = bready_buffer[12]; end
            5'd13: begin bready_o = bready_buffer[13]; end
            5'd14: begin bready_o = bready_buffer[14]; end
            5'd15: begin bready_o = bready_buffer[15]; end
            5'd16: begin bready_o = bready_buffer[16]; end
            5'd17: begin bready_o = bready_buffer[17]; end
            5'd18: begin bready_o = bready_buffer[18]; end
            5'd19: begin bready_o = bready_buffer[19]; end
            5'd20: begin bready_o = bready_buffer[20]; end
            5'd21: begin bready_o = bready_buffer[21]; end
            5'd22: begin bready_o = bready_buffer[22]; end
            5'd23: begin bready_o = bready_buffer[23]; end
            5'd24: begin bready_o = bready_buffer[24]; end
            5'd25: begin bready_o = bready_buffer[25]; end
            5'd26: begin bready_o = bready_buffer[26]; end
            5'd27: begin bready_o = bready_buffer[27]; end
            5'd28: begin bready_o = bready_buffer[28]; end
            5'd29: begin bready_o = bready_buffer[29]; end
            5'd30: begin bready_o = bready_buffer[30]; end
            5'd31: begin bready_o = bready_buffer[31]; end
            default: begin bready_o = bready_buffer[0]; end
        endcase
    end

`else 
    assign arvalid_o = arvalid;
    assign araddr_o = araddr;
    assign rready_o = rready;
    assign awaddr_o = awaddr;
    assign awvalid_o = awvalid;
    assign wvalid_o = wvalid;
    assign wdata_o = wdata;
    assign wstrb_o = wstrb;
    assign bready_o = bready;

`endif

endmodule