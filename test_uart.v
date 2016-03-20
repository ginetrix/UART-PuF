`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:12:59 03/20/2016
// Design Name:   uart
// Module Name:   C:/Users/Arte/Documents/GitHub/UART_Testing/test_uart.v
// Project Name:  UART_Testing
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_uart;

	// Inputs
	reg clk;
	reg rst;
	reg rx;
	reg transmit;
	reg [1:0] tx_bit;

	// Outputs
	wire tx;
	wire received;
	wire [63:0] rx_byte;
	wire is_receiving;
	wire is_transmitting;
	wire recv_error;
	wire [3:0] rx_samples;
	wire [3:0] rx_sample_countdown;

	// Instantiate the Unit Under Test (UUT)
	uart uut (
		.clk(clk), 
		.rst(rst), 
		.rx(rx), 
		.tx(tx), 
		.transmit(transmit), 
		.tx_bit(tx_bit), 
		.received(received), 
		.rx_byte(rx_byte), 
		.is_receiving(is_receiving), 
		.is_transmitting(is_transmitting), 
		.recv_error(recv_error), 
		.rx_samples(rx_samples), 
		.rx_sample_countdown(rx_sample_countdown)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		rx = 0;
		transmit = 0;
		tx_bit = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		tx_bit = 1;
		transmit = 1;
		rx = 0;

	end
      
endmodule

