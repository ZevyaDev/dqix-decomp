#include <globaldefs.h>
extern "C" int GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4*);

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" void func_020e321c(void*, int, int);

// USA: func_020e3328
extern "C" ARM void func_020e3328(void* arg0, int arg1) {
    void* var0 = GetLocalWireless_0202ae18();
    if (IsLocalWirelessOn_0202b7d8((int*)var0)) {
        int var1 = GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)(var0));
        func_020e321c(arg0, arg1, var1 & 0xff);
    }
}
