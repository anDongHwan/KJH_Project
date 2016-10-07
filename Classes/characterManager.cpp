#pragma once
#include "characterManager.h"


int characterManager::getState(characterAP target, int type)
{
	if (type == CHAR_STATE::C_HP)
		return target.hp;
	else if (type == CHAR_STATE::C_MP)
		return target.mp;
	else if (type == CHAR_STATE::C_POWER)
		return target.pow;
	else if (type == CHAR_STATE::C_DEX)
		return target.dex;
	else if (type == CHAR_STATE::C_INTELL)
		return target.inte;
	else if (type == CHAR_STATE::C_MEDI)
		return target.med;
	else if (type == CHAR_STATE::C_LUCK)
		return target.luc;
}
void characterManager::setState(characterAP target, int type, int ap)
{
	if (type == CHAR_STATE::C_HP)
		target.hp = ap;
	else if (type == CHAR_STATE::C_MP)
		target.mp = ap;
	else if (type == CHAR_STATE::C_POWER)
		target.pow = ap;
	else if (type == CHAR_STATE::C_DEX)
		target.dex = ap;
	else if (type == CHAR_STATE::C_INTELL)
		target.inte = ap;
	else if (type == CHAR_STATE::C_MEDI)
		target.med = ap;
	else if (type == CHAR_STATE::C_LUCK)
		target.luc = ap;
}
characterAP characterManager::getMe()
{
	return me;
}