#include "header.h"

// 자꾸 스프라이트가 초기화 되면서 스프라이트 정보도 같이 가져간다. 이를 방지해야 함.. 0928
class spriteManager
{
public:
	spriteManager(Layer* layer)
	{
		if (!init(layer))
			CCLOG("sprites error");
		CCLOG("sprites is all loaded");
	}
	~spriteManager()
	{
		CCLOG("sprites Dead");
	}
	bool init(Layer* mainlayer);
	// pos - 스프라이트 위치, filename - 스프라이트 파일 위치, layer - layer종류, tag - 태그
	void createSprite(Vec2 pos, string filename, Layer* layer, int tag);
	void createSprite(Vec2 pos, string filename, Layer* layer, int tag, int offset);
	// menu
	// pos - 스크롤뷰 위치, offset - 오프셋, offsetDelay - 딜레이 타임, layer - 레이어 종류 
	Layer* createScrollView(Vec2 offset, float offsetDelay, Layer* layer);
	Layer* scrollLayer;
//private:
};

//typedef struct spriteManager
//{
//public:
//	spriteManager()
//	{
//
//	}
//	spriteManager(Layer* layer)
//	{
//		if (!init(layer))
//			CCLOG("sprite error");
//		CCLOG("sprite is all loaded");
//	}
//	~spriteManager()
//	{
//
//	}
//	bool init(Layer* layer);
//	Sprite* bakcSprite;
//	void createSprite(Vec2 pos, Sprite* target, string filename, Layer* layer);
//private:
//
//};
//static bool spriteInit(Layer* layer, Sprite* sprites[])
//{
//	createSprite(Vec2(0, 0), sprites[0], "sprite/back_1.png", layer);
//
//	return true;
//}
class test
{
public:
	test()
	{
		a = 3;
		CCLOG("test_start");
	}
	~test()
	{
		CCLOG("test_end");
	}
	int a;
};