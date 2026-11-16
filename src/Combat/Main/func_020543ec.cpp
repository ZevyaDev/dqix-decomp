#include <globaldefs.h>
#include "Graphics/TextureArena.h"

struct TextureVRAMArea_0203d028;

struct Struct_020e7ce0 { int unknown_0_; int unknown_4_; };
extern struct Struct_020e7ce0 data_020e7ce0[];
extern struct Struct_020e7ce0 data_020e7ce4[];

// USA: func_020543ec
extern "C" ARM void func_020543ec(char* arg0, char* arg1) {
    int var0;
    ((TextureArena*)((struct TextureVRAMArea_0203d028*)arg1))->Reset();
    ((TextureArena*)(arg1))->Restore();
    for (var0 = 0; var0 < 10; var0++) {
        ((TextureArena*)(arg0 + 0xcc + var0 * 0x70))->Initialize(data_020e7ce0[var0].unknown_0_, data_020e7ce4[var0].unknown_0_);
    }
    ((TextureArena*)(arg0 + 0x168 + 0x400))->Initialize(0x240, 0x20);
    ((TextureArena*)(arg1))->Save();
}
