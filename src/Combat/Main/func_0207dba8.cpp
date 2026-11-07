#include <globaldefs.h>

#include "GameState/GameState.h"

struct LocalWireless_0202b2f0;

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void);
extern "C" int IsLocalWirelessPlayerDisconnected_0202c578(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" void func_0207dcf0(int arg0);
extern "C" int CompareBytes_02001aec(void* left, void* right, int count);
extern "C" void func_ov017_021c9c64(int arg0, int arg1);

struct Struct_0207d798 {
    unsigned short unknown_0_;
    short unknown_2_;
    signed char unknown_4_;
    char unknown_5_;
    unsigned short unknown_6_;
    signed char unknown_8_[4];
};
extern "C" void func_0207d7c0(struct Struct_0207d798* arg0);

extern int data_020e8a4c;

// USA: func_0207dba8
extern "C" ARM void func_0207dba8(struct Struct_0207d798* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0207d798* var1 = arg0;
    int var2 = 0;
    int var3 = var2;
    int var4 = 1;
    int var5 = var2;
    int var6 = -1;
    for (; var2 < 4; var2++, var1++) {
        unsigned short var7 = var1->unknown_0_;
        if (var7 != 0 && var1->unknown_4_ < 0) {
            if (var1->unknown_6_ < 0x3e8) {
                var1->unknown_6_ = var1->unknown_6_ + var0->GetEffectiveDeltaTime();
            } else {
                int var8 = (CompareBytes_02001aec(var1->unknown_8_, &data_020e8a4c, 4) == 0);
                if (var8) {
                    func_ov017_021c9c64(var7, 0);
                    func_0207d7c0(var1);
                }
            }
        } else {
            var1->unknown_6_ = (unsigned short)var3;
        }
    }
    struct LocalWireless_0202b2f0* var9 = (struct LocalWireless_0202b2f0*)GetLocalWireless_0202ae18();
    if (IsNotLocalWirelessGuest_0202c508() == 0) return;
    int var10;
    for (var10 = var4; var10 < 4; var10++) {
        if (!IsLocalWirelessPlayerDisconnected_0202c578(var9, var10)) continue;
        struct Struct_0207d798* var11 = arg0;
        int var12;
        for (var12 = var5; var12 < 4; var11++, var12++) {
            signed char* var13 = var11->unknown_8_;
            if (var11->unknown_0_ == 0) continue;
            if (var13[var10] != var6) continue;
            var13[var10] = (signed char)var5;
            func_0207dcf0(var11->unknown_0_);
        }
    }
}
