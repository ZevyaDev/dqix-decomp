#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021ea14c
extern "C" ARM int func_ov023_021ea14c(void* arg0) {
    unsigned char var0[0xb0];
    GetBattleRecords_020ac4c0(var0);
    unsigned int var1 = *(unsigned int*)(var0 + 0x74);
    SetScriptRefInt_ov017_021d6134(arg0, var1 >> 0x10);
    return 1;
}
