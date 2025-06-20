module controler(
    input [31:0] inst,
    output reg a_in_src,
    output reg [1:0] b_in_src,
    output reg reg_write,
    output reg pc_srcs,
    output reg adder_a_src,
    output reg MemRead,
    output reg MemWrite,
    output reg [7:0] wmask
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
                    3'b000: begin 
                        a_in_src = 1'b0; b_in_src = 2'b01; reg_write = 1; pc_srcs = 1'b0; 
                        adder_a_src = 1'b0; MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
                    end //addi +
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 1'b0; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
                    end
                endcase
            end
            7'b0110111: begin //lui
                a_in_src = 1'b0; b_in_src = 2'b01; reg_write = 1; pc_srcs = 1'b0;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
            end
            7'b0010111: begin //auipc
                a_in_src = 1'b1; b_in_src = 2'b01; reg_write = 1; pc_srcs = 1'b0;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
            end
            7'b1101111: begin //jal
                a_in_src = 1'b1; b_in_src = 2'b10; reg_write = 1; pc_srcs = 1'b1;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
            end
            7'b1100111: begin
                case(funct3)
                    3'b000: begin 
                        a_in_src = 1'b1; b_in_src = 2'b10; reg_write = 1; pc_srcs = 1'b1; 
                        adder_a_src = 1'b1; MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
                    end //jalr
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 1'b0; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
                    end
                endcase
            end
            default: begin 
                a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 1'b0; adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0;
            end
        endcase
    end


endmodule