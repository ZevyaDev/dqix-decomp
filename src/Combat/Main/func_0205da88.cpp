#include <globaldefs.h>

extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);
extern "C" int func_0204fd00(void* arg0, int arg1);
extern "C" void FillBGScreenRect_0204bc74(void* layer, int screenEntry, short x, short y, short width, short height, int palette);

struct BGLayer_0205da88 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
    char unknown_1d_[0x20 - 0x1d];
};

struct TextWindow_0205da88_2 {
    char unknown_0_[0x4];
    struct BGLayer_0205da88* pBGLayer_4_;
    char unknown_8_[0xa8 - 0x8];
    short unknown_a8_;
    short unknown_aa_;
    short tileX_ac_;
    short tileY_ae_;
    char unknown_b0_[0xc0 - 0xb0];
    short shownRows_c0_;
    char unknown_c2_[0xc5 - 0xc2];
    unsigned char flags_c5_;
    char unknown_c6_[0xe0 - 0xc6];
};

struct TextWindowManager_0205da88_3 {
    char unknown_0_[0x98];
    struct BGLayer_0205da88* pBGLayers_98_;
    struct TextWindow_0205da88_2* pTextWindows_9c_;
    char unknown_a0_[0xb2 - 0xa0];
    unsigned char bgLayerCount_b2_;
    unsigned char textWindowCapacity_b3_;
};

// USA: FillBGUnderTextWindows_0205da88
extern "C" ARM void FillBGUnderTextWindows_0205da88(struct TextWindowManager_0205da88_3* windowManager, int fillBGIndex, int windowBGIndex, unsigned short screenEntry) {
    struct BGLayer_0205da88* fillLayer;
    struct BGLayer_0205da88* windowLayer;
    struct BGLayer_0205da88* layer;
    struct TextWindow_0205da88_2* textWindow;
    unsigned char i;

    if (windowManager->pBGLayers_98_ != 0 && windowManager->pTextWindows_9c_ != 0) {
        fillBGIndex &= 3;
        windowBGIndex &= 3;
        if (fillBGIndex == windowBGIndex) return;

        fillLayer = 0;
        windowLayer = 0;
        for (i = 0; i < windowManager->bgLayerCount_b2_; i++) {
            layer = &windowManager->pBGLayers_98_[i];
            if (fillBGIndex == layer->bgIndex_1c_4_) fillLayer = layer;
            if (windowBGIndex == layer->bgIndex_1c_4_) windowLayer = layer;
        }
        if ((fillLayer == 0) | (windowLayer == 0)) return;

        screenEntry &= 0x3ff;
        for (i = 0; i < windowManager->textWindowCapacity_b3_; i++) {
            textWindow = &windowManager->pTextWindows_9c_[i];
            if (!IsTextWindowOpen_0204c7e0((unsigned char*)textWindow)) continue;
            if (textWindow->flags_c5_ & 0x20) continue;
            if (textWindow->flags_c5_ & 0x80) continue;
            if (windowLayer != textWindow->pBGLayer_4_) continue;
            short x = textWindow->tileX_ac_;
            short y = textWindow->tileY_ae_;
            short width = textWindow->unknown_a8_;
            short height = textWindow->shownRows_c0_;
            FillBGScreenRect_0204bc74(fillLayer, screenEntry, x, y, width, height, 0);
            if (height == 0 || screenEntry == 0) continue;
            if (!func_0204fd00(textWindow, 1))
                FillBGScreenRect_0204bc74(fillLayer, 2, x, y, 1, 1, 0);
            if (!func_0204fd00(textWindow, 2))
                FillBGScreenRect_0204bc74(fillLayer, 0x402, (short)(x + width - 1), y, 1, 1, 0);
            if (!func_0204fd00(textWindow, 4))
                FillBGScreenRect_0204bc74(fillLayer, 0x802, x, (short)(y + height - 1), 1, 1, 0);
            if (!func_0204fd00(textWindow, 8))
                FillBGScreenRect_0204bc74(fillLayer, 0xc02, (short)(x + width - 1), (short)(y + height - 1), 1, 1, 0);
        }
    }
}
