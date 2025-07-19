module npc(
    input clk,
    input rst,
    input [31:0] inst,
    input [31:0] rdata,
    output reg [31:0] pc,
    output [31:0] raddr,
    output [31:0] waddr,
    output [31:0] wdata,
    output [3:0] we
);
import "DPI-C" function void sim_ebreak();
import "DPI-C" function void sim_inv();
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc <= 32'h80000000; // Reset PC to 0
        end 
        else if(branch_taken) begin
            pc <= pc + bimm12;
        end
        else if(rv_jalr) begin
            pc <= (src1 + imm12) & ~32'h1; 
        end
        else if(rv_jal) begin
            pc <= pc + jimm20; 
        end
        else begin
            pc <= pc + 4; 
        end
    end

    wire [31:0] src1,src2,reg_data;
    wire reg_we , branch_taken , inst_load;


    wire [4:0] reg_src1 = inst[19:15]; 
    wire [4:0] reg_src2 = inst[24:20]; 
    wire [4:0] reg_dest = inst[11:7];

    wire [31:0] imm12 = {{20{inst[31]}}, inst[31:20]};
    wire [31:0] imm20 = {inst[31:12],12'b0};
    wire [31:0] bimm12 = {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
    wire [31:0] jimm20 = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
    wire [31:0] simm12 = {{20{inst[31]}}, inst[31:25],inst[11:7]}; // Sign-extended immediate for store instructions

    //decode instruction
    // Instruction group: ('rd', 'rs1', 'rs2')
	wire rv_add = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & ~inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_and = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & inst[14] & inst[13] & inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_or = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & inst[14] & inst[13] & ~inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_sll = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & ~inst[14] & ~inst[13] & inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_slt = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & ~inst[14] & inst[13] & ~inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_sltu = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & ~inst[14] & inst[13] & inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_sra = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & inst[14] & ~inst[13] & inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_srl = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & inst[14] & ~inst[13] & inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_sub = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & ~inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_xor = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];

	// Instruction group: ('imm12', 'rd', 'rs1')
	wire rv_addi = ~inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_andi = inst[14] & inst[13] & inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_jalr = ~inst[14] & ~inst[13] & ~inst[12] & inst[6] & inst[5] & ~inst[4] & ~inst[3] & inst[2] & inst[1] & inst[0];
	wire rv_lb = ~inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & ~inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_lbu = inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & ~inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_lh = ~inst[14] & ~inst[13] & inst[12] & ~inst[6] & ~inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_lhu = inst[14] & ~inst[13] & inst[12] & ~inst[6] & ~inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_lw = ~inst[14] & inst[13] & ~inst[12] & ~inst[6] & ~inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_ori = inst[14] & inst[13] & ~inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_slti = ~inst[14] & inst[13] & ~inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_sltiu = ~inst[14] & inst[13] & inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_xori = inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];

	// Instruction group: ('imm20', 'rd')
	wire rv_auipc = ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & inst[2] & inst[1] & inst[0];
	wire rv_lui = ~inst[6] & inst[5] & inst[4] & ~inst[3] & inst[2] & inst[1] & inst[0];

	// Instruction group: ('bimm12hi', 'bimm12lo', 'rs1', 'rs2')
	wire rv_beq = ~inst[14] & ~inst[13] & ~inst[12] & inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_bge = inst[14] & ~inst[13] & inst[12] & inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_bgeu = inst[14] & inst[13] & inst[12] & inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_blt = inst[14] & ~inst[13] & ~inst[12] & inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_bltu = inst[14] & inst[13] & ~inst[12] & inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_bne = ~inst[14] & ~inst[13] & inst[12] & inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];

	// Instruction group: ('jimm20', 'rd')
	wire rv_jal = inst[6] & inst[5] & ~inst[4] & inst[3] & inst[2] & inst[1] & inst[0];

	// Instruction group: ('simm12hi', 'simm12lo', 'rs1', 'rs2')
	wire rv_sb = ~inst[14] & ~inst[13] & ~inst[12] & ~inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_sh = ~inst[14] & ~inst[13] & inst[12] & ~inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_sw = ~inst[14] & inst[13] & ~inst[12] & ~inst[6] & inst[5] & ~inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];

    // Instruction group: ('rd', 'rs1', 'shamtd')
	wire rv_srai = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & inst[14] & ~inst[13] & inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_slli = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[14] & ~inst[13] & inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];
	wire rv_srli = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & inst[14] & ~inst[13] & inst[12] & ~inst[6] & ~inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];


    wire rv_ebreak = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & ~inst[24] & ~inst[23] & ~inst[22] & ~inst[21] & inst[20] & ~inst[19] & ~inst[18] & ~inst[17] & ~inst[16] & ~inst[15] & ~inst[14] & ~inst[13] & ~inst[12] & ~inst[11] & ~inst[10] & ~inst[9] & ~inst[8] & ~inst[7] & inst[6] & inst[5] & inst[4] & ~inst[3] & ~inst[2] & inst[1] & inst[0];

    wire rv_inv = ~rv_add & ~rv_and & ~rv_or & ~rv_sll & ~rv_slt & ~rv_sltu & ~rv_sra & ~rv_srl & 
                  ~rv_sub & ~rv_xor & ~rv_addi & ~rv_andi & ~rv_jalr & 
                  ~rv_lb & ~rv_lbu & ~rv_lh & ~rv_lhu & ~rv_lw &
                  ~rv_ori & ~rv_slti & ~rv_sltiu & ~rv_xori &
                  ~rv_auipc & ~rv_lui &
                  ~rv_beq & ~rv_bge & ~rv_bgeu & 
                  ~rv_blt & ~rv_bltu & ~rv_bne &
                  ~rv_jal &
                  ~rv_sb & ~rv_sh & ~rv_sw & ~rv_ebreak & ~rv_srai & ~rv_slli & ~rv_srli;

    //r type calculation
    wire [31:0] add_result = src1 + src2;
    wire [31:0] sub_result = src1 - src2;
    wire [31:0] and_result = src1 & src2;
    wire [31:0] or_result = src1 | src2;
    wire [31:0] xor_result = src1 ^ src2;
    wire [31:0] sll_result = src1 << src2[4:0];
    wire [31:0] srl_result = src1 >> src2[4:0];
    wire [31:0] sra_result = $signed(src1) >>> src2[4:0];
    wire [31:0] slt_result = ($signed(src1) < $signed(src2)) ? 32'b1 : 32'b0;
    wire [31:0] sltu_result = (src1 < src2) ? 32'b1 : 32'b0;

    //i type calculation
    wire [31:0] addi_result = src1 + imm12;
    wire [31:0] andi_result = src1 & imm12;
    wire [31:0] jalr_result = pc + 4; 
    wire [31:0] lb_result = {{24{rdata[7]}}, rdata[7:0]}; 
    wire [31:0] lbu_result = {24'b0, rdata[7:0]}; 
    wire [31:0] lh_result = {{16{rdata[15]}}, rdata[15:0]}; 
    wire [31:0] lhu_result = {16'b0, rdata[15:0]}; 
    wire [31:0] lw_result = rdata; 
    wire [31:0] ori_result = src1 | imm12;
    wire [31:0] slti_result = ($signed(src1) < $signed(imm12)) ? 32'b1 : 32'b0;
    wire [31:0] sltiu_result = (src1 < imm12) ? 32'b1 : 32'b0;
    wire [31:0] xori_result = src1 ^ imm12;
    wire [31:0] auipc_result = pc + imm20; 
    wire [31:0] lui_result = imm20; 
    wire [31:0] jal_result = pc + 4;
    wire [31:0] slli_result = src1 << reg_src2[4:0];
    wire [31:0] srli_result = src1 >> reg_src2[4:0];
    wire [31:0] srai_result = $signed(src1) >>> reg_src2[4:0]; 

    assign reg_we = 
        rv_add | rv_and | rv_or | rv_sll | rv_slt | rv_sltu | rv_sra | rv_srl | 
         rv_sub | rv_xor | rv_addi | rv_andi | rv_jalr | 
         rv_lb | rv_lbu | rv_lh | rv_lhu | rv_lw |
         rv_ori | rv_slti | rv_sltiu | rv_xori |
         rv_auipc | rv_lui | rv_jal | rv_slli | rv_srli | rv_srai;

    assign inst_load = rv_lb | rv_lbu | rv_lh | rv_lhu | rv_lw;

    assign reg_data = {32{rv_add}}& add_result |
                      {32{rv_and}}& and_result |
                      {32{rv_or}}& or_result |
                      {32{rv_sll}}& sll_result |
                      {32{rv_slt}}& slt_result |
                      {32{rv_sltu}}& sltu_result |
                      {32{rv_sra}}& sra_result |
                      {32{rv_srl}}& srl_result |
                      {32{rv_sub}}& sub_result |
                      {32{rv_xor}}& xor_result |
                      {32{rv_addi}}& addi_result |
                      {32{rv_andi}}& andi_result |
                      {32{rv_jalr}}& jalr_result |
                      {32{rv_lb}}& lb_result |
                      {32{rv_lbu}}& lbu_result |
                      {32{rv_lh}}& lh_result |
                      {32{rv_lhu}}& lhu_result |
                      {32{rv_lw}}& lw_result |
                      {32{rv_ori}}& ori_result |
                      {32{rv_slti}}& slti_result |
                      {32{rv_sltiu}}& sltiu_result |
                      {32{rv_xori}}& xori_result |
                      {32{rv_auipc}}& auipc_result |
                      {32{rv_lui}}& lui_result |
                      {32{rv_jal}} & jal_result|
                      {32{rv_slli}}& slli_result |
                      {32{rv_srli}}& srli_result |
                      {32{rv_srai}}& srai_result;

    assign branch_taken =
        (rv_beq & (src1 == src2)) |
        (rv_bne & (src1 != src2)) |
        (rv_blt & ($signed(src1) < $signed(src2))) |
        (rv_bge & ($signed(src1) >= $signed(src2))) |
        (rv_bltu & (src1 < src2)) |
        (rv_bgeu & (src1 >= src2));

    assign raddr = inst_load ? (src1 + imm12) : 32'b0;

    assign waddr = src1 + simm12;
    wire [4:0] wdata_shift = {3'b0,waddr[1:0]} ;

    assign we = 4'b1111 & {4{rv_sw}} |((4'b0011 & {4{rv_sh}}) << wdata_shift) |((4'b0001 & {4{rv_sb}}) << wdata_shift) ;
    assign wdata = src2 << wdata_shift;

    regfile u_regfile (
        .clk(clk),
        .we(reg_we),
        .raddr1(reg_src1),
        .raddr2(reg_src2),
        .waddr(reg_dest),
        .wdata(reg_data),
        .rdata1(src1),
        .rdata2(src2)
    );

    always @(*) begin
        if (rv_ebreak) begin
            sim_ebreak();
        end
        else if (rv_inv) begin
            sim_inv();
        end
    end


endmodule
