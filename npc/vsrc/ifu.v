`include "header.v"
import "DPI-C" function void return_inst(input int inst1, input byte inst_opcode);
import "DPI-C" function void inst_counter_add();
import "DPI-C" function void inst_counter_sub();

// =============================================================================
// IFU (Instruction Fetch Unit)
// AXI总线协议取指，支持控制冒险flush
//
// 控制冒险处理原则：
//   AXI协议规定valid拉高后不可撤销，必须等握手完成。
//   因此跳转请求到来时，通过flush_pending标记延迟处理：
//   等当前在途的AXI事务自然完成后，丢弃结果，再用新PC重新取指。
// =============================================================================

module ifu (
    input  wire                    clk,
    input  wire                    rst_n,

    // -------------------------------------------------------------------
    // AXI AR通道（地址读请求）
    // -------------------------------------------------------------------
    output reg  [`CPU_WIDTH-1:0]   araddr_o,
    output wire [3:0]              arid_o,
    output wire [7:0]              arlen_o,
    output wire [2:0]              arsize_o,
    output wire [1:0]              arburst_o,
    output reg                     arvalid_o,
    input  wire                    arready_i,

    // -------------------------------------------------------------------
    // AXI R通道（读数据返回）
    // -------------------------------------------------------------------
    input  wire [`CPU_WIDTH-1:0]   rdata_i,
    input  wire [1:0]              rresp_i,
    input  wire                    rlast_i,
    input  wire [3:0]              rid_i,
    input  wire                    rvalid_i,
    output reg                     rready_o,

    // -------------------------------------------------------------------
    // 来自EXU的跳转信号（控制冒险）
    // -------------------------------------------------------------------
    input  wire [`PC_WIDTH-1:0]    npc_i,
    input  wire                    npc_valid,

    // -------------------------------------------------------------------
    // 复位下游流水线（flush IDU/EXU）
    // -------------------------------------------------------------------
    output reg                     reset_o,

    // -------------------------------------------------------------------
    // IFU → IDU 握手接口
    // -------------------------------------------------------------------
    output reg  [`PC_WIDTH-1:0]    pc_o,
    output reg  [`INST_WIDTH-1:0]  inst_o,
    output reg                     ifu_valid_o,
    input  wire                    ifu_ready_i,

    // -------------------------------------------------------------------
    // 其他
    // -------------------------------------------------------------------
    input  wire                    bus_busy,
);

// =============================================================================
// AXI固定参数（单次4字节传输）
// =============================================================================
assign arid_o    = 4'd0;
assign arlen_o   = 8'd0;      // 单拍burst
assign arsize_o  = 3'b010;    // 4字节
assign arburst_o = 2'd0;      // FIXED

// =============================================================================
// 状态编码
// =============================================================================
localparam [2:0]
    S_IDLE    = 3'd0,   // 发起AXI AR请求
    S_WAIT_R  = 3'd1,   // 等待AXI R数据返回
    S_OUT     = 3'd2,   // 向IDU输出指令，等待握手
    S_FLUSH   = 3'd3;   // 等待在途R数据并丢弃（flush期间）

// =============================================================================
// 内部寄存器
// =============================================================================
reg [2:0]              state;

reg [`PC_WIDTH-1:0]    pc_fetch;      // 当前正在取指的PC
reg [`PC_WIDTH-1:0]    pc_latch;      // 已取到指令对应的PC（待输出）
reg [`INST_WIDTH-1:0]  inst_buf;      // 已取到的指令缓存

// 控制冒险相关
reg                    flush_pending; // 有跳转请求待处理
reg [`PC_WIDTH-1:0]    npc_buf;       // 缓存目标PC

// AXI在途状态
reg                    ar_inflight;   // AR已握手，R尚未返回


// =============================================================================
// 控制冒险检测
// =============================================================================
wire ctrl_hazard = npc_valid && (npc_i != pc_fetch);

