#include "header.h"

class textManager
{
public:
	textManager(Layer* mainLayer)
	{
		if (!init(mainLayer))
			CCLOG("text error");
		CCLOG("text is all loaded");
	}
	~textManager()
	{

	}
	bool init(Layer* MainLayer);
	void createText(Vec2 pos, int fontSize, Size boxSize, Color3B color, string text, Layer* layer, int tag);
	string vectorText[4];
private:
};