//
//  TinyRacer.cpp
//  TinyArcade
//
//  Created by Magnus Runesson on 2015-12-03.
//  Copyright © 2015 Magnus Runesson. All rights reserved.
//

// STDC
#include <memory.h>

// TinyArcade game engine
#include "Screen.h"
#include "alldata.h"
#include "types.h"
#include "FixedPoint.h"
#include "Joypad.h"
#include "fpmath.h"
#include "Camera.h"

// Project specifics
#include "TinyRaceCar.h"

//
FixedPoint fpSpeed;
TinyRaceCar playerCar;
GameObject coolbackground( &testtrack );
Camera mainCamera;

void drawCarGrid();

void setup()
{
	Camera::main = &mainCamera;
	
	playerCar.SetPosition( 10, 10 );
}

void loop()
{
	padUpdate();
	
	
	playerCar.Update();
	
	//testtrack.Draw( -20, -80 );

	mainCamera.SetWorldPosition(
								playerCar.GetWorldPositionX()-48,
								playerCar.GetWorldPositionY()-32 );
	coolbackground.Render();
	playerCar.Render();
}

void drawTestCars()
{
	//testcar.DrawRotated( 34, 32, 0x40, 0x0100 );
	//testcarbig.DrawRotatedAlpha( 52, 42, angle>>2, 0x0800 );
	//testcar.DrawRotated( 70, 32, 0xa0, 0x0100 );
}
