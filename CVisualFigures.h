#pragma once
#include "CGameObjects.h"
#include "CGraphics.h"
#include <string>

using namespace std;

class CVisualFigures : public CGameObject
{
    static CVisualFigures* _instance;

    string strGameFiguresInfomation = "";

public:
    int timeCount = 300;
    DWORD timeStartCount;
    DWORD timeDuringCount = 1000;
    bool IsStopTime = false;

    CVisualFigures();
    ~CVisualFigures();

    static CVisualFigures* getInstance();
    void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects = NULL);
    void Render();
    void RenderVisualImage();
};
