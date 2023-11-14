module counter_with_load #(
    parameter WIDTH = 9
)(
    // interface signals
    input logic                 clk,        // clock
    input logic                 rst,        // reset
    input logic                 en,         // counter enable
    input logic [WIDTH-1:0]     incr,
    output logic [WIDTH-1:0]    count, 
    output logic [WIDTH-1:0]    count_with_load
);

always_ff @ (posedge clk)   begin   
    if (rst)    count <= {WIDTH{1'b0}};
    else        count <= count + {{WIDTH-1{1'b0}}, en};
                count_with_load <= count + incr + {{WIDTH-1{1'b0}}, en} ;
    end
endmodule
