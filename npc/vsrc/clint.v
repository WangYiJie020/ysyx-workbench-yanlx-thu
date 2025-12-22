module clint(
    input clk,
    input rst_n,

    input [`CPU_WIDTH-1:0] araddr_i,
    input [3:0] arid_i,
    input [7:0] arlen_i,
    input [2:0] arsize_i,
    input [1:0] arburst_i,
    input arvalid_i,
    output reg arready_o,

    output reg [`CPU_WIDTH-1:0] rdata_o,
    output reg [1:0] rresp_o,
    output reg rlast_o,
    output reg [3:0] rid_o,
    output reg rvalid_o,
    input rready_i,

    input [`CPU_WIDTH-1:0] awaddr_i,
    input [3:0] awid_i,
    input [7:0] awlen_i,
    input [2:0] awsize_i,
    input [1:0] awburst_i,
    input awvalid_i,
    output reg awready_o,

    input [`CPU_WIDTH-1:0] wdata_i,
    input [3:0] wstrb_i,
    input wlast_i,
    input wvalid_i,
    output reg wready_o,

    output reg [1:0] bresp_o,
    output reg [3:0] bid_o,
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
    reg [3:0] wstrb;
    reg wvalid;
    reg flag_waddr,flag_wdata,flag_rdata,flag_raddr,flag_write;
    reg [4:0] rdata_counter,wdata_counter,w_delay,r_delay;
    reg [4:0] LFSR;
    reg lfsr_in;
    reg [1:0] write_box;

    reg [63:0] time_counter;

    assign rid_o = 0;
    assign bid_o = 0;

    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            time_counter <= 0;
        end
        else
            time_counter <= time_counter + 1;
    end

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
            else if(ar_state == 1) begin
                if(arvalid_i == 0) ar_state <= 0;
                arready_o <= 0;
            end

            if(arready_o == 1 && arvalid_i == 1) begin
                araddr <= araddr_i;
                flag_raddr <= 1;//get read addr
            end
            else 
                flag_raddr <= 0;
        end
    end
    
    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            r_state <= 0;
            rvalid_o <= 0;
            rdata_counter <= 0;
            flag_rdata <= 0;
            r_delay <= LFSR;
        end
        else begin
            if(flag_raddr == 1) flag_rdata <= 1;
            else if(flag_rdata == 1) begin
                if(rdata_counter == r_delay) begin
                    rdata_counter <= 0;
                    rresp_o <= 2'b00;
                    rvalid_o <= 1;
                    flag_rdata <= 0;
                    r_delay <= LFSR;
                    rlast_o <= 1;
                    if(araddr == 32'h02000048) rdata_o <= time_counter[31:0];
                    else if(araddr == 32'h0200004c) rdata_o <= time_counter[63:32];
                end
                else begin
                    rdata_counter <= rdata_counter + 1;
                    rresp_o <= 2'b10;
                    rvalid_o <= 0;
                    rlast_o <= 0;
                end
            end
            else begin
                rvalid_o <= 0;
                rdata_counter <= 0;
                rresp_o <= 2'b10;
                rlast_o <= 0;
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
            else if(aw_state == 1) begin
                if(awvalid_i == 0) aw_state <= 0;
                awready_o <= 0;
            end

            if(awready_o == 1 && awvalid_i == 1) begin
                awaddr <= awaddr_i;
                flag_waddr <= 1; 
            end 
            else if(bresp_o == 0) begin
                flag_waddr <= 0;
            end else flag_waddr <= 0;
        end
    end

    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            wready_o <= 0;
            w_state <= 0; //未握手
            wdata <= 0;
            wstrb <= 0;
            flag_wdata <= 0;
        end
        else begin
            if(w_state == 0 && wvalid_i == 1) begin
                wready_o <= 1;
                w_state <= 1;
            
            end else if(w_state == 1) begin
                if(wvalid_i == 0) w_state <= 0;
                wready_o <= 0;
            end

            if(bresp_o == 0) 
                flag_wdata <= 0;
            else if(wready_o == 1 && wvalid_i == 1) begin
                wdata <= wdata_i;
                wstrb <= wstrb_i;
                flag_wdata <= 1;
                //pmem_write(awaddr,wdata,wstrb);
                //bresp_o <= 0;
            end else flag_wdata <= 0;
            //else if(bresp_o == 0) begin
                //flag_wdata <= 0;
                //bresp_o <= 1;
            //end
            //else bresp_o <= 1;
        end
    end

    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            bresp_o <= 2'b10;
            bvalid_o <= 0;
            w_delay <= LFSR;
            wdata_counter <= 0;
        end
        else begin 
            if(flag_waddr == 1 ) write_box[0] <= 1;
            if(flag_wdata == 1) write_box[1] <= 1;

            if(write_box == 2'b11) begin
                if(wdata_counter == w_delay) begin
                    wdata_counter <= 0;
                    //pmem_write(awaddr,wdata,wstrb);
                    //$write("%c",wdata[7:0]);
                    bresp_o <= 0;
                    bvalid_o <= 1;
                    write_box <= 0;
                    w_delay <= LFSR;
                end else begin
                    wdata_counter <= wdata_counter + 1;
                    bresp_o <= 2'b10;
                    bvalid_o <= 0;
                end
            end else begin
                bresp_o <= 2'b10;
                bvalid_o <= 0;
            end
        end
    end
    
    assign lfsr_in = LFSR[4] ^ LFSR[3] ^ LFSR[2] ^ LFSR[1] ^ LFSR[0];
    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) LFSR <= 5'b00001;
        else begin
            LFSR <= {lfsr_in,LFSR[4:1]};
        end
    end



endmodule