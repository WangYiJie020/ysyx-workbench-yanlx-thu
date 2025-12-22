module xbar(
    input clk,
    input rst_n,

    //in
    input [`CPU_WIDTH-1:0] axi_araddr_i,
    input [3:0] axi_arid_i,
    input [7:0] axi_arlen_i,
    input [2:0] axi_arsize_i,
    input [1:0] axi_arburst_i,
    input axi_arvalid_i,
    output reg axi_arready_o,

    output reg [`CPU_WIDTH-1:0] axi_rdata_o,
    output reg [1:0] axi_rresp_o,
    output reg axi_rlast_o,
    output reg [3:0] axi_rid_o,
    output reg axi_rvalid_o,
    input axi_rready_i,

    input [`CPU_WIDTH-1:0] axi_awaddr_i,
    input [3:0] axi_awid_i,
    input [7:0] axi_awlen_i,
    input [2:0] axi_awsize_i,
    input [1:0] axi_awburst_i,
    input axi_awvalid_i,
    output reg axi_awready_o,

    input [`CPU_WIDTH-1:0] axi_wdata_i,
    input [3:0] axi_wstrb_i,
    input axi_wlast_i,
    input axi_wvalid_i,
    output reg axi_wready_o,

    output reg [1:0] axi_bresp_o,
    output reg [3:0] axi_bid_o,
    output reg axi_bvalid_o,
    input axi_bready_i,

    //to mem
    output reg [`CPU_WIDTH-1:0] sram_araddr_o,
    output [3:0] sram_arid_o,
    output [7:0] sram_arlen_o,
    output [2:0] sram_arsize_o,
    output [1:0] sram_arburst_o,
    output reg sram_arvalid_o,
    input sram_arready_i,

    input [`CPU_WIDTH-1:0] sram_rdata_i,
    input [1:0] sram_rresp_i,
    input sram_rlast_i,
    input [3:0] sram_rid_i,
    input sram_rvalid_i,
    output reg sram_rready_o,

    output [`CPU_WIDTH-1:0] sram_awaddr_o,
    output [3:0] sram_awid_o,
    output [7:0] sram_awlen_o,
    output [2:0] sram_awsize_o,
    output [1:0] sram_awburst_o,
    output sram_awvalid_o,
    input sram_awready_i,

    output reg [`CPU_WIDTH-1:0] sram_wdata_o,
    output reg [3:0] sram_wstrb_o,
    output reg sram_wlast_o,
    output reg sram_wvalid_o,
    input sram_wready_i,

    input [1:0] sram_bresp_i,
    input [3:0] sram_bid_i,
    input sram_bvalid_i,
    output reg sram_bready_o,

    //to clint 
    output reg [`CPU_WIDTH-1:0] clint_araddr_o,
    output [3:0] clint_arid_o,
    output [7:0] clint_arlen_o,
    output [2:0] clint_arsize_o,
    output [1:0] clint_arburst_o,
    output reg clint_arvalid_o,
    input clint_arready_i,

    input [`CPU_WIDTH-1:0] clint_rdata_i,
    input [1:0] clint_rresp_i,
    input clint_rlast_i,
    input [3:0] clint_rid_i,
    input clint_rvalid_i,
    output reg clint_rready_o,

    output [`CPU_WIDTH-1:0] clint_awaddr_o,
    output [3:0] clint_awid_o,
    output [7:0] clint_awlen_o,
    output [2:0] clint_awsize_o,
    output [1:0] clint_awburst_o,
    output clint_awvalid_o,
    input clint_awready_i,

    output reg [`CPU_WIDTH-1:0] clint_wdata_o,
    output reg [3:0] clint_wstrb_o,
    output clint_wlast_o,
    output reg clint_wvalid_o,
    input clint_wready_i,

    input [1:0] clint_bresp_i,
    input [3:0] clint_bid_i,
    input clint_bvalid_i,
    output reg clint_bready_o
);

    reg ar_switch,r_switch,aw_switch,w_switch,b_switch;

    // Arbiter logic
    always @(*) begin
        if (!rst_n) begin
            ar_switch = 1;
            r_switch = 1;
            aw_switch = 1;
            w_switch = 1;
            b_switch = 1;
        end else begin
            aw_switch = 1;
            w_switch = 1;
            b_switch = 1;
            if(axi_araddr_i >= 32'h0200_0000 && axi_araddr_i <= 32'h0200_ffff) begin
                ar_switch = 0;
                r_switch = 0;
            end
            else begin
                ar_switch = 1;
                r_switch = 1;
            end
            
        end
    end

    always@(*) begin
        case(ar_switch)
            1: begin
                sram_araddr_o = axi_araddr_i;
                sram_arid_o = axi_arid_i;
                sram_arlen_o = axi_arlen_i;
                sram_arsize_o = axi_arsize_i;
                sram_arburst_o = axi_arburst_i;
                sram_arvalid_o = axi_arvalid_i;
                axi_arready_o = sram_arready_i;
            end
            default: begin
                clint_araddr_o = axi_araddr_i;
                clint_arid_o = axi_arid_i;
                clint_arlen_o = axi_arlen_i;
                clint_arsize_o = axi_arsize_i;
                clint_arburst_o = axi_arburst_i;
                clint_arvalid_o = axi_arvalid_i;
                axi_arready_o = clint_arready_i;
            end
        endcase
    end

    always@(*) begin
        case(r_switch)
            1: begin
                axi_rdata_o = sram_rdata_i;
                axi_rresp_o = sram_rresp_i;
                axi_rlast_o = sram_rlast_i;
                axi_rid_o = sram_rid_i;
                axi_rvalid_o = sram_rvalid_i;
                sram_rready_o = axi_rready_i;
            end
            default: begin
                axi_rdata_o = clint_rdata_i;
                axi_rresp_o = clint_rresp_i;
                axi_rlast_o = clint_rlast_i;
                axi_rid_o = clint_rid_i;
                axi_rvalid_o = clint_rvalid_i;
                clint_rready_o = axi_rready_i;
            end
        endcase
    end

    assign sram_awaddr_o = axi_awaddr_i;
    assign sram_awid_o = axi_awid_i;
    assign sram_awlen_o = axi_awlen_i;
    assign sram_awsize_o = axi_awsize_i;
    assign sram_awburst_o = axi_awburst_i;
    assign sram_awvalid_o = axi_awvalid_i;
    assign axi_awready_o = sram_awready_i;
    assign sram_wdata_o = axi_wdata_i;
    assign sram_wstrb_o = axi_wstrb_i;
    assign sram_wlast_o = axi_wlast_i;
    assign sram_wvalid_o = axi_wvalid_i;
    assign axi_wready_o = sram_wready_i;
    assign axi_bresp_o = sram_bresp_i;
    assign axi_bid_o = sram_bid_i;
    assign axi_bvalid_o = sram_bvalid_i;
    assign sram_bready_o = axi_bready_i;


endmodule