#include "Engine/Types.h"
#include "Engine/Graphics/Image.h"

const uint16 sprite_enemy_cargo_00_pixels[] =
{
	0x0000,0x0000,0x0000,0x0000,0xc5dd,0xc5dd,0x945b,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x945b,0xeda9,0xeda9,0xe4c1,0x5218,0x0000,0x0000,
	0x0000,0x0000,0x5218,0xeda9,0x923e,0x705c,0x705c,0xe4c1,0x5218,0x9d35,
	0xb619,0x9d35,0xd6db,0xffff,0x705c,0x705c,0x705c,0x6baf,0x9d35,0x9d35,
	0xd6db,0x9d35,0x9d35,0x9d35,0x6baf,0x6baf,0x6baf,0x9d35,0x9d35,0xd6db,
	0x0000,0xd6db,0x9d35,0x9d35,0x9d35,0x9d35,0x9d35,0x9d35,0xd6db,0x0000,
	0x0000,0x0000,0xd6db,0xb619,0x9d35,0x9d35,0xb619,0xd6db,0x0000,0x0000,
};

const uint8 sprite_enemy_cargo_00_alpha[] =
{
	0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0x00,0x00,
	0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,
	0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,
};

extern "C" const Image sprite_enemy_cargo_00;
const Image sprite_enemy_cargo_00 =
{
	10,7,
	(uint16*)&sprite_enemy_cargo_00_pixels,
	(uint8*)&sprite_enemy_cargo_00_alpha,
	(uint8*)"sprite_enemy_cargo_00",
};