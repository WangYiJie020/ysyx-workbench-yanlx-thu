module alu_control(
    input [31:0] inst,
    output reg [3:0] alu_op
);
    wire [6:0] opcode;
    wire [2:0] funct3;
    wire [6:0] funct7;
    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];

    always@(*)begin
        case(opcode)
            7'b0010011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0011; //addi +
                    default: alu_op = 0;
                endcase
            end
            7'b0110111: begin //lui
                alu_op = 4'b0000; //pass b
            end
            7'b0010111: begin //auipc
                alu_op = 4'b0011; //+
            end
            7'b1101111: begin //jal
                alu_op = 4'b0011; //+
            end
            7'b1100111: begin
                case(funct3)
                    3'b000: alu_op = 4'b0011; //+ //jalr
                    default: alu_op = 0;
                endcase
            end
            7'b0100011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0011; //+ //sb
                    3'b001: alu_op = 4'b0011; //+ //sh
                    3'b010: alu_op = 4'b0011; //+ //sw
                    default: alu_op = 0;
                endcase
            end
            default: alu_op = 0;
        endcase
    end

endmodule