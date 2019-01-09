//======================================================================
//
//	metr, 64x64@4, 
//	+ palette 32 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 64 + 2048 = 2112
//
//	Time-stamp: 2005-12-24, 17:36:57
//	Exported by Cearn's Usenti v1.7.1
//	(comments, kudos, flames to "daytshen@hotmail.com")
//
//======================================================================

const unsigned int metrPal[16]=
{
	0x001F4210,0x008C0000,0x04B629DA,0x0000004D,0x031C0218,0x00005F5D,0x01800100,0x00000240,
	0x46314210,0x4E734A52,0x56B55294,0x5EF75AD6,0x67396318,0x6F7B6B5A,0x77BD739C,0x7FFF7BDE,
};
const unsigned int altMetrPal[16]=
{
	0x46314210,0x4E734A52,0x56B55294,0x5EF75AD6,0x67396318,0x6F7B6B5A,0x77BD739C,0x7FFF7BDE,
	0x001F4210,0x008C0000,0x04B629DA,0x0000004D,0x031C0218,0x00005F5D,0x01800100,0x00000240,
};
const unsigned int metrTiles[512]=
{
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0xCCC00000,0xDDCC0000,0xEEDDC000,0x00ECDC00,0x006EEDC0,0x66000EDC,
	0xCCCCC000,0xDDDDDCCC,0xEEEEEDDD,0x45600EEE,0x45600000,0x56000000,0x60000000,0x00000005,
	0x000CCCCC,0xCCCDDDDD,0xDDDEEEEE,0xEEE54000,0x00066400,0x00000644,0x00000065,0x00000006,
	0x00000000,0x00000000,0x000000CC,0x0000CCDD,0x000CDDEE,0x00CDCE00,0x0CDEE000,0xCDE00000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0xC0000000,0xDC000000,0xCDC00000,0xEDDC0000,0x0ECC0000,0x0ECDC000,0x60EDC000,0x00ECDC00,
	0x000000ED,0x0000000E,0x0000000E,0x00000000,0x00000000,0x00000000,0x66000006,0x00650560,
	0x00006006,0x00060660,0x00650056,0x05000006,0x50500006,0x00000056,0x00000060,0x00000060,
	0x00000060,0x00000600,0x00000600,0x00005600,0x00006000,0x00006000,0x00006500,0x00000600,
	0xDE000000,0xE0000000,0xE0000000,0x00000000,0x60000000,0x56000000,0x45600000,0x00060000,
	0x0000000C,0x000000CD,0x00000CDC,0x0000CDDE,0x0000CDE0,0x000CDCE5,0x000CDE54,0x00CDCE44,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x000EDC00,0x066EDC00,0x6500EDC0,0x0000EDC0,0x0000EDC0,0x0000EDC0,0x60000EDC,0x66000EDC,
	0x00066600,0x00000000,0x00000050,0x00000006,0x00000065,0x00000060,0x00000506,0x66600600,
	0x60000600,0x56606000,0x45560000,0x34456000,0x44445600,0x34345600,0x43445600,0x34445666,
	0x00006666,0x00665555,0x06554344,0x65444434,0x54444343,0x54343444,0x53434443,0x54443434,
	0x66066000,0x00600600,0x00000600,0x00006000,0x00006006,0x00006006,0x00060006,0x00006606,
	0x00CDE556,0x00CDE660,0x0CDE6000,0x0CDE0000,0x0CDE0000,0x0CDE0000,0xCDE00000,0xCDE00000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x06000EDC,0x06000EDC,0x06600EDC,0x06560EDC,0x65560EDC,0x65460EDC,0x64560EDC,0x66600EDC,
	0x55566600,0x44455600,0x34445600,0x43344560,0x33444460,0x44433460,0x34344560,0x34445600,
	0x43456655,0x44565553,0x55565444,0x66654344,0x64654434,0x64654343,0x66655444,0x46665544,
	0x66666544,0x55555665,0x43435556,0x43444455,0x34343445,0x43434344,0x44344445,0x44434556,
	0x00000666,0x00006655,0x06065534,0x60655444,0x00654343,0x00654434,0x00655443,0x06065554,
	0xCDE60000,0xCDE56000,0xCDE45600,0xCDE56060,0xCDE60006,0xCDE00000,0xCDE00000,0xCDE00000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x06000EDC,0x06000EDC,0x6000EDC0,0x5000ED00,0x00EEDC60,0xEEDDC600,0xDCC66000,0x66550880,
	0x43555600,0x55566650,0x66600060,0x0EEE0056,0xEDDDEE00,0xDC6CDDEE,0x66556CCD,0x58885556,
	0x64665554,0x06066655,0x00000666,0x00000000,0x0000000D,0x00000DDE,0xDDDDDEEC,0xEEEEDDC6,
	0x55555660,0x66666000,0x00000650,0x00000060,0xD0060606,0xEDD05005,0xCEEDDDDD,0x6CDDEEEE,
	0x60006655,0x60000066,0x66000000,0x0600EEE0,0x55EEDDDE,0xEEDD66CD,0xDCC65566,0x65558885,
	0xCDE00000,0xCDE00000,0x0CDE0006,0x00DE0065,0x06CDEE54,0x006CDDEE,0x00066CCD,0x08805566,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x80000000,0x80000000,0x88000000,0x98000000,0x98000000,0x98000000,0x80000000,
	0x55088988,0x80999A98,0x0888AAA9,0x000889A9,0x000088AA,0x0000089A,0x0000089A,0x00000089,
	0x00000885,0x80000000,0x98000000,0x99800000,0x89800000,0xA8000000,0x80000000,0x00000000,
	0x55CC6655,0x66555008,0x50000889,0x00000000,0x00000000,0x00000000,0x0000000A,0x00000000,
	0x5566CC55,0x80055566,0x98800005,0x00000000,0x00000000,0x00000000,0xA0000000,0x00000000,
	0x58800000,0x00000008,0x00000089,0x00000899,0x00000898,0x0000008A,0x00000008,0x00000000,
	0x88988055,0x89A99908,0x9AAA8880,0x9A988000,0xAA880000,0xA9800000,0xA9800000,0x98000000,
	0x00000000,0x00000008,0x00000008,0x00000088,0x00000089,0x00000089,0x00000089,0x00000008,

	0x80000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000089,0x000000A8,0x00000A80,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x98000000,0x8A000000,0x08A00000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000008,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};