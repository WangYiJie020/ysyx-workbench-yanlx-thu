module branch_control(
    input [31:0] pc4,
    input [31:0] pc_new,
    input [2:0] pc_srcs,
    input zero,
    input [31:0] alu_result,
    output reg [31:0] npc
);
    always@(*) begin
        case(pc_srcs)
            3'b000: npc = pc4; //pc=pc+4
            3'b001: npc = pc_new; //pc=pc+imm or pc=rs1+imm
            3'b010: begin //beq
                if(zero==1'b1) npc = pc_new; //sub is zero,equal,jump
                else npc = pc4;
            end
            3'b011: begin //bne
                if(zero==1'b0) npc = pc_new; //sub is not zero,unequal,jump
                else npc = pc4;
            end
            3'b100: begin //blt
                if(alu_result==32'd1) npc = pc_new;
                else npc = pc4;
            end
            3'b101: begin //bge
                if(alu_result==32'd0) npc = pc_new;
                else npc = pc4;
            end
            3'b110: begin //bltu
                if(alu_result==32'd1) npc = pc_new;
                else npc = pc4;
            end
            3'b111: begin //bgeu
                if(alu_result==32'd0) npc = pc_new;
                else npc = pc4;
            end
            default: npc = pc4; //pc=pc+4
        endcase

    end

endmodule