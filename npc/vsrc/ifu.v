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
    //exu to ifu
    input [`PC_WIDTH-1:0] npc_i,
    input npc_valid,
    //reset
    output reset_o,
    //ifu to idu
    output [`PC_WIDTH-1:0] pc_o,
    output reg [`INST_WIDTH-1:0] inst_o,
    output reg ifu_valid_o,
    input ifu_ready_i,

    input bus_busy,

    output [`CPU_WIDTH-1:0] pc_dbg
    

);
    
    reg [`PC_WIDTH-1:0] pc;

    reg [4:0] LFSR, arvalid_delay, rready_delay;
    reg lfsr_in;

    reg arvalid;
    reg [`CPU_WIDTH-1:0] araddr,inst;
    reg rready;

    reg skip;

    assign arid_o = 0;
    assign arlen_o = 0;
    assign arsize_o = 3'b010; //4bytes
    assign arburst_o = 0;

    localparam S_MEM = 2'b000,S_OUT = 2'b001,S_ADD = 2'b010;


    reg [1:0] current_state,next_state;
    reg ready_flag,arvalid_flag;

    assign pc_dbg = pc;

    always @(*) begin
        case(current_state)
            S_MEM: begin
                if (rready == 1 && rvalid_i == 1 && skip == 0) begin
                    next_state = S_OUT;
                end else begin
                    next_state = current_state;
                end
            end

            S_OUT: begin
                if (ifu_valid_o == 1 && ifu_ready_i == 1) begin //发送成功
                    next_state = S_ADD;   
                end else begin
                    next_state = current_state;
                end                              
            end

            S_ADD: begin
                
                    next_state = S_MEM;  
                
            end             
        
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n) begin
            current_state <= S_MEM;
            ifu_valid_o <= 0;
            pc <= `PC_INIT;
            arvalid <= 0;
            rready <= 0;
            arvalid_flag <= 0;
            skip <= 0;
        end else begin
              
            
            if(current_state == S_MEM) begin 
                araddr <= pc;
                if(rvalid_i == 1 && rready == 1 && skip == 0 ) begin 
                    inst <= rdata_i;
                end
                if(rready == 1 && rvalid_i == 1) rready <= 0;          
                else rready <= 1;

                if(arvalid==1 && arready_i==1) begin
                    arvalid <= 0;
                    arvalid_flag <= 1;
                    //if(araddr_o != npc_i) arvalid_flag <= 0;
                end
                else if(arvalid_flag == 0) arvalid <= 1;
                ifu_valid_o <= 0;

            end else if (current_state == S_OUT)begin
                if(arvalid==1 && arready_i==1) begin
                    arvalid <= 0;
                end
                
                ifu_valid_o <= 1;
                rready <= 0;
                inst_o <= inst;
                pc_o <= pc;      

            end else if (current_state == S_ADD)begin
                ifu_valid_o <= 0;
                arvalid <= 0;
                rready <= 1;  
                pc <= pc + 4;
                arvalid_flag <= 0;
            end  

            if(npc_valid==1 && npc_i != pc) begin
                pc <= npc_i;
                //araddr <= npc_i;
                current_state <= S_MEM;  
                reset_o <= 1;
                arvalid_flag <= 0;
                
                if(bus_busy == 1) begin
                    skip <= 1;
                end
                else begin
                    //if(araddr_o != npc_i) skip <= 1;
                    //else skip <= 0;
                    skip <= 0;
                end
            end
            else begin
                if(rvalid_i == 1 && rready == 1 && skip == 1) skip <= 0;
                reset_o <= 0;
                current_state <= next_state;  
            end 

            if(bus_busy == 0) skip <= 0;

            if(arvalid==1 && arready_i==1 && araddr != pc) begin
                skip <= 1;
                arvalid <= 1;
            end
                      
        end
    end


    always@(posedge clk) begin
        return_inst(inst,{1'b0,inst[6:0]});
        if(rvalid_i == 1 && rready_o == 1)begin //r 通道握手
            inst_counter_add();
        end
    end

    assign arvalid_o = arvalid;
    assign araddr_o = araddr;
    assign rready_o = rready;


    


endmodule