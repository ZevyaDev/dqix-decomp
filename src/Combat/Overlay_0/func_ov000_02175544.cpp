#include <globaldefs.h>

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_[0xbc - 0xb0];
    short unknown_bc_;
    short unknown_be_;
    unsigned char unknown_c0_[0xc4 - 0xc0];
    unsigned char unknown_c4_;
};
extern "C" TextWindow_0205d0e0* func_0205d8c4(TextWindowManager_0205d81c*);
extern "C" int func_0204c7e0(unsigned char*);

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
extern "C" void PlaySpriteAnimation_0205a370(SpriteAnimationList_0205a254*, int);
extern "C" SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(SpriteAnimationList_0205a254*, int);
extern "C" void func_0205a42c(SpriteAnimationList_0205a254*, int, int);

struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(SpriteAnimationList_0205a330*, int);

extern "C" void DrawSpriteAnimations_0205ae8c(void*);

// USA: func_ov000_02175544
extern "C" ARM void func_ov000_02175544(unsigned char* arg0) {
#if defined(jpn)
    enum { Enum_ov000_02175544_7538 = 0x1faa, Enum_ov000_02175544_80 = 0x4c };
#else
    enum { Enum_ov000_02175544_7538 = 0x1d72, Enum_ov000_02175544_80 = 0x50 };
#endif
    if (!(*(unsigned short*)(arg0 + Enum_ov000_02175544_7538) & 0x100)) return;

    TextWindow_0205d0e0* var0 = func_0205d8c4((TextWindowManager_0205d81c*)(arg0 + 0x188));
    if (var0 == NULL) return;
    if (var0->unknown_c4_ >= 0x1a) return;
    if (!func_0204c7e0((unsigned char*)var0)) return;

    short var1 = var0->unknown_ac_ * 8;
    short var2 = var0->unknown_ae_ * 8;
    var1 += var0->unknown_bc_;
    var2 += var0->unknown_be_;

    SpriteAnimationList_0205a254* var3 = *(SpriteAnimationList_0205a254**)(arg0 + 0x174);
    PlaySpriteAnimation_0205a370(var3, 0);
    SpriteAnimation_0205a254_2* var4 = FindSpriteAnimation_0205a3d0(var3, 0);
    if (var4 != NULL) var4->unknown_15_ |= 8;

    AdvanceSpriteAnimations_0205a330((SpriteAnimationList_0205a330*)var3, *(int*)(arg0 + 0x94c));

    var4 = FindSpriteAnimation_0205a3d0(var3, 0);
    if (var4 != NULL) {
        var4->unknown_4_ = var1 - 8;
        var4->unknown_6_ = var2 - 2;
    }

    func_0205a42c(var3, 0, Enum_ov000_02175544_80);
    DrawSpriteAnimations_0205ae8c(arg0 + 0x11c);
}
