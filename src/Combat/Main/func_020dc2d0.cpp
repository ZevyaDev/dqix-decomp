#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Resource/GameResources.h"

extern "C" {
    void* GetLocalWireless_0202ae18(GrottoStruct* arg0);
    int IsNotLocalWirelessGuest_0202c508(void* wireless);
    void* GetZone3D_02012fe4(void);
}

struct GlobalFlags_02038598_4;
struct Queue_02038598_5;
struct Struct_02093b90_2;

struct Struct_020dc2d0 {
    char unknown_0_[0xc];
    unsigned char unknown_c_0_ : 4;
    unsigned char unknown_c_4_ : 4;
};

extern "C" void func_020dc214(int arg0);
extern "C" int* func_020936f8(void);
extern "C" void func_020941b0(struct Struct_02093b90_2* arg0);
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type);

#if defined(jpn)
enum { Enum_020dc2d0_1788 = 0x4ec };
#else
enum { Enum_020dc2d0_1788 = 0x6fc };
#endif

// USA: func_020dc2d0
extern "C" ARM void func_020dc2d0(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GrottoStruct* var1 = var0->GetGrottoStruct();
    void* var2 = GetLocalWireless_0202ae18(var1);
    void* var3 = GetZone3D_02012fe4();
    int var4;
    int var5;
    Struct_020dc2d0* var6 = *(Struct_020dc2d0**)((char*)var3 + 0x8);

    int var7 = ((int)GetGameResources());
    var4 = 0;
    void* var8 = *(void**)(var7 + 0x3000 + Enum_020dc2d0_1788);
    var5 = var4;

    int var9 = IsTypeInQueue_02046b60((Queue_02038598_5*)var8, 0x43);
    if (var9) {
        var4 = 1;
    }

    if (var1->unknown_0[0] != 0 && var1->unknown_0[1] != 0) {
        if (IsNotLocalWirelessGuest_0202c508(var2) != 0 && var6 != NULL) {
            if (var6->unknown_c_0_ == 0) {
                var4 = 1;
            }
        }
    }

    if (arg0 == 1) {
        var4 = 1;
    } else if (arg0 == 2) {
        var4 = 0;
    } else if (arg0 == 3) {
        var5 = 1;
    }

    if (var4) {
        func_020dc214(1);
    } else if (var5) {
        func_020dc214(2);
    } else {
        func_020dc214(0);
    }

    func_020941b0((Struct_02093b90_2*)func_020936f8());
    ClearGlobalFlags_020466f4((GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 0x41);
}
