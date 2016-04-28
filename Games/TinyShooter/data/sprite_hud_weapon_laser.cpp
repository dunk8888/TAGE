#include "Engine/Types.h"
#include "Engine/Graphics/Image.h"

const uint16 sprite_hud_weapon_laser_pixels[] =
{
	0x4e31,0x1852,0x4e31,0x0000,0x0000,0x0000,0x0000,
	0x1852,0xffff,0xddc5,0x1852,0x1852,0x4e31,0x4e31,
	0x4e31,0x1852,0x4e31,0x0000,0x0000,0x0000,0x0000,
};

const uint8 sprite_hud_weapon_laser_alpha[] =
{
	0xff,0xff,0xff,0x00,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0x00,0x00,0x00,0x00,
};

extern "C" const Image sprite_hud_weapon_laser;
const Image sprite_hud_weapon_laser =
{
	7,3,
	(uint16*)&sprite_hud_weapon_laser_pixels,
	(uint8*)&sprite_hud_weapon_laser_alpha,
	(uint8*)"sprite_hud_weapon_laser",
};