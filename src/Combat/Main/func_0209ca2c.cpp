#include <globaldefs.h>

extern "C" int func_020bc0a4(int);

// USA: IsJinglePlaying_0209ca2c
extern "C" ARM int IsJinglePlaying_0209ca2c(void* manager) {
    short jingleIndex = *(short*)((char*)manager + 0xce);
    if (jingleIndex < 0) return 0;
    if (*(unsigned char*)((char*)manager + 0xc9) != 0) return 1;
    return func_020bc0a4(jingleIndex) > 0;
}
