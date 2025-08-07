`include "header.v"
module sram(
    input clk,
    input rst_n,

    input [`CPU_WIDTH-1:0] araddr_i,
    input arvalid_i,
    output reg arready_o,

    output reg [`CPU_WIDTH-1:0] rdata_o,
    output reg rresp_o,
    output reg rvalid_o,
    input rready_i,

    input [`CPU_WIDTH-1:0] awaddr_i,
    input awvalid_i,
    output reg awready_o,

    input [`CPU_WIDTH-1:0] wdata_i,
    input [7:0] wstrb_i,
    input wvalid_i,
    output reg wready_o,

    output reg bresp_o,
    output reg bvalid_o,
    input bready_i
);

    reg ar_state;
    reg r_state;
    reg aw_state;
    reg w_state;
    reg b_state;
    reg [`CPU_WIDTH-1:0] araddr;
    reg [`CPU_WIDTH-1:0] awaddr;
    reg [`CPU_WIDTH-1:0] wdata;
    reg [7:0] wstrb;
    reg wvalid;
    reg flag_waddr,flag_wdata;
    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            arready_o <= 0;
            ar_state <= 0; //未握手
            araddr <= 0;
        end
        else begin
            if(ar_state == 0 && arvalid_i == 1) begin
                arready_o <= 1;
                ar_state <= 1;
            end
            else if(ar_state <= 1) begin
                ar_state <= 0;
                arready_o <= 0;
            end

            if(arready_o == 1 && arvalid_i == 1)
                araddr <= araddr_i;
        end
    end
    reg [4:0] rdata_counter;
    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            r_state <= 0;
            rvalid_o <= 0;
            rdata_counter <= 0;
        end
        else begin
            if(rdata_counter == 5) begin
                rdata_counter <= 0;
                rdata_o <= pmem_read(araddr);
                rresp_o <= 1;
                rvalid_o <= 1;
            end
            else begin
                rdata_counter <= rdata_counter + 1;
                rresp_o <= 0;
                rvalid_o <= 0;
            end
            
        end
    end

    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            awready_o <= 0;
            aw_state <= 0; //未握手
            awaddr <= 0;
            flag_waddr <= 0;
        end
        else begin
            if(aw_state == 0 && awvalid_i == 1) begin
                awready_o <= 1;
                aw_state <= 1;
            end
            else if(aw_state <= 1) begin
                aw_state <= 0;
                awready_o <= 0;
            end

            if(awready_o == 1 && awvalid_i == 1)
                awaddr <= awaddr_i;
                flag_waddr <= 1; 
        end
    end

    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            wready_o <= 0;
            w_state <= 0; //未握手
            wdata <= 0;
            wstrb <= 0;
            bresp_o <= 1;
            flag_wdata <= 0;
        end
        else begin
            if(w_state == 0 && wvalid_i == 1) begin
                wready_o <= 1;
                w_state <= 1;
            
            end else if(w_state == 1) begin
                w_state <= 0;
                wready_o <= 0;
            end

            if(wready_o == 1 && wvalid_i == 1) begin
                wdata <= wdata_i;
                wstrb <= wstrb_i;
                flag_wdata <= 1;
                //pmem_write(awaddr,wdata,wstrb);
                bresp_o <= 0;
            end
            else bresp_o <= 1;
        end
    end

    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            b_state <= 0;
            bvalid_o <= 0;
        end
        else begin
            
            //bresp_o <= 0;
            bvalid_o <= 1;
        end
    end

    always@(awaddr,wdata) begin
        if(flag_waddr == 1 && flag_wdata == 1) begin
            //if(wready_o == 1 && wvalid_i == 1)
            pmem_write(awaddr,wdata,wstrb);
            //flag_waddr <= 0;
            //flag_wdata <= 0;
        end
    end



endmodule