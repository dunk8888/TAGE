#include "Types.h"
#include "Image.h"

uint16 tinyracecar_0_pixels[] =
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xf986,0xf986,0xf986,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xf986,0xf986,0xf986,0x0000,0x0000,
	0x0000,0x0000,0xf986,0xf986,0xf986,0x0000,0x0000,
	0x0000,0x0000,0xf986,0xf986,0xf986,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

uint8 tinyracecar_0_alpha[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

Image tinyracecar_0 =
{
	7,7,
	(uint16*)&tinyracecar_0_pixels,
	(uint8*)&tinyracecar_0_alpha,
	(uint8*)"tinyracecar_0",
};
