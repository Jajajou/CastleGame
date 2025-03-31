#include "CSimon.h"

CSimon* CSimon::_instance = 0;

CSimon::CSimon() {
    // Khởi tạo cơ bản, không cần xử lý di chuyển, tấn công...
    x = 200;
    y = 100;
    width = 32;
    height = 60;
}

CSimon* CSimon::getInstance() {
    if (_instance == 0)
        _instance = new CSimon();
    return _instance;
}

void CSimon::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects) {
    // Không cần cập nhật hành động, chỉ cần giữ nhân vật tại vị trí hiện tại
}

void CSimon::Render() {
    // Vẽ Simon tại vị trí hiện tại
    // Có thể thay đổi ID sprite và cách vẽ tùy vào yêu cầu
    SPRITES->Get(0)->Draw(x - GAMEWORLD->getCamera()->x, y - GAMEWORLD->getCamera()->y);
}

void CSimon::SetState(int state) {
    // Không cần xử lý các trạng thái phức tạp, chỉ cần giữ đơn giản
}

void CSimon::stopRun() {
    // Không cần xử lý chuyển động
}

void CSimon::walk() {
    // Không cần xử lý chuyển động
}

CSimon::~CSimon() {
    // Không cần xóa các đối tượng phức tạp
}
