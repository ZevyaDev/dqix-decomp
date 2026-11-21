#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

#if defined(jpn)
enum { Enum_ov003_02160134_1187 = 0x2cb };
enum { Enum_ov003_02160134_804 = 0x20c };
enum { Enum_ov003_02160134_912 = 0x278 };
enum { Enum_ov003_02160134_820 = 0x21c };
enum { Enum_ov003_02160134_792 = 0x200 };
enum { Enum_ov003_02160134_1124 = 0x28c };
enum { Enum_ov003_02160134_908 = 0x274 };
enum { Enum_ov003_02160134_1120 = 0x288 };
#else
enum { Enum_ov003_02160134_1187 = 0x4a3 };
enum { Enum_ov003_02160134_804 = 0x324 };
enum { Enum_ov003_02160134_912 = 0x390 };
enum { Enum_ov003_02160134_820 = 0x334 };
enum { Enum_ov003_02160134_792 = 0x318 };
enum { Enum_ov003_02160134_1124 = 0x464 };
enum { Enum_ov003_02160134_908 = 0x38c };
enum { Enum_ov003_02160134_1120 = 0x460 };
#endif

struct MenuLayout_0207fcb8;
extern "C" void ClearMenuLayoutBGScreenData_0207fcb8(struct MenuLayout_0207fcb8* menuLayout);
struct MenuLayout_0207fd00;
extern "C" void DrawMenuLayoutWindows_0207fd00(struct MenuLayout_0207fd00* menuLayout);
extern "C" void FillBGUnderMenuLayoutWindows_0207fe80(void* menuLayout, int fillBGIndex, int windowBGIndex, int screenEntry);
struct MenuLayout_0207fd44_2;
extern "C" void FlushMenuLayoutBGScreenData_0207fd44(struct MenuLayout_0207fd44_2* menuLayout);
extern "C" void func_ov003_02166fc4(void* arg0);
struct YesNoWindow_020e28dc;
extern "C" int IsYesNoWindowOpen_020e28dc(struct YesNoWindow_020e28dc* yesNoWindow);
struct YesNoWindow_020e2794_2;
extern "C" void DrawYesNoWindow_020e2794(struct YesNoWindow_020e2794_2* yesNoWindow, void* spriteSet);
extern "C" void func_ov003_0216039c(void* arg0);
struct Struct_ov003_02160134;
extern "C" void func_ov003_02167548(struct Struct_ov003_02160134* arg0);
struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
struct SpriteAnimationList_0205a330;
extern "C" void SetSpriteAnimationPosition_020e27ec(struct SpriteAnimationList_0205a254* animationList, int index, short x, short y);

// USA: func_ov003_02160134
extern "C" ARM void func_ov003_02160134(char* arg0) {
    if (*(unsigned char*)(arg0 + Enum_ov003_02160134_1187) == 0) return;

    void* var0 = *(void**)(arg0 + Enum_ov003_02160134_804);
    if (var0 != 0) {
        ClearMenuLayoutBGScreenData_0207fcb8((struct MenuLayout_0207fcb8*)var0);
        DrawMenuLayoutWindows_0207fd00((struct MenuLayout_0207fd00*)var0);
        FillBGUnderMenuLayoutWindows_0207fe80(var0, 1, 2, 1);
        FlushMenuLayoutBGScreenData_0207fd44((struct MenuLayout_0207fd44_2*)var0);
    }
    func_ov003_02166fc4(arg0);

    if (*(void**)(arg0 + Enum_ov003_02160134_912) != 0 && IsYesNoWindowOpen_020e28dc((struct YesNoWindow_020e28dc*)*(void**)(arg0 + Enum_ov003_02160134_912)) != 0) {
        DrawYesNoWindow_020e2794((struct YesNoWindow_020e2794_2*)*(void**)(arg0 + Enum_ov003_02160134_912), arg0 + Enum_ov003_02160134_820);
    }
    func_ov003_0216039c(arg0);

    if (*(struct Struct_ov003_02160134**)(arg0 + Enum_ov003_02160134_792) != 0) {
        func_ov003_02167548(*(struct Struct_ov003_02160134**)(arg0 + Enum_ov003_02160134_792));
    }

    if (!(*(unsigned int*)(arg0 + Enum_ov003_02160134_1124) & 0x2000000)) return;

    struct SpriteAnimationList_0205a254* var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_02160134_908);
    ((OBJSpriteSet::List*)(var1))->PlaySpriteAnimation(1);

    var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_02160134_908);
    struct SpriteAnimation_0205a254_2* var2 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var1))->GetSprite(0));
    if (var2 != NULL) {
        *(unsigned char*)((char*)var2 + 0x15) &= ~8;
    }

    var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_02160134_908);
    var2 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var1))->GetSprite(1));
    if (var2 != NULL) {
        *(unsigned char*)((char*)var2 + 0x15) |= 8;
    }

    var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_02160134_908);
    int var3 = *(int*)(arg0 + Enum_ov003_02160134_1120);
    ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)var1))->UpdateAll(var3);

    var1 = *(struct SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_02160134_908);
    SetSpriteAnimationPosition_020e27ec(var1, 1, 0xd7, 0x96);

    ((OBJSpriteSet*)(arg0 + Enum_ov003_02160134_820))->DrawAll();
}
