#pragma once
#include "CGameObjects.h"
#include <algorithm>
#include "Enum.h"

class CGameObjectManager
{

public:
	vector<LPGAMEOBJECT> listGameObjects;

	void Add(LPGAMEOBJECT obj);
	void Remove(LPGAMEOBJECT obj);
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects = NULL);
	void Render();

	CGameObjectManager();
	~CGameObjectManager();
};

typedef CGameObjectManager* LPGAMEOBJECTMANAGER;