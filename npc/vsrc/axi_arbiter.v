module axi_arbiter(
    input clk,
    input rst_n,

    //a
    input [`CPU_WIDTH-1:0] araddr_i_a,
    input [3:0] arid_i_a,
    input [7:0] arlen_i_a,
    input [2:0] arsize_i_a,
    input [1:0] arburst_i_a,
    input arvalid_i_a,
    output reg arready_o_a,

    output reg [`CPU_WIDTH-1:0] rdata_o_a,
    output reg [1:0] rresp_o_a,
    output reg rlast_o_a,
    output reg [3:0] rid_o_a,
    output reg rvalid_o_a,
    input rready_i_a,

    input [`CPU_WIDTH-1:0] awaddr_i_a,
    input [3:0] awid_i_a,
    input [7:0] awlen_i_a,
    input [2:0] awsize_i_a,
    input [1:0] awburst_i_a,
    input awvalid_i_a,
    output reg awready_o_a,

    input [`CPU_WIDTH-1:0] wdata_i_a,
    input [3:0] wstrb_i_a,
    input wlast_i_a,
    input wvalid_i_a,
    output reg wready_o_a,

    output reg [1:0] bresp_o_a,
    output reg [3:0] bid_o_a,
    output reg bvalid_o_a,
    input bready_i_a,

    //b
    input [`CPU_WIDTH-1:0] araddr_i_b,
    input [3:0] arid_i_b,
    input [7:0] arlen_i_b,
    input [2:0] arsize_i_b,
    input [1:0] arburst_i_b,
    input arvalid_i_b,
    output reg arready_o_b,

    output reg [`CPU_WIDTH-1:0] rdata_o_b,
    output reg [1:0] rresp_o_b,
    output reg rlast_o_b,
    output reg [3:0] rid_o_b,
    output reg rvalid_o_b,
    input rready_i_b,

    input [`CPU_WIDTH-1:0] awaddr_i_b,
    input [3:0] awid_i_b,
    input [7:0] awlen_i_b,
    input [2:0] awsize_i_b,
    input [1:0] awburst_i_b,
    input awvalid_i_b,
    output reg awready_o_b,

    input [`CPU_WIDTH-1:0] wdata_i_b,
    input [3:0] wstrb_i_b,
    input wlast_i_b,
    input wvalid_i_b,
    output reg wready_o_b,

    output reg [1:0] bresp_o_b,
    output reg [3:0] bid_o_b,
    output reg bvalid_o_b,
    input bready_i_b,

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


    reg ar_switch,r_switch,aw_switch,w_switch,b_switch;

    // Arbiter logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ar_switch <= 0;
            r_switch <= 0;
            aw_switch <= 1;
            w_switch <= 1;
            b_switch <= 1;
            arready_o_b <= 0;arready_o_a <= arready_i;
        end else begin
            //if(arvalid_i_a == 1) begin 
            //    ar_switch <= 0; r_switch <= 0;arready_o_b <= 0;arready_o_a <= arready_i;
            //end
            //else if(arvalid_i_b == 1) begin 
            ///    ar_switch <= 1; r_switch <= 1;arready_o_a <= 0;arready_o_b <= arready_i;
            //end
            //else begin arready_o_b <= arready_i; arready_o_a <= arready_i; end
            //else if(ar_switch == 1 && rlast_o_b == 1) begin ar_switch <= 0; r_switch <= 0;end
            //else if(ar_switch == 0 && rlast_o_a == 1) begin ar_switch <= 1; r_switch <= 1;end
            if(arvalid_i_b == 1) begin 
                ar_switch <= 1; r_switch <= 1;arready_o_a <= 0;arready_o_b <= arready_i;
            end
            else if(ar_switch == 1 && rlast_i == 1)begin 
                ar_switch <= 0; r_switch <= 0;arready_o_b <= 0;arready_o_a <= arready_i;
            end
            else begin
                arready_o_b <= 0;arready_o_a <= arready_i;
            end
        end
    end

    always@(*) begin
        case(ar_switch)
            1: begin
                araddr_o = araddr_i_b;
                arid_o = arid_i_b;
                arlen_o = arlen_i_b;
                arsize_o = arsize_i_b;
                arburst_o = arburst_i_b;
                arvalid_o = arvalid_i_b;
                //arready_o_b = arready_i;
            end
            default: begin
                araddr_o = araddr_i_a;
                arid_o = arid_i_a;
                arlen_o = arlen_i_a;
                arsize_o = arsize_i_a;
                arburst_o = arburst_i_a;
                arvalid_o = arvalid_i_a;
                //arready_o_a = arready_i;
            end
        endcase
    end

    always@(*) begin
        case(r_switch)
            1: begin
                rdata_o_b = rdata_i;
                rresp_o_b = rresp_i;
                rlast_o_b = rlast_i;
                rid_o_b = rid_i;
                rvalid_o_b = rvalid_i;
                rdata_o_a = 0;
                rresp_o_a = 0;
                rlast_o_a = 0;
                rid_o_a = 0;
                rvalid_o_a = 0;
                rready_o = rready_i_b;
            end
            default: begin
                rdata_o_a = rdata_i;
                rresp_o_a = rresp_i;
                rlast_o_a = rlast_i;
                rid_o_a = rid_i;
                rvalid_o_a = rvalid_i;
                rdata_o_b = 0;
                rresp_o_b = 0;
                rlast_o_b = 0;
                rid_o_b = 0;
                rvalid_o_b = 0;
                rready_o = rready_i_a;
            end
        endcase
    end

    always@(*) begin
        case(aw_switch)
            1: begin
                awaddr_o = awaddr_i_b;
                awid_o = awid_i_b;
                awlen_o = awlen_i_b;
                awsize_o = awsize_i_b;
                awburst_o = awburst_i_b;
                awvalid_o = awvalid_i_b;
                awready_o_b = awready_i;
            end
            default: begin
                awaddr_o = awaddr_i_a;
                awid_o = awid_i_a;
                awlen_o = awlen_i_a;
                awsize_o = awsize_i_a;
                awburst_o = awburst_i_a;
                awvalid_o = awvalid_i_a;
                awready_o_a = awready_i;
            end
        endcase
    end

    always@(*) begin
        case(w_switch)
            1: begin
                wdata_o = wdata_i_b;
                wstrb_o = wstrb_i_b;
                wlast_o = wlast_i_b;
                wvalid_o = wvalid_i_b;
                wready_o_b = wready_i;
            end
            default: begin
                wdata_o = wdata_i_a;
                wstrb_o = wstrb_i_a;
                wlast_o = wlast_i_a;
                wvalid_o = wvalid_i_a;
                wready_o_a = wready_i;
            end
        endcase
    end
    
    always@(*) begin
        case(b_switch)
            1: begin
                bresp_o_b = bresp_i;
                bid_o_b = bid_i;
                bvalid_o_b = bvalid_i;
                bready_o = bready_i_b;
            end
            default: begin
                bresp_o_a = bresp_i;
                bid_o_a = bid_i;
                bvalid_o_a = bvalid_i;
                bready_o = bready_i_a;
            end
        endcase
    end

    

endmodule