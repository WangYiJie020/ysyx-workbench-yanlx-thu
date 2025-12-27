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
    output reg [2:0] rmask,
    output reg csr_write,
    output reg adder_out_src,
    output reg csr_wdata_src
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
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0; csr_write = 1'b0;
                adder_out_src = 1'b0; csr_wdata_src = 1'b0;
            end 
            7'b0010111: begin //auipc
                a_in_src = 1'b1; b_in_src = 2'b01; reg_write = 1; pc_srcs = 3'b000;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0; csr_write = 1'b0;
                adder_out_src = 1'b0; csr_wdata_src = 1'b0;
            end
            7'b1101111: begin //jal
                a_in_src = 1'b1; b_in_src = 2'b10; reg_write = 1; pc_srcs = 3'b001;adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0; csr_write = 1'b0;
                adder_out_src = 1'b0; csr_wdata_src = 1'b0;
            end
            7'b1100111: begin
                case(funct3)
                    3'b000: begin //jalr
                        a_in_src = 1'b1; b_in_src = 2'b10; reg_write = 1; pc_srcs = 3'b001; 
                        adder_a_src = 1'b1; MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0;
                        rmask = 0; csr_write = 1'b0; adder_out_src = 1'b0; csr_wdata_src = 1'b0;
                    end //jalr
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0; csr_write = 1'b0;
                        adder_out_src = 1'b0; csr_wdata_src = 1'b0;
                    end
                endcase
            end
            7'b1100011: begin
                a_in_src = 1'b0; //choose rs1
                b_in_src = 2'b00; //choose rs2
                reg_write = 1'b0; //not write regfiles 
                adder_a_src = 1'b0;//choose pc
                MemRead = 1'b0; //not read mem
                MemWrite = 1'b0; //not write mem
                wmask = 0; //do not care 
                wb_src=1'b0; //do not care 
                rmask = 3'b000; //do not care 
                csr_write = 1'b0;
                adder_out_src = 1'b0; 
                csr_wdata_src = 1'b0;
                case(funct3)
                    3'b000: pc_srcs = 3'b010; //beq
                    3'b001: pc_srcs = 3'b011; //bne 
                    3'b100: pc_srcs = 3'b100; //blt 
                    3'b101: pc_srcs = 3'b101; //bge
                    3'b110: pc_srcs = 3'b110; //bltu
                    3'b111: pc_srcs = 3'b111; //bgeu
                    default: pc_srcs = 3'b000;
                endcase
            end
            7'b0000011:begin //lb lh lw lbu lhu
                a_in_src = 1'b0; //choose rs1
                b_in_src = 2'b01; //choose imm
                reg_write = 1'b1; //write regfiles 
                pc_srcs = 3'b000; //pc=pc+4
                adder_a_src = 1'b0;//do not care 
                MemRead = 1'b1; //read mem
                MemWrite = 1'b0; //not write mem
                wmask = 8'h0f; //do not care 
                wb_src=1'b1; //wb data is mem_data
                csr_write = 1'b0;
                adder_out_src = 1'b0; 
                csr_wdata_src = 1'b0;
                case(funct3)
                    3'b000: rmask = 3'b011; //lb
                    3'b001: rmask = 3'b001; //lh
                    3'b010: rmask = 3'b000; //lw 32 pass //lw
                    3'b100: rmask = 3'b100; //lbu
                    3'b101: rmask = 3'b010; //lhu
                    default: rmask = 0;
                endcase
            end
            7'b0100011:begin //sb sh sw
                a_in_src = 1'b0; //choose rs1
                b_in_src = 2'b01; //choose imm
                reg_write = 1'b0; //no need to write regfiles 
                pc_srcs = 3'b000; //pc=pc+4
                adder_a_src = 1'b0;//do not care 
                MemRead = 1'b0; //not read mem
                MemWrite = 1'b1; //write mem
                wb_src=1'b0; //wb data is default
                rmask = 0; //do not care 
                csr_write = 1'b0;
                adder_out_src = 1'b0; 
                csr_wdata_src = 1'b0;
                case(funct3)
                    3'b000: wmask = 8'h01; //sb //1 byte can write
                    3'b001: wmask = 8'h03; //sh //2 byte can write
                    3'b010: wmask = 8'h0f; //sw //4 byte can write
                    default: wmask = 0;
                endcase
            end
            
            7'b0010011: begin  //addi slti sltiu xori ori andi slli srli srai                   
                a_in_src = 1'b0; //choose rs1
                b_in_src = 2'b01; //choose imm
                reg_write = 1; //write regfiles 
                pc_srcs = 3'b000; //pc=pc+4
                adder_a_src = 1'b0; //do not care 
                MemRead = 1'b0; MemWrite = 1'b0; //not read mem //not write mem
                wmask = 0; rmask = 0; //do not care 
                wb_src=1'b0; //wb data is alu_result
                csr_write = 1'b0;
                adder_out_src = 1'b0; 
                csr_wdata_src = 1'b0;
            end
            7'b0110011:begin //add sub sll slt sltu xor srl sra or and
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
                csr_write = 1'b0;
                adder_out_src = 1'b0; 
                csr_wdata_src = 1'b0;
            end
            7'b1110011:begin
                case(funct3)
                    3'b000: begin //ecall mret
                        a_in_src = 1'b0; //do not care 
                        b_in_src = 2'b11; //do not care 
                        reg_write = 1'b0; //no need to write regfiles 
                        pc_srcs = 3'b001; //pc=pc_new
                        adder_a_src = 1'b0;//do not care 
                        MemRead = 1'b0; //not read mem
                        MemWrite = 1'b0; //not write mem
                        wmask = 8'h0f; //do not care 
                        wb_src=1'b0; //do not care 
                        rmask = 3'b000; //do not care 
                        csr_write = 1'b0; //do not care 
                        adder_out_src = 1'b1; //choose csr_rdata
                        csr_wdata_src = 1'b0; //do not care 
                    end
                    3'b001: begin //csrrw
                        a_in_src = 1'b0; //choose rs1
                        b_in_src = 2'b11; //choose csr_rdata
                        reg_write = 1'b1; //write regfiles 
                        pc_srcs = 3'b000; //pc=pc+4
                        adder_a_src = 1'b0;//do not care 
                        MemRead = 1'b0; //not read mem
                        MemWrite = 1'b0; //not write mem
                        wmask = 8'h0f; //do not care 
                        wb_src=1'b0; //wb data is alu_result
                        rmask = 3'b000; //do not care 
                        csr_write = 1'b1; //write csr
                        adder_out_src = 1'b0; //do not care
                        csr_wdata_src = 1'b0; //choose rs1
                    end
                    3'b010: begin //csrrs
                        a_in_src = 1'b0; //choose rs1
                        b_in_src = 2'b11; //choose csr_rdata
                        reg_write = 1'b1; //write regfiles 
                        pc_srcs = 3'b000; //pc=pc+4
                        adder_a_src = 1'b0;//do not care 
                        MemRead = 1'b0; //not read mem
                        MemWrite = 1'b0; //not write mem
                        wmask = 8'h0f; //do not care 
                        wb_src=1'b0; //wb data is alu_result
                        rmask = 3'b000; //do not care 
                        csr_write = 1'b1; //write csr
                        adder_out_src = 1'b0; //do not care
                        csr_wdata_src = 1'b1; //choose csr_wdata | rs1
                    end
                    default: begin 
                        a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                        MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0; csr_write = 1'b0;
                        adder_out_src = 1'b0; csr_wdata_src = 1'b0;
                    end
                endcase
            end
            default: begin 
                a_in_src = 1'b0; b_in_src = 2'b00; reg_write = 0; pc_srcs = 3'b000; adder_a_src = 1'b0;
                MemRead = 1'b0; MemWrite = 1'b0; wmask = 0; wb_src=1'b0; rmask = 0; csr_write = 1'b0;
                adder_out_src = 1'b0; csr_wdata_src = 1'b0;
            end
        endcase
    end


endmodule