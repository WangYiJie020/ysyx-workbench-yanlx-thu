module sext #(DATA_WIDTH = 32)(
    input [31:0] inst,
    output reg [DATA_WIDTH-1:0]data
);
    wire [6:0] op = {inst[14:12],inst[6:0]};

    always@(*) begin
        case (op)
            10'b000_0010011: data = {{20{inst[31]}},inst[31:20]};
            default: data = 0;
        endcase
    end

endmodule
