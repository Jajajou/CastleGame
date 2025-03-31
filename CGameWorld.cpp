#include "CGameWorld.h"


CGameWorld* CGameWorld::_instance = 0;

CGameWorld::CGameWorld()
{
}


CGameWorld* CGameWorld::getInstance()
{
	if (_instance == 0)
		_instance = new CGameWorld();
	return _instance;
}



void CGameWorld::Update(DWORD time)
{
}

void CGameWorld::Render()
{
}

CGameWorld::~CGameWorld()
{
	delete GAMEWORLD;
}
