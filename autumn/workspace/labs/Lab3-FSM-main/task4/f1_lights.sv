module f1_lights #(
    parameter WIDTH = 16
)(
    input   logic                   rst,
    input   logic                   en,
    input   logic                   clk,
    input   logic                   trigger,
    input   logic [WIDTH-1:0]       N,
    output  logic [7:0] data_out
);

    logic clk_sig;

f1_fsm fsm(

    .rst(rst),
    .en(en),
    .clk(clk_sig),
    .trigger(trigger),
    .data_out(data_out)
);

clktick clock(

    .rst(rst),
    .en(en),
    .clk(clk),
    .N(N),
    .tick(clk_sig)
);

endmodule