// =============================================================================
// 主状态机
// =============================================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state         <= S_IDLE;
        pc_fetch      <= `PC_INIT;
        pc_latch      <= `PC_INIT;
        inst_buf      <= {`INST_WIDTH{1'b0}};
        inst_o        <= {`INST_WIDTH{1'b0}};
        pc_o          <= `PC_INIT;
        araddr_o      <= {`CPU_WIDTH{1'b0}};
        arvalid_o     <= 1'b0;
        rready_o      <= 1'b0;
        ifu_valid_o   <= 1'b0;
        reset_o       <= 1'b0;
        ar_inflight   <= 1'b0;
        flush_pending <= 1'b0;
        npc_buf       <= {`PC_WIDTH{1'b0}};
    end else begin

        // ------------------------------------------------------------------
        // reset_o 默认低，跳转时拉高一拍通知下游flush
        // ------------------------------------------------------------------
        reset_o <= 1'b0;

        // ------------------------------------------------------------------
        // 控制冒险：最高优先级
        // 注意：不撤销已拉高的valid，只记录pending，等握手完成后处理
        // ------------------------------------------------------------------
        if (ctrl_hazard) begin
            reset_o       <= 1'b1;   // flush下游IDU/EXU（仅一拍）
            ifu_valid_o   <= 1'b0;   // 撤销当前向IDU的输出
            flush_pending <= 1'b1;   // 标记有跳转待处理
            npc_buf       <= npc_i;  // 缓存目标PC

            // 根据当前总线状态决定进入哪个等待状态
            case (state)
                S_IDLE: begin
                    // AR尚未发出或正在握手中
                    if (arvalid_o && arready_i) begin
                        // 本拍AR正好握手完成 → 进S_FLUSH等R丢弃
                        arvalid_o   <= 1'b0;
                        ar_inflight <= 1'b1;
                        rready_o    <= 1'b1;
                        state       <= S_FLUSH;
                    end else if (arvalid_o) begin
                        // AR已拉高但未握手 → 不能撤销，继续保持
                        // 握手完成后在S_IDLE检测flush_pending进S_FLUSH
                        state <= S_IDLE;
                    end else begin
                        // AR还未发出，直接等下一拍用新PC发出
                        state <= S_IDLE;
                    end
                end

                S_WAIT_R: begin
                    // AR已完成，R还在路上 → 等R回来丢弃
                    if (rvalid_i && rready_o) begin
                        // 本拍R正好到达 → 丢弃，直接进S_IDLE
                        rready_o      <= 1'b0;
                        ar_inflight   <= 1'b0;
                        flush_pending <= 1'b0;
                        inst_counter_sub();//该指令无效，不记数
                        pc_fetch      <= npc_i;  // 用当拍npc_i，更及时
                        state         <= S_IDLE;
                    end else begin
                        // R还没到 → 进S_FLUSH等待
                        state <= S_FLUSH;
                    end
                end

                S_OUT: begin
                    // 指令已在buf中，还未被IDU接收 → 丢弃，重新取
                    // 不需要等总线（总线已空闲），直接用新PC取指
                    flush_pending <= 1'b0;
                    pc_fetch      <= npc_i;
                    state         <= S_IDLE;
                    inst_counter_sub();
                end

                S_FLUSH: begin
                    // 已经在flush中，更新目标PC即可
                    state <= S_FLUSH;
                end

                default: state <= S_IDLE;
            endcase

        end else begin
            // ------------------------------------------------------------------
            // 正常状态机流转
            // ------------------------------------------------------------------
            case (state)

                // --------------------------------------------------------------
                // S_IDLE：发起AR请求
                // --------------------------------------------------------------
                S_IDLE: begin
                    ifu_valid_o <= 1'b0;
                    rready_o    <= 1'b0;

                    if (arvalid_o && arready_i) begin
                        // AR握手完成
                        arvalid_o   <= 1'b0;
                        ar_inflight <= 1'b1;

                        if (flush_pending) begin
                            // 这次取的地址已过期，等R回来丢弃
                            rready_o <= 1'b1;
                            state    <= S_FLUSH;
                        end else begin
                            rready_o <= 1'b1;
                            state    <= S_WAIT_R;
                        end
                    end else begin
                        // 发出AR请求（未握手则保持valid）
                        if (!arvalid_o) begin
                            // 用最新PC（flush_pending时用npc_buf）
                            araddr_o  <= flush_pending ? npc_buf : pc_fetch;
                            arvalid_o <= 1'b1;
                        end
                    end
                end

                // --------------------------------------------------------------
                // S_WAIT_R：等待读数据返回
                // --------------------------------------------------------------
                S_WAIT_R: begin
                    if (rvalid_i && rready_o) begin
                        rready_o    <= 1'b0;
                        ar_inflight <= 1'b0;

                        if (flush_pending) begin
                            // 数据到了但已过期，丢弃，用缓存PC重取
                            flush_pending <= 1'b0;
                            pc_fetch      <= npc_buf;
                            state         <= S_IDLE;
                        end else begin
                            // 正常锁存指令
                            inst_buf <= rdata_i;
                            pc_latch <= pc_fetch;
                            state    <= S_OUT;
                        end
                    end
                end

                // --------------------------------------------------------------
                // S_OUT：向IDU输出指令，等待握手
                // --------------------------------------------------------------
                S_OUT: begin
                    inst_o      <= inst_buf;
                    pc_o        <= pc_latch;
                    ifu_valid_o <= 1'b1;

                    if (ifu_valid_o && ifu_ready_i) begin
                        // IDU接收成功，取下一条指令
                        ifu_valid_o <= 1'b0;
                        pc_fetch    <= pc_latch + 4;
                        state       <= S_IDLE;
                    end
                end

                // --------------------------------------------------------------
                // S_FLUSH：AR已握手，等R数据返回后丢弃
                // --------------------------------------------------------------
                S_FLUSH: begin
                    rready_o <= 1'b1;  // 持续接收，直到rlast

                    if (rvalid_i && rready_o) begin
                        // 数据到达，丢弃
                        ar_inflight <= 1'b0;

                        if (rlast_i) begin
                            // arlen=0，单拍burst，flush完成
                            rready_o      <= 1'b0;
                            flush_pending <= 1'b0;
                            pc_fetch      <= npc_buf;
                            state         <= S_IDLE;
                        end
                        // 若将来arlen>0，需继续等后续拍，此处可扩展
                    end
                end

                default: state <= S_IDLE;
            endcase
        end
    end
end

// =============================================================================
// DPI-C 调试接口
// =============================================================================
always @(posedge clk) begin
    return_inst(inst_buf, {1'b0, inst_buf[6:0]});
    // 仅在正常取指握手时计数，flush丢弃的数据不计
    if (rvalid_i && rready_o && state == S_WAIT_R && !flush_pending) begin
        inst_counter_add();
    end
end

endmodule