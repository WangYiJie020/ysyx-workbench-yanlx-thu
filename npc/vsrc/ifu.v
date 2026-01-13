`include "header.v"

import "DPI-C" function void return_inst(input int inst1,input byte inst_opcode);
import "DPI-C" function void inst_counter_add();

//`define IFU_DELAY
module ifu(
    input clk,
    input rst_n,
    //to mem
    output reg [`CPU_WIDTH-1:0] araddr_o,
    output reg [3:0] arid_o,
    output reg [7:0] arlen_o,
    output reg [2:0] arsize_o,
    output reg [1:0] arburst_o,
    output reg arvalid_o,
    input arready_i,
    input [`CPU_WIDTH-1:0] rdata_i,
    input [1:0] rresp_i,
    input rlast_i,
    input [3:0] rid_i,
    input rvalid_i,
    output reg rready_o,
    //wbu to ifu
    input [`PC_WIDTH-1:0] npc_i,
    input ifu_valid_i,
    output reg ifu_ready_o,
    //ifu to idu
    output [`PC_WIDTH-1:0] pc_o,
    output reg [`INST_WIDTH-1:0] inst_o,
    output reg ifu_valid_o,
    input ifu_ready_i
    

);
    
    reg [`PC_WIDTH-1:0] pc;

    reg [4:0] LFSR, arvalid_delay, rready_delay;
    reg lfsr_in;

    reg arvalid;
    reg [`CPU_WIDTH-1:0] araddr,inst;
    reg rready;

    reg [31:0] arvalid_buffer ;
    reg [`CPU_WIDTH-1:0] araddr_buffer [31:0];
    reg [31:0] rready_buffer ;

    //dff #(`PC_WIDTH,`PC_INIT) PC (
    //    .clk(clk),
    //    .rst_n(rst_n),
    //    .din(npc),
    //    .dout(pc)
    //);

    //assign araddr = (current_state == S_IDLE || current_state == S_IDLE ) ? pc :0;
    assign arid_o = 0;
    assign arlen_o = 0;
    assign arsize_o = 3'b010; //4bytes
    assign arburst_o = 0;

    //assign inst_o = rdata_i;

    localparam S_IDLE = 3'b000,S_RECEIVE = 3'b001,S_SEND = 3'b010,S_WAIT_RECEIVE = 3'b011;
    localparam S_WAIT_SEND = 3'b100;

    reg [2:0] current_state,next_state;
    reg [2:0] receive_counter;
    reg ready_flag,arvalid_flag;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (rready == 1 && rvalid_i == 1) begin
                    next_state = S_SEND;
                end else begin
                    next_state = current_state;
                end
            end

            S_SEND: begin
                if (ifu_valid_o == 1 && ifu_ready_i == 1) begin //发送成功
                    next_state = S_WAIT_RECEIVE;   
                end else begin
                    next_state = current_state;
                end                              
            end

            S_WAIT_RECEIVE: begin
                if (ifu_valid_i == 1 && ifu_ready_o == 1) begin //收到新NPC
                    next_state = S_RECEIVE;  
                end else begin
                    next_state = current_state;
                end
            end
            
            S_RECEIVE: begin  
                ///if(receive_counter == 2)  
                    next_state = S_WAIT_SEND;  
                //else next_state = current_state; 
            end

            S_WAIT_SEND: begin
                if (rready == 1 && rvalid_i == 1) begin
                    next_state = S_SEND;  
                end else begin
                    next_state = current_state;
                end
            end             
        
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n) begin
            current_state <= S_IDLE;
            ifu_valid_o <= 0;
            ifu_ready_o <= 0;
            pc <= `PC_INIT;
            arvalid <= 0;
            rready <= 0;
            arvalid_flag <= 0;
            //araddr <= pc;
        end else begin
            current_state <= next_state;

            if(current_state == S_IDLE) ifu_ready_o <= 0;
            else if(current_state == S_SEND) ifu_ready_o <= 0;
            else if(current_state == S_WAIT_RECEIVE) ifu_ready_o <= 1;
            else if(current_state == S_RECEIVE) ifu_ready_o <= 0;
            else if(current_state == S_WAIT_SEND) ifu_ready_o <= 0;      
            
            if(current_state == S_IDLE) begin 
                araddr <= `PC_INIT;
                if(rvalid_i == 1 && rready == 1) begin 
                    //ifu_valid_o <= 1;
                    inst <= rdata_i;
                end
                //else ifu_valid_o <= 0;
                //arvalid <= 1;   
                if(rready == 1 && rvalid_i == 1) rready <= 0;          
                else rready <= 1;
                
                //if(arvalid==1 && arready_i==1) begin
                //    arvalid <= 0;
                //end

                if(arvalid_flag == 0) begin
                    arvalid <= 1; 
                    arvalid_flag <= 1;
                end
                else begin
                    arvalid <= 0;
                end

            end else if (current_state == S_SEND)begin
                //if(rlast_i==1 && rvalid_i == 1 && rready == 1) begin
                //    inst_o <= rdata_i;
                //end
                if(arvalid==1 && arready_i==1) begin
                    arvalid <= 0;
                end
                ifu_valid_o <= 1;
                arvalid <= 0;
                rready <= 0;
                inst_o <= inst;
                pc_o <= pc;     
                ready_flag <= 0; 
                receive_counter <= 0; 

            end else if (current_state == S_WAIT_RECEIVE)begin
                ifu_valid_o <= 0;
                arvalid <= 0;
                rready <= 1;  
                //pc <= npc_i;
                if (ifu_valid_i == 1 && ifu_ready_o == 1)
                    pc <= npc_i;     
                
            end else if(current_state == S_RECEIVE) begin 
                //if(receive_counter == 2) begin
                    receive_counter <= 0;
                    arvalid <= 1;
                    rready <= 0;
                    araddr <= pc; 
                //end
                //else receive_counter <= receive_counter + 1;
                ifu_valid_o <= 0;                
                
                //if(rlast_i==1 && rvalid_i == 1 && rready == 1) begin
                //    ifu_valid_o <= 1;
                    //rready <= 0;
                    //inst <= rdata_i;
                //end
                //else ifu_valid_o <= 0;
 
            end else if(current_state == S_WAIT_SEND) begin     
                //receive_counter <= 0;                        
                if(rready == 1 && rvalid_i == 1) begin
                    inst <= rdata_i;
                    //rready <= 0;
                end
                rready <= 1; 
                //if(receive_counter == 2) begin
                //    receive_counter <= 0;
                    
                //end
                //else receive_counter <= receive_counter + 1;
                //ifu_valid_o <= 1;
                //arvalid <= 1; 
                //rready <= 1;
                //if(rvalid_i == 0 && ready_flag==0) begin 
                //    rready <= 0;   
                //    ready_flag <= 1;
                //end    
                //else  rready <= 1; 
                //rready <= 1; 
                   
                if(arvalid==1 && arready_i==1) begin
                    arvalid <= 0;
                end
                //if(rlast_i==1 && rvalid_i == 1 && rready == 1) begin
                //    rready <= 0;
                //end
            end            
        end
    end

    always@(posedge clk) begin
        return_inst(inst,{1'b0,inst[6:0]});
        if(rvalid_i == 1 && rready_o == 1 && current_state == S_WAIT_SEND)begin //r 通道握手
            inst_counter_add();
        end
    end

`ifdef IFU_DELAY

    assign lfsr_in = LFSR[4] ^ LFSR[3] ^ LFSR[2] ^ LFSR[1] ^ LFSR[0];
    always@(posedge clk, negedge rst_n) begin
        if(rst_n == 0) LFSR <= 5'b00001;
        else begin
            LFSR <= {lfsr_in,LFSR[4:1]};
        end
    end


    always @(posedge clk, negedge rst_n) begin
        if(rst_n == 0) begin
            for(integer i=0; i<32; i=i+1) begin
                araddr_buffer[i] <= 32'd0;
                arvalid_buffer[i] <= 1'b0;
                rready_buffer[i] <= 1'b1;
            end
        end
        else begin
            if(current_state == S_WAIT_RECEIVE) begin
                //arvalid_delay <= {3'd0,LFSR[1:0]};
                arvalid_delay <= LFSR;
                for(integer i=0; i<32; i=i+1) begin
                    araddr_buffer[i] <= 32'd0;
                    arvalid_buffer[i] <= 1'b0;
                end
            end
            else begin
                for(integer j=1; j<32; j=j+1) begin
                    araddr_buffer[j] <= araddr_buffer[j-1];
                    arvalid_buffer[j] <= arvalid_buffer[j-1];
                end
                araddr_buffer[0] <= araddr;
                arvalid_buffer[0] <= arvalid;
            end

            if(current_state == S_WAIT_RECEIVE) begin
                rready_delay <= LFSR;
                for(integer i=0; i<32; i=i+1) begin
                    rready_buffer[i] <= 1'b0;
                end
            end
            else begin
                for(integer j=1; j<32; j=j+1) begin
                    rready_buffer[j] <= rready_buffer[j-1];
                end
                rready_buffer[0] <= rready;
            end
        end
    end

    always@(*)begin
        case(arvalid_delay)
            5'd0:  begin arvalid_o = arvalid_buffer[0]; araddr_o = araddr_buffer[0]; end
            5'd1:  begin arvalid_o = arvalid_buffer[1]; araddr_o = araddr_buffer[1]; end
            5'd2:  begin arvalid_o = arvalid_buffer[2]; araddr_o = araddr_buffer[2]; end
            5'd3:  begin arvalid_o = arvalid_buffer[3]; araddr_o = araddr_buffer[3]; end
            5'd4:  begin arvalid_o = arvalid_buffer[4]; araddr_o = araddr_buffer[4]; end
            5'd5:  begin arvalid_o = arvalid_buffer[5]; araddr_o = araddr_buffer[5]; end
            5'd6:  begin arvalid_o = arvalid_buffer[6]; araddr_o = araddr_buffer[6]; end
            5'd7:  begin arvalid_o = arvalid_buffer[7]; araddr_o = araddr_buffer[7]; end
            5'd8:  begin arvalid_o = arvalid_buffer[8]; araddr_o = araddr_buffer[8]; end
            5'd9:  begin arvalid_o = arvalid_buffer[9]; araddr_o = araddr_buffer[9]; end
            5'd10: begin arvalid_o = arvalid_buffer[10]; araddr_o = araddr_buffer[10]; end
            5'd11: begin arvalid_o = arvalid_buffer[11]; araddr_o = araddr_buffer[11]; end
            5'd12: begin arvalid_o = arvalid_buffer[12]; araddr_o = araddr_buffer[12]; end
            5'd13: begin arvalid_o = arvalid_buffer[13]; araddr_o = araddr_buffer[13]; end
            5'd14: begin arvalid_o = arvalid_buffer[14]; araddr_o = araddr_buffer[14]; end
            5'd15: begin arvalid_o = arvalid_buffer[15]; araddr_o = araddr_buffer[15]; end
            5'd16: begin arvalid_o = arvalid_buffer[16]; araddr_o = araddr_buffer[16]; end
            5'd17: begin arvalid_o = arvalid_buffer[17]; araddr_o = araddr_buffer[17]; end
            5'd18: begin arvalid_o = arvalid_buffer[18]; araddr_o = araddr_buffer[18]; end
            5'd19: begin arvalid_o = arvalid_buffer[19]; araddr_o = araddr_buffer[19]; end
            5'd20: begin arvalid_o = arvalid_buffer[20]; araddr_o = araddr_buffer[20]; end
            5'd21: begin arvalid_o = arvalid_buffer[21]; araddr_o = araddr_buffer[21]; end
            5'd22: begin arvalid_o = arvalid_buffer[22]; araddr_o = araddr_buffer[22]; end
            5'd23: begin arvalid_o = arvalid_buffer[23]; araddr_o = araddr_buffer[23]; end
            5'd24: begin arvalid_o = arvalid_buffer[24]; araddr_o = araddr_buffer[24]; end
            5'd25: begin arvalid_o = arvalid_buffer[25]; araddr_o = araddr_buffer[25]; end
            5'd26: begin arvalid_o = arvalid_buffer[26]; araddr_o = araddr_buffer[26]; end
            5'd27: begin arvalid_o = arvalid_buffer[27]; araddr_o = araddr_buffer[27]; end
            5'd28: begin arvalid_o = arvalid_buffer[28]; araddr_o = araddr_buffer[28]; end
            5'd29: begin arvalid_o = arvalid_buffer[29]; araddr_o = araddr_buffer[29]; end
            5'd30: begin arvalid_o = arvalid_buffer[30]; araddr_o = araddr_buffer[30]; end
            5'd31: begin arvalid_o = arvalid_buffer[31]; araddr_o = araddr_buffer[31]; end
            default: begin arvalid_o = arvalid_buffer[0]; araddr_o = araddr_buffer[0]; end
        endcase
    end

    always@(*)begin
        case(rready_delay)
            5'd0:  begin rready_o = rready_buffer[0]; end
            5'd1:  begin rready_o = rready_buffer[1]; end
            5'd2:  begin rready_o = rready_buffer[2]; end
            5'd3:  begin rready_o = rready_buffer[3]; end
            5'd4:  begin rready_o = rready_buffer[4]; end
            5'd5:  begin rready_o = rready_buffer[5]; end
            5'd6:  begin rready_o = rready_buffer[6]; end
            5'd7:  begin rready_o = rready_buffer[7]; end
            5'd8:  begin rready_o = rready_buffer[8]; end
            5'd9:  begin rready_o = rready_buffer[9]; end
            5'd10: begin rready_o = rready_buffer[10]; end
            5'd11: begin rready_o = rready_buffer[11]; end
            5'd12: begin rready_o = rready_buffer[12]; end
            5'd13: begin rready_o = rready_buffer[13]; end
            5'd14: begin rready_o = rready_buffer[14]; end
            5'd15: begin rready_o = rready_buffer[15]; end
            5'd16: begin rready_o = rready_buffer[16]; end
            5'd17: begin rready_o = rready_buffer[17]; end
            5'd18: begin rready_o = rready_buffer[18]; end
            5'd19: begin rready_o = rready_buffer[19]; end
            5'd20: begin rready_o = rready_buffer[20]; end
            5'd21: begin rready_o = rready_buffer[21]; end
            5'd22: begin rready_o = rready_buffer[22]; end
            5'd23: begin rready_o = rready_buffer[23]; end
            5'd24: begin rready_o = rready_buffer[24]; end
            5'd25: begin rready_o = rready_buffer[25]; end
            5'd26: begin rready_o = rready_buffer[26]; end
            5'd27: begin rready_o = rready_buffer[27]; end
            5'd28: begin rready_o = rready_buffer[28]; end
            5'd29: begin rready_o = rready_buffer[29]; end
            5'd30: begin rready_o = rready_buffer[30]; end
            5'd31: begin rready_o = rready_buffer[31]; end
            default: begin rready_o = rready_buffer[0]; end
        endcase
    end

`else 
    assign arvalid_o = arvalid;
    assign araddr_o = araddr;
    assign rready_o = rready;

`endif

    


endmodule