module csr(
    input clk,
    input wen,
    input [31:0] inst,
    input [31:0] wdata,
    input [31:0] NO,
    input [31:0] pc,
    output reg [31:0] rdata,
    output [31:0] csr_reg [3:0]
);

    reg [31:0] csr_mepc;
    reg [31:0] csr_mstatus;
    reg [31:0] csr_mcause;
    reg [31:0] csr_mtvec;
    reg [31:0] csr_mvendorid;
    reg [31:0] csr_marchid;

    wire [6:0] opcode;
    wire [2:0] funct3;

    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];

    assign csr_reg[0] = csr_mepc;
    assign csr_reg[1] = csr_mstatus;
    assign csr_reg[2] = csr_mcause;
    assign csr_reg[3] = csr_mtvec;

    initial begin
        csr_mstatus = 32'h1800;
    end

    always@(posedge clk) begin
        case (opcode)
            7'b1110011:begin
                case (funct3)
                    3'b000:begin 
                        if(inst==32'h00000073) begin //ecall
                            csr_mepc <= pc;
                            csr_mcause <= NO;
                            //csr_mstatus[7] <= csr_mstatus[3];//MPIE = MIE
                            //csr_mstatus[3] <= 1'b0;//MIE set 0
                            //csr_mstatus[12:11] <= 2'b11;//MPP=11
                        end
                        else if(inst==32'h30200073) begin //mret
                            //csr_mstatus[3] <= csr_mstatus[7]; //MIE = MPIE
                            //csr_mstatus[7] <= 1'b0;//MPIE set 0
                        end
                    end
                    3'b001, 3'b010: begin //csrrw, csrrs
                        if(wen)begin
                            case (inst[31:20])
                                12'h300:csr_mstatus <= wdata;
                                12'h305:csr_mtvec <= wdata;
                                12'h341:csr_mepc <= wdata;
                                12'h342:csr_mcause <= wdata;
                                default:csr_mstatus <= csr_mstatus;
                            endcase
                        end
                    end
                    default:csr_mstatus <= csr_mstatus;
                endcase
            end
            default:csr_mstatus <= csr_mstatus;
        endcase
    end

    always@(*) begin
        case (opcode)
            7'b1110011:begin
                case (funct3)
                    3'b000:begin 
                        if(inst==32'h00000073) rdata = csr_mtvec; //ecall
                        else if(inst==32'h30200073) rdata = csr_mepc; //mret
                        else rdata = 0;
                    end
                    3'b001,3'b010: begin //csrrw, csrrs
                        case (inst[31:20])
                            12'h300:rdata = csr_mstatus;
                            12'h305:rdata = csr_mtvec;
                            12'h341:rdata = csr_mepc;
                            12'h342:rdata = csr_mcause;
                            default:rdata = 0;
                        endcase
                    end
                    default:rdata = 0;
                endcase
            end
            default:rdata = 0;
        endcase
    end

endmodule