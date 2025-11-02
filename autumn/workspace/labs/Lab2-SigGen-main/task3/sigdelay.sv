module sigdelay #(
    parameter A_WIDTH = 9,
    parameter D_WIDTH = 8
)(
    //interface signals
    input logic               clk, //clock
    input logic               rst,  //reset
    input logic               wr,   //write enable
    input logic               rd,   //read enable  
    input logic [A_WIDTH-1:0] mic_signal, //data in  
    input logic [A_WIDTH-1:0] offset, //address offset  
    input logic [D_WIDTH-1:0] incr, //increment for addr counter
    output logic [D_WIDTH-1:0] delayed_signal //output data wave
);

    logic [A_WIDTH-1:0]  address; //interconnect wire

counter addrCounter (
    .clk(clk),
    .rst(rst),
    .en(wr),
    .incr(incr),
    .count(address)
);

ram2ports audioRam (
    .clk(clk),
    .wr_en(wr),
    .rd_en(rd),
    .wr_addr(address),
    .rd_addr(address+offset),
    .din(mic_signal),
    .dout(delayed_signal)
);

endmodule
