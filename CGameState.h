#pragma once
#include "AppConfiguration.h"
#include "CState.h"
#include <string>
class CGameState
{
private:
	static CGameState* _instance;
	CGameState();
public:

	bool IsStartGame = false;
	bool IsLockingKeyBoard = false;

	int gameLevel = 0;

	bool IsStopWatch = false;
	bool IsCrossActivated = false;

	bool IsCheckPoint = false;
	bool IsGameEnd = false, IsGameWin = false;


	LPSTATE stage;

	static CGameState* getInstance();
	~CGameState();
};

