#include <globaldefs.h>

struct Struct_ov023_021e9910 {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 14;
    unsigned int unknown_d_6_ : 14;
};

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: func_ov023_021e9910
extern "C" ARM int func_ov023_021e9910(void* arg0) {
    char var0[0xb0];
    GetBattleRecords_020ac4c0(var0);
    SetScriptRefInt_ov017_021d6134(arg0, ((struct Struct_ov023_021e9910*)var0)->unknown_d_6_);
    return 1;
}
