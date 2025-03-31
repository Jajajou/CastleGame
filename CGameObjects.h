#pragma once

#include <Windows.h>
#include <d3dx9.h>
#include <vector>
#include "CGraphics.h"
#include "CObjects.h"
using namespace std;

#define ID_TEX_BBOX -100		// special texture to draw object bounding box
class CGameObject;
typedef CGameObject* LPGAMEOBJECT;

class CGameObject : public CObject
{
protected:
	int lifeNumber = 0;
	int hp, sp, weaponLevel, score, subWeaponTag;
	int damage = 0;
public:
	int type;
	int direction;
	float dx;	// dx = vx*dt
	float dy;	// dy = vy*dt
	float vx;
	float vy;
	int nx;
	int state;




	DWORD dt;
	bool isFlip = false;

public:
	void SetSize(int w, int h) { this->width = w, this->height = h; }
	void SetPosition(float x, float y) { this->x = x, this->y = y; }
	void SetSpeed(float vx, float vy) { this->vx = vx, this->vy = vy; }
	void GetPosition(float& x, float& y) { x = this->x; y = this->y; }
	void GetSpeed(float& vx, float& vy) { vx = this->vx; vy = this->vy; }
	int GetState() { return this->state; }
	CGameObject();
	void InitPosition(float x, float y);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects = NULL);
	virtual void Render() = 0;																	//abstract
	virtual void SetState(int state) { this->state = state; }
	virtual void updateLocation();

	virtual ~CGameObject();
};

