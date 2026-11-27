#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0208baec { int unknown_0_, unknown_4_; float unknown_8_; unsigned short unknown_c_; unsigned short unknown_e_; };
struct Struct_0208baec_2 { unsigned char unknown_0_[0xc]; int unknown_c_, unknown_10_, unknown_14_, unknown_18_; unsigned short unknown_1c_; unsigned short unknown_1e_; unsigned short unknown_20_; unsigned char unknown_22_; unsigned char unknown_23_[5]; };
struct QuestDisplay_0208bb78 {
    unsigned char unknown_0_[0x60];
    Struct_0208baec_2 unknown_60_;
    unsigned char unknown_88_[0xb4 - 0x88];
    Struct_0208baec_2* unknown_b4_;
    unsigned char unknown_b8_[0xc8 - 0xb8];
    float unknown_c8_;
    float unknown_cc_;
    unsigned char unknown_d0_[2];
    short unknown_d2_;
    unsigned char unknown_d4_;
    unsigned char unknown_d5_[2];
    unsigned char unknown_d7_;
    unsigned char unknown_d8_;
    signed char unknown_d9_;
    unsigned short displayFlags_da_;
};
typedef void (QuestDisplay_0208bb78::*Type_01ff8b48_6)();
struct Struct_020e8ce4 { Type_01ff8b48_6 unknown_0_[5]; };
#if defined(jpn)
extern Struct_020e8ce4 data_020e8e00;
#else
extern Struct_020e8ce4 data_020e8ce4;
#endif
extern Type_01ff8b48_6 gNullMemberFunctionPointer_020e6d5c;
struct QueueNode_02015438;
struct Struct_02000c9c_8;
struct Struct_02065990_3;
extern "C" int UpdateQuestDisplayShake_0208ca00(QuestDisplay_0208bb78*, int);
extern "C" void func_0208bf78(QuestDisplay_0208bb78*);
extern "C" void func_0208b788(int, float, Struct_0208baec*, int);
extern "C" int func_0208baec(int, Struct_0208baec_2*, Struct_0208baec*, int, float, int, unsigned char);
extern "C" int GetResources_0200fb8c(int*);
extern "C" unsigned char func_0200fb08(Struct_02000c9c_8*);
extern "C" int GetQueueHeadType_02046b24(QueueNode_02015438**);
extern "C" int* GetQuestManager_02094d6c();
extern "C" unsigned char func_020965ac(Struct_02065990_3*, unsigned char);
extern "C" int func_02096088(void*, int);

// USA: UpdateQuestDisplay_0208bb78
extern "C" ARM int UpdateQuestDisplay_0208bb78(QuestDisplay_0208bb78* display, int ticks) {
    if (display->unknown_d2_ < 0) return 1;
    if (!ticks) ticks = 1;
    int shakeOffset = UpdateQuestDisplayShake_0208ca00(display, (signed char)ticks);
    if (display->unknown_d9_) {
        display->unknown_d9_ -= ticks;
        if (display->unknown_d9_ < 0) display->unknown_d9_ = 0;
    }
    if (display->displayFlags_da_ & 0x20) func_0208bf78(display);
    else {
#if defined(jpn)
        Struct_020e8ce4 stateHandlers = data_020e8e00;
#else
        Struct_020e8ce4 stateHandlers = data_020e8ce4;
#endif
        stateHandlers.unknown_0_[4] = gNullMemberFunctionPointer_020e6d5c;
        if (!stateHandlers.unknown_0_[display->unknown_d4_]) return 1;
        (display->*stateHandlers.unknown_0_[display->unknown_d4_])();
    }
    GameState* gameState = GameState::GetInstance();
    GameResources* gameResources = (GameResources*)GetResources_0200fb8c((int*)gameState);
    float scale;
    unsigned char metatileIndex;
    QueueNode_02015438** queue = (QueueNode_02015438**)gameResources->unknown_ptr_array_36fc[0];
    if (display->displayFlags_da_ & 8) {
        int hasSecondMetatile = (display->displayFlags_da_ & 0x100) != 0;
        Struct_0208baec placement;
        func_0208b788(display->unknown_d8_, display->unknown_cc_, &placement, hasSecondMetatile);
        scale = placement.unknown_8_;
        if (!display->unknown_d8_) scale *= scale;
        metatileIndex = 0;
        if (hasSecondMetatile) metatileIndex = 1;
        if (display->displayFlags_da_ & 0x100) {
            placement.unknown_4_ -= 16;
#if defined(jpn)
            func_0208baec((int)&display->unknown_60_, &display->unknown_b4_[metatileIndex], &placement, 0x40, scale, shakeOffset, 1);
#else
            func_0208baec((int)&display->unknown_60_, &display->unknown_b4_[metatileIndex], &placement, 0x20, scale, shakeOffset, 1);
#endif
            Struct_0208baec secondPlacement;
            memcpy(&secondPlacement, &placement, sizeof(secondPlacement));
            secondPlacement.unknown_4_ += 0x38;
#if !defined(jpn)
            if (func_0200fb08((Struct_02000c9c_8*)gameState) == 5) secondPlacement.unknown_4_ += 16;
#endif
#if defined(jpn)
            func_0208baec((int)&display->unknown_60_, &display->unknown_b4_[(unsigned char)(metatileIndex + 1)], &secondPlacement, 0x60, scale, shakeOffset, 1);
#else
            func_0208baec((int)&display->unknown_60_, &display->unknown_b4_[(unsigned char)(metatileIndex + 1)], &secondPlacement, 0x30, scale, shakeOffset, 1);
#endif
        } else {
            int isVisible = 1;
            if (GetQueueHeadType_02046b24(queue) == 0x2d) metatileIndex = isVisible;
            else if (display->unknown_d8_ == 1) isVisible = 0;
            if (isVisible) func_0208baec((int)&display->unknown_60_, &display->unknown_b4_[metatileIndex], &placement, 0x40, scale, shakeOffset, 1);
        }
    }
    if (display->unknown_d2_ != 9999 && display->unknown_d2_ >= 0 && display->unknown_d4_ != 0 && display->unknown_d4_ != 3 && GetQueueHeadType_02046b24(queue) != 0x2d) {
        int* questManager = GetQuestManager_02094d6c();
        int questId = func_020965ac((Struct_02065990_3*)questManager, (unsigned char)display->unknown_d2_);
        if (func_02096088(questManager, questId)) {
            Struct_0208baec markPlacement;
            func_0208b788(1, 1.0f, &markPlacement, 0);
            func_0208baec((int)&display->unknown_60_, &display->unknown_b4_[1], &markPlacement, 0x20, markPlacement.unknown_8_, shakeOffset, 2);
        }
    }
    return 0;
}
