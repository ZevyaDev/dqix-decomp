#include <globaldefs.h>

extern "C" void func_0204b620(void*, void*, int, int, int, int, int, int, int, int);

struct BGLayer_0204b8d0 {
    char unknown_0_[0x10];
    int unknown_10_;
    void* pScreenData_14_;
    char unknown_18_[5];
    unsigned char screenBlockCount_1d_;
};

// USA: CopyBGScreenBlockRect_0204b8d0
extern "C" ARM void CopyBGScreenBlockRect_0204b8d0(struct BGLayer_0204b8d0* layer, unsigned int screenBlockIndex, int srcX, int srcY,
                              short destX, short destY, short width, short height, unsigned short palette) {
    if (layer->screenBlockCount_1d_ <= screenBlockIndex) return;
    int screenBlock = layer->unknown_10_;
    if (screenBlock == 0) return;
    screenBlock += screenBlockIndex << 4;
    void* screenData = layer->pScreenData_14_;
    if (screenData == NULL) return;
    func_0204b620(layer, screenData, screenBlock, srcX, srcY, destX, destY, width, height, palette);
}
