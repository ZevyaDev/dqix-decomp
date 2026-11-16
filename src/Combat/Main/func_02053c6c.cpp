#include <globaldefs.h>

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

// USA: func_02053c6c
extern "C" ARM int func_02053c6c(unsigned char* gameObject) {
#if defined(jpn)
    return *(int*)(gameObject + 0x144);
#else
    return *(int*)(gameObject + 0x150);
#endif
}
