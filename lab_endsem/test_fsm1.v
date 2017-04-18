`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:21:06 04/12/2017
// Design Name:   fsm1
// Module Name:   C:/Documents/lab_endsem/test_fsm1.v
// Project Name:  lab_endsem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_fsm1;

	// Inputs
	reg X;
	reg clk;
	reg reset;

	// Outputs
	wire Z;
	wire [2:0] state;

	// Instantiate the Unit Under Test (UUT)
	fsm1 uut (
		.X(X), 
		.clk(clk), 
		.reset(reset), 
		.Z(Z), 
		.state(state)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		
		
		#10;
		X=0;
		
		#10;
		X=0;
		
		
		#10;
		X=0;
		
		#10;
		X=1;
		
		#10;
		X=0;
		
		#10;
		X=0;
		
		
		#10;
		X=1;
		
		#10;
		X=0;
		
		#10;
		X=1;
		
		#10;
		X=0;
		
		#10;
		X=0;
		
		
		
		
		// Add stimulus here

	end
	always #5 clk=~clk;
      
endmodule

