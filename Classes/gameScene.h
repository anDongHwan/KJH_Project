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
	// �޸� �ڵ� ������ ���� ���� �Ұ� 0930 -> setTag() ������� ������.
	spriteManager sprites = spriteManager(this);
	textManager texts = textManager(sprites.scrollLayer);
	characterManager CM;
	//Sprite* sprites[20];
};

#endif
