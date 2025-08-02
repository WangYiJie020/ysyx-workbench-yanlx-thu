`include "header.v"
module ifu(
    input clk,
    input rst_n,
    //to mem
    output [`PC_WIDTH-1:0] pc_to_mem,
    input [`INST_WIDTH-1:0] inst_from_mem,
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

    assign pc_to_mem = pc;
    assign pc_o = pc;

    assign inst_o = inst_from_mem;

    localparam S_IDLE = 2'b00,S_RECEIVE = 2'b01,S_SEND = 2'b10,S_WAIT_SEND = 2'b11;

    reg [1:0] current_state,next_state;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (ifu_valid_i == 1 && ifu_ready_o == 1) begin
                    next_state = S_RECEIVE;
                end else begin
                    next_state = current_state;
                end
            end
            
            S_RECEIVE: begin
                if (ifu_valid_o == 1 && ifu_ready_i == 1) begin
                    next_state = S_SEND;  
                end else begin
                    next_state = current_state;
                end
            end

            S_WAIT_SEND: begin
                if (ifu_valid_o == 1 && ifu_ready_i == 1) begin
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
            ifu_valid_o <= 0;
            ifu_ready_o <= 0;
            npc <= `PC_INIT;
        end else begin
            current_state <= next_state;
            if(current_state == S_IDLE) ifu_ready_o <= 1;
            else if(current_state == S_RECEIVE) ifu_ready_o <= 0;
            if(current_state == S_RECEIVE) begin 
                ifu_valid_o <= 0;
                npc <= npc_i;
            end else if (pc == `PC_INIT)begin
                ifu_valid_o <= 1;
            //end else if (current_state == S_WAIT_SEND)begin
            //    ifu_valid_o <= 1;
            end else if (current_state == S_SEND)begin
                ifu_valid_o <= 1;
            end else begin
                ifu_valid_o <= 0;
            end
            
        end
    end


endmodule