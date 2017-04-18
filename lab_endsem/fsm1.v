`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:00 04/12/2017 
// Design Name: 
// Module Name:    fsm1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fsm1(X,clk,reset,Z,state);
input clk, reset;
input X;
output reg Z=0;
output reg [2:0] state=3'b000;
reg [2:0] nxt_state;

parameter [2:0] state_a= 3'b000;
parameter [2:0] state_b= 3'b001;
parameter [2:0] state_c= 3'b010;
parameter [2:0] state_d= 3'b011;
parameter [2:0] state_e= 3'b100;
parameter [2:0] state_f= 3'b101;
parameter [2:0] state_g= 3'b110;
parameter [2:0] state_h= 3'b111;

always @(posedge clk or state) begin
	if(reset)
		begin
			state= state_a;
			Z=0;
		end
	else begin
		case(state)
			state_a: if(X==0)
							begin
								nxt_state= state_e;	
							end
						else
							begin
								nxt_state= state_b;	
							end
			state_b: if(X==0)
							begin
								nxt_state= state_c;	
							end
						else
							begin
								nxt_state= state_b;	
							end
			state_c: if(X==0)
							begin
								nxt_state= state_d;	
							end
						else
							begin
								nxt_state= state_b;	
							end
			state_d: if(X==0)
							begin
								nxt_state= state_f;	
							end
						else
							begin
								nxt_state= state_g;	
							end
			state_e: if(X==0)
							begin
								nxt_state= state_f;	
							end
						else
							begin
								nxt_state= state_b;	
							end
			state_f: if(X==0)
							begin
								nxt_state= state_f;	
							end
						else
							begin
								nxt_state= state_g;	
							end
			state_g: if(X==0)
							begin
								nxt_state= state_h;									
							end
						else
							begin
								nxt_state= state_b;	
							end
			state_h: if(X==0)
							begin
								nxt_state= state_d;	
							end
						else
							begin
								nxt_state= state_b;									
							end	
								
		endcase
	end
end

always @(posedge clk) begin
	if(nxt_state==state_d || nxt_state==state_h)
		begin
			state=nxt_state;
			Z=1;
		end
	else
		begin
			state=nxt_state;
			Z=0;
		end
end

endmodule
