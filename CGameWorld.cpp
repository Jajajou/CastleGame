#include "CGameWorld.h"


CGameWorld* CGameWorld::_instance = 0;

CGameWorld::CGameWorld()
{
	camera = Camera::getInstance();
	LOADHELPER->InitResources();
	VISUALFIGURES->IsStopTime = true;
	//SCENEMANAGER->changeScene(new CScene_Menu());
	SCENEMANAGER->changeScene(new CScene_Intro());
}


CGameWorld* CGameWorld::getInstance()
{
	if (_instance == 0)
		_instance = new CGameWorld();
	return _instance;
}

void CGameWorld::Update(DWORD time)
{
	SCENEMANAGER->update(time);
	camera->Update(time);
}

void CGameWorld::Render()
{
	GRAPHICS->BeginGraphics();
	GRAPHICS->GetDirect3DDevice()->ColorFill(GRAPHICS->GetBackBuffer(), NULL, BACKGROUND_COLOR);
	SCENEMANAGER->draw();
	GRAPHICS->EndGraphics();
	GRAPHICS->PresentBackBuffer();
}

CGameWorld::~CGameWorld()
{
	delete GAMESTATE;
	delete CAMERA;
	delete SCENEMANAGER;
	delete SPRITES;
	delete TEXTURES;
	delete GAMEWORLD;
	delete GRAPHICS;
	delete WINDOW;
}
