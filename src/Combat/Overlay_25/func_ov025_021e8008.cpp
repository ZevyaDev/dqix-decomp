#include <globaldefs.h>

extern int gMusicManager_02109bf4;
extern "C" void PlayJingle_0209c6d8(void*, int);

// USA: func_ov025_021e8008
extern "C" ARM int func_ov025_021e8008(void* arg0) {
    PlayJingle_0209c6d8(&gMusicManager_02109bf4, *(int*)((char*)arg0 + 0x8));
    return 1;
}
