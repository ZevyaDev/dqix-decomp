#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
#if defined(jpn)
extern "C" void SetSpriteAnimationPosition_020e27ec(SpriteAnimationList_0205a254*, int, short, short);
#endif
extern "C" void func_ov003_021703f0(void*, short*, short*);
struct SpriteAnimationList_0205a330;

// USA: func_ov003_0217033c
extern "C" ARM void func_ov003_0217033c(char* arg0) {
    SpriteAnimationList_0205a254* var0 = *(SpriteAnimationList_0205a254**)(arg0 + 0xa4);
    if (var0 == NULL) return;

    short var1, var2;
    func_ov003_021703f0(arg0, &var1, &var2);

    SpriteAnimation_0205a254_2* var3;
    if (var1 != 0 && var2 != 0) {
        ((OBJSpriteSet::List*)(var0))->PlaySpriteAnimation(0);
        var3 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var0))->GetSprite(0));
        if (var3 != NULL) {
            *(unsigned char*)((char*)var3 + 0x15) |= 8;
        }
        ((OBJSpriteSet::List*)((SpriteAnimationList_0205a330*)var0))->UpdateAll(2);
#if defined(jpn)
        SetSpriteAnimationPosition_020e27ec(var0, 0, var1, var2);
#else
        short var4, var5;
        var5 = var2;
        var4 = var1;
        var3 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var0))->GetSprite(0));
        if (var3 != NULL) {
            *(short*)((char*)var3 + 0x4) = var4;
            *(short*)((char*)var3 + 0x6) = var5;
        }
#endif
        ((OBJSpriteSet*)(arg0 + 0x68))->DrawAll();
        return;
    }
    var3 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var0))->GetSprite(0));
    if (var3 != NULL) {
        *(unsigned char*)((char*)var3 + 0x15) &= ~8;
    }
}
