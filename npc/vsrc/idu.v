`include "header.v"

import "DPI-C" function void idu_counter_return(input byte inst_opcode);

module idu(
    input clk,
    input rst_n,
    input reset_ifu,
    //regfiles
    output [`REG_ADDR-1:0] raddr1,
    output [`REG_ADDR-1:0] raddr2,
    input [`CPU_WIDTH-1:0] rdata1,
    input [`CPU_WIDTH-1:0] rdata2,

    output [2:0] raddr_csr,
    input [`CPU_WIDTH-1:0] rdata_csr,

    //ifu to idu
    input [`PC_WIDTH-1:0] pc_i,
    input [`INST_WIDTH-1:0] inst_i,
    input idu_valid_i,
    output reg idu_ready_o,
    //idu to exu
    output [`PC_WIDTH-1:0] pc_o,
    output [`CPU_WIDTH-1:0] rs1_o,
    output [`CPU_WIDTH-1:0] rs2_o,
    output [`CPU_WIDTH-1:0] imm_o,
    output [`CPU_WIDTH-1:0] csr_rdata_o,
    output a_in_src_o,
    output [1:0] b_in_src_o,
    output [2:0] pc_srcs_o,
    output adder_a_src_o,
    output adder_out_src_o,
    output [3:0] alu_op,
    //idu to exu to lsu or wbu
    output MemRead_o,
    output MemWrite_o,
    output [3:0] wmask_o,
    output [2:0] rmask_o,
    output wb_src_o,
    output csr_write_o,
    output csr_wdata_src_o,
    output reg_write_o,
    output [`REG_ADDR-1:0] waddr_o,
    output ecall_o,
    output [1:0] waddr_csr_o,

    output reg idu_valid_o,
    input idu_ready_i,

    output fencei,

    // ======== Forwarding接口 (新增/修改) ========
    // EXU级前递
    input [4:0]             exu_rd,
    input                   exu_reg_write,    // 新增: EXU级是否写寄存器
    input                   exu_MemRead,      // 新增: EXU级是否为Load指令 (load-use需要stall)
    input [`CPU_WIDTH-1:0]  exu_fwd_data,     // 新增: EXU级前递数据 (ALU结果)

    // LSU级前递
    input [4:0]             lsu_rd,
    input                   lsu_reg_write,    // 新增: LSU级是否写寄存器
    input [`CPU_WIDTH-1:0]  lsu_fwd_data,     // 新增: LSU级前递数据 (ALU结果或Mem读取结果)

    // WBU级前递
    input [4:0]             wbu_rd,
    input                   wbu_reg_write,    // 新增: WBU级是否写寄存器
    input [`CPU_WIDTH-1:0]  wbu_fwd_data      // 新增: WBU级前递数据 (最终写回数据)
);

    reg [`PC_WIDTH-1:0] pc;
    reg [`INST_WIDTH-1:0] inst;

    wire [6:0] opcode;
    wire ecall;
    wire [1:0] waddr_csr;

    assign pc_o = pc;
    assign waddr_o = inst[11:7];
    assign raddr1 = inst[19:15];
    assign raddr2 = inst[24:20];
    assign opcode = inst[6:0];
    
    assign csr_rdata_o = rdata_csr;
    assign ecall_o = ecall;
    assign waddr_csr_o = waddr_csr;

    wire [7:0] wmask_tmp;
    assign wmask_o = wmask_tmp[3:0];

    // ======== 指令类型解码 ========
    wire opcode_r, opcode_i, opcode_s, opcode_sb, opcode_u, opcode_uj;

    assign opcode_r  = (opcode == 7'b0110011);
    assign opcode_i  = (opcode == 7'b0010011 || opcode == 7'b0000011 || opcode == 7'b1100111);
    assign opcode_s  = (opcode == 7'b0100011);
    assign opcode_sb = (opcode == 7'b1100011);
    assign opcode_u  = (opcode == 7'b0110111 || opcode == 7'b0010111);
    assign opcode_uj = (opcode == 7'b1101111);

    // ======== 判断当前指令是否使用rs1/rs2 ========
    wire use_rs1, use_rs2;
    // R/I/S/SB/JALR 使用 rs1;  U/UJ 不使用 rs1
    assign use_rs1 = opcode_r | opcode_i | opcode_s | opcode_sb;
    // R/S/SB 使用 rs2;  I/U/UJ 不使用 rs2
    assign use_rs2 = opcode_r | opcode_s | opcode_sb;

    // ======== Forwarding MUX for rs1 ========
    // 优先级: EXU > LSU > WBU > regfile
    // 如果EXU级是load指令且有rs1依赖, 必须stall, 不能前递
    reg [`CPU_WIDTH-1:0] rs1_forwarded;
    reg rs1_fwd_from_exu, rs1_fwd_from_lsu, rs1_fwd_from_wbu;

    always @(*) begin
        rs1_fwd_from_exu = use_rs1 && (raddr1 != 5'd0) && (raddr1 == exu_rd) && exu_reg_write;
        rs1_fwd_from_lsu = use_rs1 && (raddr1 != 5'd0) && (raddr1 == lsu_rd) && lsu_reg_write;
        rs1_fwd_from_wbu = use_rs1 && (raddr1 != 5'd0) && (raddr1 == wbu_rd) && wbu_reg_write;
    end

    always @(*) begin
        if (rs1_fwd_from_exu && !exu_MemRead)
            rs1_forwarded = exu_fwd_data;      // EXU级ALU结果前递
        else if (rs1_fwd_from_lsu)
            rs1_forwarded = lsu_fwd_data;       // LSU级结果前递 (含memory读取)
        else if (rs1_fwd_from_wbu)
            rs1_forwarded = wbu_fwd_data;       // WBU级结果前递
        else
            rs1_forwarded = rdata1;             // 无冒险, 直接读寄存器堆
    end

    // ======== Forwarding MUX for rs2 ========
    reg [`CPU_WIDTH-1:0] rs2_forwarded;
    reg rs2_fwd_from_exu, rs2_fwd_from_lsu, rs2_fwd_from_wbu;

    always @(*) begin
        rs2_fwd_from_exu = use_rs2 && (raddr2 != 5'd0) && (raddr2 == exu_rd) && exu_reg_write;
        rs2_fwd_from_lsu = use_rs2 && (raddr2 != 5'd0) && (raddr2 == lsu_rd) && lsu_reg_write;
        rs2_fwd_from_wbu = use_rs2 && (raddr2 != 5'd0) && (raddr2 == wbu_rd) && wbu_reg_write;
    end

    always @(*) begin
        if (rs2_fwd_from_exu && !exu_MemRead)
            rs2_forwarded = exu_fwd_data;
        else if (rs2_fwd_from_lsu)
            rs2_forwarded = lsu_fwd_data;
        else if (rs2_fwd_from_wbu)
            rs2_forwarded = wbu_fwd_data;
        else
            rs2_forwarded = rdata2;
    end

    // ======== 输出前递后的rs1/rs2 ========
    assign rs1_o = rs1_forwarded;
    assign rs2_o = rs2_forwarded;

    // ======== Load-Use Hazard 检测 ========
    // 只有EXU级是Load指令且有数据依赖时才需要stall (1个周期)
    // LSU/WBU级的load结果已经可用, 不需要stall
    wire load_use_hazard;
    assign load_use_hazard = exu_MemRead && exu_reg_write && (
        (use_rs1 && (raddr1 != 5'd0) && (raddr1 == exu_rd)) ||
        (use_rs2 && (raddr2 != 5'd0) && (raddr2 == exu_rd))
    );

    // ======== RAW冒险 (仅load-use需要stall, 其余通过forwarding解决) ========
    wire isRAW;
    assign isRAW = load_use_hazard && (current_state == S_RECEIVE);

    // ======== 子模块实例化 ========
    controler Controler(
        .inst(inst),
        .a_in_src(a_in_src_o),
        .b_in_src(b_in_src_o),
        .reg_write(reg_write_o),
        .adder_a_src(adder_a_src_o),
        .pc_srcs(pc_srcs_o),
        .MemRead(MemRead_o),
        .MemWrite(MemWrite_o),
        .wmask(wmask_tmp),
        .wb_src(wb_src_o),
        .rmask(rmask_o),
        .csr_write(csr_write_o),
        .adder_out_src(adder_out_src_o),
        .csr_wdata_src(csr_wdata_src_o)
    );

    sext SEXT (
        .inst(inst),
        .data(imm_o)
    );

    csr CSR(
        .clk(clk),
        .inst(inst),
        .raddr_csr(raddr_csr),
        .waddr_csr(waddr_csr),
        .ecall(ecall)
    );
    
    alu_control ALU_Control(
        .inst(inst),
        .alu_op(alu_op)
    );

    // ======== 状态机 ========
    localparam S_IDLE = 2'b00, S_RECEIVE = 2'b01, S_SEND = 2'b10;

    reg [1:0] current_state, next_state;
    reg flag;

    always @(*) begin
        case(current_state)
            S_IDLE: begin
                if (idu_valid_i == 1 && idu_ready_o == 1)
                    next_state = S_RECEIVE;
                else
                    next_state = current_state;
            end
            
            S_RECEIVE: begin
                if (idu_valid_o == 1 && idu_ready_i == 1)
                    next_state = S_SEND;
                else
                    next_state = current_state;
            end
            
            S_SEND: begin
                next_state = S_IDLE;
            end
            
            default: next_state = current_state;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin        
        if (!rst_n || reset_ifu == 1) begin
            current_state <= S_IDLE;
            idu_valid_o <= 0;
            idu_ready_o <= 0;
        end else begin
            current_state <= next_state;

            if (inst == 32'h0000100f)
                fencei <= 1;
            else
                fencei <= 0;

            if (current_state == S_IDLE)
                idu_ready_o <= 1;
            else
                idu_ready_o <= 0;

            if (current_state == S_IDLE) begin
                idu_valid_o <= 0;
                flag <= 0;
                if (idu_valid_i == 1 && idu_ready_o == 1) begin
                    pc <= pc_i;
                    inst <= inst_i;
                end
            end
            else if (current_state == S_RECEIVE) begin
                // 只有load-use冒险才stall, 其它RAW通过forwarding解决
                if (isRAW) begin
                    idu_valid_o <= 0;   // stall: 等待load数据从memory返回
                end
                else begin 
                    idu_valid_o <= 1;   // 无冒险或可forwarding, 正常发射
                end
            end
            else if (current_state == S_SEND) begin
                idu_valid_o <= 0;
                idu_counter_return({1'b0, inst[6:0]});
            end
            else begin
                idu_valid_o <= 0;
            end
        end
    end

endmodule