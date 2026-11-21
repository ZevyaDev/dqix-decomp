#include <globaldefs.h>
#include "Graphics/BGLayer.h"

struct BGLayer_0207fe80_2 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
    char unknown_1d_[0x20 - 0x1d];
};

struct TextWindow_0207fe80 {
    char unknown_0_[4];
    struct BGLayer_0207fe80_2* pBGLayer_4_;
    char unknown_8_[0xa8 - 8];
    short width_a8_;
    char unknown_aa_[2];
    short tileX_ac_;
    short tileY_ae_;
    char unknown_b0_[0xc0 - 0xb0];
    short shownRows_c0_;
    char unknown_c2_[0xc4 - 0xc2];
    unsigned char id_c4_;
    unsigned char flags_c5_;
    char unknown_c6_[0xe0 - 0xc6];
};

struct MenuLayout_0207fe80_3 {
#if defined(jpn)
    char unknown_0_[0x20];
#else
    char unknown1_0_[0x2c];
#endif
    struct BGLayer_0207fe80_2* pBGLayers_2c_;
    struct TextWindow_0207fe80* pWindows_30_;
    char unknown_34_[0x38 - 0x34];
    unsigned char bgLayerCount_38_;
    unsigned char windowCount_39_;
};

extern "C" int IsTextWindowOpen_0204c7e0(unsigned char*);
extern "C" int func_0204fd00(struct TextWindow_0207fe80* arg0, int arg1);

// USA: FillBGUnderMenuLayoutWindows_0207fe80
extern "C" ARM void FillBGUnderMenuLayoutWindows_0207fe80(struct MenuLayout_0207fe80_3* menuLayout, int fillBGIndex, int windowBGIndex, unsigned short screenEntry) {
    struct BGLayer_0207fe80_2* fillLayer;
    struct BGLayer_0207fe80_2* windowLayer;
    struct BGLayer_0207fe80_2* layer;
    unsigned char layerIndex;
    struct TextWindow_0207fe80* textWindow;
    unsigned char windowIndex;
    short x;
    short y;
    short width;
    short height;

    fillBGIndex &= 3;
    windowBGIndex &= 3;
    if (fillBGIndex == windowBGIndex) {
        return;
    }
    fillLayer = NULL;
    windowLayer = NULL;
    for (layerIndex = 0; layerIndex < menuLayout->bgLayerCount_38_; layerIndex++) {
        layer = &menuLayout->pBGLayers_2c_[layerIndex];
        if (fillBGIndex == layer->bgIndex_1c_4_) {
            fillLayer = layer;
        }
        if (windowBGIndex == layer->bgIndex_1c_4_) {
            windowLayer = layer;
        }
    }
    if ((fillLayer == NULL) | (windowLayer == NULL)) {
        return;
    }
    screenEntry &= 0x3ff;
    for (windowIndex = 0; windowIndex < menuLayout->windowCount_39_; windowIndex++) {
        textWindow = &menuLayout->pWindows_30_[windowIndex];
        if (IsTextWindowOpen_0204c7e0((unsigned char*)textWindow) && textWindow->id_c4_ != 0xff) {
            if (!(textWindow->flags_c5_ & 0x20) && !(textWindow->flags_c5_ & 0x80) && windowLayer == textWindow->pBGLayer_4_) {
                y = textWindow->tileY_ae_;
                x = textWindow->tileX_ac_;
                width = textWindow->width_a8_;
                height = textWindow->shownRows_c0_;
                ((BGLayer*)(fillLayer))->SetTileInRectangle(screenEntry, x, y, width, height, 0);
                if (height && screenEntry) {
                    if (!func_0204fd00(textWindow, 1)) {
                        ((BGLayer*)(fillLayer))->SetTileInRectangle(2, x, y, 1, 1, 0);
                    }
                    if (!func_0204fd00(textWindow, 2)) {
                        ((BGLayer*)(fillLayer))->SetTileInRectangle(0x402, (short)(x + width - 1), y, 1, 1, 0);
                    }
                    if (!func_0204fd00(textWindow, 4)) {
                        ((BGLayer*)(fillLayer))->SetTileInRectangle(0x802, x, (short)(y + height - 1), 1, 1, 0);
                    }
                    if (!func_0204fd00(textWindow, 8)) {
                        ((BGLayer*)(fillLayer))->SetTileInRectangle(0xc02, (short)(x + width - 1), (short)(y + height - 1), 1, 1, 0);
                    }
                }
            }
        }
    }
}
