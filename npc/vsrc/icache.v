


module icache #(
    parameter DATA_WIDTH = 32,      // 数据宽度（指令宽度）
    parameter BLOCK_SIZE = 4,       // 块大小（字节）
    parameter NUM_BLOCKS = 16,      // Cache块数量
    parameter ADDR_WIDTH = 32       // 地址宽度
) (
    input clk,
    input rst_n,

    //CPU
    input [DATA_WIDTH-1:0] cpu_araddr_i,
    input [3:0] cpu_arid_i,
    input [7:0] cpu_arlen_i,
    input [2:0] cpu_arsize_i,
    input [1:0] cpu_arburst_i,
    input cpu_arvalid_i,
    output reg cpu_arready_o,

    output reg [DATA_WIDTH-1:0] cpu_rdata_o,
    output reg [1:0] cpu_rresp_o,
    output reg cpu_rlast_o,
    output reg [3:0] cpu_rid_o,
    output reg cpu_rvalid_o,
    input cpu_rready_i,
    //mem
    output reg [DATA_WIDTH-1:0] mem_araddr_o,
    output reg [3:0] mem_arid_o,
    output reg [7:0] mem_arlen_o,
    output reg [2:0] mem_arsize_o,
    output reg [1:0] mem_arburst_o,
    output reg mem_arvalid_o,
    input mem_arready_i,
    input [DATA_WIDTH-1:0] mem_rdata_i,
    input [1:0] mem_rresp_i,
    input mem_rlast_i,
    input [3:0] mem_rid_i,
    input mem_rvalid_i,
    output reg mem_rready_o
);

assign mem_arsize_o = 3'b010; 

// ========== 参数计算 ==========
localparam BLOCK_WORDS = BLOCK_SIZE / (DATA_WIDTH/8);  // 块中的字数
localparam OFFSET_BITS = $clog2(BLOCK_SIZE);          // offset位宽
localparam INDEX_BITS = $clog2(NUM_BLOCKS);           // index位宽
localparam TAG_BITS = ADDR_WIDTH - OFFSET_BITS - INDEX_BITS;  // tag位宽


//reg [BLOCK_SIZE*8-1:0] icacheL1 [0:NUM_BLOCKS-1];
//reg [NUM_BLOCKS-1:0] icache_valid;
reg [DATA_WIDTH-1:0] cpu_addr;

// ========== 缓存存储 ==========
reg [DATA_WIDTH-1:0] data_array [0:NUM_BLOCKS-1];     // 数据存储
reg [TAG_BITS-1:0] tag_array [0:NUM_BLOCKS-1];        // tag存储
reg valid_array [0:NUM_BLOCKS-1];                     // 有效位

// ========== 地址分解 ==========
wire [TAG_BITS-1:0] req_tag;
wire [INDEX_BITS-1:0] req_index;
wire [OFFSET_BITS-1:0] req_offset;

assign req_tag = cpu_addr[ADDR_WIDTH-1:ADDR_WIDTH-TAG_BITS];
assign req_index = cpu_addr[OFFSET_BITS+INDEX_BITS-1:OFFSET_BITS];
assign req_offset = cpu_addr[OFFSET_BITS-1:0];

// ========== 状态机定义 ==========
typedef enum logic [2:0] {
    STATE_IDLE,     // 空闲状态
    STATE_CHECK,    // 检查缓存
    STATE_MISS,     // 缓存缺失，访问内存
    STATE_MEM,
    STATE_FILL      // 填充缓存
} state_t;

state_t current_state, next_state;

// ========== 状态寄存器 ==========
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        current_state <= STATE_IDLE;
    end else begin
        current_state <= next_state;
    end
end

// ========== 状态转移逻辑 ==========
always @(*) begin
    //next_state = current_state;
    
    case (current_state)
        STATE_IDLE: begin
            if (cpu_arready_o == 1 && cpu_arvalid_i == 1) begin //向cache发出读请求
                next_state = STATE_CHECK;
            end
            else next_state = STATE_IDLE;
        end
        
        STATE_CHECK: begin
            // 检查是否命中
            if (valid_array[req_index] && (tag_array[req_index] == req_tag)) begin
                next_state = STATE_IDLE;  // 命中，返回空闲
            end else begin
                next_state = STATE_MISS;  // 缺失，访问内存
            end
        end
        
        STATE_MISS: begin
            if (mem_arvalid_o == 1 && mem_arready_i == 1) begin
                next_state = STATE_MEM;
            end
            else begin
                next_state = STATE_MISS;  
            end
        end

        STATE_MEM: begin
            if (mem_rvalid_i == 1 && mem_rready_o == 1) begin
                next_state = STATE_FILL;
            end
            else begin
                next_state = STATE_MEM;  
            end
        end
        
        STATE_FILL: begin
            if(cpu_rready_i == 1 && cpu_rvalid_o == 1)begin
                next_state = STATE_IDLE;
            end
            else 
                next_state = STATE_FILL;
        end
        
        default: begin
            next_state = STATE_IDLE;
        end
    endcase
end

// ========== 输出逻辑 ==========
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        // 复位所有信号
        
        
        // 复位缓存内容
        for (int i = 0; i < NUM_BLOCKS; i = i + 1) begin
            valid_array[i] <= 1'b0;
            tag_array[i] <= {TAG_BITS{1'b0}};
            data_array[i] <= {DATA_WIDTH{1'b0}};
        end
    end else begin
        case (current_state)
            STATE_IDLE: begin
                cpu_arready_o <= 1;
                cpu_rvalid_o <= 1'b0;
                cpu_rdata_o <= 0;
                if (cpu_arready_o == 1 && cpu_arvalid_i == 1) begin
                    // 锁存请求地址
                    cpu_addr <= cpu_araddr_i;
                end
            end
            
            STATE_CHECK: begin
                // 检查是否命中
                if (valid_array[req_index] && (tag_array[req_index] == req_tag)) begin
                    // 命中，直接返回数据
                    cpu_rvalid_o <= 1'b1;
                    cpu_rdata_o <= data_array[req_index];
                    icache_hit();
                end else begin
                    // 缺失，准备访问内存
                    cpu_rvalid_o <= 1'b0;
                    cpu_rdata_o <= 0;
                    icache_miss();
                end
            end
            
            STATE_MISS: begin
                // 向内存发送请求
                mem_arvalid_o <= 1'b1;
                mem_rready_o <= 1;
                //mem_araddr_o <= {cpu_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};  // 对齐到块边界
                mem_araddr_o <= cpu_addr;
                if (mem_arready_i==1 && mem_arvalid_o==1) begin
                    mem_arvalid_o <= 1'b0;
                    mem_araddr_o <= 0;
                end
                // 填充缓存
                
            end

            STATE_MEM: begin
                mem_arvalid_o <= 1'b0;
                //mem_rready_o <= 1'b0;
                if(mem_rvalid_i == 1 && mem_rready_o == 1) begin
                
                data_array[req_index] <= mem_rdata_i;
                tag_array[req_index] <= req_tag;
                valid_array[req_index] <= 1'b1;
                end
            end
            
            STATE_FILL: begin 
                // 返回数据给CPU
                mem_arvalid_o <= 1'b0;
                cpu_rdata_o <= data_array[req_index];
                cpu_rvalid_o <= 1;
                if(cpu_rready_i == 1 && cpu_rvalid_o == 1) begin
                    cpu_rvalid_o <= 0;
                    cpu_rdata_o <= 0;
                end
            end
            
            default: begin
                
            end
        endcase
    end
end



endmodule