#include <globaldefs.h>

extern "C" void func_0204b938(void* arg0, void* arg1, int arg2, int arg3, unsigned short arg4);

struct BGLayer_0204b988 {
    char unknown_0_[0x10];
    char* pScreenBlocks_10_;
    char unknown_14_[0x9];
    unsigned char screenBlockCount_1d_;
};

// USA: CopyBGScreenBlock_0204b988
extern "C" ARM void CopyBGScreenBlock_0204b988(struct BGLayer_0204b988* layer, unsigned int screenBlockIndex, int destX, int destY, unsigned short palette) {
    char* screenBlocks;
    if (layer->screenBlockCount_1d_ <= screenBlockIndex) return;
    screenBlocks = layer->pScreenBlocks_10_;
    if (screenBlocks == NULL) return;
    func_0204b938(layer, screenBlocks + screenBlockIndex * 16, destX, destY, palette);
}
