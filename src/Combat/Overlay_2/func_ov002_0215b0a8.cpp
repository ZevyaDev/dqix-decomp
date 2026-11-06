#include <globaldefs.h>

#if defined(jpn)
#define REGION_VALUE(j, u) (j)
#else
#define REGION_VALUE(j, u) (u)
#endif

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" void PlaySpriteAnimation_0205a370(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" void func_020e27ec(struct SpriteAnimationList_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void func_0205a42c(struct SpriteAnimationList_0205a254* arg0, int arg1, int arg2);

struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks);

extern "C" void DrawSpriteAnimations_0205ae8c(void* spriteSet);

// USA: func_ov002_0215b0a8
// KEEP-NAME
extern "C" ARM void func_ov002_0215b0a8(char* arg0) {
    if ((*(int*)(arg0 + REGION_VALUE(0x22ac, 0x247c)) & 8) == 0) {
        return;
    }
    struct SpriteAnimationList_0205a254* var0 = *(struct SpriteAnimationList_0205a254**)(*(char**)(arg0 + REGION_VALUE(0x19c0, 0x1a68)) + 0x3c);
    PlaySpriteAnimation_0205a370(var0, 0);
    struct SpriteAnimation_0205a254_2* var1 = FindSpriteAnimation_0205a3d0(var0, 0);
    if (var1 != 0) {
        *(unsigned char*)((char*)var1 + 0x15) |= 8;
    }
    AdvanceSpriteAnimations_0205a330((struct SpriteAnimationList_0205a330*)var0, *(int*)(arg0 + REGION_VALUE(0x1a68, 0x1ba0)));
    func_020e27ec(var0, 0, 0xd7, 0x96);
    func_0205a42c(var0, 0, 0);
    DrawSpriteAnimations_0205ae8c(*(void**)(arg0 + REGION_VALUE(0x19c0, 0x1a68)));
}
