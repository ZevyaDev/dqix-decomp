#include <globaldefs.h>

extern char data_020fe9cc;
extern "C" void DC_FlushRange(const void* addr, unsigned int size);
extern "C" void LoadToMainBG1ScreenData(void* p, int a, int b);

// USA: func_0202adf0
extern "C" ARM void func_0202adf0() {
    DC_FlushRange((const void*)((int)&data_020fe9cc), 0x600);
    LoadToMainBG1ScreenData(&data_020fe9cc, 0, 0x600);
}
