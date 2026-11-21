#include <globaldefs.h>
#include "Graphics/TextureArena.h"

struct Struct_0204166c;
#if defined(jpn)
extern "C" void func_02041bbc(struct Struct_0204166c* arg0);
#define func_020416c0 func_02041bbc
#else
extern "C" void func_020416c0(struct Struct_0204166c* arg0);
#endif

struct TextureVRAMArea_0203d028;

struct MessageWindow_02045cac {
#if defined(jpn)
    char unknown_0_[0x884];
#else
    char unknown1_0_[0x9b4];
#endif
    int usedGlyphSlotCount_9b4_;
    unsigned char glyphSlots_9b8_[0xe00];
    unsigned char glyphSlotUseCounts_17b8_[0x80];
#if defined(jpn)
    char unknown_1708_[0x17e0 - 0x1708];
#else
    char unknown_1838_[0x19b0 - 0x1838];
#endif
    unsigned char unknown_19b0_;
#if defined(jpn)
    char unknown_17e1_[0x1c4c - 0x17e1];
#else
    char unknown_19b1_[0x1e28 - 0x19b1];
#endif
    void* pTextureArena_1e28_;
};

// USA: ClearMessageGlyphs_02045cac
extern "C" ARM void ClearMessageGlyphs_02045cac(struct MessageWindow_02045cac* window) {
    window->unknown_19b0_ = 1;
#if defined(jpn)
    window->usedGlyphSlotCount_9b4_ = 14;
#else
    window->usedGlyphSlotCount_9b4_ = 0;
#endif
#if defined(jpn)
    for (int slot = 14; slot < 0x80; slot++) {
#else
    for (int slot = 0; slot < 0x80; slot++) {
#endif
        func_020416c0((struct Struct_0204166c*)(window->glyphSlots_9b8_ + slot * 0x1c));
        window->glyphSlotUseCounts_17b8_[slot] = 0;
    }
    if (window->pTextureArena_1e28_ != NULL) {
        ((TextureArena*)((struct TextureVRAMArea_0203d028*)window->pTextureArena_1e28_))->Reset();
    }
}
