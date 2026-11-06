#include <globaldefs.h>
#include "Combat/MapDisplay.h"

struct TextWindowManager_0205cfd4;
extern "C" void InitTextWindowManager_0205cfd4(struct TextWindowManager_0205cfd4* windowManager);

extern "C" void InitBGLayer_0204af64(struct BGLayer_02020cb8* layer);

extern "C" void InitTextWindow_0204c684(void*);

#if defined(jpn)
static const int kLayoutShift=0x220;
#else
static const int kLayoutShift=0;
#endif

// USA: func_ov017_021a5b48
extern "C" ARM void func_ov017_021a5b48(unsigned char* arg0) {
    InitTextWindowManager_0205cfd4(*(struct TextWindowManager_0205cfd4**)(arg0 + 0x4090 - kLayoutShift));
    for (int var0 = 0; var0 < 2; var0++) {
        InitBGLayer_0204af64((struct BGLayer_02020cb8*)(arg0 + 0x4094 - kLayoutShift + var0 * 0x20));
    }
    InitTextWindow_0204c684(arg0 + 0x40d4 - kLayoutShift);
    *(int*)(arg0 + 0x41b8 - kLayoutShift) = 0;
    *(int*)(arg0 + 0x41bc - kLayoutShift) = -1;
    *(int*)(arg0 + 0x41b4 - kLayoutShift) = 0;
    *(int*)(arg0 + 0x41c0 - kLayoutShift) = 0;
}
