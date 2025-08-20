module axi_arbiter(
    input clk,
    input rst_n,

    //a
    input [`CPU_WIDTH-1:0] araddr_i_a,
    input arvalid_i_a,
    output reg arready_o_a,

    output reg [`CPU_WIDTH-1:0] rdata_o_a,
    output reg rresp_o_a,
    output reg rvalid_o_a,
    input rready_i_a,

    input [`CPU_WIDTH-1:0] awaddr_i_a,
    input awvalid_i_a,
    output reg awready_o_a,

    input [`CPU_WIDTH-1:0] wdata_i_a,
    input [7:0] wstrb_i_a,
    input wvalid_i_a,
    output reg wready_o_a,

    output reg bresp_o_a,
    output reg bvalid_o_a,
    input bready_i_a,

    //b
    input [`CPU_WIDTH-1:0] araddr_i_b,
    input arvalid_i_b,
    output reg arready_o_b,

    output reg [`CPU_WIDTH-1:0] rdata_o_b,
    output reg rresp_o_b,
    output reg rvalid_o_b,
    input rready_i_b,

    input [`CPU_WIDTH-1:0] awaddr_i_b,
    input awvalid_i_b,
    output reg awready_o_b,

    input [`CPU_WIDTH-1:0] wdata_i_b,
    input [7:0] wstrb_i_b,
    input wvalid_i_b,
    output reg wready_o_b,

    output reg bresp_o_b,
    output reg bvalid_o_b,
    input bready_i_b,

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

    localparam AR_IDLE = 3'b00,AR_RECEIVE = 3'b01,AR_SEND = 3'b10,AR_WAIT_SEND = 3'b11;
    localparam AR_IDLE = 3'b00,AR_RECEIVE = 3'b01,AR_SEND = 3'b10,AR_WAIT_SEND = 3'b11;


endmodule