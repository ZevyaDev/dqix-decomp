#include <globaldefs.h>

extern "C" void CopyBGScreenDataToVRAM_0204b088(void* layer, int screenData);

struct BGLayer_0207fd88_2 { char unknown_0_[0x20]; };

struct MenuLayout_0207fd88 {
    #if defined(jpn)
    char unknown_0_[0x20];
#else
    char unknown1_0_[0x2c];
#endif
    BGLayer_0207fd88_2* pBGLayers_2c_;
    char unknown_30_[0x38 - 0x30];
    unsigned char bgLayerCount_38_;
};

// USA: CopyMenuLayoutBGScreenDataToVRAM_0207fd88
extern "C" ARM void CopyMenuLayoutBGScreenDataToVRAM_0207fd88(MenuLayout_0207fd88* menuLayout) {
    unsigned char bgLayerCount;
    BGLayer_0207fd88_2* layer = menuLayout->pBGLayers_2c_;
    unsigned char i;
    if (layer == NULL) return;
    bgLayerCount = menuLayout->bgLayerCount_38_;
    for (i = 0; i < bgLayerCount; i++) {
        CopyBGScreenDataToVRAM_0204b088(layer, 0);
        layer++;
    }
}
