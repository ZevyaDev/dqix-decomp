#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct TextWindowEntry_ov012_0218b008 {
    unsigned char windowId_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    signed char width_3_;
    signed char height_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};
extern struct TextWindowEntry_ov012_0218b008 data_ov012_0218b008[];

struct Struct_ov012_021893b4 {
    char unknown_0_[LOW_REGION(0x130, 0xa0)];
    short nextWidth_a0_;
    short nextHeight_a2_;
    short nextX_a4_;
    short nextY_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char nextWindowId_b1_;
    char unknown_b2_[3];
    unsigned char unknown_b5_;
};

// USA: SetNextTextWindow_ov012_021893b4
extern "C" ARM void SetNextTextWindow_ov012_021893b4(void* profileMenu, int windowId, int x, int y) {
    struct Struct_ov012_021893b4* var0 = (struct Struct_ov012_021893b4*)((char*)profileMenu + LOW_REGION(0, 0xac));
    int i;
    for (i = 0; data_ov012_0218b008[i].windowId_0_ != 0xff; i++) {
        struct TextWindowEntry_ov012_0218b008* windowEntry = &data_ov012_0218b008[i];
        if (windowEntry->windowId_0_ == windowId) {
            unsigned char var3, var4;
            signed char height, width;
            unsigned char var7, var8;
            var0->nextWindowId_b1_ = windowEntry->windowId_0_;
            var0->nextX_a4_ = x;
            var0->nextY_a6_ = y;
            var3 = windowEntry->unknown_2_;
            var4 = windowEntry->unknown_1_;
            var0->unknown_a8_ = var4;
            var0->unknown_aa_ = var3;
            height = windowEntry->height_4_;
            width = windowEntry->width_3_;
            var0->nextWidth_a0_ = width;
            var0->nextHeight_a2_ = height;
            var7 = windowEntry->unknown_6_;
            var8 = windowEntry->unknown_5_;
            var0->unknown_ac_ = var8;
            var0->unknown_ae_ = var7;
            var0->unknown_b5_ = 1;
            return;
        }
    }
}
