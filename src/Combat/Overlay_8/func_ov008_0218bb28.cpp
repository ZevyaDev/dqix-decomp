#include <globaldefs.h>

#if defined(jpn)
extern "C" unsigned int strlen(const char* arg0);

// JPN: func_ov008_0218bb28
extern "C" ARM int func_ov008_0218bb28(void* arg0, const char* arg1) {
    return (0x58 - (int)(strlen(arg1) / 2) * 10) / 2;
}
#endif
