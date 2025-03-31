#pragma once
#include "AppConfiguration.h"
#include <d3dx9.h>

class CGameWorld
{
private:

	static CGameWorld* _instance;
public:

	static CGameWorld* getInstance();
	void Update(DWORD time = 0);
	void Render();
	~CGameWorld();
	CGameWorld();
};

