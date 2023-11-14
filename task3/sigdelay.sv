module sigdelay #(
    parameter   A_WIDTH = 9, 
                D_WIDTH = 8
   )   (
    input logic                 clk, 
    input logic                 rst,
    input logic                 en,
    input logic                 wr,
    input logic                 rd,
    input logic [A_WIDTH-1:0]   incr,
    input logic [A_WIDTH-1:0]   offset,
    input logic [D_WIDTH-1:0]   mic_signal,
    output logic [D_WIDTH-1:0]  delayed_signal
);

    logic [A_WIDTH-1:0]         write_address;
    logic [A_WIDTH-1:0]         read_address;

counter_with_load delaycounter    (
    .clk(clk),
    .rst(rst),
    .en(en),
    .incr(incr),
    .count(read_address), 
    .count_with_load(write_address)
);

ram2ports delayram (
    .clk(clk),
    .wr_en(wr),
    .rd_en(rd),
    .wr_addr(write_address),
    .rd_addr(read_address),
    .din(mic_signal),
    .dout(delayed_signal)
);

endmodule 
