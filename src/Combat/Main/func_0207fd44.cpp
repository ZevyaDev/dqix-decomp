#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0207fd44_44 = 0x20 };
#else
enum { Enum_0207fd44_44 = 0x2c };
#endif

extern "C" void FlushBGScreenData_0204b04c(void* layer, int screenData);

struct BGLayer_0207fd44 { char unknown_0_[0x20]; };

struct MenuLayout_0207fd44_2 {
    char unknown_0_[Enum_0207fd44_44];
    BGLayer_0207fd44* pBGLayers_2c_;
    char unknown_30_[0x38 - 0x30];
    unsigned char bgLayerCount_38_;
};

// USA: FlushMenuLayoutBGScreenData_0207fd44
extern "C" ARM void FlushMenuLayoutBGScreenData_0207fd44(MenuLayout_0207fd44_2* menuLayout) {
    unsigned char bgLayerCount;
    BGLayer_0207fd44* layer = menuLayout->pBGLayers_2c_;
    unsigned char i;
    if (layer == NULL) return;
    bgLayerCount = menuLayout->bgLayerCount_38_;
    for (i = 0; i < bgLayerCount; i++) {
        FlushBGScreenData_0204b04c(layer, 0);
        layer++;
    }
}
