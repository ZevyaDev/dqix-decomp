#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216ddfc_5100 = 0x127c };
enum { Enum_ov003_0216ddfc_4776 = 0x1138 };
enum { Enum_ov003_0216ddfc_4716 = 0x10fc };
enum { Enum_ov003_0216ddfc_223 = 0xd7 };
#else
enum { Enum_ov003_0216ddfc_5100 = 0x13ec };
enum { Enum_ov003_0216ddfc_4776 = 0x12a8 };
enum { Enum_ov003_0216ddfc_4716 = 0x126c };
enum { Enum_ov003_0216ddfc_223 = 0xdf };
#endif

#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" void SetSpriteAnimationPosition_020e27ec(struct SpriteAnimationList_0205a254* animationList, int index, short x, short y);

struct SpriteAnimationList_0205a330;

struct Struct_02000c9c_8;
extern "C" int func_0200fb08(struct Struct_02000c9c_8*);


// USA: func_ov003_0216ddfc
extern "C" ARM void func_ov003_0216ddfc(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (*(unsigned char*)(arg0 + Enum_ov003_0216ddfc_5100) & 4) {
        struct SpriteAnimationList_0205a254* var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_0216ddfc_4776);
        if (var1 != 0) {
            ((OBJSpriteSet::List*)(var1))->PlaySpriteAnimation(1);
            struct SpriteAnimation_0205a254_2* var2 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var1))->GetSprite(1));
            if (var2 != 0) {
                *(unsigned char*)((char*)var2 + 0x15) |= 8;
            }
            ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)var1))->UpdateAll(var0->GetTickCount());
            SetSpriteAnimationPosition_020e27ec(var1, 1, Enum_ov003_0216ddfc_223, 0x96);
            ((OBJSpriteSet::List*)(var1))->SetSpriteOBJIndex(1, 0x10);
#if !defined(jpn)
            if (func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance()) == 3) {
                SetSpriteAnimationPosition_020e27ec(var1, 1, 0xd7, 0x96);
            }
#endif
        }
        ((OBJSpriteSet*)(arg0 + Enum_ov003_0216ddfc_4716))->DrawAll();
        return;
    }

    struct SpriteAnimationList_0205a254* var3 = *(struct SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_0216ddfc_4776);
    if (var3 == 0) return;
    struct SpriteAnimation_0205a254_2* var4 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var3))->GetSprite(1));
    if (var4 != 0) {
        *(unsigned char*)((char*)var4 + 0x15) &= ~8;
    }
}
