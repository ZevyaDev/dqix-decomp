#include <globaldefs.h>

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
#if defined(jpn)
extern "C" void SetSpriteAnimationPosition_020e27ec(SpriteAnimationList_0205a254*, int, short, short);
#endif
extern "C" void func_ov003_021703f0(void*, short*, short*);
extern "C" void PlaySpriteAnimation_0205a370(SpriteAnimationList_0205a254*, int);
extern "C" SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(SpriteAnimationList_0205a254*, int);
struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(SpriteAnimationList_0205a330*, int);
extern "C" void DrawSpriteAnimations_0205ae8c(void*);

// USA: func_ov003_0217033c
extern "C" ARM void func_ov003_0217033c(char* arg0) {
    SpriteAnimationList_0205a254* var0 = *(SpriteAnimationList_0205a254**)(arg0 + 0xa4);
    if (var0 == NULL) return;

    short var1, var2;
    func_ov003_021703f0(arg0, &var1, &var2);

    SpriteAnimation_0205a254_2* var3;
    if (var1 != 0 && var2 != 0) {
        PlaySpriteAnimation_0205a370(var0, 0);
        var3 = FindSpriteAnimation_0205a3d0(var0, 0);
        if (var3 != NULL) {
            *(unsigned char*)((char*)var3 + 0x15) |= 8;
        }
        AdvanceSpriteAnimations_0205a330((SpriteAnimationList_0205a330*)var0, 2);
#if defined(jpn)
        SetSpriteAnimationPosition_020e27ec(var0, 0, var1, var2);
#else
        short var4, var5;
        var5 = var2;
        var4 = var1;
        var3 = FindSpriteAnimation_0205a3d0(var0, 0);
        if (var3 != NULL) {
            *(short*)((char*)var3 + 0x4) = var4;
            *(short*)((char*)var3 + 0x6) = var5;
        }
#endif
        DrawSpriteAnimations_0205ae8c(arg0 + 0x68);
        return;
    }
    var3 = FindSpriteAnimation_0205a3d0(var0, 0);
    if (var3 != NULL) {
        *(unsigned char*)((char*)var3 + 0x15) &= ~8;
    }
}
