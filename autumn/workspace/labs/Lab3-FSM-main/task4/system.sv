module system # (
    parameter WIDTH = 16
)(
    input   logic                   rst,
    input   logic                   en,
    input   logic                   clk,
    input   logic [WIDTH-1:0]       N,
    input   logic               trigger,    // trigger input signal
    input   logic [6:0]   n,          // no of clock cycle delay
    output  logic [7:0] data_out
);

    logic cycledelay [6:0];
    logic time_out;
    logic cmd_delay;
    logic cmd_seq;
    logic mux_out;
    logic tick;

f1_fsm lights(

    .rst(rst),
    .en(mux_out),
    .clk(clk),
    .trigger(trigger),
    .data_out(data_out),
    .cmd_delay(cmd_delay),
    .cmd_seq(cmd_seq)    

);

delay dlay(

    .clk(clk),
    .rst(rst),
    .trigger(trigger),
    .n(cycledelay),
    .time_out(time_out)

);

lfsr_7 lfsr(

    .clk(clk),
    .rst(rst),
    .data_out(cycledelay)
);

clktick clktck(

    .clk(clk),
    .rst(rst),
    .en(cmd_seq),
    .N(N),
    .tick(tick)
);

mux2 mux(

    .d0(time_out),
    .d1(tick),
    .s(cmd_seq),
    .y(mux_out)
);

endmodule
