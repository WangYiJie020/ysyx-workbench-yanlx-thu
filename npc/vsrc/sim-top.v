`timescale 1ns/1ns

module sim_top;

    reg clk = 0;
    reg rst = 1;

    always #5 clk = ~clk;

    // AXI4 信号
    // AW 通道
    wire        awvalid;
    wire [31:0] awaddr;
    wire [3:0]  awid;
    wire [7:0]  awlen;
    wire [2:0]  awsize;
    wire [1:0]  awburst;
    reg         awready;

    // W 通道
    wire        wvalid;
    wire [31:0] wdata;
    wire [3:0]  wstrb;
    wire        wlast;
    reg         wready;

    // B 通道
    reg         bvalid;
    reg  [1:0]  bresp;
    reg  [3:0]  bid;
    wire        bready;

    // AR 通道
    wire        arvalid;
    wire [31:0] araddr;
    wire [3:0]  arid;
    wire [7:0]  arlen;
    wire [2:0]  arsize;
    wire [1:0]  arburst;
    reg         arready;

    // R 通道
    reg         rvalid;
    reg  [1:0]  rresp;
    reg  [31:0] rdata;
    reg         rlast;
    reg  [3:0]  rid;
    wire        rready;

    // 实例化处理器
    ysyx_25050137 u_cpu(
        .clock              (clk),
        .reset              (rst),
        .io_interrupt       (1'b0),
        // master 端口
        .io_master_awready  (awready),
        .io_master_awvalid  (awvalid),
        .io_master_awaddr   (awaddr),
        .io_master_awid     (awid),
        .io_master_awlen    (awlen),
        .io_master_awsize   (awsize),
        .io_master_awburst  (awburst),
        .io_master_wready   (wready),
        .io_master_wvalid   (wvalid),
        .io_master_wdata    (wdata),
        .io_master_wstrb    (wstrb),
        .io_master_wlast    (wlast),
        .io_master_bready   (bready),
        .io_master_bvalid   (bvalid),
        .io_master_bresp    (bresp),
        .io_master_bid      (bid),
        .io_master_arready  (arready),
        .io_master_arvalid  (arvalid),
        .io_master_araddr   (araddr),
        .io_master_arid     (arid),
        .io_master_arlen    (arlen),
        .io_master_arsize   (arsize),
        .io_master_arburst  (arburst),
        .io_master_rready   (rready),
        .io_master_rvalid   (rvalid),
        .io_master_rresp    (rresp),
        .io_master_rdata    (rdata),
        .io_master_rlast    (rlast),
        .io_master_rid      (rid),
        // slave 端口 (未使用，绑定默认值)
        .io_slave_awready   (),
        .io_slave_awvalid   (1'b0),
        .io_slave_awaddr    (32'b0),
        .io_slave_awid      (4'b0),
        .io_slave_awlen     (8'b0),
        .io_slave_awsize    (3'b0),
        .io_slave_awburst   (2'b0),
        .io_slave_wready    (),
        .io_slave_wvalid    (1'b0),
        .io_slave_wdata     (32'b0),
        .io_slave_wstrb     (4'b0),
        .io_slave_wlast     (1'b0),
        .io_slave_bready    (1'b0),
        .io_slave_bvalid    (),
        .io_slave_bresp     (),
        .io_slave_bid       (),
        .io_slave_arready   (),
        .io_slave_arvalid   (1'b0),
        .io_slave_araddr    (32'b0),
        .io_slave_arid      (4'b0),
        .io_slave_arlen     (8'b0),
        .io_slave_arsize    (3'b0),
        .io_slave_arburst   (2'b0),
        .io_slave_rready    (1'b0),
        .io_slave_rvalid    (),
        .io_slave_rresp     (),
        .io_slave_rdata     (),
        .io_slave_rlast     (),
        .io_slave_rid       ()
    );

    // ---------- 内存模型 ----------
    // 256KB 内存, 基地址 0x80000000
    localparam MEM_BASE = 32'h80000000;
    localparam MEM_SIZE = 256 * 1024; // 256KB
    reg [7:0] mem [0:MEM_SIZE-1];

    // 加载程序
    integer i;
    initial begin
        for (i = 0; i < MEM_SIZE; i = i + 1) mem[i] = 8'h0;
        $readmemh("mem.hex", mem);
    end

    // 地址转换: AXI地址 -> 内存偏移
    function [31:0] addr2offset;
        input [31:0] addr;
        begin
            addr2offset = addr - MEM_BASE;
        end
    endfunction

    // ---------- AXI4 读通道 ----------
    reg [31:0] ar_addr_reg;
    reg [3:0]  ar_id_reg;
    reg [7:0]  ar_len_reg;
    reg [2:0]  ar_size_reg;
    reg [7:0]  ar_cnt;
    reg        ar_active;

    initial begin
        arready  = 1'b0;
        rvalid   = 1'b0;
        rdata    = 32'b0;
        rresp    = 2'b0;
        rlast    = 1'b0;
        rid      = 4'b0;
        ar_active = 1'b0;
    end

    always @(posedge clk) begin
        if (rst) begin
            arready  <= 1'b1;
            rvalid   <= 1'b0;
            ar_active <= 1'b0;
        end else if (!ar_active && arvalid && arready) begin
            // 接收读地址
            ar_addr_reg <= araddr;
            ar_id_reg   <= arid;
            ar_len_reg  <= arlen;
            ar_size_reg <= arsize;
            ar_cnt      <= 8'd0;
            ar_active   <= 1'b1;
            arready     <= 1'b0;
        end else if (ar_active) begin
            // 返回读数据
            if (!rvalid || rready) begin
                rvalid <= 1'b1;
                rid    <= ar_id_reg;
                rresp  <= 2'b00;
                begin : read_mem_block
                    reg [31:0] offset;
                    offset = addr2offset(ar_addr_reg);
                    rdata <= {mem[offset+3], mem[offset+2], mem[offset+1], mem[offset]};
                end
                rlast <= (ar_cnt == ar_len_reg);
                if (ar_cnt == ar_len_reg) begin
                    ar_active <= 1'b0;
                    arready   <= 1'b1;
                end else begin
                    ar_cnt      <= ar_cnt + 1;
                    ar_addr_reg <= ar_addr_reg + (1 << ar_size_reg);
                end
            end
        end else begin
            if (rvalid && rready) begin
                rvalid <= 1'b0;
                rlast  <= 1'b0;
            end
        end
    end

    // ---------- AXI4 写通道 ----------
    reg [31:0] aw_addr_reg;
    reg [3:0]  aw_id_reg;
    reg        aw_active;

    initial begin
        awready  = 1'b0;
        wready   = 1'b0;
        bvalid   = 1'b0;
        bresp    = 2'b0;
        bid      = 4'b0;
        aw_active = 1'b0;
    end

    always @(posedge clk) begin
        if (rst) begin
            awready   <= 1'b1;
            wready    <= 1'b0;
            bvalid    <= 1'b0;
            aw_active <= 1'b0;
        end else if (!aw_active && awvalid && awready) begin
            aw_addr_reg <= awaddr;
            aw_id_reg   <= awid;
            aw_active   <= 1'b1;
            awready     <= 1'b0;
            wready      <= 1'b1;
        end else if (aw_active && wvalid && wready) begin
            // 写入内存
            begin : write_mem_block
                reg [31:0] offset;
                offset = addr2offset(aw_addr_reg);
                if (wstrb[0]) mem[offset+0] <= wdata[7:0];
                if (wstrb[1]) mem[offset+1] <= wdata[15:8];
                if (wstrb[2]) mem[offset+2] <= wdata[23:16];
                if (wstrb[3]) mem[offset+3] <= wdata[31:24];
            end
            aw_addr_reg <= aw_addr_reg + 4;
            if (wlast) begin
                wready    <= 1'b0;
                bvalid    <= 1'b1;
                bid       <= aw_id_reg;
                bresp     <= 2'b00;
                aw_active <= 1'b0;
            end
        end else if (bvalid && bready) begin
            bvalid  <= 1'b0;
            awready <= 1'b1;
        end
    end

    // ---------- ebreak 检测 (可选) ----------
    // 如果处理器遇到 ebreak 指令, 可以通过某种方式通知仿真结束
    // 你可以根据需要修改这部分

    // ---------- 控制 ----------
    initial begin
        rst = 1;
        #30;
        rst = 0;
      #10000000000000; // 超时退出
        $display("TIMEOUT");
        $finish;
    end

endmodule