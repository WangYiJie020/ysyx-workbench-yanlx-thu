module alu(
    input [31:0]a,
    input [31:0]b,
    input [3:0]op,
    output reg [31:0]alu_result,
    output zero
);

assign zero = ~(| alu_result);

always@(*) begin
    case(op)
        4'b0000: alu_result = b; 
        4'b0001: alu_result = a & b;
        4'b0010: alu_result = a | b;
        4'b0011: alu_result = a + b;
        4'b0100: alu_result = a - b;
        4'b0101: alu_result = a << b;
        4'b0110: alu_result = a >> b;
        default: alu_result = b; 
    endcase

end



endmodule