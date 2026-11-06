#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: func_ov023_021ea8e8
extern "C" ARM int func_ov023_021ea8e8(void* arg0) {
    if (IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18()) != 0) {
        SetScriptRefInt_ov017_021d6134(arg0, 1);
    } else {
        SetScriptRefInt_ov017_021d6134(arg0, 0);
    }
    return 1;
}
