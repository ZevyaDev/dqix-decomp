#include <globaldefs.h>

struct BGLayer_0204af14 {
    char unknown_0_[0x10];     // 0x0..0xf
    char* pScreenBlocks_10_;       // 0x10
    char unknown_14_[9];        // 0x14..0x1c
    unsigned char screenBlockCount_1d_; // 0x1d
};

// USA: GetBGScreenBlock_0204af14
extern "C" ARM void* GetBGScreenBlock_0204af14(struct BGLayer_0204af14* layer, unsigned int screenBlockIndex) {
    char* screenBlocks = layer->pScreenBlocks_10_;
    if (screenBlocks == NULL) {
        return NULL;
    }
    return (layer->screenBlockCount_1d_ <= screenBlockIndex) ? NULL : screenBlocks + screenBlockIndex * 0x10;
}
