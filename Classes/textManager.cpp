#include "textManager.h"

bool textManager::init(Layer* mainLayer)
{
	//createText();
	Vec2 statePos = mainLayer->getChildByTag(SPRITE_STATE::S_STATE_BAR)->getPosition();
	statePos.x += 25;
	statePos.y += 25;

	// state text
	createText(statePos, 22, Size(500, 100), Color3B::WHITE, "안녕하세요 반갑습니다.\n구현중입니다.", mainLayer, TEXT_STATE::T_SLIDE_BAR);
	// hp, mp text
	createText(mainLayer->getChildByTag(SPRITE_STATE::S_HPBAR)->getPosition(), 18, Size(225, 35), Color3B::BLACK, "HelloWorld", mainLayer, TEXT_STATE::T_HPBAR);
	createText(mainLayer->getChildByTag(SPRITE_STATE::S_MPBAR)->getPosition(), 18, Size(225, 35), Color3B::BLACK, "HelloWorld", mainLayer, TEXT_STATE::T_MPBAR);

	// stat text
	createText(mainLayer->getChildByTag(SPRITE_STATE::S_STATE_1)->getPosition(), 18, Size(250, 50), Color3B::BLACK, "HelloWorld", mainLayer, TEXT_STATE::T_STATE_1);
	createText(mainLayer->getChildByTag(SPRITE_STATE::S_STATE_2)->getPosition(), 18, Size(250, 50), Color3B::BLACK, "HelloWorld", mainLayer, TEXT_STATE::T_STATE_2);
	createText(mainLayer->getChildByTag(SPRITE_STATE::S_STATE_3)->getPosition(), 18, Size(250, 50), Color3B::BLACK, "HelloWorld", mainLayer, TEXT_STATE::T_STATE_3);
	createText(mainLayer->getChildByTag(SPRITE_STATE::S_STATE_4)->getPosition(), 18, Size(250, 50), Color3B::BLACK, "HelloWorld", mainLayer, TEXT_STATE::T_STATE_4);
	createText(mainLayer->getChildByTag(SPRITE_STATE::S_STATE_5)->getPosition(), 18, Size(250, 50), Color3B::BLACK, "HelloWorld", mainLayer, TEXT_STATE::T_STATE_5);

	//queText.size()
	//queText.size 4;


	return true;
}
void textManager::createText(Vec2 pos, int fontSize, Size boxSize, Color3B color, string text, Layer* layer, int tag)
{
	auto label = LabelTTF::create(text, "Arial", fontSize, boxSize, TextHAlignment::CENTER, TextVAlignment::CENTER);
	label->setPosition(pos);
	label->setAnchorPoint(ccp(0, 0));
	label->setColor(color);
	label->setTag(tag);
	layer->addChild(label, 3);
}