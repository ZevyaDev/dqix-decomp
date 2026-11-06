#include <globaldefs.h>

struct Struct_020421c4;
struct BGScreenBlock_02020cb8_7 { unsigned char unknown_0_[0x10]; };
extern "C" void func_0204a82c(struct Struct_020421c4* arg0);
extern "C" void func_0204acb0(struct BGScreenBlock_02020cb8_7* arg0);

struct BGLayer_02020cb8_3 {
    unsigned char unknown_0_[0xc];
    unsigned char unknown_c_;              // 0xc
    unsigned char unknown_d_;           // 0xd
    unsigned short paletteMask_e_;             // 0xe
    struct BGScreenBlock_02020cb8_7* pScreenBlocks_10_;    // 0x10
    int screenData_14_;                       // 0x14
    unsigned char unknown_18_[0x5];      // 0x18..0x1c
    unsigned char screenBlockCount_1d_;             // 0x1d
};

// USA: ResetBGLayerData_0204afb4
extern "C" ARM void ResetBGLayerData_0204afb4(struct BGLayer_02020cb8_3* layer) {
    unsigned char i;
    layer->screenData_14_ = 0;
    func_0204a82c((struct Struct_020421c4*)layer);
    layer->unknown_c_ = 0;
    layer->paletteMask_e_ = 0xffff;
    if (layer->pScreenBlocks_10_ == 0) return;
    i = 0;
    while (i < layer->screenBlockCount_1d_) {
        func_0204acb0(&layer->pScreenBlocks_10_[i]);
        i++;
    }
}
