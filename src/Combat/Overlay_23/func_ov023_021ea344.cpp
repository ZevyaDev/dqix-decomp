#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

struct Struct_ov023_021ea344 { unsigned int unknown_0_0_ : 24; };

// USA: func_ov023_021ea344
extern "C" ARM int func_ov023_021ea344(void* arg0) {
    unsigned char var0[0xb0];
    GetBattleRecords_020ac4c0(var0);
    struct Struct_ov023_021ea344* var1 = (struct Struct_ov023_021ea344*)(var0 + 0x88);
    SetScriptRefInt_ov017_021d6134(arg0, var1->unknown_0_0_);
    return 1;
}
