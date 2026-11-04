#include <globaldefs.h>

#if defined(jpn)
extern "C" int func_020e0484(void* arg0, void* arg1, const char* arg2, short* arg3, unsigned short arg4, bool arg5);

// JPN: func_020e04f8
extern "C" ARM int func_020e04f8(void* arg0, void* arg1, const char* arg2, short arg3, bool arg4) {
    return func_020e0484(arg0, arg1, arg2, &arg3, 1, arg4);
}
#endif
