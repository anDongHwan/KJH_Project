#pragma once
// 한글 문제
#pragma execution_character_set("utf-8")
#include "cocos2d.h"
// $(EngineRoot) 추가 포함 디렉터리
#include "cocos-ext.h"
#include "iostream"
#include "string"

// 1003 프로젝트를 릴리즈 하려 하니 extension 헤더를 찾을 수 없다고 뜸..
// 


using namespace cocos2d;
using namespace std;
//USING_NS_CC_EXT;

#define HEIGHT 1280
#define WIDTH 720
#define SINGLE_TONE(type)\
	public:\
	static type* getIns(){static type ins; return &ins;}

//#define __CALLBACK()\
//	getChilidByTag(1001);


enum SPRITE_STATE
{
	S_BACKGROUND = 1001,
	S_MENU_1 = 1002,
	S_MENU_2 = 1003,
	S_MENU_3 = 1004,
	S_MENU_4 = 1005,
	S_MENU_5 = 1006,
	S_MENU_6 = 1007,
	S_STATE_BAR = 1008,
	S_CHARACTER = 1009,
	S_ITEM_1 = 1010,
	S_ITEM_2 = 1011,
	S_STATE_1 = 1012,
	S_STATE_2 = 1013,
	S_STATE_3 = 1014,
	S_STATE_4 = 1015,
	S_STATE_5 = 1016,
	S_HPBAR = 1017,
	S_MPBAR = 1018,
	S_ADDMENU = 1019,
};
enum TEXT_STATE
{
	T_SLIDE_BAR = 2001,
	T_STATE_1 = 2002,
	T_STATE_2 = 2003,
	T_STATE_3 = 2004,
	T_STATE_4 = 2005,
	T_STATE_5 = 2006,
	T_HPBAR = 2007,
	T_MPBAR = 2008,
};
enum CHAR_STATE
{
	C_POWER = 3001,
	C_DEX = 3002,
	C_INTELL = 3003,
	C_MEDI = 3004,
	C_LUCK = 3005,
	C_HP = 3006,
	C_MP = 3007,
	C_CHARACTER_0001 = 3008,
};