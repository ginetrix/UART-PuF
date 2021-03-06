`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:15:55 03/20/2016
// Design Name:   uart_demo
// Module Name:   C:/Users/Arte/Documents/GitHub/UART_Testing/testtt.v
// Project Name:  UART_Testing
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart_demo
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testtt;

	// Inputs
	reg CLK_100MHz;
	reg [5:0] Switch;
	reg Rx;

	// Outputs
	wire Tx;
	wire [0:7] LED;
	wire [7:0] SevenSegment;
	wire [2:0] SevenSegmentEnable;

	// Instantiate the Unit Under Test (UUT)
	uart_demo uut (
		.CLK_100MHz(CLK_100MHz), 
		.Switch(Switch), 
		.Rx(Rx), 
		.Tx(Tx), 
		.LED(LED), 
		.SevenSegment(SevenSegment), 
		.SevenSegmentEnable(SevenSegmentEnable)
	);

	initial begin
		// Initialize Inputs
		CLK_100MHz = 0;
		Switch = 0;
		Rx = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		CLK_100MHz = 1;
		Switch = 1;
		Rx = 1;

	end
      
endmodule

