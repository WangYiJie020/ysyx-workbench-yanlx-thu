module csr(
    input clk,
    input [31:0] inst,
    output [2:0] raddr_csr,
    output [1:0] waddr_csr,
    output ecall    
    
);
    wire [6:0] opcode;
    wire [2:0] funct3;

    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];

    always@(*) begin
        waddr_csr = 2'b00;
        case (opcode)
            7'b1110011:begin
                case (funct3)
                    3'b000:begin 
                        if(inst==32'h00000073) begin //ecall
                            ecall = 1'b1;
                            //csr_mstatus[7] <= csr_mstatus[3];//MPIE = MIE
                            //csr_mstatus[3] <= 1'b0;//MIE set 0
                            //csr_mstatus[12:11] <= 2'b11;//MPP=11
                        end
                        else begin 
                            ecall = 1'b0;
                            //csr_mstatus[3] <= csr_mstatus[7]; //MIE = MPIE
                            //csr_mstatus[7] <= 1'b0;//MPIE set 0
                        end
                    end
                    3'b001, 3'b010: begin //csrrw, csrrs
                        ecall = 1'b0;
                        case (inst[31:20])
                            12'h300:waddr_csr = 2'b00;
                            12'h305:waddr_csr = 2'b01;
                            12'h341:waddr_csr = 2'b10;
                            12'h342:waddr_csr = 2'b11;
                            default:waddr_csr = 2'b00;
                        endcase
                    end
                    default:ecall = 1'b0;
                endcase
            end
            default:ecall = 1'b0;;
        endcase
    end

    always@(*) begin
        case (opcode)
            7'b1110011:begin
                case (funct3)
                    3'b000:begin 
                        if(inst==32'h00000073) raddr_csr = 3'b110; //ecall
                        else if(inst==32'h30200073) raddr_csr = 3'b111; //mret
                        else raddr_csr = 0;
                    end
                    3'b001,3'b010: begin //csrrw, csrrs
                        case (inst[31:20])
                            12'hf11:raddr_csr = 3'b100;
                            12'hf12:raddr_csr = 3'b101;
                            12'h300:raddr_csr = 3'b000;
                            12'h305:raddr_csr = 3'b001;
                            12'h341:raddr_csr = 3'b010;
                            12'h342:raddr_csr = 3'b011;
                            default:raddr_csr = 0;
                        endcase
                    end
                    default:raddr_csr = 0;
                endcase
            end
            default:raddr_csr = 0;
        endcase
    end

endmodule