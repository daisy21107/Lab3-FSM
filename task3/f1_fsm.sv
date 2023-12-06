module f1_fsm (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [7:0] data_out
);

    typedef enum {IDLE, S1, S2, S3, S4, S5, S6, S7, S8} my_state;
    my_state current_state, next_state;

    always_ff @(posedge clk)
        if (rst)        current_state <= IDLE;
        else            current_state <= next_state;

    always_comb
        case(current_state)
            IDLE:   if (en==1)  next_state = S1;
                    else        next_state = current_state;
            S1:     if (en==1)  next_state = S2;
                    else        next_state = current_state;
            S2:     if (en==1)  next_state = S3;
                    else        next_state = current_state;
            S3:     if (en==1)  next_state = S4;
                    else        next_state = current_state;
            S4:     if (en==1)  next_state = S5;
                    else        next_state = current_state;
            S5:     if (en==1)  next_state = S6;
                    else        next_state = current_state;
            S6:     if (en==1)  next_state = S7;
                    else        next_state = current_state;
            S7:     if (en==1)  next_state = S8;
                    else        next_state = current_state;
            S8:     if (en==1)  next_state = IDLE;
                    else        next_state = current_state;
            default: next_state = current_state;
        endcase
        
    always_comb
        case (current_state)
            IDLE:   data_out <= 8'b00000000;
            S1:     data_out <= 8'b00000001;
            S2:     data_out <= 8'b00000011;
            S3:     data_out <= 8'b00000111;
            S4:     data_out <= 8'b00001111;
            S5:     data_out <= 8'b00011111;
            S6:     data_out <= 8'b00111111;
            S7:     data_out <= 8'b01111111;
            S8:     data_out <= 8'b11111111;
        default: data_out <= 8'b0;
        endcase

endmodule
