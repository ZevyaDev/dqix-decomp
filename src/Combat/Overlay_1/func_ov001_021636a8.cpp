#include <globaldefs.h>

extern "C" void func_0209c5e8(void*);
extern "C" void SetMusicVolume_0209c2e0(void*, int, int);
extern void* gMusicManager_02109bf4;

// USA: func_ov001_021636a8
extern "C" ARM int func_ov001_021636a8(void) {
    func_0209c5e8(&gMusicManager_02109bf4);
    SetMusicVolume_0209c2e0(&gMusicManager_02109bf4, 0x7f, 0);
    return 1;
}
