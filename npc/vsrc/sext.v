module sext #(DATA_WIDTH = 32)(
    input [31:0] inst,
    output reg [DATA_WIDTH-1:0]data
);
    wire [6:0] opcode;
    wire [2:0] funct3;
    wire [6:0] funct7;
    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];

    always@(*) begin
        case (opcode)
            7'b0010011: begin
                case(funct3)
                    3'b000: data = {{20{inst[31]}},inst[31:20]}; //I //addi
                    default: data = 0;
                endcase
            end
            7'b0110111: begin //U //lui
                data = {inst[31:12],12'd0};
            end
            7'b0010111: begin //U //auipc
                data = {inst[31:12],12'd0};
            end
            7'b1101111: begin //UJ //jal
                data = {{12{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};
            end
            7'b1100111: begin
                case(funct3)
                    3'b000: data = {{20{inst[31]}},inst[31:20]}; //I //jalr
                    default: data = 0;
                endcase
            end
            7'b0100011: begin //S 
                case(funct3)
                    3'b000: data = {{20{inst[31]}},inst[31:25],inst[11:7]}; //S //sb
                    3'b001: data = {{20{inst[31]}},inst[31:25],inst[11:7]}; //S //sh
                    3'b010: data = {{20{inst[31]}},inst[31:25],inst[11:7]}; //S //sw
                    default: data = {{20{inst[31]}},inst[31:25],inst[11:7]};
                endcase
            end
            7'b0100011: begin //I
                case(funct3)
                    3'b000: data = {{20{inst[31]}},inst[31:20]}; //I //lb
                    3'b001: data = {{20{inst[31]}},inst[31:20]}; //I //lh
                    3'b010: data = {{20{inst[31]}},inst[31:20]}; //I //lw
                    3'b100: data = {{20{inst[31]}},inst[31:20]}; //I //lbu
                    3'b101: data = {{20{inst[31]}},inst[31:20]}; //I //lhu
                    default: data = {{20{inst[31]}},inst[31:20]};
                endcase
            end
            default: data = 0;
        endcase
    end

endmodule
