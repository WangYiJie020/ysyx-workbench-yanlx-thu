// ============================================================
//  AXI4 总线仲裁器
//  - AR + R 通道: 先到先得，同时到达则轮询
//    锁定时机: arvalid出现即锁定（而非等待AR握手）
//  - AW + W + B 通道: 直通
// ============================================================

// `define CPU_WIDTH 32   // 若顶层已定义请删除此行

module axi_arbiter (
    input clk,
    input rst_n,

    // ========== Master A (e.g. IFU) ==========
    // AR
    input  [`CPU_WIDTH-1:0] araddr_i_a,
    input  [3:0]            arid_i_a,
    input  [7:0]            arlen_i_a,
    input  [2:0]            arsize_i_a,
    input  [1:0]            arburst_i_a,
    input                   arvalid_i_a,
    output reg              arready_o_a,
    // R
    output reg [`CPU_WIDTH-1:0] rdata_o_a,
    output reg [1:0]            rresp_o_a,
    output reg                  rlast_o_a,
    output reg [3:0]            rid_o_a,
    output reg                  rvalid_o_a,
    input                       rready_i_a,
    // AW
    input  [`CPU_WIDTH-1:0] awaddr_i_a,
    input  [3:0]            awid_i_a,
    input  [7:0]            awlen_i_a,
    input  [2:0]            awsize_i_a,
    input  [1:0]            awburst_i_a,
    input                   awvalid_i_a,
    output reg              awready_o_a,
    // W
    input  [`CPU_WIDTH-1:0] wdata_i_a,
    input  [3:0]            wstrb_i_a,
    input                   wlast_i_a,
    input                   wvalid_i_a,
    output reg              wready_o_a,
    // B
    output reg [1:0]        bresp_o_a,
    output reg [3:0]        bid_o_a,
    output reg              bvalid_o_a,
    input                   bready_i_a,

    // ========== Master B (e.g. LSU) ==========
    // AR
    input  [`CPU_WIDTH-1:0] araddr_i_b,
    input  [3:0]            arid_i_b,
    input  [7:0]            arlen_i_b,
    input  [2:0]            arsize_i_b,
    input  [1:0]            arburst_i_b,
    input                   arvalid_i_b,
    output reg              arready_o_b,
    // R
    output reg [`CPU_WIDTH-1:0] rdata_o_b,
    output reg [1:0]            rresp_o_b,
    output reg                  rlast_o_b,
    output reg [3:0]            rid_o_b,
    output reg                  rvalid_o_b,
    input                       rready_i_b,
    // AW
    input  [`CPU_WIDTH-1:0] awaddr_i_b,
    input  [3:0]            awid_i_b,
    input  [7:0]            awlen_i_b,
    input  [2:0]            awsize_i_b,
    input  [1:0]            awburst_i_b,
    input                   awvalid_i_b,
    output reg              awready_o_b,
    // W
    input  [`CPU_WIDTH-1:0] wdata_i_b,
    input  [3:0]            wstrb_i_b,
    input                   wlast_i_b,
    input                   wvalid_i_b,
    output reg              wready_o_b,
    // B
    output reg [1:0]        bresp_o_b,
    output reg [3:0]        bid_o_b,
    output reg              bvalid_o_b,
    input                   bready_i_b,

    // ========== Slave (Memory) ==========
    // AR
    output [`CPU_WIDTH-1:0] araddr_o,
    output [3:0]            arid_o,
    output [7:0]            arlen_o,
    output [2:0]            arsize_o,
    output [1:0]            arburst_o,
    output                  arvalid_o,
    input                   arready_i,
    // R
    input  [`CPU_WIDTH-1:0] rdata_i,
    input  [1:0]            rresp_i,
    input                   rlast_i,
    input  [3:0]            rid_i,
    input                   rvalid_i,
    output                  rready_o,
    // AW
    output [`CPU_WIDTH-1:0] awaddr_o,
    output [3:0]            awid_o,
    output [7:0]            awlen_o,
    output [2:0]            awsize_o,
    output [1:0]            awburst_o,
    output                  awvalid_o,
    input                   awready_i,
    // W
    output [`CPU_WIDTH-1:0] wdata_o,
    output [3:0]            wstrb_o,
    output                  wlast_o,
    output                  wvalid_o,
    input                   wready_i,
    // B
    input  [1:0]            bresp_i,
    input  [3:0]            bid_i,
    input                   bvalid_i,
    output                  bready_o
);

// ============================================================
// 参数
// ============================================================
localparam MASTER_A = 1'b0;
localparam MASTER_B = 1'b1;

// ============================================================
// AR/R 仲裁内部寄存器
// ============================================================
reg  arb_grant;       // 上一次仲裁结果（用于同时到达时的轮询参考）
reg  arb_locked;      // 仲裁锁：arvalid出现即置1，rlast握手后清0
reg  current_master;  // 本次事务R通道路由目标

