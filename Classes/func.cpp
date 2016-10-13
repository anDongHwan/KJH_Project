#include "func.h"

void func::check(characterManager CM, Layer* layer, string text[])
{
	//CCLOG("HelloWorld");
	textStateChanging(CM, layer);
	textSlideChanging(layer, text);
	//touchCheck(layer);
}

void func::touchCheck(Layer* layer, Vec2 position, string text[])
{
	for (auto target : layer->getChildren())
	{
		//if()
		Size size = target->getContentSize();
		Rect rect = Rect(target->getPosition().x, target->getPosition().y, size.width, size.height);
		if (rect.containsPoint(position))
		{
			if (SPRITE_STATE::S_MENU_1 <= target->getTag() && target->getTag() <= SPRITE_STATE::S_MENU_4)
				touchMenuUp(layer, target->getPosition(), target->getTag(), text);
			else if(target->getTag() != SPRITE_STATE::S_ADDMENU)
				touchMenuDown(layer);
		}
	}
}
void func::touchMenuUp(Layer* layer, Vec2 position, int tag, string text[])
{
	layer->getChildByTag(SPRITE_STATE::S_ADDMENU)->setScaleY(1.0f);
	position.x += 25;
	position.y += 25;
	Sprite* target = (Sprite*)layer->getChildByTag(SPRITE_STATE::S_ADDMENU);
	auto scale = ScaleTo::create(0.2f, 1.0f, 3.0f);
	target->setVisible(true);
	target->setAnchorPoint(ccp(0, 1));
	target->setPosition(position);
	target->runAction(scale);
	//CCLOG("%.1f", layer->getChildByTag(SPRITE_STATE::S_ADDMENU)->getPosition().x);

}
void func::touchMenuDown(Layer* layer)
{
	layer->getChildByTag(SPRITE_STATE::S_ADDMENU)->setVisible(false);
}
void func::textStateChanging(characterManager CM, Layer* layer)
{
	LabelTTF* label = (LabelTTF*)layer->getChildByTag(TEXT_STATE::T_HPBAR);
	int ap;
	string ap_string;
	for (int i = 1; i < 8; i++)
	{
		label = (LabelTTF*)layer->getChildByTag(2001+i);
		ap = CM.getState(CM.getMe(), 3000+i);
		ap_string = std::to_string(ap);
		label->setString(ap_string);
	}
}
void func::textSlideChanging(Layer* layer, string text[])
{
	// textSlide 스택 구조로 구현할 것. 1002
	
	LabelTTF* label = (LabelTTF*)layer->getChildByTag(TEXT_STATE::T_SLIDE_BAR);
}