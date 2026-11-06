#include <globaldefs.h>
#include "Resource/Brightness.h"
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" void func_02094654(void* arg0);
extern "C" void func_020947f0(void* arg0);

extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

struct Queue_02038598_5;
extern "C" int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type);

extern "C" void* GetGlobalFlags_020d6c00(void);

struct GlobalFlags_02012de8;
extern "C" int TestGlobalFlags_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask);

struct Struct_02093f68 {
    char unknown_0_[(IS_JPN ? 0x139 : 0x3c9)];
    bool unknown_3c9_0_ : 1;
};

// USA: func_02093f68
extern "C" ARM void func_02093f68(char* arg0) {
    int var0 = (int)GetGameResources();
    int var1 = *(int*)(var0 + (IS_JPN ? 0x34ec : 0x36fc));

    if (IsBrightnessOutsideValidRange((GameResources*)var0, true)) return;
    if (((unsigned char*)arg0)[(IS_JPN ? 0x13d : 0x3cd)] & 2) return;

    int var2 = (int)GetGameResources();

    if (IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18())
        || *(int*)(var2 + (IS_JPN ? 0x41e4 : 0x4494))
        || IsTypeInQueue_02046b60((struct Queue_02038598_5*)var1, 0x26)) {
        func_02094654(arg0);
    }

    if (TestGlobalFlags_02046708((struct GlobalFlags_02012de8*)GetGlobalFlags_020d6c00(), 0x8020)) return;
    if (!((struct Struct_02093f68*)arg0)->unknown_3c9_0_) return;
    if (arg0[(IS_JPN ? 0x13b : 0x3cb)] <= 0) return;

    unsigned char var3 = arg0[(IS_JPN ? 0x13d : 0x3cd)];
    if (var3 & 1) return;
    if (!(var3 & 4)) return;

    func_020947f0(arg0);
}
