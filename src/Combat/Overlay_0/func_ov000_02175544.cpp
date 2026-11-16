#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short tileX_ac_;
    short tileY_ae_;
    unsigned char unknown_b0_[0xbc - 0xb0];
    short unknown_bc_;
    short unknown_be_;
    unsigned char unknown_c0_[0xc4 - 0xc0];
    unsigned char unknown_c4_;
};
extern "C" TextWindow_0205d0e0* GetCursorTextWindow_0205d8c4(TextWindowManager_0205d81c*);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char*);

struct SpriteAnimation_0205a254_2 {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    unsigned short index_8_;
    char unknown_a_[0x15 - 0xa];
    unsigned char unknown_15_;
    char unknown_16_[0x18 - 0x16];
};

struct SpriteAnimationList_0205a254;

struct SpriteAnimationList_0205a330;


// USA: func_ov000_02175544
extern "C" ARM void func_ov000_02175544(unsigned char* arg0) {
#if defined(jpn)
    enum { Enum_ov000_02175544_7538 = 0x1faa, Enum_ov000_02175544_80 = 0x4c };
#else
    enum { Enum_ov000_02175544_7538 = 0x1d72, Enum_ov000_02175544_80 = 0x50 };
#endif
    if (!(*(unsigned short*)(arg0 + Enum_ov000_02175544_7538) & 0x100)) return;

    TextWindow_0205d0e0* var0 = GetCursorTextWindow_0205d8c4((TextWindowManager_0205d81c*)(arg0 + 0x188));
    if (var0 == NULL) return;
    if (var0->unknown_c4_ >= 0x1a) return;
    if (!IsTextWindowOpen_0204c7e0((unsigned char*)var0)) return;

    short var1 = var0->tileX_ac_ * 8;
    short var2 = var0->tileY_ae_ * 8;
    var1 += var0->unknown_bc_;
    var2 += var0->unknown_be_;

    SpriteAnimationList_0205a254* var3 = *(SpriteAnimationList_0205a254**)(arg0 + 0x174);
    ((OBJSpriteSet::List*)(var3))->PlaySpriteAnimation(0);
    SpriteAnimation_0205a254_2* var4 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var3))->GetSprite(0));
    if (var4 != NULL) var4->unknown_15_ |= 8;

    ((OBJSpriteSet::List*)((SpriteAnimationList_0205a330*)var3))->UpdateAll(*(int*)(arg0 + 0x94c));

    var4 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var3))->GetSprite(0));
    if (var4 != NULL) {
        var4->unknown_4_ = var1 - 8;
        var4->unknown_6_ = var2 - 2;
    }

    ((OBJSpriteSet::List*)(var3))->SetSpriteOBJIndex(0, Enum_ov000_02175544_80);
    ((OBJSpriteSet*)(arg0 + 0x11c))->DrawAll();
}
