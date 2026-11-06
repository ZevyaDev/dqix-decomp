#include <globaldefs.h>

struct Struct_020dbdc0;
extern "C" void func_020dbf70(struct Struct_020dbdc0* arg0);
extern "C" int GetEffectManager_02057924(void);
extern "C" void RemoveEffectResource_02057f00(int effectManager, int effectId);

struct Struct_020dbebc {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020dbedc
extern "C" ARM void func_020dbedc(struct Struct_020dbebc* arg0) {
    int var0 = arg0->unknown_10_;
    if (var0 == 1) {
        func_020dbf70((struct Struct_020dbdc0*)arg0);
        return;
    }
    if (var0 != 2) return;
    RemoveEffectResource_02057f00(GetEffectManager_02057924(), arg0->unknown_8_);
    arg0->unknown_10_ = 0;
}
