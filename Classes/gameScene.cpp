#include "gameScene.h"

// 1003 안드로이드로의 포팅 문제 발생.. 너무 스트레스 받음..
// 다운받은 ndk의 버전이 너무 높았음..
Scene* gameScene::createScene()
{
	auto scene = Scene::create();
	auto layer = gameScene::create();
	scene->addChild(layer);
	return scene;
}
bool gameScene::init()
{
	if (!Layer::init())
		return false;
	start();
	// test code
	this->schedule(schedule_selector(gameScene::tick));
	CCLOG("Game being...");
	end();
	return true;
}
void gameScene::touchEnable()
{
	EventDispatcher* dispatcher = Director::getInstance()->getEventDispatcher();
	EventListenerTouchOneByOne* listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = CC_CALLBACK_2(gameScene::onTouchBegan, this);
	dispatcher->addEventListenerWithSceneGraphPriority(listener, this);
}
void gameScene::start()
{
	touchEnable();
}
bool gameScene::onTouchBegan(Touch* touch, Event* event)
{
	Vec2 position = touch->getLocation();
	CCLOG("%1.f", position.x);
	position.y -= sprites.scrollLayer->getPosition().y;
	game.touchCheck(sprites.scrollLayer, position, texts.vectorText);
	return false;
}
void gameScene::tick(float dt)
{
	game.check(CM, sprites.scrollLayer, texts.vectorText);
}

void gameScene::end()
{

}
