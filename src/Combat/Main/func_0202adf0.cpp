#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern char data_020fe9cc;
extern "C" void LoadToMainBG1ScreenData(void* p, int a, int b);

// USA: func_0202adf0
extern "C" ARM void func_0202adf0() {
    CleanInvalidateCacheRange((const void*)((const void*)((int)&data_020fe9cc)), 0x600);
    LoadToMainBG1ScreenData(&data_020fe9cc, 0, 0x600);
}
