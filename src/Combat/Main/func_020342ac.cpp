#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "Resource/GameResources.h"

extern "C" void* GetLocalWireless_0202ae18(void* arg0);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);
struct Struct_0202b2f0;
struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);

struct Struct_020342ac {
    unsigned char unknown_0_0_ : 2;
};

// USA: func_020342ac
extern "C" ARM int func_020342ac(void* arg0) {
    void* var0 = GetLocalWireless_0202ae18(arg0);
    GetGameResources();
    if (!IsLocalWirelessOn_0202b7d8((int*)var0)) {
        goto fallback;
    }
    if (!IsNotLocalWirelessGuest_0202c508(var0)) {
        goto fallback;
    }
    short var1 = *(short*)((char*)arg0 + 4);
    if (!func_0202c178((struct Struct_0202b2f0*)var0, var1)) {
        goto fallback;
    }
    var1 = *(short*)((char*)arg0 + 4);
    signed char var2 = GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)var0);
    if (var2 == var1) {
        goto fallback;
    }
    Struct_020342ac* var3 = (Struct_020342ac*)((char*)arg0 + 0xc1);
    if (!(var3->unknown_0_0_ & 2)) {
        goto fallback;
    }
    var1 = *(short*)((char*)arg0 + 4);
    Struct_0202b2f0_2* var4 = func_0202c178((struct Struct_0202b2f0*)var0, var1);
    return var4->unknown_0_.unknown_1_0_;
fallback:
    return *(unsigned char*)((char*)arg0 + 0xbe);
}
