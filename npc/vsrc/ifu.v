`include "header.v"

//`define DELAY
module ifu(
    input clk,
    input rst_n,
    //to mem
    output [`CPU_WIDTH-1:0] araddr_o,
    output arvalid_o,
    input arready_i,
    input [`CPU_WIDTH-1:0] rdata_i,
    input rresp_i,
    input rvalid_i,
    output reg rready_o,
    //wbu to ifu
    input [`PC_WIDTH-1:0] npc_i,
    input ifu_valid_i,
    output reg ifu_ready_o,
    //ifu to idu
    output [`PC_WIDTH-1:0] pc_o,
    output reg [`INST_WIDTH-1:0] inst_o,
    output reg ifu_valid_o,
    input ifu_ready_i
    

);
    
    wire [`PC_WIDTH-1:0] pc;
    reg [`PC_WIDTH-1:0] npc;

    reg [4:0] LFSR;
    reg lfsr_in;

    reg arvalid;
    reg [`CPU_WIDTH-1:0] araddr;

    dff #(`PC_WIDTH,`PC_INIT) PC (
        .clk(clk),
        .rst_n(rst_n),
        .din(npc),
        .dout(pc)
    );

    assign araddr = pc;
    //assign pc_o = pc;

    assign inst_o = rdata_i;

    localparam S_IDLE = 3'b00,S_RECEIVE = 3'b01,S_SEND = 3'b10,S_WAIT_RECEIVE = 3'b11;
    localparam S_WAIT_SEND = 3'b100;

    reg [2:0] current_state,next_state;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (ifu_valid_o == 1 && ifu_ready_i == 1) begin
                    next_state = S_SEND;
                end else begin
                    next_state = current_state;
                end
            end

            S_SEND: begin
                next_state = S_WAIT_RECEIVE;                                 
            end

            S_WAIT_RECEIVE: begin
                if (ifu_valid_i == 1 && ifu_ready_o == 1) begin
                    next_state = S_RECEIVE;  
                end else begin
                    next_state = current_state;
                end
            end
            
            S_RECEIVE: begin
                next_state = S_WAIT_SEND;  
            end

            S_WAIT_SEND: begin
                if (ifu_valid_o == 1 && ifu_ready_i == 1) begin
                    next_state = S_SEND;  
                end else begin
                    next_state = current_state;
                end
            end             
        
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n) begin
            current_state <= S_IDLE;
            ifu_valid_o <= 0;
            ifu_ready_o <= 0;
            npc <= `PC_INIT;
            arvalid <= 1;
            rready_o <= 0;
        end else begin
            current_state <= next_state;

            if(current_state == S_IDLE) ifu_ready_o <= 0;
            else if(current_state == S_SEND) ifu_ready_o <= 0;
            else if(current_state == S_WAIT_RECEIVE) ifu_ready_o <= 1;
            else if(current_state == S_RECEIVE) ifu_ready_o <= 1;
            else if(current_state == S_WAIT_SEND) ifu_ready_o <= 0;      
            
            if(current_state == S_IDLE) begin 
                if(rvalid_i == 1 && rready_o == 1) ifu_valid_o <= 1;
                else ifu_valid_o <= 0;
                //arvalid_o <= 1;
                rready_o <= 1;
                pc_o <= pc;
                //inst_o <= rdata_i;
                if(arvalid==1 && arready_i==1) begin
                    arvalid <= 0;
                end
            end else if (current_state == S_SEND)begin
                ifu_valid_o <= 1;
                arvalid <= 0;
                rready_o <= 0;
                //inst_o <= rdata_i;
                pc_o <= pc;
            end else if (current_state == S_WAIT_RECEIVE)begin
                ifu_valid_o <= 0;
                arvalid <= 0;
                rready_o <= 0;

            end else if(current_state == S_RECEIVE) begin 
                ifu_valid_o <= 0;
                npc <= npc_i;
                arvalid <= 0;
                rready_o <= 1;
            end else if(current_state == S_WAIT_SEND) begin               
                if(rresp_i) ifu_valid_o <= 1;
                else ifu_valid_o <= 0;
                
                arvalid <= 1; 
                rready_o <= 1;
                if(arvalid==1 && arready_i==1) begin
                    arvalid <= 0;
                end 

            end 

            
            
        end
    end

`ifdef DELAY
    reg [4:0] LFSR;
    reg lfsr_in;

    assign lfsr_in = LFSR[4] ^ LFSR[3] ^ LFSR[2] ^ LFSR[1] ^ LFSR[0];
    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) LFSR <= 5'b00001;
        else begin
            LFSR <= {lfsr_in,LFSR[4:1]};
        end
    end

    reg arvalid_buffer [31:0];
    reg [`CPU_WIDTH-1:0] araddr_buffer [31:0];

    

    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            genvar gv_i;
            generate
            for(gv_i=0;gv_i<32;gv_i++) begin
                araddr_buffer[gv_i] <= 32'd0;
                arvalid_buffer[gv_i] <= 1'b1;
            end
            endgenerate
        end
        else begin
            genvar gv_i;
            generate
            for(gv_i=1;gv_i<32;gv_i++) begin
                araddr_buffer[gv_i] <= araddr_buffer[gv_i-1];
                arvalid_buffer[gv_i] <= arvalid_buffer[gv_i-1];
            end
            endgenerate
            araddr_buffer[0] <= araddr;
            arvalid_buffer[0] <= arvalid;
        end
    end

    always@(*)begin
        
    end




`else 
    assign arvalid_o = arvalid;
    assign araddr_o = araddr;

`endif

    


endmodule