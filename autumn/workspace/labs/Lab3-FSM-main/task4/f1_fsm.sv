module f1_fsm (
    input   logic       rst,
    input   logic       en,
    input   logic       clk,
    input   logic       trigger,
    output  logic [7:0] data_out,
    output  logic       cmd_seq,
    output  logic       cmd_delay
);

//Defining states
typedef enum {S0, S1, S2, S3 ,S4, S5, S6, S7, S8} light_state;
light_state current_state, next_state;

//state registers
always @ (posedge clk)
    begin
        if (rst) current_state <= S0;
        else if (en & trigger) current_state <= next_state;
        else         current_state <= current_state;
    end
//next state logic
always_comb
    case (current_state)
        S0: next_state = S1;
        S1: next_state = S2;
        S2: next_state = S3;
        S3: next_state = S4;
        S4: next_state = S5;
        S5: next_state = S6;
        S6: next_state = S7;
        S7: next_state = S8;
        S8: next_state = S0;
        default: next_state = S0;
    endcase
//output logic
always_comb
    case (current_state)
        S0: data_out = 8'b0;
        S1: data_out = 8'b1;
        S1: cmd_seq = 0'b1;
        S2: data_out = 8'b11;
        S2: cmd_seq = 0'b1;
        S3: data_out = 8'b111;
        S3: cmd_seq = 0'b1;
        S4: data_out = 8'b1111;
        S4: cmd_seq = 0'b1;
        S5: data_out = 8'b11111;
        S5: cmd_seq = 0'b1;
        S6: data_out = 8'b111111;
        S6: cmd_seq = 0'b1;
        S7: data_out = 8'b1111111;
        S7: cmd_seq = 0'b1;
        S8: data_out = 8'b11111111;
        S8: cmd_delay = 0'b1;
        default: data_out = 8'b0;
    endcase

endmodule
