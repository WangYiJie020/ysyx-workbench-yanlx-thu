module sext_mem(
    input [31:0] read_data,
    input [2:0] rmask,
    output reg [31:0] mem_data
);

    always@(*) begin
        case(rmask)
            3'b000:mem_data = read_data; //lw
            3'b001:mem_data = {{16{read_data[15]}},read_data[15:0]} ;//lh
            3'b010:mem_data = {16'd0,read_data[15:0]} ;//lhu
            3'b011:mem_data = {{24{read_data[7]}},read_data[7:0]} ;//lb
            3'b100:mem_data = {24'd0,read_data[7:0]} ;//lb
            default:mem_data = read_data;

        endcase
    end


endmodule