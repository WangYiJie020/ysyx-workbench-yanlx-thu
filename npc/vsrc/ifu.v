`include "header.v"
import "DPI-C" function void return_inst(input int inst1, input byte inst_opcode);
import "DPI-C" function void inst_counter_add();

module ifu(
    input clk,
    input rst_n,
    // AXI AR通道
    output reg [`CPU_WIDTH-1:0] araddr_o,
    output reg [3:0]            arid_o,
    output reg [7:0]            arlen_o,
    output reg [2:0]            arsize_o,
    output reg [1:0]            arburst_o,
    output reg                  arvalid_o,
    input                       arready_i,
    // AXI R通道
    input [`CPU_WIDTH-1:0]      rdata_i,
    input [1:0]                 rresp_i,
    input                       rlast_i,
    input [3:0]                 rid_i,
    input                       rvalid_i,
    output reg                  rready_o,
    // 来自EXU的跳转信号
    input [`PC_WIDTH-1:0]       npc_i,
    input                       npc_valid,
    // 复位下游流水线
    output reg                  reset_o,
    // 到IDU
    output reg [`PC_WIDTH-1:0]  pc_o,
    output reg [`INST_WIDTH-1:0] inst_o,
    output reg                  ifu_valid_o,
    input                       ifu_ready_i,
    input                       bus_busy,
    output [`CPU_WIDTH-1:0]     pc_dbg
);

// =========================================================
// 常量定义
// =========================================================
localparam S_IDLE   = 3'd0;  // 发起AXI AR请求
localparam S_WAIT_R = 3'd1;  // 等待AXI R数据返回
localparam S_OUT    = 3'd2;  // 向IDU输出指令
localparam S_FLUSH  = 3'd3;  // 处理控制冒险：等待总线空闲

assign arid_o    = 4'd0;
assign arlen_o   = 8'd0;
assign arsize_o  = 3'b010;  // 4字节
assign arburst_o = 2'd0;
assign pc_dbg    = pc_fetch;

// =========================================================
// 内部寄存器
// =========================================================
reg [`PC_WIDTH-1:0]   pc_fetch;    // 当前正在取指的PC
reg [`PC_WIDTH-1:0]   pc_out;      // 已取到、待输出的PC
reg [`INST_WIDTH-1:0] inst_buf;    // 已取到的指令缓存
reg [2:0]             state;

// 控制冒险检测
wire ctrl_hazard = npc_valid && (npc_i != pc_fetch);

// 是否有在途的AXI请求（AR已握手但R未完成）
reg ar_inflight;

// =========================================================
// 状态机
// =========================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state       <= S_IDLE;
        pc_fetch    <= `PC_INIT;
        pc_out      <= `PC_INIT;
        inst_buf    <= 0;
        inst_o      <= 0;
        pc_o        <= `PC_INIT;
        arvalid_o   <= 0;
        araddr_o    <= 0;
        rready_o    <= 0;
        ifu_valid_o <= 0;
        reset_o     <= 0;
        ar_inflight <= 0;
    end else begin

        // -----------------------------------------------
        // 默认：reset_o只拉高一拍
        // -----------------------------------------------
        reset_o <= 0;

        // -----------------------------------------------
        // 控制冒险：最高优先级处理
        // -----------------------------------------------
        if (ctrl_hazard) begin
            reset_o     <= 1;           // flush下游IDU/EXU
            ifu_valid_o <= 0;           // 撤销当前输出
            pc_fetch    <= npc_i;       // 更新取指PC

            // AR通道：撤销未握手的请求
            if (!(arvalid_o && arready_i)) begin
                arvalid_o <= 0;
            end

            if (ar_inflight || (arvalid_o && arready_i)) begin
                // 总线上有在途请求，需要等待R通道完成后丢弃
                rready_o  <= 1;         // 保持rready接收数据但丢弃
                state     <= S_FLUSH;
            end else begin
                // 总线空闲，直接重新取指
                rready_o    <= 0;
                ar_inflight <= 0;
                state       <= S_IDLE;
            end

        end else begin
            // -----------------------------------------------
            // 正常状态机流转
            // -----------------------------------------------
            case (state)

                // -------------------------------------------
                // S_IDLE：发起取指请求
                // -------------------------------------------
                S_IDLE: begin
                    ifu_valid_o <= 0;
                    rready_o    <= 0;
                    araddr_o    <= pc_fetch;
                    arvalid_o   <= 1;

                    if (arvalid_o && arready_i) begin
                        // AR握手完成
                        arvalid_o   <= 0;
                        ar_inflight <= 1;
                        rready_o    <= 1;
                        state       <= S_WAIT_R;
                    end
                end

                // -------------------------------------------
                // S_WAIT_R：等待读数据返回
                // -------------------------------------------
                S_WAIT_R: begin
                    if (rvalid_i && rready_o) begin
                        // R通道握手完成，锁存指令
                        inst_buf    <= rdata_i;
                        pc_out      <= pc_fetch;
                        rready_o    <= 0;
                        ar_inflight <= 0;
                        state       <= S_OUT;
                    end
                end

                // -------------------------------------------
                // S_OUT：向IDU输出指令，等待握手
                // -------------------------------------------
                S_OUT: begin
                    inst_o      <= inst_buf;
                    pc_o        <= pc_out;
                    ifu_valid_o <= 1;

                    if (ifu_valid_o && ifu_ready_i) begin
                        // IDU已接收，取下一条指令
                        ifu_valid_o <= 0;
                        pc_fetch    <= pc_out + 4;
                        state       <= S_IDLE;
                    end
                end

                // -------------------------------------------
                // S_FLUSH：等待在途R数据并丢弃
                // -------------------------------------------
                S_FLUSH: begin
                    rready_o <= 1;  // 持续接收直到rlast

                    if (rvalid_i && rready_o) begin
                        // 数据到达，丢弃
                        ar_inflight <= 0;
                        if (rlast_i) begin
                            // 单拍burst（arlen=0），flush完成
                            rready_o <= 0;
                            state    <= S_IDLE;  // 用新PC重新取指
                        end
                    end
                end

                default: state <= S_IDLE;
            endcase
        end
    end
end

// =========================================================
// DPI-C 调试接口
// =========================================================
always @(posedge clk) begin
    return_inst(inst_buf, {1'b0, inst_buf[6:0]});
    if (rvalid_i && rready_o && state == S_WAIT_R) begin
        inst_counter_add();
    end
end

endmodule
