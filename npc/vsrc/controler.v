module controler(
    input [31:0] inst,
    output reg a_in_src,
    output reg [1:0] b_in_src,
    output reg reg_write,
    output reg [2:0] pc_srcs,
    output reg adder_a_src,
    output reg MemRead,
    output reg MemWrite,
    output reg [7:0] wmask,
    output reg wb_src,
    output reg [2:0] rmask
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
                a_in_src = 1'b0; b_in_src = 2'b01; reg_write = 1; pc_srcs = 3'b000;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
            end 
            7'b0010111: begin //auipc
                a_in_src = 1'b1; b_in_src = 2'b01; reg_write = 1; pc_srcs = 3'b000;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
            end
            7'b1101111: begin //jal
                a_in_src = 1'b1; b_in_src = 2'b10; reg_write = 1; pc_srcs = 3'b001;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
            end
            7'b1100111: begin
                case(funct3)
                    3'b000: begin //jalr
                        a_in_src = 1'b1; b_in_src = 2'b10; reg_write = 1; pc_srcs = 3'b001; 
                        adder_a_src = 1'b1; MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0;
                        rmask = 0;
                    end //jalr
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
                    end
                endcase
            end
            7'b1100011: begin
                case(funct3)
                    3'b000:begin //beq
                        a_in_src = 1'b0; //choose rs1
                        b_in_src = 2'b00; //choose rs2
                        reg_write = 1'b0; //not write regfiles 
                        pc_srcs = 3'b010; //beq
                        adder_a_src = 1'b0;//choose pc
                        MemRead = 1'b0; //not read mem
                        MemWrite = 1'b0; //not write mem
                        wmask = 0; //do not care 
                        wb_src=1'b0; //do not care 
                        rmask = 3'b000; //do not care 
                    end
                    3'b001:begin //bne
                        a_in_src = 1'b0; //choose rs1
                        b_in_src = 2'b00; //choose rs2
                        reg_write = 1'b0; //not write regfiles 
                        pc_srcs = 3'b011; //bne 
                        adder_a_src = 1'b0;//choose pc
                        MemRead = 1'b0; //not read mem
                        MemWrite = 1'b0; //not write mem
                        wmask = 0; //do not care 
                        wb_src=1'b0; //do not care 
                        rmask = 3'b000; //do not care 
                    end
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
                    end
                endcase
            end
            7'b0000011:begin
                case(funct3)
                    3'b010:begin //lw
                        a_in_src = 1'b0; //choose rs1
                        b_in_src = 2'b01; //choose imm
                        reg_write = 1'b1; //write regfiles 
                        pc_srcs = 3'b000; //pc=pc+4
                        adder_a_src = 1'b0;//do not care 
                        MemRead = 1'b1; //read mem
                        MemWrite = 1'b0; //not write mem
                        wmask = 8'h0f; //do not care 
                        wb_src=1'b1; //wb data is mem_data
                        rmask = 3'b000; //lw 32 pass
                    end
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
                    end
                endcase
            end
            7'b0100011:begin
                case(funct3)
                    3'b010:begin //sw
                        a_in_src = 1'b0; //choose rs1
                        b_in_src = 2'b01; //choose imm
                        reg_write = 1'b0; //no need to write regfiles 
                        pc_srcs = 3'b000; //pc=pc+4
                        adder_a_src = 1'b0;//do not care 
                        MemRead = 1'b0; //not read mem
                        MemWrite = 1'b1; //write mem
                        wmask = 8'h0f; //4 byte can write
                        wb_src=1'b0; //wb data is default
                        rmask = 0; //pass
                    end
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
                    end
                endcase
            end
            
            7'b0010011: begin
                case(funct3) 
                    3'b000: begin //addi +
                        a_in_src = 1'b0; b_in_src = 2'b01; reg_write = 1; pc_srcs = 3'b000; 
                        adder_a_src = 1'b0; MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0;
                        rmask = 0;
                    end 
                    3'b011: begin //sltiu
                        a_in_src = 1'b0; //choose rs1
                        b_in_src = 2'b01; //choose imm
                        reg_write = 1; //write regfiles 
                        pc_srcs = 3'b000; //pc=pc+4
                        adder_a_src = 1'b0; //do not care 
                        MemRead = 1'b0; MemWrite = 1'b0; //not read mem //not write mem
                        wmask = 0; rmask = 0; //do not care 
                        wb_src=1'b0; //wb data is alu_result
                        
                    end 
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
                    end
                endcase
            end
            7'b0110011:begin
                case(funct3)
                    3'b000:begin 
                        case(funct7)
                            7'b0000000,7'b0100000:begin //add //sub
                                a_in_src = 1'b0; //choose rs1
                                b_in_src = 2'b00; //choose rs2
                                reg_write = 1'b1; //write regfiles 
                                pc_srcs = 3'b000; //pc=pc+4
                                adder_a_src = 1'b0;//do not care 
                                MemRead = 1'b0; //not read mem
                                MemWrite = 1'b0; //not write mem
                                wmask = 8'h0f; //do not care 
                                wb_src=1'b0; //wb data is alu_result
                                rmask = 3'b000; //do not care 
                            end
                            default: begin 
                                a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
                            end
                        endcase                     
                    end
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
                    end
                endcase
            end
            default: begin 
                a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0;
            end
        endcase
    end


endmodule