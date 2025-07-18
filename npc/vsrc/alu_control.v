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
            7'b0110111: begin //lui
                alu_op = 4'b0000; //pass b
            end
            7'b0010111: begin //auipc
                alu_op = 4'b0100; //+
            end
            7'b1101111: begin //jal
                alu_op = 4'b0100; //+
            end
            7'b1100111: begin
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //jalr
                    default: alu_op = 0;
                endcase
            end
            7'b1100011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0101;//- //beq
                    3'b001: alu_op = 4'b0101;//- //bne
                    3'b100: alu_op = 4'b1010;//s<s //blt
                    3'b101: alu_op = 4'b1010;//s<s //bge
                    3'b110: alu_op = 4'b1001;//u<u //bltu
                    3'b111: alu_op = 4'b1001;//u<u //bgeu
                    default: alu_op = 4'b0101;//- 
                endcase
            end
            7'b0000011: begin //+ //lb lh lw lbu lhu
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //lb
                    3'b001: alu_op = 4'b0100; //+ //lh
                    3'b010: alu_op = 4'b0100; //+ //lw
                    3'b100: alu_op = 4'b0100; //+ //lbu
                    3'b101: alu_op = 4'b0100; //+ //lhu
                    default: alu_op = 4'b0100;
                endcase
            end
            7'b0100011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //sb
                    3'b001: alu_op = 4'b0100; //+ //sh
                    3'b010: alu_op = 4'b0100; //+ //sw
                    default: alu_op = 4'b0100;
                endcase
            end
            
            7'b0010011: begin
                case(funct3)
                    3'b000: alu_op = 4'b0100; //+ //addi
                    3'b010: alu_op = 4'b1010; //s<s //slti
                    3'b011: alu_op = 4'b1001; //u<u //sltiu
                    3'b100: alu_op = 4'b0011; //^ //xori
                    3'b110: alu_op = 4'b0010; //| //ori
                    3'b111: alu_op = 4'b0001; //& //andi
                    3'b001: alu_op = 4'b0110; //<< //slli
                    3'b101: begin
                        case(funct7)
                            7'b0000000: alu_op = 4'b0111; //>> //srli
                            7'b0100000: alu_op = 4'b1000; //>> //srai
                            default: alu_op = 4'b0111; //>> //srli
                        endcase
                    end
                    default: alu_op = 0;
                endcase
            end
            7'b0110011: begin
                case(funct3)
                    3'b000: begin
                        case(funct7)
                            7'b0000000: alu_op = 4'b0100;//+ //add
                            7'b0100000: alu_op = 4'b0101;//- //sub
                            default: alu_op = 0;
                        endcase
                    end
                    3'b001: alu_op = 4'b0110; //<< //sll
                    3'b010: alu_op = 4'b1010; //s<s //slt
                    3'b011: alu_op = 4'b1001; //u<u //sltu
                    3'b100: alu_op = 4'b0011; //^ //xor
                    3'b101: begin
                        case(funct7)
                            7'b0000000: alu_op = 4'b0111; //>> //srl
                            7'b0100000: alu_op = 4'b1000; //>> //sra
                            default: alu_op = 0;
                        endcase
                    end
                    3'b110: alu_op = 4'b0010; //| //or
                    3'b111: alu_op = 4'b0001; //& //and
                    default:alu_op = 0;
                endcase
            end
            7'b1110011: begin
                alu_op = 4'b0000;//pass b
            end
            default: alu_op = 0;
        endcase
    end

endmodule