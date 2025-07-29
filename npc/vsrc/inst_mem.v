module inst_mem(
    //input clk,
    input [31:0] pc,
    output [31:0] inst
);
    //always@(posedge clk) begin
    //    inst <= pmem_read(pc,0);
    //end
    assign inst = pmem_read(pc,0);

endmodule