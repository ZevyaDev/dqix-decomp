#include <globaldefs.h>


extern "C" unsigned char* GetFlagManager_0205ec34(void);

// USA: func_020107dc
extern "C" ARM void func_020107dc(char* arg0, int arg1) {
    unsigned char* var0;
#if defined(jpn)
    *(int*)(arg0 + 0x5a58) = arg1;
#else
    *(int*)(arg0 + 0x5cb8) = arg1;
#endif
    var0 = GetFlagManager_0205ec34();
    var0 += var0[0x332] * 0x1c;
    var0[2] = (unsigned char)arg1;
}
