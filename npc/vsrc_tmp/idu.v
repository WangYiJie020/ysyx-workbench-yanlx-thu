module idu(
    input [`PC_WIDTH-1:0] pc,
    input [`INST_WIDTH-1:0] inst,
    output [`CPU_WIDTH-1:0] rs1,
    output [`CPU_WIDTH-1:0] rs2,
    output [`CPU_WIDTH-1:0] imm,
    output [`CPU_WIDTH-1:0] csr_rdata,
    output reg a_in_src,
    output reg [1:0] b_in_src,
    output reg reg_write_o,
    output reg [2:0] pc_srcs,
    output reg adder_a_src,
    output reg MemRead,
    output reg MemWrite,
    output reg [7:0] wmask,
    output reg wb_src,
    output reg [2:0] rmask,
    output reg csr_write_o,
    output reg adder_out_src,
    output reg csr_wdata_src_o,
    input [`CPU_WIDTH-1:0] waddr,
    input [`CPU_WIDTH-1:0] wdata,
    input reg_write_i,
    output reg idu_valid_o,
    input idu_ready_o,
    input idu_valid_i,
    output idu_ready_i


    
);
    controler Controler(
        .inst(inst),
        .a_in_src(a_in_src),
        .b_in_src(b_in_src),
        .reg_write(reg_write_o),
        .adder_a_src(adder_a_src),
        .pc_srcs(pc_srcs),
        .MemRead(mem_read),
        .MemWrite(mem_write),
        .wmask(wmask),
        .wb_src(wb_src),
        .rmask(rmask),
        .csr_write(csr_write),
        .adder_out_src(adder_out_src),
        .csr_wdata_src(csr_wdata_src)
    );

    regfile Rgefile (
        .clk(clk),
        .wdata(wdata),
        .waddr(inst[11:7]), //rd
        .wen(reg_write),
        .raddr1(inst[19:15]), //rs1
        .rdata1(rs1),
        .raddr2(inst[24:20]), //rs2
        .rdata2(rs2),
        .value1(a5),
        .reg_file(reg_file)  //for difftest
    );

    sext SEXT (
        .inst(inst),
        .data(imm)
    );

    csr CSR(
        .clk(clk),
        .wen(csr_write),
        .inst(inst),
        .wdata(csr_wdata),
        .NO(a5),
        .pc(pc),
        .rdata(csr_rdata),
        .csr_reg(csr_reg) //for difftest
    );
    
    alu_control ALU_Control(
        .inst(inst),
        .alu_op(alu_op)
    );




endmodule