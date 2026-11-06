#include <globaldefs.h>

struct Struct_ov023_021ea278 {
    char unknown_0_[0x80];
    unsigned int unknown_80_0_ : 16;
};

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: func_ov023_021ea278
extern "C" ARM int func_ov023_021ea278(void* arg0) {
    char var0[0xb0];
    GetBattleRecords_020ac4c0(var0);
    SetScriptRefInt_ov017_021d6134(arg0, ((struct Struct_ov023_021ea278*)var0)->unknown_80_0_);
    return 1;
}
