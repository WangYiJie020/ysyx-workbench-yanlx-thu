module alu(
    input [31:0]a,
    input [31:0]b,
    input [3:0]op,
    output reg [31:0]alu_result,
    output zero
);

assign zero = ~(| alu_result);

//wire [63:0] mux_tmp;
//assign mux_tmp = a*b;

always@(*) begin
    case(op)
        4'b0000: alu_result = b; 
        4'b0001: alu_result = a & b;
        4'b0010: alu_result = a | b;
        4'b0011: alu_result = a ^ b;
        4'b0100: alu_result = a + b;
        4'b0101: alu_result = a - b;
        4'b0110: alu_result = a << b[4:0];
        4'b0111: alu_result = a >> b[4:0];
        4'b1000: alu_result = ($signed(a)) >>> ($signed(b[4:0]));
        4'b1001: alu_result = (a < b) ? 32'd1 : 32'd0;
        4'b1010: alu_result = ($signed(a) < $signed(b)) ? 32'd1 : 32'd0;
        //4'b1011: alu_result = mux_tmp[31:0];
        //4'b1100: alu_result = mux_tmp[63:32];
        
        default: alu_result = b; 
    endcase

end



endmodule