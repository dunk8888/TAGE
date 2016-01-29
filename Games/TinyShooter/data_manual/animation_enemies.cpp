//
//  animation_enemies.cpp
//  TinyShooter
//
//  Created by Magnus Runesson on 24/01/16.
//  Copyright (c) 2016 Magnus Runesson. All rights reserved.
//

#include "Engine/Types.h"
#include "Engine/Graphics/Animation.h"
#include "Data/alldata.h"

//
//
// Big red saucer
//
//
const AnimationFrameDefinition animation_enemy_saucer_frames[] =
{
	{
		&sprite_enemy_saucer_00,
		5,
		0,
		0,
		0,
	},
	{
		&sprite_enemy_saucer_01,
		5,
		0,
		0,
		0,
	},
};

const AnimationSequenceDefinition animation_enemy_saucer =
{
	2,
	true,
	animation_enemy_saucer_frames,
};


//
//
// Sparrow - the little green devil
//
//
const AnimationFrameDefinition animation_enemy_sparrow_frames[] =
{
	{
		&sprite_enemy_sparrow_00,
		10,
		0,
		0,
		0,
	},
	{
		&sprite_enemy_sparrow_01,
		10,
		0,
		0,
		0,
	},
	{
		&sprite_enemy_sparrow_02,
		10,
		0,
		0,
		0,
	},
	{
		&sprite_enemy_sparrow_03,
		10,
		0,
		0,
		0,
	},
};

const AnimationSequenceDefinition animation_enemy_sparrow =
{
	4,
	true,
	animation_enemy_sparrow_frames,
};
