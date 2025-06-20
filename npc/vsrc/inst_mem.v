import "DPI-C" function int pmem_read(input int raddr);

module inst_mem(
    input [31:0] pc,
    output [31:0] inst
);
    assign inst = pmem_read(pc);

endmodule