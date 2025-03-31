#include "GridContainer.h"
#include "CGameWorld.h"
#include <algorithm>

GridContainer::GridContainer(float x, float y)
{
	width = GRIDCONTAINER_WIDTH;
	height = 382.0f;
	this->x = x;
	this->y = y;
}


GridContainer::~GridContainer()
{
}


void GridContainer::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x;
	top = y;
	right = x + width;
	bottom = y + height;
}

void GridContainer::Render()
{
	for (int i = 0; i < listObjectInGrid.size(); i++) {
		listObjectInGrid[i]->Render();
	}

}

void GridContainer::SetListObject(vector<LPGAMEOBJECT> listObj)
{
	for (int i = 0; i < listObjectInGrid.size(); i++) {
		listObj.push_back(listObjectInGrid[i]);
	}
}

void GridContainer::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	for (int i = 0; i < listObjectInGrid.size(); i++) {
		listObjectInGrid[i]->Update(dt, coObjects);
		if (listObjectInGrid[i]->GetState() == ObjectState::DIE) {
			listObjectInGrid.erase(listObjectInGrid.begin() + i);

		}

	}
}

void GridContainer::RemoveAllObject()
{
	for (std::vector< LPGAMEOBJECT >::iterator it = listObjectInGrid.begin(); it != listObjectInGrid.end(); ++it)
	{
		delete (*it);
	}
	listObjectInGrid.clear();
}

bool GridContainer::isOutOfCamera()
{
	return false;
}
