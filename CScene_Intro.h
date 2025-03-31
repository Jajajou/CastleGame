#pragma once
#include "CScene.h"
#include "BackgroundMap.h"

class CScene_Intro : public CScene
{
private:
    LPBACKGROUNDMAP bgmap;  // Đối tượng nền của scene
public:
    virtual void init();
    virtual void update(DWORD dt, vector<LPGAMEOBJECT>* coObjects = NULL);
    virtual void draw();

    CScene_Intro();
    virtual ~CScene_Intro();
};
