#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void RemoveLoadTask_ov023_021db2e4(volatile int* loadTaskId);
extern "C" int GetFontLoader_02094a00(void);
extern "C" void CancelFontLoad_02094ab0(void* loader);
struct Struct_02075cdc;
extern "C" void func_02075d58(struct Struct_02075cdc* arg0);
extern "C" void func_ov023_021dcd18(void* arg0);
extern "C" void InitItemInfoPanel_ov023_021dc134(void* panel, int itemId, int isEmbedded);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);

extern AllocatorUnion gMainHeap_02114e20;

#if defined(jpn)
struct Struct_ov023_021ff9e0_4 { unsigned int unknown_0_[5]; void* unknown_4_; };
#else
struct Struct_ov023_021ff9e0_4 { unsigned int unknown_0_; void* unknown_4_; };
#endif

extern struct Struct_ov023_021ff9e0_4 data_ov023_021ff9e0;

struct ItemInfoPanel_ov023_021dc354 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator* unknown_3c_;
    SafeAllocator* unknown_40_;
    SafeAllocator* unknown_44_;
    unsigned char unknown_48_[0xc4 - 0x48];
    struct Struct_02075cdc* unknown_c4_;
    struct Struct_02075cdc* unknown_c8_;
#if defined(jpn)
    unsigned char unknown_cc_[0x6b0 - 0xcc];
#else
    unsigned char unknown1_cc_[0x734 - 0xcc];
#endif

    int loadTaskId_734_;
    int loadTaskIds_738_[7];
    unsigned char unknown_754_[0x774 - 0x754];
    unsigned short flags_774_;
    unsigned char unknown_776_[0x77b - 0x776];
    signed char isEmbedded_77b_;
    unsigned char unknown_77c_[0x77e - 0x77c];
    signed char unknown_77e_;
    unsigned char unknown_77f_[0x780 - 0x77f];
    int spriteLoadTaskId_780_;
    unsigned char unknown_784_[0x79b - 0x784];
    unsigned char unknown_79b_0_ : 1;
};

// USA: ReleaseItemInfoPanel_ov023_021dc354
extern "C" ARM void ReleaseItemInfoPanel_ov023_021dc354(struct ItemInfoPanel_ov023_021dc354* panel) {
    RemoveLoadTask_ov023_021db2e4((volatile int*)&panel->spriteLoadTaskId_780_);
    panel->unknown_77e_ = -1;

    if (!(panel->flags_774_ & 0x10)) {
        CancelFontLoad_02094ab0((void*)GetFontLoader_02094a00());
    }

    RemoveLoadTask_ov023_021db2e4((volatile int*)&panel->loadTaskId_734_);
    for (int i = 0; i < 7; i++) {
        RemoveLoadTask_ov023_021db2e4((volatile int*)&panel->loadTaskIds_738_[i]);
    }

    if (panel->unknown_c8_) {
        func_02075d58(panel->unknown_c8_);
    }
    if (panel->unknown_c4_) {
        func_02075d58(panel->unknown_c4_);
    }

    if (panel->isEmbedded_77b_ != 1) {
        func_ov023_021dcd18(panel);
    }

    if (panel->unknown_44_) {
        panel->unknown_44_->Destroy();
    }
    if (panel->unknown_40_) {
        panel->unknown_40_->Destroy();
    }
    if (panel->unknown_3c_) {
        panel->unknown_3c_->Destroy();
    }
    panel->unknown_28_.Destroy();
    panel->unknown_14_.Destroy();
    panel->unknown_0_.Destroy();

    if (data_ov023_021ff9e0.unknown_4_) {
        if (!panel->unknown_79b_0_) {
            func_02012da4(&gMainHeap_02114e20, data_ov023_021ff9e0.unknown_4_);
        }
        data_ov023_021ff9e0.unknown_4_ = 0;
    }

    InitItemInfoPanel_ov023_021dc134(panel, -1, panel->isEmbedded_77b_);
}
