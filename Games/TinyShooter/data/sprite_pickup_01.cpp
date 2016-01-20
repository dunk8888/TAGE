#include "Types.h"
#include "Image.h"

uint16 sprite_pickup_01_pixels[] =
{
	0x0000,0xeda9,0xeda9,0xe4c1,0x0000,
	0xeda9,0x923e,0x705c,0x705c,0xe4c1,
	0xe4c1,0x705c,0x705c,0x923e,0xe4c1,
	0xe4c1,0x705c,0x923e,0xffff,0xbbc0,
	0x0000,0xe4c1,0xbbc0,0xbbc0,0x0000,
};

uint8 sprite_pickup_01_alpha[] =
{
	0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,
	0x00,0xff,0xff,0xff,0x00,
};

Image sprite_pickup_01 =
{
	5,5,
	(uint16*)&sprite_pickup_01_pixels,
	(uint8*)&sprite_pickup_01_alpha,
	(uint8*)"sprite_pickup_01",
};