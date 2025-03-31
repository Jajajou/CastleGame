#include "CObjects.h"



CObject::CObject()
{
}

CObject::CObject(float x, float y, float width, float height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}


CObject::~CObject()
{
}
