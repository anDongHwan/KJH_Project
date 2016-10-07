#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__
#include "func.h"


class gameScene : public Layer
{
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(gameScene);

	void touchEnable();
	void start();
	void end();
	void tick(float dt);
	bool onTouchBegan(Touch* touch, Event* event);
private:
	func game;
	// 메모리 자동 해제로 인한 구현 불가 0930 -> setTag() 방식으로 구현함.
	spriteManager sprites = spriteManager(this);
	textManager texts = textManager(sprites.scrollLayer);
	characterManager CM;
	//Sprite* sprites[20];
};

#endif
