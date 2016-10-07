#pragma once

#include "header.h"

// 처음부터 30의 값으로 설정하는것이 의미가 있는가? 1001
typedef struct characterAP
{
	characterAP()
	{
		init();
		CCLOG("character is loadded");
	}
	~characterAP()
	{

	}
	int hp;
	int mp;
	int pow;
	int dex;
	int inte;
	int med;
	int luc;
	int sprite_type;
	void init()
	{
		hp = 30;
		mp = 30;
		pow = 30;
		dex = 30;
		inte = 30;
		med = 30;
		luc = 30;
	}
};

class characterManager
{
public:
	// 보안 문제와 네트워크 코딩 문제를 고려하여 이런 방식을 따름 1001
	int getState(characterAP target, int type);
	void setState(characterAP target, int type, int ap);
	characterAP getMe();
private:
	characterAP me;
	// 
	//characterAP others[10];
};