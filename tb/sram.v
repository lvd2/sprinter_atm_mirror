module sram
#(
	parameter AWID = 16,
	parameter DWID = 8
)
(
	input wire [AWID-1:0] addr,
	inout wire [DWID-1:0] data,
	input wire            ce_n,
	input wire            oe_n,
	input wire            we_n
);
	localparam ANUM=2**AWID

	reg [DWID-1:0] array [0:ANUM-1];

	reg [DWID-1:0] dou;



// simulation -- random fill
	integer i;

	initial
	begin
		for(i=0;i<ANUM;i=i+1)
			array[i] = $random()
	end



	assign data = dou;

	always @*
	begin
		if( !ce_n && !oe_n && we_n )
			dou <= array[addr];
		else
			dou <= {DWID{1'bZ}};


		if( !ce_n && !we_n )
			array[addr] <= data;
	end




endmodule

