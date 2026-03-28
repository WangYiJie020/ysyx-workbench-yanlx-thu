module inst_mem(
    input clk,
    input [31:0] pc,
    output reg [31:0] inst
);
    always@(posedge clk) begin
        inst <= pmem_read(pc);
    end
    //assign inst = pmem_read(pc,0);

endmodule