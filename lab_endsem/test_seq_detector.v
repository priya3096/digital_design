`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:19:22 04/12/2017
// Design Name:   seq_detector
// Module Name:   C:/Documents/lab_endsem/test_seq_detector.v
// Project Name:  lab_endsem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seq_detector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_seq_detector;

	// Inputs
	reg [6:0] X;
	reg clk;
	reg reset;

	// Outputs
	wire Z;
	wire [2:0] state;
	wire [2:0] n;

	// Instantiate the Unit Under Test (UUT)
	seq_detector uut (
		.X(X), 
		.clk(clk), 
		.reset(reset), 
		.Z(Z), 
		.state(state), 
		.n(n)
	);

	initial begin
		// Initialize Inputs
		X = 7'b0010100;
		clk=0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#150
		reset=0;
		X = 7'b0010100;
		
        
		// Add stimulus here

	end
	always #20 clk=~clk;
      
endmodule

