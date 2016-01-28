#include "Engine/Types.h"
#include "Engine/Graphics/Image.h"

const uint16 sprite_explosion_medium_00_pixels[] =
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xf7de,0x0000,0x0000,0x0000,0x0000,0xf7de,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0xcb24,0x90e4,0xff24,0x90e4,0xcb24,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x90e4,0xff24,0xf7de,0xff24,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x90e4,0xff24,0xcb24,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0xcb24,0x0000,0x0000,0xff24,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0xf7de,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const uint8 sprite_explosion_medium_00_alpha[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xff,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,
	0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,
	0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0x00,0x00,
	0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

extern "C" const Image sprite_explosion_medium_00;
const Image sprite_explosion_medium_00 =
{
	11,11,
	(uint16*)&sprite_explosion_medium_00_pixels,
	(uint8*)&sprite_explosion_medium_00_alpha,
	(uint8*)"sprite_explosion_medium_00",
};