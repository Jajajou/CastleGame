#pragma once

class CState
{
public:
	int stateNumber = 0;
	float xReborn, yReborn;

	void RebornHandle();
	CState();
	~CState();
};
typedef CState* LPSTATE;

#pragma once
