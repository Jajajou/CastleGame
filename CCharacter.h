#pragma once
#include "CGameObjects.h"

class CCharacter : public CGameObject
{
public:
    virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects = NULL) = 0;
    virtual void Render() = 0;
    virtual void stopRun() = 0;

    CCharacter();
    ~CCharacter();
};
