#include "CGameState.h"


CGameState* CGameState::_instance;
CGameState::CGameState()
{
	stage = new CState();
}


CGameState* CGameState::getInstance()
{
	if (_instance == 0)
		_instance = new CGameState();
	return _instance;
}

CGameState::~CGameState()
{
}
