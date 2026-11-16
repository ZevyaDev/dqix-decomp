#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void*);
extern "C" void func_020e3748(unsigned char* arg0, int arg1);
extern "C" void func_ov017_021ced48(int, int);

// USA: func_020e3798
extern "C" ARM void func_020e3798(unsigned char* arg0) {
    void* var0 = func_0202ae18();
    if (!IsLocalWirelessOn_0202b7d8((int*)var0)) return;
    arg0[2] = 0;
    if (IsNotLocalWirelessGuest_0202c508(var0)) {
        func_020e3748(arg0, 0);
        return;
    }
    func_ov017_021ced48(2, 0);
}
