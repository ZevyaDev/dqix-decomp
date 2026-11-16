#include <globaldefs.h>
#include "Graphics/TextureArena.h"

struct Struct_ov011_02184374;
extern "C" void func_ov011_02184374(Struct_ov011_02184374* arg0);

struct TextureVRAMArea_0203d028;

struct TextureVRAMArea_02015ef4_5;

// USA: func_ov011_02184640
extern "C" ARM void func_ov011_02184640(char* arg0, char* arg1) {
    func_ov011_02184374((Struct_ov011_02184374*)(arg0 + 0x20));
    ((TextureArena*)((TextureVRAMArea_0203d028*)arg1))->Reset();
    ((TextureArena*)((TextureVRAMArea_02015ef4_5*)arg1))->CreateDescendant((TextureArena*)((TextureVRAMArea_02015ef4_5*)(arg0 + 0x24)));
}
