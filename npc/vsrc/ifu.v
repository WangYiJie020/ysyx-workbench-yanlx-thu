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
    output ifu_ready_o,
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
    

    assign ifu_ready_o = ifu_ready_i;
    assign inst_o = inst_from_mem;


    always@(posedge clk) begin
        if(ifu_valid_i && ifu_ready_i) begin
            npc <= npc_i;
        end
    end

    always@(posedge clk) begin
        if(!rst_n) ifu_valid_o <= 1'b0;
        else if(ifu_ready_o) ifu_valid_o <= ifu_valid_i;
    end



endmodule