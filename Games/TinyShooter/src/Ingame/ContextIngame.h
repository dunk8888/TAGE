//
//  ContextIngame.h
//  TinyShooter
//
//  Created by Magnus Runesson on 2016-01-22.
//  Copyright © 2015 Magnus Runesson. All rights reserved.
//

#ifndef Context_Ingame_h
#define Context_Ingame_h

extern void ingame_setup();
extern void ingame_loop();
extern void ingame_exit();
extern void ingame_debugTrigger( int _i );

#define FIRE_RATE_DELAY_PEW		(17)
#define FIRE_RATE_DELAY_LASER	(25)
#define FIRE_RATE_DELAY_BOMB	(45)

#define GO_FLAGS_UNIMPORTANT	(0)
#define GO_FLAGS_PLAYERSHIP		(1)
#define GO_FLAGS_PLAYERBULLET	(2)
#define GO_FLAGS_ENEMY			(3)
#define GO_FLAGS_ENEMYBULLET	(4)

#define SPRITE_COLLISION_INDEX_UNIMPORTANT	(0)		// Collision index 0 doesn't write to the collision buffer and can as such not be used to detect collision with
#define SPRITE_COLLISION_INDEX_PLAYERSHIP	(1)
#define SPRITE_COLLISION_INDEX_PLAYERBULLET	(2)
#define SPRITE_COLLISION_INDEX_ENEMY		(3)
#define SPRITE_COLLISION_INDEX_PICKUP		(4)
#define SPRITE_COLLISION_INDEX_ENEMYBULLET	(5)

#define SPRITE_COLLISION_MASK_UNIMPORTANT	(1<<SPRITE_COLLISION_INDEX_UNIMPORTANT)
#define SPRITE_COLLISION_MASK_PLAYERSHIP	(1<<SPRITE_COLLISION_INDEX_PLAYERSHIP)
#define SPRITE_COLLISION_MASK_PLAYERBULLET	(1<<SPRITE_COLLISION_INDEX_PLAYERBULLET)
#define SPRITE_COLLISION_MASK_ENEMY			(1<<SPRITE_COLLISION_INDEX_ENEMY)
#define SPRITE_COLLISION_MASK_PICKUP		(1<<SPRITE_COLLISION_INDEX_PICKUP)
#define SPRITE_COLLISION_MASK_ENEMYBULLET	(1<<SPRITE_COLLISION_INDEX_ENEMYBULLET)

class LevelScrollFunc
{
public:
	int x;
	void(*pFunc)(int);
};

extern void(*pfnIngameCallback)();

bool ingameIsGameOver();

#endif /* Context_Ingame_h */
