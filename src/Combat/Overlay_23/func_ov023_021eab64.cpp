#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

struct Struct_ov023_021eab64 { unsigned short unknown_0_; unsigned char unknown_2_; };

// USA: func_ov023_021eab64
extern "C" ARM int func_ov023_021eab64(void* arg0) {
    char var0[0xb0];
    GetBattleRecords_020ac4c0(var0);
    struct Struct_ov023_021eab64* var1 = (struct Struct_ov023_021eab64*)(var0 + 0x94);
    SetScriptRefInt_ov017_021d6134(arg0, var1->unknown_0_);
    SetScriptRefInt_ov017_021d6134((char*)arg0 + 0x8, var1->unknown_2_);
    return 1;
}
