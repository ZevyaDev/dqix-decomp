#include <globaldefs.h>

struct Struct_ov011_02184374;
extern "C" void func_ov011_02184374(Struct_ov011_02184374* arg0);

struct TextureVRAMArea_0203d028;
extern "C" void ResetTextureVRAMState_0207df50(TextureVRAMArea_0203d028* area);

struct TextureVRAMArea_02015ef4_5;
extern "C" void InitTextureVRAMAreaFromSaved_0207dfc8(TextureVRAMArea_02015ef4_5* sourceArea, TextureVRAMArea_02015ef4_5* area);

// USA: func_ov011_02184640
extern "C" ARM void func_ov011_02184640(char* arg0, char* arg1) {
    func_ov011_02184374((Struct_ov011_02184374*)(arg0 + 0x20));
    ResetTextureVRAMState_0207df50((TextureVRAMArea_0203d028*)arg1);
    InitTextureVRAMAreaFromSaved_0207dfc8((TextureVRAMArea_02015ef4_5*)arg1, (TextureVRAMArea_02015ef4_5*)(arg0 + 0x24));
}
