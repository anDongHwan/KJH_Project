#include "spriteManager.h"
#include "textManager.h"
#include "characterManager.h"

class func
{
public:
	void check(characterManager CM, Layer* layer, string text[]);
	void textStateChanging(characterManager CM, Layer* layer);
	void textSlideChanging(Layer* layer, string text[]);
	void touchCheck(Layer* layer, Vec2 position, string text[]);
	void touchMenuUp(Layer* layer, Vec2 position, int tag, string text[]);
	void touchMenuDown(Layer* layer);
};
