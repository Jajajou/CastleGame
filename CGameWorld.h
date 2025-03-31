#pragma once
#include "AppConfiguration.h"
#include "CGraphics.h"
#include "CSprites.h"
#include "CTextures.h"
#include "LoadResources.h"
#include "CSceneManager.h"
#include "Camera.h"
#include "CGround.h"
#include "CGameState.h"
#include "CScene_Intro.h"
#include "CVisualFigures.h"
#include "CSimon.h"
#include "CWindow_Screen.h"
#include "CScene_Menu.h"
#include <d3dx9.h>

class CGameWorld
{
private:
	static CGameWorld* _instance;
	CTextures* textures = TEXTURES;
	CSprites* sprites = SPRITES;
	LPCAMERA camera;
public:
	LPCAMERA getCamera() { return this->camera; }
	static CGameWorld* getInstance();
	void Update(DWORD time = 0);
	void Render();
	~CGameWorld();
	CGameWorld();
};

