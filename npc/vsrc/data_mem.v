import "DPI-C" function int pmem_read(input int raddr,input byte rmask);
import "DPI-C" function void pmem_write(input int waddr, input int wdata,input byte wmask);

module data_mem(
    input MemRead,
    input MemWrite,
    input [31:0] address,
    input [31:0] write_data,
    input [7:0] wmask,
    input [2:0] rmask,
    output reg [31:0] read_data

);
    reg [7:0] wmask_send;

    wire [7:0] rmask_send;
    assign rmask_send = {4'd0,rmask};

    always@(*) begin
        case(wmask)
            8'h01: wmask_send = wmask << (address[1:0]);
            8'h03: wmask_send = wmask << (address[1:0]);
            8'h0f: wmask_send = wmask;
            default: wmask_send = wmask;
        endcase
    end

    always@(*) begin
        if(!MemWrite && MemRead) begin
            read_data = pmem_read(address,rmask_send);
        end
        else read_data = 0;

    end

    always@(*)begin 
        if(MemWrite && !MemRead) begin
            pmem_write(address,write_data,wmask_send);
        end
    end

endmodule