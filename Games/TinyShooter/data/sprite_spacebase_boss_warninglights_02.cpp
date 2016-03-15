#include "Engine/Types.h"
#include "Engine/Graphics/Image.h"

const uint16 sprite_spacebase_boss_warninglights_02_pixels[] =
{
	0x941c,0x941c,0x941c,0x942c,0x942c,0x942c,0x942c,0x941c,0x941c,0x941c,
	0x941c,0x941c,0x942c,0xd53c,0xd53c,0xd53c,0xd53c,0x942c,0x941c,0x941c,
	0x941c,0x942c,0xd53c,0x163d,0x163d,0x163d,0x163d,0xd53c,0x942c,0x941c,
	0x942c,0xd53c,0x163d,0xffff,0x7b6e,0x7b6e,0x941c,0x163d,0xd53c,0x942c,
	0x942c,0xd53c,0x163d,0x7b6e,0x96fd,0xf0fb,0x2e13,0x163d,0xd53c,0x942c,
	0x942c,0xd53c,0x163d,0x7b6e,0xf0fb,0xf0fb,0x2e13,0x163d,0xd53c,0x942c,
	0x942c,0xd53c,0x163d,0x941c,0x2e13,0x2e13,0x4a0a,0x163d,0xd53c,0x942c,
	0x941c,0x942c,0xd53c,0x163d,0x163d,0x163d,0x163d,0xd53c,0x942c,0x941c,
	0x941c,0x941c,0x942c,0xd53c,0xd53c,0xd53c,0xd53c,0x942c,0x941c,0x941c,
	0x941c,0x941c,0x941c,0x942c,0x942c,0x942c,0x942c,0x941c,0x941c,0x941c,
};

extern "C" const Image sprite_spacebase_boss_warninglights_02;
const Image sprite_spacebase_boss_warninglights_02 =
{
	10,10,
	(uint16*)&sprite_spacebase_boss_warninglights_02_pixels,
	(uint8*)0,
	(uint8*)"sprite_spacebase_boss_warninglights_02",
};
