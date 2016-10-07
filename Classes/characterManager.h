#pragma once

#include "header.h"

// ó������ 30�� ������ �����ϴ°��� �ǹ̰� �ִ°�? 1001
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
	// ���� ������ ��Ʈ��ũ �ڵ� ������ ����Ͽ� �̷� ����� ���� 1001
	int getState(characterAP target, int type);
	void setState(characterAP target, int type, int ap);
	characterAP getMe();
private:
	characterAP me;
	// 
	//characterAP others[10];
};