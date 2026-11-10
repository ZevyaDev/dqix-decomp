#include <globaldefs.h>

struct Struct_020dab68 { int unknown_0_; int unknown_4_; };

extern "C" void RestoreTextureVRAMState_0207df90(char* area);
extern "C" void SaveTextureVRAMState_0207dfac(char* area);
extern "C" int GetEffectManager_02057924(void);
extern "C" int AddEffectResource_02057e6c(int, int, int, int, int, int);

// USA: func_020dab68
extern "C" ARM int func_020dab68(struct Struct_020dab68* arg0, int arg1, int arg2) {
    int var0 = GetEffectManager_02057924();
    int var1 = arg0->unknown_0_;
    int var2 = arg0->unknown_4_;
    if (var0 && var1 && var2) {
        RestoreTextureVRAMState_0207df90((char*)var2);
        AddEffectResource_02057e6c(var0, 0x16, var1, arg1, arg2, var2);
        SaveTextureVRAMState_0207dfac((char*)var2);
        return 1;
    }
    return 0;
}
