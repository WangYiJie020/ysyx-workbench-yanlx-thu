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
    output reg [`CPU_WIDTH-1:0] araddr_o,
    output reg arvalid_o,
    input arready_i,

    input [`CPU_WIDTH-1:0] rdata_i,
    input rresp_i,
    input rvalid_i,
    output reg rready_o,

    output [`CPU_WIDTH-1:0] awaddr_o,
    output awvalid_o,
    input awready_i,

    output reg [`CPU_WIDTH-1:0] wdata_o,
    output reg [7:0] wstrb_o,
    output reg wvalid_o,
    input wready_i,

    input bresp_i,
    input bvalid_i,
    output reg bready_o
);

    localparam AR_IDLE = 3'b00,AR_RECEIVE = 3'b01,AR_SEND = 3'b10,AR_WAIT_SEND = 3'b11;
    localparam AR_IDLE = 3'b00,AR_RECEIVE = 3'b01,AR_SEND = 3'b10,AR_WAIT_SEND = 3'b11;

    reg ar_switch,r_switch,aw_switch,w_switch,b_switch;

    // Arbiter logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ar_switch <= 0;
            r_switch <= 0;
            aw_switch <= 1;
            w_switch <= 1;
            b_switch <= 1;
        end else begin
            if(arvalid_i_a == 1) begin ar_switch <= 0; r_switch <= 0;end
            else if(arvalid_i_b == 1) begin ar_switch <= 1; r_switch <= 1;end
            
        end
    end

    always@(*) begin
        case(ar_switch)
            1: begin
                araddr_o = araddr_i_b;
                arvalid_o = arvalid_i_b;
                arready_o_b = arready_i;
            end
            default: begin
                araddr_o = araddr_i_a;
                arvalid_o = arvalid_i_a;
                arready_o_a = arready_i;
            end
        endcase
    end

    always@(*) begin
        case(r_switch)
            1: begin
                rdata_o_b = rdata_i;
                rresp_o_b = rresp_i;
                rvalid_o_b = rvalid_i;
                rready_o = rready_i_b;
            end
            default: begin
                rdata_o_a = rdata_i;
                rresp_o_a = rresp_i;
                rvalid_o_a = rvalid_i;
                rready_o = rready_i_a;
            end
        endcase
    end

    always@(*) begin
        case(aw_switch)
            1: begin
                awaddr_o = awaddr_i_b;
                awvalid_o = awvalid_i_b;
                awready_o_b = awready_i;
            end
            default: begin
                awaddr_o = awaddr_i_a;
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
                wvalid_o = wvalid_i_b;
                wready_o_b = wready_i;
            end
            default: begin
                wdata_o = wdata_i_a;
                wstrb_o = wstrb_i_a;
                wvalid_o = wvalid_i_a;
                wready_o_a = wready_i;
            end
        endcase
    end
    
    always@(*) begin
        case(b_switch)
            1: begin
                bresp_o_b = bresp_i;
                bvalid_o_b = bvalid_i;
                bready_o = bready_i_b;
            end
            default: begin
                bresp_o_a = bresp_i;
                bvalid_o_a = bvalid_i;
                bready_o = bready_i_a;
            end
        endcase
    end

    

endmodule