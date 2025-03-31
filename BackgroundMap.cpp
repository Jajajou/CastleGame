#include "BackgroundMap.h"
#include "AppConfiguration.h"
#include "CGameWorld.h"

BackgroundMap::BackgroundMap()
{
    tileSize = TILE_SIZE;   // Lấy kích thước tile từ hằng số cấu hình
    offset = 0;
    x = 0;
    y = 0;
    matrixMap = nullptr;
    row = column = 0;
}

bool BackgroundMap::InitMap(const char* filePath, int offset)
{
    this->offset = offset;
    std::ifstream infile(filePath);
    if (!infile)
        return false;

    // Đọc số hàng và số cột từ file
    infile >> row >> column;

    // Cấp phát ma trận map
    matrixMap = new int* [row];
    for (int i = 0; i < row; i++) {
        matrixMap[i] = new int[column];
        for (int j = 0; j < column; j++) {
            infile >> matrixMap[i][j];
        }
    }

    infile.close();
    return true;
}

void BackgroundMap::Render()
{
    // Lấy vị trí camera từ GAMEWORLD
    float camX = GAMEWORLD->getCamera()->x;
    float camY = GAMEWORLD->getCamera()->y;

    // Vẽ từng ô của bản đồ
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            int spriteId = matrixMap[i][j] + offset;
            // Vẽ sprite tại vị trí tương ứng, căn chỉnh theo camera
            SPRITES->Get(spriteId)->Draw(x + j * tileSize - camX,
                y + i * tileSize - camY);
        }
    }
}

BackgroundMap::~BackgroundMap()
{
    for (int i = 0; i < row; ++i) {
        delete[] matrixMap[i];
    }
    delete[] matrixMap;
}
