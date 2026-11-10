#include <globaldefs.h>

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short tileX_ac_;
    short tileY_ae_;
    unsigned char unknown_b0_[0xc];
    short unknown_bc_;
    short unknown_be_;
    unsigned char unknown_c0_[0x5];
    unsigned char unknown_c5_;
};
extern "C" struct TextWindow_0205d0e0* GetCursorTextWindow_0205d8c4(struct TextWindowManager_0205d81c* windowManager);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2 {
    unsigned char unknown_0_[0x15];
    unsigned char unknown_15_;
};
extern "C" struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" void PlaySpriteAnimation_0205a370(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" void SetSpriteAnimationPosition_020e27ec(struct SpriteAnimationList_0205a254* animationList, int index, short x, short y);
extern "C" void SetSpriteAnimationOAMIndex_0205a42c(struct SpriteAnimationList_0205a254* animationList, int index, int oamIndex);

struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks);

extern "C" void DrawSpriteAnimations_0205ae8c(void* spriteSet);

// USA: func_ov003_0215c32c
extern "C" ARM void func_ov003_0215c32c(char* arg0) {
	struct SpriteAnimation_0205a254_2* var0;

	if (*(unsigned char*)(arg0 + 0x59f) & 1) {
		struct Struct_020e28dc* var1 = *(struct Struct_020e28dc**)(arg0 + 0x570);
		if (var1 != NULL && func_020e28dc(var1)) {
			DrawSpriteAnimations_0205ae8c(arg0 + 0x98);
			return;
		}

		struct TextWindow_0205d0e0* var2 = GetCursorTextWindow_0205d8c4((struct TextWindowManager_0205d81c*)(arg0 + 0xf4));
		if (var2 == NULL) return;
		if (!IsTextWindowOpen_0204c7e0((unsigned char*)var2)) return;
		if (var2->unknown_c5_ & 0x20) return;

		short var3 = (short)(var2->tileX_ac_ * 8);
		short var4 = (short)(var2->tileY_ae_ * 8);
		var3 += var2->unknown_bc_;
		var4 += var2->unknown_be_;
		struct SpriteAnimationList_0205a254* var5 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0xd4);
		if (var5 != NULL) {
			PlaySpriteAnimation_0205a370(var5, 0);
			var0 = FindSpriteAnimation_0205a3d0(var5, 0);
			if (var0 != NULL) {
				var0->unknown_15_ |= 8;
			}
			AdvanceSpriteAnimations_0205a330((struct SpriteAnimationList_0205a330*)var5, *(int*)(arg0 + 0x574));
			SetSpriteAnimationPosition_020e27ec(var5, 0, var3 - 8, var4 - 2);
			SetSpriteAnimationOAMIndex_0205a42c(var5, 0, 0);
		}
		DrawSpriteAnimations_0205ae8c(arg0 + 0x98);
		return;
	}

	{
		struct SpriteAnimationList_0205a254* var6 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0xd4);
		if (var6 == NULL) return;
		var0 = FindSpriteAnimation_0205a3d0(var6, 0);
		if (var0 != NULL) {
			var0->unknown_15_ &= ~8;
		}
	}
}
