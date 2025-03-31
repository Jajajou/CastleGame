#include "CState.h"

void CState::RebornHandle()
{
	stateNumber++;
	if (stateNumber == 0) {
		xReborn = 100.0f;
		yReborn = 100.0f;
	}
	else if (stateNumber == 1) {
		xReborn = 3480.0f;
		yReborn = 76.0f;
	}
	else if (stateNumber == 2) {
		xReborn = 4176.0f;
		yReborn = 76.0f;
	}
}

CState::CState()
{
	xReborn = 100.0f;
	yReborn = 100.0f;
}


CState::~CState()
{
}
