module inst_mem(
    input [31:0] pc,
    output [31:0] inst
);
    assign inst = pmem_read(pc,0);

endmodule