//
//  FixedPoint.cpp
//  TinyArcade
//
//  Created by Magnus Runesson on 30/11/15.
//  Copyright (c) 2015 Magnus Runesson. All rights reserved.
//

#include "Engine/Math/FixedPoint.h"

#define FRACTION_BITS (8)
#define FRACTION_BITS_HALF (FRACTION_BITS/2)
#define FRACTION_BITS_QUAD (FRACTION_BITS_HALF/2)
#define FRACTION_VALUES (1<<FRACTION_BITS)
#define FRACTION_VALUES_HALF (FRACTION_VALUES>>1)
#define FRACTION_MASK (FRACTION_VALUES-1)
#define INTEGER_BITS (23)
#define INTEGER_MASK (0xffffff00)


/*************************************************************************************************************************
  Constructors
*************************************************************************************************************************/
 
FixedPoint::FixedPoint()
{
	m_value = 0;
}

FixedPoint::FixedPoint( int _int )
{
	m_value = _int*FRACTION_VALUES;
}

FixedPoint::FixedPoint( int _int, int _fractionPercentage )
{
	int fraction = (_fractionPercentage * FRACTION_VALUES) / 100;
	m_value = (_int * FRACTION_VALUES) + fraction;
}


/*************************************************************************************************************************
  Assignment
 *************************************************************************************************************************/

void FixedPoint::operator = (int o)
{
	m_value = o * FRACTION_VALUES;
}

void FixedPoint::operator = (FixedPoint o)
{
	m_value = o.m_value;
}


/*************************************************************************************************************************
  Addition
 *************************************************************************************************************************/

void FixedPoint::operator += (int o)
{
	m_value += o * FRACTION_VALUES;
}

void FixedPoint::operator += (FixedPoint o)
{
	m_value += o.m_value;
}

FixedPoint FixedPoint::operator + (int _o ) const
{
	return m_value + _o;
}

FixedPoint FixedPoint::operator + (FixedPoint _o ) const
{
	FixedPoint ret = *this;
	ret.m_value += _o.m_value;
	return ret;
}


/*************************************************************************************************************************
  Subtraction
 *************************************************************************************************************************/

void FixedPoint::operator -= (int o)
{
	m_value -= o * FRACTION_VALUES;
}

void FixedPoint::operator -= (FixedPoint o)
{
	m_value -= o.m_value;
}

FixedPoint FixedPoint::operator - (int _o ) const
{
	return m_value - _o;
}

FixedPoint FixedPoint::operator - (FixedPoint _o ) const
{
	FixedPoint ret;
	ret.SetRawValue( m_value - _o.m_value );
	return ret;
}


/*************************************************************************************************************************
  Comparison
 *************************************************************************************************************************/

bool FixedPoint::operator < (int o) const
{
	return m_value < (o*FRACTION_VALUES);
}

bool FixedPoint::operator < (FixedPoint o) const
{
	return m_value < o.m_value;
}
	
bool FixedPoint::operator > (int o) const
{
	return m_value > (o*FRACTION_VALUES);
}

bool FixedPoint::operator > (FixedPoint o) const
{
	return m_value > o.m_value;
}

bool FixedPoint::operator <= (int o) const
{
	return m_value <= (o*FRACTION_VALUES);
}

bool FixedPoint::operator <= (FixedPoint o) const
{
	return m_value <= o.m_value;
}

bool FixedPoint::operator >= (int o) const
{
	return m_value >= (o*FRACTION_VALUES);
}

bool FixedPoint::operator >= (FixedPoint o) const
{
	return m_value >= o.m_value;
}


/*************************************************************************************************************************
  Multiplication
 *************************************************************************************************************************/

void FixedPoint::operator *= (int o)
{
	m_value *= o;
}

void FixedPoint::operator *= (FixedPoint o)
{
	m_value = (m_value>>FRACTION_BITS_HALF) * (o.m_value>>FRACTION_BITS_HALF);
}

FixedPoint FixedPoint::operator * (int o) const
{
	return m_value * o;
}

FixedPoint FixedPoint::operator * (FixedPoint o) const
{
	FixedPoint ret;
	ret.SetRawValue((m_value>>FRACTION_BITS_HALF) * (o.m_value>>FRACTION_BITS_HALF));
	return ret;
}


/*************************************************************************************************************************
  Division
 *************************************************************************************************************************/

void FixedPoint::operator /= (int o)
{
	m_value /= o;
}

void FixedPoint::operator /= (FixedPoint o)
{
	m_value = (m_value<<FRACTION_BITS) / (o.m_value);
}

FixedPoint FixedPoint::operator / (int o) const
{
	return m_value / o;
}

FixedPoint FixedPoint::operator / (FixedPoint o) const
{
	int left = m_value<<FRACTION_BITS;
	int right = o.m_value;
	//right <<= FRACTION_BITS_HALF;
	return left / right;
	//return (m_value<<FRACTION_BITS_HALF) / (o.m_value<<FRACTION_BITS_HALF);
}


/*************************************************************************************************************************
 Unary operators
 *************************************************************************************************************************/

FixedPoint FixedPoint::operator - () const
{
	FixedPoint ret;
	ret.SetRawValue( -m_value );
	return ret;
}


/*************************************************************************************************************************
  Stuff and things
 *************************************************************************************************************************/

int FixedPoint::GetInteger() const
{
	return m_value / FRACTION_VALUES;
}

void FixedPoint::SetRawValue( int _raw )
{
	m_value = _raw;
}
