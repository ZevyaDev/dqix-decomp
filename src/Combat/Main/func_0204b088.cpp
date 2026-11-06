#include <globaldefs.h>

typedef void (*Type_0204b088)(void*, int, unsigned int);
extern unsigned int data_020e7b98[][4];
extern Type_0204b088 data_020f0218[][4];
struct BGLayer_0204b088 {
    char unknown_0_[0x14];
    void* pScreenData_14_;
    unsigned int screenSize_18_;
    unsigned char isSubScreen_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
    char unknown_1d_[2];
    unsigned char unknown_1f_;
};

// USA: CopyBGScreenDataToVRAM_0204b088
extern "C" ARM void CopyBGScreenDataToVRAM_0204b088(BGLayer_0204b088* layer, void* screenData) {
    if (!screenData) screenData = layer->pScreenData_14_;
    if (!screenData) return;
    unsigned int isSubScreen = layer->isSubScreen_1c_0_;
    unsigned int bgIndex = layer->bgIndex_1c_4_;
    unsigned int var2 = layer->unknown_1f_;
    unsigned int screenSize = layer->screenSize_18_;
    unsigned int size = data_020e7b98[var2][screenSize];
    Type_0204b088 screenDataLoader = data_020f0218[isSubScreen][bgIndex];
    layer = (BGLayer_0204b088*)screenData;
    screenDataLoader(layer, 0, size);
}
