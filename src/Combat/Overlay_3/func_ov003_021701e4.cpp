#include <globaldefs.h>

#if defined(jpn)
extern "C" char* GetMessageWindow_020421a0(void);
extern "C" int FindStringInTable_020e0434(int stringTable, short stringId);
extern "C" void StartMessage_0204500c(char* window, int text, int arg2);

// JPN: func_ov003_021701e4
extern "C" ARM void func_ov003_021701e4(void* arg0, int arg1) {
    char* var0 = GetMessageWindow_020421a0();
    StartMessage_0204500c(var0, FindStringInTable_020e0434(*(int*)((char*)arg0 + 0xd8), arg1), 0);
    var0[0x17e2] = 1;
    *(int*)(var0 + 0x86c) = 2;
}
#endif
