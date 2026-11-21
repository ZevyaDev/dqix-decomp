#include <globaldefs.h>
#include <Resource/UiArrayEntry.h>
#include <NitroSDK/ColorEffects.h>

struct Struct_ov031_022492e2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct OAMAllocation_ov031_02222ce4;
struct Dialog_ov031_02237b2c {
    OAMAllocation_ov031_02222ce4* pBackgroundSprite_0_;
    void* pTextSprites_4_;
    OAMAllocation_ov031_02222ce4* buttonSprites_8_[2];
    void* pTextLayer_10_;
    void* pTask_14_;
    unsigned char unknown_18_[3];
    signed char choice_1b_;
    unsigned char layout_1c_;
    unsigned char unknown_1d_;
    unsigned char isDimmed_1e_;
    unsigned char unknown_1f_;
};
struct Struct_ov031_022492d8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[6];
};
struct Struct_ov031_0224931c { unsigned short unknown_0_, unknown_2_; };
extern const Struct_ov031_022492d8 data_ov031_022492d8;
extern Struct_ov031_022276b4* data_ov031_02290c4c;
extern Dialog_ov031_02237b2c* gDialog_ov031_02290d10;
extern const unsigned char data_ov031_0224938c[];
extern unsigned char data_ov031_02249394[];
extern const unsigned char data_ov031_022492fe[][2];
extern const Struct_ov031_0224931c data_ov031_0224931c[];
extern const Struct_ov031_022492e2 data_ov031_022492e2;
extern "C" void* AllocateZeroedMemory_ov031_0223cf4c(unsigned int, int);
extern "C" OAMAllocation_ov031_02222ce4* func_ov031_0223be70(int, int, int);
extern "C" void SetSpritePosition_ov031_0223bbd8(OAMAllocation_ov031_02222ce4*, int, int, int);
extern "C" void SetSpritePriority_ov031_0223bcc8(OAMAllocation_ov031_02222ce4*, int, int);
extern "C" void* func_ov031_0223c458(int, int, int, int, int*, int);
extern "C" void* func_ov031_0223b8c4(int, int, int);
extern "C" int func_ov031_022236d0();
extern "C" void func_ov031_0223c980(void*, int, int, int, int, int, int, void*);
extern "C" void func_ov031_0223ca54(void*, int, int, void*, int);
extern "C" void func_ov031_0223cd30(int, int, int, int);
extern "C" void func_ov031_0223cc18(int, int, const Struct_ov031_022492e2*);
extern "C" void func_ov031_022381c8(int);
extern "C" void* AddTask_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02237ecc(void*);
extern "C" void func_ov031_02237f2c(void*);
#define REG_DISPCNT (*(volatile unsigned int*)0x04000000)

// USA: OpenDialog_ov031_02237b2c
extern "C" ARM void OpenDialog_ov031_02237b2c(int messageIndex, int layout, unsigned char isDimmed, int digitPosition, int digit) {
    unsigned char windowEffectFlags[6] = {
        data_ov031_022492d8.unknown_4_[0], data_ov031_022492d8.unknown_4_[1],
        data_ov031_022492d8.unknown_4_[2], data_ov031_022492d8.unknown_4_[3],
        data_ov031_022492d8.unknown_4_[4], data_ov031_022492d8.unknown_4_[5]
    };
    int text = func_ov031_022276cc(data_ov031_02290c4c, messageIndex, digitPosition, digit);
    gDialog_ov031_02290d10 = (Dialog_ov031_02237b2c*)AllocateZeroedMemory_ov031_0223cf4c(sizeof(Dialog_ov031_02237b2c), 4);
    gDialog_ov031_02290d10->layout_1c_ = layout;
    gDialog_ov031_02290d10->choice_1b_ = -2;
    gDialog_ov031_02290d10->isDimmed_1e_ = isDimmed;
    ColorEffect_ConfigureBrightnessAdjust(0x04000050, 31, 0);
    gDialog_ov031_02290d10->pBackgroundSprite_0_ = func_ov031_0223be70(0, data_ov031_0224938c[layout], 0);
    SetSpritePosition_ov031_0223bbd8(gDialog_ov031_02290d10->pBackgroundSprite_0_, -1, 256, 0);
    SetSpritePriority_ov031_0223bcc8(gDialog_ov031_02290d10->pBackgroundSprite_0_, -1, 0);
    int i = 0;
    if (i < data_ov031_02249394[layout]) {
        const unsigned char* buttonSpriteIds = data_ov031_022492fe[layout];
        do {
            gDialog_ov031_02290d10->buttonSprites_8_[i] = func_ov031_0223be70(0, *buttonSpriteIds++, 0);
            SetSpritePosition_ov031_0223bbd8(gDialog_ov031_02290d10->buttonSprites_8_[i], -1, 256, 0);
            SetSpritePriority_ov031_0223bcc8(gDialog_ov031_02290d10->buttonSprites_8_[i], -1, 0);
            i++;
        } while (i < data_ov031_02249394[layout]);
    }
    int textSpriteCount;
    gDialog_ov031_02290d10->pTextLayer_10_ = func_ov031_0223c458(0, 32, 12, 1, &textSpriteCount, 0);
    gDialog_ov031_02290d10->pTextSprites_4_ = func_ov031_0223b8c4(0, textSpriteCount, 0);
    int drawFlags = func_ov031_022236d0();
    func_ov031_0223c980(gDialog_ov031_02290d10->pTextLayer_10_, 0, 0,
        data_ov031_0224931c[layout].unknown_0_, data_ov031_0224931c[layout].unknown_2_,
        2, drawFlags, (void*)text);
    func_ov031_0223ca54(gDialog_ov031_02290d10->pTextLayer_10_, 256, 0, gDialog_ov031_02290d10->pTextSprites_4_, 0);
    func_ov031_0223cd30(0, 0, 31, 0);
    func_ov031_0223cd30(0, 1, 31, windowEffectFlags[gDialog_ov031_02290d10->layout_1c_]);
    func_ov031_0223cd30(0, 3, 31, 1);
    func_ov031_0223cc18(0, 1, &data_ov031_022492e2);
    func_ov031_022381c8(192);
    REG_DISPCNT = (REG_DISPCNT & ~0xe000) | 0x6000;
    if (isDimmed) gDialog_ov031_02290d10->pTask_14_ = AddTask_ov031_0223e218((void*)1, (void*)func_ov031_02237ecc, 0, 120);
    else gDialog_ov031_02290d10->pTask_14_ = AddTask_ov031_0223e218((void*)1, (void*)func_ov031_02237f2c, 0, 120);
}
