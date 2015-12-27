//
//  Sprite.hpp
//  TinyArcade
//
//  Created by Magnus Runesson on 2015-12-27.
//  Copyright © 2015 Magnus Runesson. All rights reserved.
//

#ifndef Sprite_hpp
#define Sprite_hpp

#include "Types.h"
#include "Image.h"

//
// Sprite flags
//
#define SPRITE_FLAG_ROTATE_BASE		(0)
#define SPRITE_FLAG_ROTATE_MASK		(3<<SPRITE_FLAG_ROTATE_BASE)
#define SPRITE_FLAG_ROTATE_0		(0<<SPRITE_FLAG_ROTATE_BASE)
#define SPRITE_FLAG_ROTATE_90		(1<<SPRITE_FLAG_ROTATE_BASE)
#define SPRITE_FLAG_ROTATE_180		(2<<SPRITE_FLAG_ROTATE_BASE)
#define SPRITE_FLAG_ROTATE_270		(3<<SPRITE_FLAG_ROTATE_BASE)
#define SPRITE_FLAG_FLIP_X			(1<<3)
#define SPRITE_FLAG_FLIP_Y			(1<<4)

class Sprite
{
public:
	sint16 x;
	sint16 y;
	uint16 flags;
	
	sint16 boundsLeft;
	sint16 boundsRight;
	sint16 boundsTop;
	sint16 boundsBottom;
	
	Image* image;
	
	Sprite();
	
	//
	void SetRotation( int _rotation );
	void SetFlippedX( bool _flipped );
	void SetFlippedY( bool _flipped );
	
	//
	void PreRender();
	
	inline void SetFlags( int _flags ) { flags |= _flags; };
	inline void ClrFlags( int _flags ) { flags &= ~_flags; };
	
	int GetOffset( int _screenX, int _screenY );
};


#endif /* Sprite_hpp */