module rom
#(
	parameter AWID=18,
	parameter DWID=8,
	parameter NAME="spr.rom"
)
(
	input  wire [AWID-1:0] addr,
	output reg  [DWID-1:0] data,
	input  wire            oe_n,
	input  wire            ce_n
);
	localparam ANUM=2**AWID;
	
	integer fd;

	wire [DWID-1:0] word;
	reg [DWID-1:0] mem [0:ANUM-1];


	// load file
	initial
	begin
		fd = $fopen(NAME,"rb");

		if( ANUM!=$fread(mem,fd) )
		begin
			$display("Couldn't load ROM!\n");
			$stop;
		end

		$fclose(fd);
	end


	always @*
	begin
		if( !ce_n && !oe_n )
			data = mem[addr];
		else
			data = {DWID{1'bZ}};

	end




endmodule

