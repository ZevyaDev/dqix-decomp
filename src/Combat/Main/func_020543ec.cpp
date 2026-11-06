#include <globaldefs.h>

struct TextureVRAMArea_0203d028;
extern "C" ARM void ResetTextureVRAMState_0207df50(struct TextureVRAMArea_0203d028 *area);
extern "C" ARM void RestoreTextureVRAMState_0207df90(char* area);
extern "C" ARM void SaveTextureVRAMState_0207dfac(char* area);
extern "C" void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize);

struct Struct_020e7ce0 { int unknown_0_; int unknown_4_; };
extern struct Struct_020e7ce0 data_020e7ce0[];
extern struct Struct_020e7ce0 data_020e7ce4[];

// USA: func_020543ec
extern "C" ARM void func_020543ec(char* arg0, char* arg1) {
    int var0;
    ResetTextureVRAMState_0207df50((struct TextureVRAMArea_0203d028*)arg1);
    RestoreTextureVRAMState_0207df90(arg1);
    for (var0 = 0; var0 < 10; var0++) {
        InitTextureVRAMArea_0207de48(arg0 + 0xcc + var0 * 0x70, data_020e7ce0[var0].unknown_0_, data_020e7ce4[var0].unknown_0_);
    }
    InitTextureVRAMArea_0207de48(arg0 + 0x168 + 0x400, 0x240, 0x20);
    SaveTextureVRAMState_0207dfac(arg1);
}
