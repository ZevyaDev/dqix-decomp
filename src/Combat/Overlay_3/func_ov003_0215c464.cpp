#include <globaldefs.h>

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" void PlaySpriteAnimation_0205a370(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" void func_020e27ec(struct SpriteAnimationList_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void SetSpriteAnimationOAMIndex_0205a42c(struct SpriteAnimationList_0205a254* animationList, int index, int oamIndex);

struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks);

extern "C" void DrawSpriteAnimations_0205ae8c(void* spriteSet);

// USA: func_ov003_0215c464
extern "C" ARM void func_ov003_0215c464(char* arg0) {
	struct SpriteAnimation_0205a254_2* var0;

	if (*(unsigned char*)(arg0 + 0x59f) & 2) {
		struct SpriteAnimationList_0205a254* var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0xd4);
		if (var1 != NULL) {
			PlaySpriteAnimation_0205a370(var1, 1);
			var0 = FindSpriteAnimation_0205a3d0(var1, 1);
			if (var0 != NULL) {
				*(unsigned char*)((char*)var0 + 0x15) |= 8;
			}
			AdvanceSpriteAnimations_0205a330((struct SpriteAnimationList_0205a330*)var1, *(int*)(arg0 + 0x574));
			func_020e27ec(var1, 1, 0xd7, 0x96);
			SetSpriteAnimationOAMIndex_0205a42c(var1, 1, 6);
		}
		DrawSpriteAnimations_0205ae8c(arg0 + 0x98);
		return;
	}

	{
		struct SpriteAnimationList_0205a254* var2 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0xd4);
		if (var2 == NULL) return;
		var0 = FindSpriteAnimation_0205a3d0(var2, 1);
		if (var0 != NULL) {
			*(unsigned char*)((char*)var0 + 0x15) &= ~8;
		}
	}
}
