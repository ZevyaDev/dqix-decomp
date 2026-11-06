#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020aba5c(int arg0);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(char* window);
extern "C" void* func_ov004_0216ae9c(void* arg0, int arg1);
extern "C" void func_ov023_021f8960(char* arg0, short arg1, unsigned short arg2);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);
extern "C" void func_02012028(void* arg0, unsigned char arg1);

// USA: func_ov004_0216e414
extern "C" ARM int func_ov004_0216e414(void* arg0) {
    if (func_020aba5c(1) == 0) {
        char* var0 = (char*)GetMessageWindow_020421a0();
        ResetMessageWindow_02043204(var0);
        CloseMessageWindow_02043124(var0);
        void* var1 = func_ov004_0216ae9c(arg0, 0xd4);
        func_ov023_021f8960((char*)var1, 0, 7);
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0x1f5);
    } else {
        func_02012028((void*)GameState::GetInstance(), 1);
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0x3e7);
    }
    return 0;
}
