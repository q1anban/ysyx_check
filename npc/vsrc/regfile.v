module regfile(
    input clk,
    input we,
    input [4:0] waddr,
    input [31:0] wdata,
    input [4:0] raddr1,
    input [4:0] raddr2,
    output [31:0] rdata1,
    output [31:0] rdata2
);
    reg [31:0] regs [31:0] /*verilator public*/; // 32 registers, indexed from 0 to 31

    always @(posedge clk) begin
        if (we && waddr != 0) begin // x0 is read-only
            regs[waddr] <= wdata;
        end
    end

    assign    rdata1 = (raddr1 == 5'b00000) ? 32'b0 : regs[raddr1];
    assign    rdata2 = (raddr2 == 5'b00000) ? 32'b0 : regs[raddr2];

endmodule
