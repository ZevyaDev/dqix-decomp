#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0207fcb8_44 = 0x20 };
#else
enum { Enum_0207fcb8_44 = 0x2c };
#endif

struct BGLayer_0204b010;

extern "C" void ClearBGScreenData_0204b010(struct BGLayer_0204b010* layer, void* screenData);

struct MenuLayout_0207fcb8 {
    char unknown_0_[Enum_0207fcb8_44];
    char* pBGLayers_2c_;
    char unknown_30_[8];
    unsigned char bgLayerCount_38_;
};

// USA: ClearMenuLayoutBGScreenData_0207fcb8
extern "C" ARM void ClearMenuLayoutBGScreenData_0207fcb8(struct MenuLayout_0207fcb8* menuLayout) {
    unsigned char i;
    if (menuLayout->pBGLayers_2c_ != NULL) {
        for (i = 0; i < menuLayout->bgLayerCount_38_; i++) {
            ClearBGScreenData_0204b010((struct BGLayer_0204b010*)(menuLayout->pBGLayers_2c_ + i * 0x20), NULL);
        }
    }
}
