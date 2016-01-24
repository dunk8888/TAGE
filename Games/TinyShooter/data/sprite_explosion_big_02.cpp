#include "Types.h"
#include "Image.h"

uint16 sprite_explosion_big_02_pixels[] =
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xff24,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xff24,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xff24,0xff24,0xca60,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xffff,0x0000,0x0000,0xca60,0xca60,0xca60,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0xca60,0xca60,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0xca60,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0xff24,0x0000,0x0000,0x0000,0x0000,0xca60,0x0000,
	0x0000,0x0000,0xff24,0x0000,0x0000,0x0000,0x0000,0x0000,0xca60,0x0000,
	0x0000,0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xff24,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xff24,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

uint8 sprite_explosion_big_02_alpha[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,
	0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,
	0x00,0xff,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00,
	0x00,0x00,0x00,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
	0x00,0x00,0xff,0x00,0x00,0x00,0x00,0xff,0xff,0x00,
	0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

Image sprite_explosion_big_02 =
{
	10,13,
	(uint16*)&sprite_explosion_big_02_pixels,
	(uint8*)&sprite_explosion_big_02_alpha,
	(uint8*)"sprite_explosion_big_02",
};