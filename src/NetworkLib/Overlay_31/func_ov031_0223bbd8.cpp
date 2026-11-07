#include <globaldefs.h>

struct OAMEntry_ov031_0223bbd8_2 {
    unsigned long unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov031_0223bbd8 {
    unsigned char unknown_0_[8];
    OAMEntry_ov031_0223bbd8_2* unknown_8_;
    unsigned char unknown_c_;
};

static inline void inline_ov031_0223bbd8(const OAMEntry_ov031_0223bbd8_2* arg0, unsigned long* arg1, unsigned long* arg2) {
    *arg1 = (arg0->unknown_0_ & 0x01ff0000UL) >> 16;
    *arg2 = arg0->unknown_0_ & 0xffUL;
}

static inline void inline_ov031_0223bbd8_2(OAMEntry_ov031_0223bbd8_2* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = (arg0->unknown_0_ & ~0x01ff00ffUL) | (arg2 & 0xffUL) | ((arg1 & 0x1ffUL) << 16);
}

// USA: SetSpritePosition_ov031_0223bbd8
extern "C" ARM void SetSpritePosition_ov031_0223bbd8(Struct_ov031_0223bbd8* sprite, int entryIndex, int x, int y) {
    OAMEntry_ov031_0223bbd8_2* oamEntries = sprite->unknown_8_;
    if (entryIndex >= 0) {
        inline_ov031_0223bbd8_2(&oamEntries[entryIndex], x, y);
        return;
    }
    int i;
    int firstX, firstY;
    inline_ov031_0223bbd8(oamEntries, (unsigned long*)&firstX, (unsigned long*)&firstY);
    inline_ov031_0223bbd8_2(oamEntries, x, y);
    int offsetX = x - firstX;
    int offsetY = y - firstY;
    for (i = 1; i < sprite->unknown_c_; i++) {
        int entryX, entryY;
        inline_ov031_0223bbd8(&oamEntries[i], (unsigned long*)&entryX, (unsigned long*)&entryY);
        inline_ov031_0223bbd8_2(&oamEntries[i], entryX + offsetX, entryY + offsetY);
    }
}
