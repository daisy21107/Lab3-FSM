module lfsr (
    input logic         clk,        //input clock
    input logic         rst,        //reset
    input logic         en,
    output logic [4:1]   data_out    //serial data out
);

    logic [4:1] sreg;               //shift register

    always_ff @ (posedge clk, posedge rst)
        if (rst)
            sreg <= 4'b1;
        else if (en)  
            sreg <= {sreg[3:1], sreg[4] ^ sreg[3]}; 
        
    assign data_out = sreg;

endmodule
