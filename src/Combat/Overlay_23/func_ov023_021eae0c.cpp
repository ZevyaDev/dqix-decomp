#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);

// USA: func_ov023_021eae0c
extern "C" ARM int func_ov023_021eae0c(void* arg0) {
    unsigned char var0[0xb0];
    GetBattleRecords_020ac4c0(var0);
    SetScriptRefInt_ov017_021d6134(arg0, *(int*)(var0 + 0xac));
    return 1;
}
