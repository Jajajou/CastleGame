#include "CGameObjectManager.h"
#include<algorithm>

void CGameObjectManager::Add(LPGAMEOBJECT obj)
{
	listGameObjects.push_back(obj);
}

void CGameObjectManager::Remove(LPGAMEOBJECT obj)
{
	//listGameObjects.erase(listGameObjects.begin() + i);
	listGameObjects.erase(std::remove(listGameObjects.begin(), listGameObjects.end(), obj), listGameObjects.end());
}

void CGameObjectManager::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	for (int i = 0; i < listGameObjects.size(); i++) {
		LPGAMEOBJECT objInList = (LPGAMEOBJECT)listGameObjects[i];
	}
}

void CGameObjectManager::Render()
{
	for (int i = 0; i < listGameObjects.size(); i++)
		listGameObjects[i]->Render();
}

CGameObjectManager::CGameObjectManager()
{
}


CGameObjectManager::~CGameObjectManager()
{
}
