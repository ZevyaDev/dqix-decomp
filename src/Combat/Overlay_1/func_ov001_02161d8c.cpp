#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_02161d8c
extern "C" ARM int func_ov001_02161d8c(void* arg0) {
    int var0 = IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18());
    func_ov017_021d6134(arg0, var0);
    return 1;
}
