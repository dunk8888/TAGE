#include "Engine/Types.h"
#include "Engine/Graphics/Image.h"

const uint16 sprite_enemy_spinloop_02_pixels[] =
{
	0x0000,0x26c9,0x26c9,0x26c9,0x0000,
	0x26c9,0x5ec3,0x3fdd,0x5ec3,0x26c9,
	0x26c9,0x3fdd,0xffff,0x3fdd,0x26c9,
	0x26c9,0x5ec3,0x3fdd,0x5ec3,0x26c9,
	0x0000,0x26c9,0x26c9,0x26c9,0x0000,
};

const uint8 sprite_enemy_spinloop_02_alpha[] =
{
	0x00,0xff,0xff,0xff,0x00,
	0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,
	0x00,0xff,0xff,0xff,0x00,
};

extern "C" const Image sprite_enemy_spinloop_02;
const Image sprite_enemy_spinloop_02 =
{
	5,5,
	(uint16*)&sprite_enemy_spinloop_02_pixels,
	(uint8*)&sprite_enemy_spinloop_02_alpha,
	(uint8*)"sprite_enemy_spinloop_02",
};
