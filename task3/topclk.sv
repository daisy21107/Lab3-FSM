module topclk #(
    parameter   WIDTH = 16
)(
    // interface signals
    input logic                 clk,
    input logic                 rst,
    input logic                 en,
    input logic [WIDTH-1:0]     N,
    output logic [WIDTH-1:0]    data_out
);

    logic [1:0]         tick;

f1_fsm FSM (
    .clk (clk),
    .rst (rst),
    .en (tick),
    .data_out (data_out)

);

clktick ticking (
    .clk (clk),
    .rst (rst),
    .en (en),
    .N (N),
    .tick (tick)
);

endmodule
