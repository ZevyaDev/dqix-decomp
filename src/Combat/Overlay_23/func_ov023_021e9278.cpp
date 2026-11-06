#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);

// USA: func_ov023_021e9278
extern "C" ARM int func_ov023_021e9278(void* arg0) {
    char var0[0xb0];
    GetBattleRecords_020ac4c0(var0);
    int var1 = 0;
    int var2 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    unsigned int var3 = *(unsigned int*)(var0 + 0x4c + (var2 / 32) * 4);
    if (var3 & (1 << (var2 % 32))) {
        var1 = 1;
    }
    if (var1 != 0) {
        SetScriptRefInt_ov017_021d6134((char*)arg0 + 8, 1);
    } else {
        SetScriptRefInt_ov017_021d6134((char*)arg0 + 8, 0);
    }
    return 1;
}
