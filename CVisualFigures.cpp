#include "CVisualFigures.h"
#include "CGameState.h"

CVisualFigures* CVisualFigures::_instance = 0;

CVisualFigures* CVisualFigures::getInstance()
{
    if (_instance == 0)
        _instance = new CVisualFigures();
    return _instance;
}

void CVisualFigures::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
    if (IsStopTime) return;  // Nếu dừng thời gian thì không cập nhật gì

    // Giảm thời gian đếm ngược
    if (GetTickCount() - timeStartCount >= timeDuringCount) {
        if (timeCount > 0) {
            timeCount -= 1;
        }
        timeStartCount = GetTickCount();
    }

    // Cập nhật thông tin game (sẽ cập nhật score nếu cần)
    //strGameFiguresInfomation = std::to_string(GetScore());
}

void CVisualFigures::Render()
{
    RenderVisualImage();
    //DrawNumber(timeCount, 343, 6);    // Vẽ số thời gian
    //DrawNumber(GetScore(), 120, 6);   // Vẽ điểm số
}

void CVisualFigures::RenderVisualImage()
{
    // Vẽ nền
    //SPRITES->Get(VISUALINFO_BACKGROUND_ID)->Draw(0, 0);

    // Vẽ số máu
    //for (int i = 0; i < GetHP(); i++) {
    //    SPRITES->Get(ID_SPRITE_REDHP)->Draw(110 + 8 * i, 22);
    //}

    // Vẽ số vũ khí phụ (nếu có)
    /*if (GetSubWeaponTag() != OBJ_ITEM_SUBWEAPON_NULL) {
        SPRITES->Get(GetSubWeaponTag())->Draw(300, 28);
    }*/
}

// Constructor
CVisualFigures::CVisualFigures()
{
    //strGameFiguresInfomation = "Score: 0";
    timeStartCount = GetTickCount();
}

// Destructor
CVisualFigures::~CVisualFigures()
{
}
