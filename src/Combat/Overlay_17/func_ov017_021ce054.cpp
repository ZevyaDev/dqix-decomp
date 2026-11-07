#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
unsigned long long GetCurrentTimestamp(void);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(void* wireless);
extern "C" void func_ov017_02191aac(char* arg0, int arg1, int arg2, unsigned char arg3);

struct Struct_ov017_021ce054 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    short unknown_6_;
    unsigned short unknown_8_;
};

// USA: func_ov017_021ce054
extern "C" ARM void func_ov017_021ce054(int arg0, struct Struct_ov017_021ce054* arg1, GameState* arg2, char* arg3) {
    int var0 = (arg0 >= 0) && (arg0 <= 3);
    if (!var0) return;
    GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(arg2, arg1->unknown_8_);
    if (!var1) return;
    unsigned char* var2 = (unsigned char*)GetPartyMemberData_02053c6c((unsigned char*)var1);
    void* var3 = GetLocalWireless_0202ae18();
    if (arg1->unknown_4_ != 1) return;
    if (arg1->unknown_6_ > 0) {
        func_ov017_02191aac(arg3, 1, var1->obj3D_.objectIndex_4_, 2);
        var2[0x56c] = 1;
        if (IsLocalWirelessGuest_0202c540(var3)) return;
        unsigned long long var4 = GetCurrentTimestamp();
        *(unsigned int*)(var2 + 0x480) = (unsigned int)var4;
        *(unsigned int*)(var2 + 0x484) = (unsigned int)(var4 >> 32);
    } else {
        var2[0x56c] = 0;
        func_ov017_02191aac(arg3, 0, var1->obj3D_.objectIndex_4_, 2);
    }
}
