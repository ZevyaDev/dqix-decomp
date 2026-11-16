#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"

struct MenuCursor_0205bb84;
extern "C" int GetMenuCursorIndex_0205bb84(struct MenuCursor_0205bb84* cursor);

struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;


struct Struct_ov008_02188870 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0x15 - 8];
    unsigned char unknown_15_;
};



struct Struct_ov008_02188870_2 {
    char unknown_0_[0x730];
    void* unknown_730_;
    char unknown_734_[0x738 - 0x734];
    void* unknown_738_;
    char unknown_73c_[0xb18 - 0x73c];
    unsigned int unknown_b18_;
    char unknown_b1c_[0xb29 - 0xb1c];
    unsigned char unknown_b29_;
};

// USA: func_ov008_02188870
extern "C" ARM void func_ov008_02188870(struct Struct_ov008_02188870_2* arg0) {
    if (arg0->unknown_730_ == 0) return;
    if (!(arg0->unknown_b18_ & 8)) return;
    if (!(arg0->unknown_b18_ & 0x80000)) return;

    GameState* var0 = GameState::GetInstance();
    int var1 = GetMenuCursorIndex_0205bb84((struct MenuCursor_0205bb84*)((char*)arg0 + 0x750));
    short var2 = (short)(((var1 - arg0->unknown_b29_) << 4) + 7);

    ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a254*)arg0->unknown_738_))->SetSpriteOBJIndex(0, 0x3f);
    ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a254*)arg0->unknown_738_))->PlaySpriteAnimation(0);

    struct Struct_ov008_02188870* var3 = ((Struct_ov008_02188870*)((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a254*)arg0->unknown_738_))->GetSprite(0));
    if (var3 != NULL) {
        var3->unknown_15_ |= 8;
    }

    unsigned int var4 = var0->GetTickCount();
    ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)arg0->unknown_738_))->UpdateAll(var4);

    var3 = ((Struct_ov008_02188870*)((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a254*)arg0->unknown_738_))->GetSprite(0));
    if (var3 != NULL) {
        var3->unknown_4_ = 4;
        var3->unknown_6_ = var2;
    }

    ((OBJSpriteSet*)(arg0->unknown_730_))->DrawAll();
}
