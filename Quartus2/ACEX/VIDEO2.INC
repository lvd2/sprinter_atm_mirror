-- Copyright (C) 1988-2000 Altera Corporation
-- Any megafunction design, and related net list (encrypted or decrypted),
-- support information, device programming or simulation file, and any other
-- associated documentation or information provided by Altera or a partner
-- under Altera's Megafunction Partnership Program may be used only to
-- program PLD devices (but not masked PLD devices) from Altera.  Any other
-- use of such megafunction design, net list, support information, device
-- programming or simulation file, or any other related documentation or
-- information is prohibited for any other purpose, including, but not
-- limited to modification, reverse engineering, de-compiling, or use with
-- any other silicon devices, unless such use is explicitly licensed under
-- a separate agreement with Altera or a megafunction partner.  Title to
-- the intellectual property, including patents, copyrights, trademarks,
-- trade secrets, or maskworks, embodied in any such megafunction design,
-- net list, support information, device programming or simulation file, or
-- any other related documentation or information provided by Altera or a
-- megafunction partner, remains with Altera, the megafunction partner, or
-- their respective licensors.  No other licenses, including any licenses
-- needed under any third party's intellectual property, are provided herein.

-- MAX+plus II Include File
-- Version 10.0 9/14/2000
-- Created: Mon Nov 19 00:36:42 2001

FUNCTION video2 (clk42, start_up, copy_sinc_h, copy_sinc_v, wr, vai[19..0], d[7..0], mdi[15..0], vdm0[7..0], vdm1[7..0], vdm2[7..0], vdm3[7..0], zx_port[7..0], dir_port[7..0], double_cas, mouse_x[9..0], mouse_y[9..0])
    WITH (MODE, MOUSE)
    RETURNS (ct[5..0], cth[5..0], ctv[8..0], ctf[6..0], blank, vao[15..0], vdo0[7..0], vdo1[7..0], vdo2[7..0], vdo3[7..0], v_wr[3..0], v_wen[3..0], v_cs[1..0], wr_pix, intt);
