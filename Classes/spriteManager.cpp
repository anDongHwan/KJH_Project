#include "spriteManager.h"

bool spriteManager::init(Layer* mainLayer)
{
	//createSprite(Vec2(0, 0), "sprite/back_1.png", mainlayer);
	// scroll
	scrollLayer = createScrollView(Vec2(0, -280), 0.5f, mainLayer);
	// menu
	createSprite(Vec2(100, 500), "sprite/menu/menu1.png",scrollLayer, SPRITE_STATE::S_MENU_1);
	createSprite(Vec2(100, 650), "sprite/menu/menu3.png",scrollLayer, SPRITE_STATE::S_MENU_3);
	createSprite(Vec2(100, 800), "sprite/menu/menu5.png",scrollLayer, SPRITE_STATE::S_MENU_5);
	createSprite(Vec2(370, 500), "sprite/menu/menu2.png",scrollLayer, SPRITE_STATE::S_MENU_2);
	createSprite(Vec2(370, 650), "sprite/menu/menu4.png",scrollLayer, SPRITE_STATE::S_MENU_4);
	createSprite(Vec2(370, 800), "sprite/menu/menu6.png",scrollLayer, SPRITE_STATE::S_MENU_6);
	// state bar(character_state)
	createSprite(Vec2(90, 1150), "sprite/menu/slideBar.png",scrollLayer, SPRITE_STATE::S_STATE_BAR);
	// character -> 나중에 실시간 정보로 변경할 것임.
	createSprite(Vec2(100, 1350), "sprite/character/player1.png", scrollLayer, SPRITE_STATE::S_CHARACTER);
	// HP, MP Bar
	createSprite(Vec2(75, 1350), "sprite/menu/hpBar.png", scrollLayer, SPRITE_STATE::S_HPBAR);
	createSprite(Vec2(75, 1315), "sprite/menu/mpBar.png", scrollLayer, SPRITE_STATE::S_MPBAR);
	// item slot
	createSprite(Vec2(325, 1475), "sprite/menu/item1.png", scrollLayer, SPRITE_STATE::S_ITEM_1);
	createSprite(Vec2(325, 1315), "sprite/menu/item2.png", scrollLayer, SPRITE_STATE::S_ITEM_2);
	// icon
	createSprite(Vec2(435, 1515), "sprite/menu/sl.png", scrollLayer, SPRITE_STATE::S_STATE_1);
	createSprite(Vec2(435, 1465), "sprite/menu/sl.png", scrollLayer, SPRITE_STATE::S_STATE_2);
	createSprite(Vec2(435, 1415), "sprite/menu/sl.png", scrollLayer, SPRITE_STATE::S_STATE_3);
	createSprite(Vec2(435, 1365), "sprite/menu/sl.png", scrollLayer, SPRITE_STATE::S_STATE_4);
	createSprite(Vec2(435, 1315), "sprite/menu/sl.png", scrollLayer, SPRITE_STATE::S_STATE_5);
	// addMenu
	createSprite(Vec2(100, 100), "sprite/menu/addMenu1.png", scrollLayer, SPRITE_STATE::S_ADDMENU);

	scrollLayer->getChildByTag(SPRITE_STATE::S_ADDMENU)->setVisible(false);


	// 결과값이 1이 나오면 안됨 0930 -> 0930 스크롤 뷰 자체에는 addChild가 되는 것이 아니었다.
	CCLOG("%d", scrollLayer->getChildrenCount());
	return true;
}
//void spriteManager::createSprite(Vec2 pos, Sprite* target, string filename, Layer* layer)
void spriteManager::createSprite(Vec2 pos, string filename, Layer* layer, int tag)
{
	auto target = new Sprite;
	target->initWithFile(filename);
	//target = Sprite::create(filename);
	target->setAnchorPoint(ccp(0, 0));
	target->setPosition(pos);
	target->setTag(tag);
	layer->addChild(target, 0);
}
void spriteManager::createSprite(Vec2 pos, string filename, Layer* layer, int tag, int offset)
{
	auto target = new Sprite;
	target->initWithFile(filename);
	//target = Sprite::create(filename);
	target->setAnchorPoint(ccp(0, 0));
	target->setPosition(pos);
	target->setTag(tag);
	// sprite offset = 0
	layer->addChild(target, offset);
}
Layer* spriteManager::createScrollView(Vec2 offset, float offsetDelay, Layer* mainLayer)
{
	auto layer = LayerColor::create(Color4B::WHITE);
	layer->setContentSize(Size(700, 1580));

	auto scroll = extension::ScrollView::create(Size(700, 1240), layer);
	scroll->setPosition(10, 20);
	scroll->setDirection(extension::ScrollView::Direction::VERTICAL);
	scroll->setBounceable(false);
	scroll->setContentOffsetInDuration(offset, offsetDelay);
	// back Sprite tag 
	scroll->setTag(SPRITE_STATE::S_BACKGROUND);
	mainLayer->addChild(scroll);

	return layer;
}


