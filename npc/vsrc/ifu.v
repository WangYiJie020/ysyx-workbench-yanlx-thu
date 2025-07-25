
module ifu(
    input clk,
    input rst_n,
    input [`PC_WIDTH-1:0] npc,
    output [`PC_WIDTHA-1:0] pc,
    output [`INST_WIDTH-1:0] inst,
    output ifu_valid_o,
    input ifu_ready_o,
    input ifu_valid_i,
    output ifu_ready_i

);
    wire [`INST_WIDTH-1:0] inst_tmp;
    reg [`INST_WIDTH-1:0] inst_out;

    dff #(WIDTH = `PC_WIDTH, 
        RESET_VAL = `PC_INIT
    ) PC (
        .clk(clk),
        .rst_n(rst_n),
        .din(npc),
        .dout(pc)
    );

    inst_mem Inst_Mem(
        .pc(pc),
        .inst(inst_tmp)
    );

    dff #(WIDTH = `INST_WIDTH, 
        RESET_VAL = 0
    ) Inst_Mem_Delay (
        .clk(clk),
        .rst_n(rst_n),
        .din(inst_tmp),
        .dout(inst_out)
    );

    assign ifu_ready_o = ifu_ready_i;
    

    always@(posedge clk) begin
        if(ifu_valid_o && ifu_ready_o) begin
            inst <= inst_out;
        end
    end



endmodule