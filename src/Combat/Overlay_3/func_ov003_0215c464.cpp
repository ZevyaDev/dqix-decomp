#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" void SetSpriteAnimationPosition_020e27ec(struct SpriteAnimationList_0205a254* animationList, int index, short x, short y);

struct SpriteAnimationList_0205a330;


// USA: func_ov003_0215c464
extern "C" ARM void func_ov003_0215c464(char* arg0) {
	struct SpriteAnimation_0205a254_2* var0;

	if (*(unsigned char*)(arg0 + 0x59f) & 2) {
		struct SpriteAnimationList_0205a254* var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0xd4);
		if (var1 != NULL) {
			((OBJSpriteSet::List*)(var1))->PlaySpriteAnimation(1);
			var0 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var1))->GetSprite(1));
			if (var0 != NULL) {
				*(unsigned char*)((char*)var0 + 0x15) |= 8;
			}
			((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)var1))->UpdateAll(*(int*)(arg0 + 0x574));
			SetSpriteAnimationPosition_020e27ec(var1, 1, 0xd7, 0x96);
			((OBJSpriteSet::List*)(var1))->SetSpriteOBJIndex(1, 6);
		}
		((OBJSpriteSet*)(arg0 + 0x98))->DrawAll();
		return;
	}

	{
		struct SpriteAnimationList_0205a254* var2 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0xd4);
		if (var2 == NULL) return;
		var0 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var2))->GetSprite(1));
		if (var0 != NULL) {
			*(unsigned char*)((char*)var0 + 0x15) &= ~8;
		}
	}
}
