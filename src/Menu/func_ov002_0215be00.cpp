#include "globaldefs.h"

#if defined(jpn)
enum { Enum_ov002_0215be00_3784 = 0xe20, Enum_ov002_0215be00_7096 = 0x1a80, Enum_ov002_0215be00_21 = 22, Enum_ov002_0215be00_13 = 14, Enum_ov002_0215be00_11 = 12, Enum_ov002_0215be00_17 = 14, Enum_ov002_0215be00_38 = 41 };
#else
enum { Enum_ov002_0215be00_3784 = 0xec8, Enum_ov002_0215be00_7096 = 0x1bb8, Enum_ov002_0215be00_21 = 21, Enum_ov002_0215be00_13 = 13, Enum_ov002_0215be00_11 = 11, Enum_ov002_0215be00_17 = 17, Enum_ov002_0215be00_38 = 38 };
#endif

struct TextWindowEntry_ov002_0216cb48 {
    unsigned char windowId_0_, unknown_1_, unknown_2_;
    signed char width_3_, height_4_;
    unsigned char unknown_5_, unknown_6_;
};
struct TextWindowManager_ov002_0215be00 {
    unsigned char unknown_0_[0xa0];
    short nextWidth_a0_, nextHeight_a2_, nextX_a4_, nextY_a6_;
    short unknown_a8_, unknown_aa_, unknown_ac_, unknown_ae_;
    unsigned char unknown_b0_, nextWindowId_b1_, unknown_b2_[3], unknown_b5_, unknown_b6_, fontSize_b7_;
    inline void inline_ov002_0215be00(short arg0, short arg1) { unknown_a8_ = arg0; unknown_aa_ = arg1; }
    inline void inline_ov002_0215be00_2(short arg0, short arg1) { nextWidth_a0_ = arg0; nextHeight_a2_ = arg1; }
    inline void inline_ov002_0215be00_3(short arg0, short arg1) { unknown_ac_ = arg0; unknown_ae_ = arg1; }
};
struct Struct_ov002_0215be00_2 {
    unsigned char unknown_0_[Enum_ov002_0215be00_3784];
    TextWindowManager_ov002_0215be00 windowManager_ec8_;
    unsigned char unknown_f80_[Enum_ov002_0215be00_7096 - Enum_ov002_0215be00_3784 - sizeof(TextWindowManager_ov002_0215be00)];
    int unknown_1bb8_;
};
extern "C" const TextWindowEntry_ov002_0216cb48 gTextWindowEntries_ov002_0216cb48[];
extern "C" void func_ov002_02156080(void*, short*, short*);

// USA: SetNextTextWindow_ov002_0215be00
// JPN: func_ov002_0215cf30
extern "C" ARM void SetNextTextWindow_ov002_0215be00(Struct_ov002_0215be00_2* menu, int windowId, short x, short y) {
    for (int i = 0; gTextWindowEntries_ov002_0216cb48[i].windowId_0_ != 255; ++i) {
        const TextWindowEntry_ov002_0216cb48* windowEntry = &gTextWindowEntries_ov002_0216cb48[i];
        if (windowEntry->windowId_0_ != windowId) continue;
        TextWindowManager_ov002_0215be00* windowManager = &menu->windowManager_ec8_;
        windowManager->nextWindowId_b1_ = windowEntry->windowId_0_;
        windowManager->nextX_a4_ = x;
        windowManager->nextY_a6_ = y;
        windowManager->inline_ov002_0215be00(windowEntry->unknown_1_, windowEntry->unknown_2_);
        windowManager->inline_ov002_0215be00_2(windowEntry->width_3_, windowEntry->height_4_);
        windowManager->inline_ov002_0215be00_3(windowEntry->unknown_5_, windowEntry->unknown_6_);
        windowManager->unknown_b5_ = 1;
        if (windowEntry->windowId_0_ == Enum_ov002_0215be00_21) {
            short menuEntries[9], menuEntryCount;
            short heightReduction = 0;
            func_ov002_02156080(menu, menuEntries, &menuEntryCount);
            if (menuEntryCount < 8) {
                heightReduction = (8 - menuEntryCount) * 2;
            } else {
                windowManager->inline_ov002_0215be00(windowEntry->unknown_1_, windowEntry->unknown_2_ + 1);
            }
            if (heightReduction < 0) heightReduction = 0;
            windowManager->inline_ov002_0215be00_2(windowEntry->width_3_, windowEntry->height_4_ - heightReduction);
        }
        if (windowEntry->windowId_0_ == Enum_ov002_0215be00_13 && menu->unknown_1bb8_ == Enum_ov002_0215be00_11) {
            windowManager->nextWidth_a0_ = Enum_ov002_0215be00_17;
            windowManager->nextHeight_a2_ = 16;
        }
        int fontSize = 10;
        if (windowId == Enum_ov002_0215be00_38) fontSize = 12;
        windowManager->fontSize_b7_ = fontSize;
        break;
    }
}

#if defined(jpn)
#undef gTextWindowEntries_ov002_0216cb48
#endif
