#include <globaldefs.h>
#include "Graphics/VRAMStaging.h"

struct Struct_0204166c;
extern "C" void func_020416c0(struct Struct_0204166c* arg0);

extern "C" void func_020439b0(void* arg0, int arg1);

#if defined(jpn)
extern int data_0210773c;
extern int data_020e846c;
extern const char data_020efd90[];
#define data_021077fc data_0210773c
#define data_020e7af8 data_020e846c
extern "C" void func_02041bbc(void*);
extern "C" int func_02043014(int, unsigned short*);
extern "C" void func_02046530(void*, unsigned short*, int, int);
#else
extern int data_021077fc;
#endif
extern int data_020e7af8;

struct TextureVRAMArea_020432c4 {
    char unknown_0_[0x68];
    unsigned int paletteAllocation_68_0_ : 16;
};

// USA: InitMessageGlyphs_020432c4
extern "C" ARM void InitMessageGlyphs_020432c4(char* window) {
    struct TextureVRAMArea_020432c4* var0 = *(struct TextureVRAMArea_020432c4**)(window + (
#if defined(jpn)
0x1c4c
#else
0x1e28
#endif
));
    int slot;

    if (var0 != 0) {
        data_021077fc = var0->paletteAllocation_68_0_ << 3;
    }

    StageMemoryToVRAM(VRAMSubregion_TexturePalette, &data_020e7af8, data_021077fc, 0x20, true, true);

    for (slot = 0; slot < 0x80; slot++) {
#if defined(jpn)
        func_02041bbc(window + 0x888 + slot * 0x1c);
        *(unsigned char*)(window + slot + 0x1688) = 0;
#else
        func_020416c0((struct Struct_0204166c*)(window + 0x9b8 + slot * 0x1c));
        *(unsigned char*)(window + slot + 0x17b8) = 0;
#endif
    }

#if defined(jpn)
    if (*(void**)(window + 0x1c4c)) {
        *(unsigned char*)(window + 0x1789) = 0;
        unsigned short* code = *(unsigned short**)(data_020efd90 + 0x64);
        for (int i = 0; i < 14; i++, code++) {
            func_02046530(window, code, func_02043014(12, code), 12);
            *(unsigned char*)(window + 0x1688 + i) = 1;
        }
    }
#endif
    func_020439b0(window, 0);
}