// ============================================================
// 关键握手信号
// ============================================================
wire r_last_handshake = rvalid_i & rready_o & rlast_i;  // R通道最后一拍完成

// 任意一方出现arvalid，视为有新请求到来
wire ar_req_appear = arvalid_i_a | arvalid_i_b;

// ============================================================
// 仲裁决策（组合逻辑）
// ============================================================
// 策略：先到先得；同时到达则切换（基于上次 arb_grant 轮转）
// 锁定期间输出维持 arb_grant 不变，由 current_master 接管路由
wire arb_grant_next;
assign arb_grant_next = arb_locked                        ? arb_grant   : // 锁定中，不重新仲裁
                        ( arvalid_i_a & ~arvalid_i_b)     ? MASTER_A    : // 只有A：A先到
                        (~arvalid_i_a &  arvalid_i_b)     ? MASTER_B    : // 只有B：B先到
                        ( arvalid_i_a &  arvalid_i_b)     ? ~arb_grant  : // 同时到达：轮转
                                                             arb_grant;    // 都无请求：保持

// ============================================================
// 仲裁寄存器时序逻辑
// ============================================================
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        arb_grant      <= MASTER_A;
        arb_locked     <= 1'b0;
        current_master <= MASTER_A;
    end else begin
        // rlast握手：解锁，下一拍可重新仲裁
        // arvalid出现且当前未锁定：立即锁定并记录仲裁结果
        // 同一拍 rlast 握手 + 新 arvalid：优先解锁，新请求下一拍再仲裁
        if (r_last_handshake) begin
            arb_locked <= 1'b0;
        end else if (!arb_locked & ar_req_appear) begin
            arb_locked     <= 1'b1;
            arb_grant      <= arb_grant_next;   // 更新轮询指针
            current_master <= arb_grant_next;   // 锁定本次事务的路由目标
        end
    end
end

// ============================================================
// AR 通道 MUX → Memory
// 使用 current_master（寄存器）保证锁定后地址信号稳定
// ============================================================
assign araddr_o  = (current_master == MASTER_A) ? araddr_i_a  : araddr_i_b;
assign arid_o    = (current_master == MASTER_A) ? arid_i_a    : arid_i_b;
assign arlen_o   = (current_master == MASTER_A) ? arlen_i_a   : arlen_i_b;
assign arsize_o  = (current_master == MASTER_A) ? arsize_i_a  : arsize_i_b;
assign arburst_o = (current_master == MASTER_A) ? arburst_i_a : arburst_i_b;

// arvalid：只透传被授权 master 的请求
assign arvalid_o = (current_master == MASTER_A) ? arvalid_i_a : arvalid_i_b;

// arready：只反馈给被授权的 master，另一方阻塞等待
always @(*) begin
    arready_o_a = 1'b0;
    arready_o_b = 1'b0;
    if (current_master == MASTER_A)
        arready_o_a = arready_i;
    else
        arready_o_b = arready_i;
end

// ============================================================
// R 通道路由 Memory → 正确的 Master
// ============================================================
assign rready_o = (current_master == MASTER_A) ? rready_i_a : rready_i_b;

always @(*) begin
    // 默认清零，防止 latch
    rdata_o_a  = {`CPU_WIDTH{1'b0}};
    rresp_o_a  = 2'b0;
    rlast_o_a  = 1'b0;
    rid_o_a    = 4'b0;
    rvalid_o_a = 1'b0;
    rdata_o_b  = {`CPU_WIDTH{1'b0}};
    rresp_o_b  = 2'b0;
    rlast_o_b  = 1'b0;
    rid_o_b    = 4'b0;
    rvalid_o_b = 1'b0;

    if (current_master == MASTER_A) begin
        rdata_o_a  = rdata_i;
        rresp_o_a  = rresp_i;
        rlast_o_a  = rlast_i;
        rid_o_a    = rid_i;
        rvalid_o_a = rvalid_i;
    end else begin
        rdata_o_b  = rdata_i;
        rresp_o_b  = rresp_i;
        rlast_o_b  = rlast_i;
        rid_o_b    = rid_i;
        rvalid_o_b = rvalid_i;
    end
end

    assign awaddr_o = awaddr_i_b;
    assign awid_o = awid_i_b;
    assign awlen_o = awlen_i_b;
    assign awsize_o = awsize_i_b;
    assign awburst_o = awburst_i_b;
    assign awvalid_o = awvalid_i_b;
    assign awready_o_b = awready_i;

    assign wdata_o = wdata_i_b;
    assign wstrb_o = wstrb_i_b;
    assign wlast_o = wlast_i_b;
    assign wvalid_o = wvalid_i_b;
    assign wready_o_b = wready_i;

    assign bresp_o_b = bresp_i;
    assign bid_o_b = bid_i;
    assign bvalid_o_b = bvalid_i;
    assign bready_o = bready_i_b;

endmodule