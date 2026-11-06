#include <globaldefs.h>

extern "C" void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize);
extern int data_ov023_021fd6ac[];
extern int data_ov023_021fd6fc[];

// USA: func_ov023_021e4fd8
extern "C" ARM void func_ov023_021e4fd8(void* arg0) {
    char* var0;
    int var1;
    var0 = (char*)arg0 + 0x394;
    var1 = 0;
    var0 = var0 + 0x400;
    for (; var1 < 10; var1++) {
        InitTextureVRAMArea_0207de48(var0 + var1 * 0x70, data_ov023_021fd6ac[var1], data_ov023_021fd6fc[var1]);
    }
}
