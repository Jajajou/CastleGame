#pragma once
#define CLASS_NAME L"CastleVania"
#define TITLE_STR L"Castle Vania Jajaou"

#define SCREEN_WIDTH							640
#define SCREEN_HEIGHT							480

#define GRIDCONTAINER_WIDTH						512.0f


#define DIRECTINPUT_VERSION						0x0800
#define KEYBOARD_BUFFER_SIZE					1024

#define SPRITE_BLACK_BG							

#define WINDOW									CWindow_Screen::getInstance()
#define GRAPHICS								CGraphics::getInstance()
#define GAMEWORLD								CGameWorld::getInstance()
#define SPRITES									CSprites::getInstance()
#define TEXTURES								CTextures::getInstance()
#define LOADHELPER								LoadResources::getInstance()
#define SCENEMANAGER							CSceneManager::getInstance()
#define GAMESTATE								CGameState::getInstance()
#define VISUALFIGURES							CVisualFigures::getInstance()
#define CAMERA									Camera::getInstance()
#define SIMON									CSimon::getInstance()




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
#define LEVEL1_TILE_BACKGROUNDMAP_FILEPATH		L"gamedata\\Resources\\Map\\lv1\\lv1_BGMap.txt"
#define MENU_BACKGROUND_FILEPATH				L"gamedata\\Resources\\Background\\start_game.png"
#define MENU_BACKGROUND_ID						9999
#define OBJECTS_MAP1_FILEPATH					L"gamedata\\Resources\\Map\\lv1\\Objects.txt"
#define OBJECTS_INTRO_FILEPATH					L"gamedata\\Resources\\Map\\intro\\Objects.txt"
#define MAP1_TILESHEET_INFO_FILEPATH			L"gamedata\\Resources\\Map\\lv1\\lv1_tilesheetINFO.txt"
#define INTRO_BACKGROUND_FILEPATH				L"Data\\Map\\intro\\intro.png"
#define INTRO_BACKGROUND_ID						9997
#define TEX_BBOX_FILEPATH						"gamedata\\Resources\\bbox.png"
#define INTRO_TILESHEET_INFO_FILEPATH			"gamedata\\Resources\\Map\\intro\\intro_tilesheetINFO.txt"
#define SIMON_DATA_FILEPATH						"gamedata\\Resources\\simonTextData.txt"



#define ID_TEX_BBOX								-100
#define ID_GROUND								333
#define ID_GROUND2								334
#define ID_GROUND3								335
#define ID_GROUND_INTRO							336

#define ITEM_GRAVITY							0.00098f

