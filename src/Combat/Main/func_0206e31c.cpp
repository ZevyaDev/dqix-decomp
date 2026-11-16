#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(void* wireless);

// USA: func_0206e31c
extern "C" ARM int func_0206e31c(int arg0, int arg1) {
    if (IsLocalWirelessGuest_0202c540(func_0202ae18())) {
        if (arg1 < 0xae) return 0;
    }
    return 1;
}
