`include "header.v"
module ifu(
    input clk,
    input rst_n,
    //to mem
    output reg [`CPU_WIDTH-1:0] araddr_o,
    output reg arvalid_o,
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

    dff #(`PC_WIDTH,`PC_INIT) PC (
        .clk(clk),
        .rst_n(rst_n),
        .din(npc),
        .dout(pc)
    );

    assign araddr_o = pc;
    //assign pc_o = pc;

    //assign inst_o = (rvalid_i == 1 && rready_o == 1) ? rdata_i : 0;

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
            arvalid_o <= 0;
            rready_o <= 0;
        end else begin
            current_state <= next_state;

            if(current_state == S_IDLE) ifu_ready_o <= 0;
            else if(current_state == S_SEND) ifu_ready_o <= 0;
            else if(current_state == S_WAIT_RECEIVE) ifu_ready_o <= 1;
            else if(current_state == S_RECEIVE) ifu_ready_o <= 1;
            else if(current_state == S_WAIT_SEND) ifu_ready_o <= 0;      
            
            if(current_state == S_IDLE) begin 
                ifu_valid_o <= 1;
                arvalid_o <= 1;
                rready_o <= 1;
                pc_o <= pc;
                inst_o <= rdata_i;
            end else if (current_state == S_SEND)begin
                ifu_valid_o <= 1;
                arvalid_o <= 0;
                rready_o <= 1;
                inst_o <= rdata_i;
                pc_o <= pc;
            end else if (current_state == S_WAIT_RECEIVE)begin
                ifu_valid_o <= 0;
                arvalid_o <= 0;
                rready_o <= 0;

            end else if(current_state == S_RECEIVE) begin 
                ifu_valid_o <= 0;
                npc <= npc_i;
                arvalid_o <= 1;
                rready_o <= 1;
            end else if(current_state == S_WAIT_SEND) begin               
                if(rvalid_i == 1 && rready_o == 1) ifu_valid_o <= 1;
                else ifu_valid_o <= 0;

                arvalid_o <= 1; 
                rready_o <= 1;

            end 

            
            
        end
    end


endmodule