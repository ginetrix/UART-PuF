`timescale 1ns / 1ps
/*
 * Copyright 2015 Forest Crossman
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

`include "ipcore_dir/osdvu/uart.v"
`include "ipcore_dir/mimas_v2_hex_display/display_hex_byte.v"



module uart_demo(
	input CLK_100MHz,
	input [5:0] Switch,
	input  Rx,
	output Tx,
	output reg [0:7] LED,
	output [7:0] SevenSegment,
	output [2:0] SevenSegmentEnable
	);

	wire reset;
	wire retSignal;
	reg transmit;
	reg [1:0] tx_bit;
	wire received;
	wire [63:0] rx_bytes;
	wire is_receiving;
	wire is_transmitting;
	wire recv_error;

	reg [7:0] display_byte; // The byte to be displayed

	assign reset = ~Switch[2]; // Switch is active low

	display_hex_byte #(
		.refresh_rate(1000),
		.sys_clk_freq(100000000)
	)
	hex_display(
		.clk(CLK_100MHz),
		.hex_byte(display_byte),
		.segments(SevenSegment),
		.segments_enable(SevenSegmentEnable)
	);

	uart #(
		.baud_rate(19200),                // This must always be 19200
		.sys_clk_freq(100000000)          // The master clock frequency
	)
	uart0(
		.clk(CLK_100MHz),                 // The master clock for this module
		.rst(reset),                      // Synchronous reset
		.rx(Rx),                          // Incoming serial line
		.tx(Tx),                          // Outgoing serial line
		.transmit(transmit),              // Signal to transmit
		.tx_bit(1),               // Byte to transmit
		.received(received),              // Indicated that a byte has been received
		.rx_byte(rx_byte),                // Byte received
		.is_receiving(is_receiving),      // Low when receive line is idle
		.is_transmitting(is_transmitting),// Low when transmit line is idle
		.recv_error(recv_error)           // Indicates error in receiving packet.
	);
	
	//	MultiArbiter(
	//	.bitArray(rx_bytes),                 // The master clock for this module
	//	.retSig(retSignal)   
	//);

	always @(posedge CLK_100MHz) begin
		if (received) begin
			display_byte <= rx_bytes[7:0];
			tx_bit <= rx_bytes[0];
			LED <= rx_bytes[0];
			transmit <= retSignal;
		end
		if (is_transmitting) begin
			transmit <= 0;
		end
	end
endmodule
