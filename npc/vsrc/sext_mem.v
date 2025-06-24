module sext_mem(
    input [31:0] read_data,
    input [1:0] addr_low2,
    input [2:0] rmask,
    output reg [31:0] mem_data
);
    
    wire [31:0] sbyte3,sbyte2,sbyte1,sbyte0;
    wire [31:0] byte3,byte2,byte1,byte0;

    assign sbyte3 = {{24{read_data[31]}},read_data[31:24]};
    assign sbyte2 = {{24{read_data[23]}},read_data[23:16]};
    assign sbyte1 = {{24{read_data[15]}},read_data[15:8]};
    assign sbyte0 = {{24{read_data[7]}},read_data[7:0]};

    assign byte3 = {24'd0,read_data[31:24]};
    assign byte2 = {24'd0,read_data[23:16]};
    assign byte1 = {24'd0,read_data[15:8]};
    assign byte0 = {24'd0,read_data[7:0]};
    always@(*) begin
        case(rmask)
            3'b000:mem_data = read_data; //lw
            3'b001:begin //lh
                mem_data = addr_low2[1] ? ({{16{read_data[31]}},read_data[31:16]}) : ({{16{read_data[15]}},read_data[15:0]}) ;//lh
            end
            3'b010:begin //lhu
                mem_data = addr_low2[1] ? ({16'd0,read_data[31:16]}) : ({16'd0,read_data[15:0]}) ;//lhu
            end
            3'b011:mem_data = addr_low2[1] ? (addr_low2[0] ? sbyte3 : sbyte2) : (addr_low2[0] ? sbyte1 : sbyte0);//lb
            3'b100:mem_data = addr_low2[1] ? (addr_low2[0] ? byte3 : byte2) : (addr_low2[0] ? byte1 : byte0);//lbu
            default:mem_data = read_data;

        endcase
    end


endmodule