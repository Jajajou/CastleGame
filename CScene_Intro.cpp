#include "CScene_Intro.h"
#include "CGameWorld.h"
#include "CSceneManager.h"
#include "CGameState.h"
#include "Camera.h"
//#include "SIMON.h"  // Giả sử đây là file định nghĩa Simon

void CScene_Intro::init()
{
    // Load background map của scene
    bgmap = new BackgroundMap();
    bgmap->InitMap("gamedata\\Resources\\Map\\intro\\IntroBGMap.txt");

    // Thiết lập nhạc nền cho scene

    // Thiết lập góc nhìn của camera (nếu cần)
    CAMERA->SetCornerBlock(0, 1504);

    // (Nếu có) Load các đối tượng khác qua LOADHELPER->LoadObject(...);

    // Đặt vị trí ban đầu cho Simon
    //SIMON->x = 100;
    //SIMON->y = 200;  // Có thể thiết lập y nếu cần
}

void CScene_Intro::update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
    // Cập nhật nhân vật chính (các đối tượng khác nếu cần)
    //SIMON->Update(dt, coObjects);

    // Nếu có các logic khác (ví dụ: chuyển scene) thì xử lý tại đây.
    // Ví dụ: nếu Simon di chuyển quá một ngưỡng, chuyển sang scene khác.
}

void CScene_Intro::draw()
{
    // Vẽ background
    bgmap->Render();

    // Vẽ nhân vật chính
    //SIMON->Render();

    // Nếu có hiển thị thông tin (UI) hay các đối tượng khác, vẽ chúng tại đây.
}

CScene_Intro::CScene_Intro()
{
}

CScene_Intro::~CScene_Intro()
{
    if (bgmap)
        delete bgmap;
}
