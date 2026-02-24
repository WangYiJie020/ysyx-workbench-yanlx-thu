`include "header.v" 
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
    output                  bready_o,

    output reg bus_busy
);

// ============================================================
// 参数
// ============================================================
localparam MASTER_A = 1'b0;   // 默认 a (IFU)
localparam MASTER_B = 1'b1;   // b (LSU)

// ============================================================
// AR/R 仲裁内部信号
// ============================================================
reg  arb_grant;          // 当前轮询授权: 0=A, 1=B
reg  arb_locked;         // 事务锁: AR握手后置1，rlast握手后清0
reg  current_master;     // 当前R通道应路由给哪个master

wire ar_handshake    = arvalid_o & arready_i;               // AR握手成功
wire r_last_handshake = rvalid_i & rready_o & rlast_i;      // R last握手成功

// ---- 组合逻辑：计算下一次授权给谁 ----
// 锁定期间不切换；两者都有请求则轮转；只有一方请求则直接给它
wire arb_grant_next;
assign arb_grant_next = arb_locked                          ? arb_grant   :
                        ( arvalid_i_a & ~arvalid_i_b)       ? MASTER_A    :
                        (~arvalid_i_a &  arvalid_i_b)       ? MASTER_B    :
                        ( arvalid_i_a &  arvalid_i_b)       ? ~arb_grant  : // 轮转
                                                               arb_grant;   // 都没请求，保持

// ---- 仲裁寄存器更新 ----
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        arb_grant      <= MASTER_A;
        arb_locked     <= 1'b0;
        current_master <= MASTER_A;
    end else begin
        // 锁定逻辑：AR握手→锁定，rlast→解锁
        // 注意：AR握手和rlast可能同一拍发生(len=0的单次传输)，优先解锁
        if (r_last_handshake)
            arb_locked <= 1'b0;
        else if (ar_handshake)
            arb_locked <= 1'b1;

        // 轮询指针：AR握手时更新，为下次仲裁做准备
        if (ar_handshake)
            arb_grant <= arb_grant_next;

        // 路由寄存器：AR握手时锁存，决定本次事务R数据回给谁
        if (ar_handshake)
            current_master <= arb_grant_next;
    end
end

// ============================================================
// AR 通道 MUX → Memory
// ============================================================
assign araddr_o  = (arb_grant_next == MASTER_A) ? araddr_i_a  : araddr_i_b;
assign arid_o    = (arb_grant_next == MASTER_A) ? arid_i_a    : arid_i_b;
assign arlen_o   = (arb_grant_next == MASTER_A) ? arlen_i_a   : arlen_i_b;
assign arsize_o  = (arb_grant_next == MASTER_A) ? arsize_i_a  : arsize_i_b;
assign arburst_o = (arb_grant_next == MASTER_A) ? arburst_i_a : arburst_i_b;

// arvalid：只透传被授权master的请求
assign arvalid_o = (arb_grant_next == MASTER_A) ? arvalid_i_a :
                   (arb_grant_next == MASTER_B) ? arvalid_i_b : 1'b0;

// arready：只反馈给被授权的master，另一方看到ready=0（等待）
always @(*) begin
    arready_o_a = 1'b0;
    arready_o_b = 1'b0;
    if (arb_grant_next == MASTER_A)
        arready_o_a = arready_i;
    else
        arready_o_b = arready_i;
end

// ============================================================
// R 通道路由 Memory → 正确的 Master
// ============================================================
// rready：将被授权master的rready透传给memory
assign rready_o = (current_master == MASTER_A) ? rready_i_a : rready_i_b;

// R数据路由：always组合逻辑，根据current_master分发
always @(*) begin
    // 默认全0
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


    always@(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bus_busy <= 0;
        end
        else begin
            if(arready_i==1 && arvalid_o==1)
                bus_busy <= 1;
            if(rvalid_i==1 && rready_o==1 && rlast_i==1)
                bus_busy <= 0;

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