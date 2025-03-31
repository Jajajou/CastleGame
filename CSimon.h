#pragma once
#include "CCharacter.h"
#include "Enum.h"
#include "Item.h"
#include <string>
#include "CSceneManager.h"
#include "CGameWorld.h"

class CSimon : public CCharacter
{
    static CSimon* _instance;

public:
    CSimon();
    static CSimon* getInstance();

    void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects = NULL) override;
    void Render() override;

    void SetState(int state);
    void stopRun();
    void walk();

    ~CSimon();
};
