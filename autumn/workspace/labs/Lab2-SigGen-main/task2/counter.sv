module counter #(
    parameter WIDTH = 8
)(

    input logic clk,  //clock
    input logic rst,  //reset
    input logic en,   //counter enable 
    input logic  [WIDTH-1:0] incr,
    output logic [WIDTH-1:0] count //count output
);

always_ff @ (posedge clk) begin
    if (rst) 
        count <= 0 ;
    else if (en)
        count <= count + incr; //chagned so not just adding 1 but adding anything
end

endmodule
