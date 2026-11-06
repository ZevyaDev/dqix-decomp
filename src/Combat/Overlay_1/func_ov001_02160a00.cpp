#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void*);
extern "C" void func_ov017_021d6134(void*, int);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);

// USA: func_ov001_02160a00
extern "C" ARM int func_ov001_02160a00(void* arg0) {
    void* var0 = GetLocalWireless_0202ae18(arg0);
    int var1;
    if (!IsLocalWirelessOn_0202b7d8((int*)var0)) {
        goto setOne;
    }
    if (GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)var0) != 0) {
        goto setZero;
    }
setOne:
    var1 = 1;
    goto call;
setZero:
    var1 = 0;
call:
    func_ov017_021d6134(arg0, var1);
    return 1;
}
