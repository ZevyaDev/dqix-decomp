#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

#if defined(jpn)

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;

extern "C" void SetSpriteAnimationPosition_020e27ec(SpriteAnimationList_0205a254*, int, short, short);

// JPN: func_ov003_0216fb7c
extern "C" ARM void func_ov003_0216fb7c(char* arg0) {
    if (arg0[1] == 0 || arg0[1] == 1) return;
    SpriteAnimationList_0205a254* var0 = *(SpriteAnimationList_0205a254**)(arg0 + 0xa4);
    if (var0 == NULL) return;

    SpriteAnimation_0205a254_2* var1 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var0))->GetSprite(1));
    if (*(short*)(arg0 + 0xc) == 5)
        *(short*)((char*)var1 + 0x10) = 0;
    else
        *(short*)((char*)var1 + 0x10) = 1;
    ((OBJSpriteSet::List*)(var0))->MaybePauseSpriteAnimation(1);
    SpriteAnimation_0205a254_2* var2 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var0))->GetSprite(1));
    if (var2 != NULL) *(unsigned char*)((char*)var2 + 0x15) |= 8;
    SetSpriteAnimationPosition_020e27ec(var0, 1, 0xd2, 0xb);
    ((OBJSpriteSet*)(arg0 + 0x68))->DrawAll();
}

#endif
