#pragma once
#include <fstream>
#include "CObjects.h"

class BackgroundMap : public CObject
{
    int** matrixMap;   // Ma trận chứa ID sprite của từng ô
    int row, column;   // Số hàng và số cột của bản đồ
    int tileSize;      // Kích thước của từng ô (tile)
    int offset;        // Giá trị offset để tính sprite ID (nếu cần)

public:
    BackgroundMap();
    ~BackgroundMap();

    // Tải bản đồ từ file; mặc định offset = 0
    bool InitMap(const char* filePath, int offset = 0);

    // Vẽ bản đồ lên màn hình
    void Render();
};
typedef BackgroundMap* LPBACKGROUNDMAP;