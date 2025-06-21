import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata,input byte wmask);

module data_mem(
    input MemRead,
    input MemWrite,
    input [31:0] address,
    input [31:0] write_data,
    input [7:0] wmask,
    output reg [31:0] read_data

);

    always@(*) begin
        if(!MemWrite && MemRead) begin
            read_data = pmem_read(address);
        end
        else read_data = 0;

    end

    always@(*)begin 
        if(MemWrite && !MemRead) begin
            pmem_write(address,write_data,wmask);
        end
    end

endmodule