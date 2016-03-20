`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:17:56 03/20/2016
// Design Name:   display_hex_byte
// Module Name:   C:/Users/Arte/Documents/GitHub/UART_Testing/asdf.v
// Project Name:  UART_Testing
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display_hex_byte
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module asdf;

	// Inputs
	reg clk;
	reg [7:0] hex_byte;

	// Outputs
	wire [7:0] segments;
	wire [2:0] segments_enable;

	// Instantiate the Unit Under Test (UUT)
	display_hex_byte uut (
		.clk(clk), 
		.hex_byte(hex_byte), 
		.segments(segments), 
		.segments_enable(segments_enable)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		hex_byte = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

