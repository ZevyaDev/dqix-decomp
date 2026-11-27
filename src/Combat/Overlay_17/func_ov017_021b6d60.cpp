#if defined(jpn)
enum { Enum_ov017_021b6d60_340 = 0x148, Enum_ov017_021b6d60_47 = 0xb, Enum_ov017_021b6d60_860 = 0x13c };
#else
enum { Enum_ov017_021b6d60_340 = 0x154, Enum_ov017_021b6d60_47 = 0x2f, Enum_ov017_021b6d60_860 = 0x35c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct Struct_02052e2c;

struct Struct_ov017_021b6d60 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[Enum_ov017_021b6d60_47];
};

extern "C" void InitPattyMember_02086404(void* pattyMember);
extern "C" int func_02053c6c(unsigned char* gameObject);
extern "C" short* GetAppearance_02052e2c(struct Struct_02052e2c* gameObject);
extern "C" void BuildPattyMember_020830cc(void* memberData, void* pattyMember);
extern "C" int GetResources_0200fb8c(int* gameState);
extern "C" void InitPartyMemberData_02082828(void* memberData);
extern "C" void func_020545ac(short* arg0);
extern "C" void func_ov017_02190264(int arg0, int arg1);
extern "C" void RebuildFieldPartyOrder_ov017_02191108(int, int, int, int, int);
extern "C" void RebuildPartyOrders_ov017_02191234(int gameResources);
extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);
extern "C" void func_ov017_021cc68c(int arg0);

// USA: func_ov017_021b6d60
extern "C" ARM int func_ov017_021b6d60(int arg0, void* arg1) {
    InitPattyMember_02086404(arg1);
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, arg0);
    if (var1 == NULL) {
        return 0;
    }
    void* var2 = (void*)func_02053c6c((unsigned char*)var1);
    short* var3 = GetAppearance_02052e2c((struct Struct_02052e2c*)var1);
    if (var2 == NULL) {
        return 0;
    }
    if (var3 == NULL) {
        return 0;
    }
    BuildPattyMember_020830cc(var2, arg1);
    int var4 = GetResources_0200fb8c((int*)var0);
    InitPartyMemberData_02082828(var2);
    short* var5 = *(short**)((char*)var1 + Enum_ov017_021b6d60_340);
    if (var5 != NULL) {
        func_020545ac(var5);
    }
    func_ov017_02190264(var4, arg0);
    RebuildFieldPartyOrder_ov017_02191108(var4, 1, 1, 1, 1);
    RebuildPartyOrders_ov017_02191234(var4);
    struct Struct_ov017_021b6d60* var6 = (struct Struct_ov017_021b6d60*)(((char*)var4 + Enum_ov017_021b6d60_860) + 0x4000);
    var6 += arg0;
    var6->unknown_0_ = 0;
    void* var7 = func_0202ae18();
    if (IsLocalWirelessOn_0202b7d8((int*)var7)) {
        if (IsNotLocalWirelessGuest_0202c508(var7)) {
            func_ov017_021cc68c(arg0);
        }
    }
    return arg1 != NULL;
}
