#include <globaldefs.h>

extern "C" void DC_FlushRange(const void* addr, unsigned int size);

extern unsigned int data_020e7b98[][4];

struct BGLayer_0204b04c {
    char unknown_0_[0x14];
    void* pScreenData_14_;
    unsigned int screenSize_18_;
    char unknown_1c_[3];
    unsigned char unknown_1f_;
};

static inline unsigned int inline_0204b04c(unsigned int arg0, unsigned int arg1) {
    return data_020e7b98[arg0][arg1];
}

// USA: FlushBGScreenData_0204b04c
extern "C" ARM void FlushBGScreenData_0204b04c(BGLayer_0204b04c* layer, void* screenData) {
    if (screenData == NULL) screenData = layer->pScreenData_14_;
    if (screenData == NULL) return;
    DC_FlushRange(screenData, inline_0204b04c(layer->unknown_1f_, layer->screenSize_18_));
}