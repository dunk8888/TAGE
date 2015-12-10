//
//  GameObject.cpp
//  TinyArcade
//
//  Created by Magnus Runesson on 2015-12-03.
//  Copyright © 2015 Magnus Runesson. All rights reserved.
//

#include "GameObject.h"
#include "Camera.h"

GameObject::GameObject( Image* _image )
{
	//
	m_worldPositionX = 0;
	m_worldPositionY = 0;
	
	//
	m_image = _image;
	m_imageHotspotX = 0;
	m_imageHotspotY = 0;
}

void GameObject::Update()
{
	
}

void GameObject::Render()
{
	int x = m_worldPositionX - Camera::main->GetWorldX() - m_imageHotspotX;
	int y = m_worldPositionY - Camera::main->GetWorldY() - m_imageHotspotY;
	m_image->DrawAlpha( x, y );
}

void GameObject::SetWorldPosition( int _x, int _y )
{
	m_worldPositionX = _x;
	m_worldPositionY = _y;
}

int GameObject::GetWorldPositionX()
{
	return m_worldPositionX;
}

int GameObject::GetWorldPositionY()
{
	return m_worldPositionY;
}
