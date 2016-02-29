#include "Engine/Types.h"
#include "Engine/Graphics/Image.h"

const uint16 sprite_playerbullet_laser_07_pixels[] =
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x4e31,0x4e31,0xddc5,0xddc5,0xddc5,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xddc5,0xddc5,0xddc5,0x4e31,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x4e31,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const uint8 sprite_playerbullet_laser_07_alpha[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

extern "C" const Image sprite_playerbullet_laser_07;
const Image sprite_playerbullet_laser_07 =
{
	42,3,
	(uint16*)&sprite_playerbullet_laser_07_pixels,
	(uint8*)&sprite_playerbullet_laser_07_alpha,
	(uint8*)"sprite_playerbullet_laser_07",
};
