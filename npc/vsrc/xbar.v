module xbar(
    input clk,
    input rst_n,

    //in
    input [`CPU_WIDTH-1:0] axi_araddr_i,
    input axi_arvalid_i,
    output reg axi_arready_o,

    output reg [`CPU_WIDTH-1:0] axi_rdata_o,
    output reg axi_rresp_o,
    output reg axi_rvalid_o,
    input axi_rready_i,

    input [`CPU_WIDTH-1:0] axi_awaddr_i,
    input axi_awvalid_i,
    output reg axi_awready_o,

    input [`CPU_WIDTH-1:0] axi_wdata_i,
    input [7:0] axi_wstrb_i,
    input axi_wvalid_i,
    output reg axi_wready_o,

    output reg axi_bresp_o,
    output reg axi_bvalid_o,
    input axi_bready_i,

    //to mem
    output reg [`CPU_WIDTH-1:0] sram_araddr_o,
    output reg sram_arvalid_o,
    input sram_arready_i,

    input [`CPU_WIDTH-1:0] sram_rdata_i,
    input sram_rresp_i,
    input sram_rvalid_i,
    output reg sram_rready_o,

    output [`CPU_WIDTH-1:0] sram_awaddr_o,
    output sram_awvalid_o,
    input sram_awready_i,

    output reg [`CPU_WIDTH-1:0] sram_wdata_o,
    output reg [7:0] sram_wstrb_o,
    output reg sram_wvalid_o,
    input sram_wready_i,

    input sram_bresp_i,
    input sram_bvalid_i,
    output reg sram_bready_o,

    //to uart
    output reg [`CPU_WIDTH-1:0] uart_araddr_o,
    output reg uart_arvalid_o,
    input uart_arready_i,

    input [`CPU_WIDTH-1:0] uart_rdata_i,
    input uart_rresp_i,
    input uart_rvalid_i,
    output reg uart_rready_o,

    output [`CPU_WIDTH-1:0] uart_awaddr_o,
    output uart_awvalid_o,
    input uart_awready_i,

    output reg [`CPU_WIDTH-1:0] uart_wdata_o,
    output reg [7:0] uart_wstrb_o,
    output reg uart_wvalid_o,
    input uart_wready_i,

    input uart_bresp_i,
    input uart_bvalid_i,
    output reg uart_bready_o
);

    reg ar_switch,r_switch,aw_switch,w_switch,b_switch;

    // Arbiter logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ar_switch <= 1;
            r_switch <= 1;
            aw_switch <= 1;
            w_switch <= 1;
            b_switch <= 1;
        end else begin
            if(axi_awaddr_i >= 32'h8000_0000 && axi_awaddr_i <= 32'h80ff_ffff) begin 
                aw_switch <= 1; 
                w_switch <= 1;
                b_switch <= 1;
            end
            else if(axi_awaddr_i == 32'ha00003f8) begin 
                aw_switch <= 0; 
                w_switch <= 0;
                b_switch <= 0;
            end
            
        end
    end

    always@(*) begin
        case(ar_switch)
            1: begin
                sram_araddr_o = axi_araddr_i;
                sram_arvalid_o = axi_arvalid_i;
                axi_arready_o = sram_arready_i;
            end
            default: begin
                uart_araddr_o = axi_araddr_i;
                uart_arvalid_o = axi_arvalid_i;
                axi_arready_o = uart_arready_i;
            end
        endcase
    end

    always@(*) begin
        case(r_switch)
            1: begin
                axi_rdata_o = sram_rdata_i;
                axi_rresp_o = sram_rresp_i;
                axi_rvalid_o = sram_rvalid_i;
                sram_rready_o = axi_rready_i;
            end
            default: begin
                axi_rdata_o = uart_rdata_i;
                axi_rresp_o = uart_rresp_i;
                axi_rvalid_o = uart_rvalid_i;
                uart_rready_o = axi_rready_i;
            end
        endcase
    end

    always@(*) begin
        case(aw_switch)
            1: begin
                sram_awaddr_o = axi_awaddr_i;
                sram_awvalid_o = axi_awvalid_i;
                axi_awready_o = sram_awready_i;
            end
            default: begin
                uart_awaddr_o = axi_awaddr_i;
                uart_awvalid_o = axi_awvalid_i;
                axi_awready_o = uart_awready_i;
            end
        endcase
    end

    always@(*) begin
        case(w_switch)
            1: begin
                sram_wdata_o = axi_wdata_i;
                sram_wstrb_o = axi_wstrb_i;
                sram_wvalid_o = axi_wvalid_i;
                axi_wready_o = sram_wready_i;
            end
            default: begin
                uart_wdata_o = axi_wdata_i;
                uart_wstrb_o = axi_wstrb_i;
                uart_wvalid_o = axi_wvalid_i;
                axi_wready_o = uart_wready_i;
            end
        endcase
    end
    
    always@(*) begin
        case(b_switch)
            1: begin
                axi_bresp_o = sram_bresp_i;
                axi_bvalid_o = sram_bvalid_i;
                sram_bready_o = axi_bready_i;
            end
            default: begin
                axi_bresp_o = uart_bresp_i;
                axi_bvalid_o = uart_bvalid_i;
                uart_bready_o = axi_bready_i;
            end
        endcase
    end

    




endmodule