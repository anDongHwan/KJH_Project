#include "header.h"

// �ڲ� ��������Ʈ�� �ʱ�ȭ �Ǹ鼭 ��������Ʈ ������ ���� ��������. �̸� �����ؾ� ��.. 0928
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
	// pos - ��������Ʈ ��ġ, filename - ��������Ʈ ���� ��ġ, layer - layer����, tag - �±�
	void createSprite(Vec2 pos, string filename, Layer* layer, int tag);
	void createSprite(Vec2 pos, string filename, Layer* layer, int tag, int offset);
	// menu
	// pos - ��ũ�Ѻ� ��ġ, offset - ������, offsetDelay - ������ Ÿ��, layer - ���̾� ���� 
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