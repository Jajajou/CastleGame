#include <d3dx9.h>
#include <algorithm>
#include "CGameWorld.h"
#include "CGameObjects.h"


CGameObject::CGameObject()
{
	x = y = 0;
	vx = vy = 0;
	nx = 1;
}

void CGameObject::InitPosition(float x, float y)
{
	this->x = x;
	this->y = y;
}

void CGameObject::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	this->dt = dt;
	dx = vx * dt;
	dy = vy * dt;
}

void CGameObject::updateLocation()
{
	x += dx;
	y += dy;
}

CGameObject::~CGameObject()
{

}