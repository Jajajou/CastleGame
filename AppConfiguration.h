#pragma once
#define CLASS_NAME L"CastleVania"
#define TITLE_STR L"Castle Vania Jajaou"

#define SCREEN_WIDTH							640
#define SCREEN_HEIGHT							480

#define DIRECTINPUT_VERSION						0x0800
#define KEYBOARD_BUFFER_SIZE					1024

#define SPRITE_BLACK_BG							

#define WINDOW									CWindow_Screen::getInstance()
#define GRAPHICS								CGraphics::getInstance()
#define GAMEWORLD								CGameWorld::getInstance()

#define BACKGROUND_COLOR						D3DCOLOR_XRGB(0,0,0)
#define VIEWPORT_WIDTH							552
#define VIEWPORT_HEIGHT							382/*382*/
#define BACK_WIDTH								VIEWPORT_WIDTH
#define BACK_HEIGHT								VIEWPORT_HEIGHT
#define MAX_FRAME_RATE							60

#define CAMERA_UPDATE_RIGHT					VIEWPORT_WIDTH*0.4
#define CAMERA_UPDATE_LEFT					VIEWPORT_WIDTH*0.2
#define CAMERA_UPDATE_BOTTOM				VIEWPORT_HEIGHT*2/3
#define CAMERA_UPDATE_TOP					VIEWPORT_HEIGHT/3
#define LEFT_CAMERA_INTRO_BLOCK					0
#define RIGHT_CAMERA_INTRO_BLOCK				1504

#define TILE_SIZE								32