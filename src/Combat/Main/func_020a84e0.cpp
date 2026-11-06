#include <globaldefs.h>
#include "GameState/GameState.h"

#include "World/Zone3D.h"
#include "Resource/GameResources.h"


struct GlobalFlags_02012de8 { unsigned int bits_0_; };

extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void* GetZone3D_02012fe4(void);
extern "C" void* GetFlagManager_0205ec34(void);
extern "C" void* GetParty_02010828(GameState* gameState);
extern "C" int TestGlobalFlags_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask);
extern "C" int func_02094b5c(void* arg0, int arg1);
extern "C" unsigned char GetOwnPartyLeaderObjectIndex_020100b0(GameState* gameState);
extern "C" void func_020a8ac8(unsigned char* arg0, int arg1);
extern "C" void func_020a8c4c(void* arg0, unsigned char arg1);
extern "C" void func_020a8b0c(void* arg0, int arg1);
extern "C" void func_020a8d08(void* arg0, int arg1);
extern "C" void func_020a87d0(void* arg0);
struct Struct_020a84e0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};
extern "C" void func_020a8874(struct Struct_020a84e0* arg0);
extern "C" void func_020a88e8(void* arg0);
extern "C" void func_020aeb34(void);
extern "C" int IsFlagSet_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);

// USA: func_020a84e0
extern "C" ARM void func_020a84e0() {
    GameState* var0 = GameState::GetInstance();
    GetGameResources();
    struct GlobalFlags_02012de8* var1 = (struct GlobalFlags_02012de8*)GetGlobalFlags_020d6c00();
    Zone3D* var2 = (Zone3D*)GetZone3D_02012fe4();
    int var3 = (int)GetFlagManager_0205ec34();
    unsigned char* var4;
    int var5;
    GameObject* var6;
    int var7 = 0;
    for (;;) {
        Struct_020134e0::Struct_02018300* var8 = func_0201e664(&var2->substruct_6c_, var7);
        var7++;
        if (!var8) {
            break;
        }
        if (var8->unknown_4_ != 0xc) {
            continue;
        }
        unsigned char* var9 = (unsigned char*)&var8->unknown_2c_.unknown7_0_;
        var4 = (unsigned char*)GetParty_02010828(var0);
        var5 = 0;
        while (var5 < *(unsigned char*)(var4 + 0xf7c)) {
            var6 = var0->GetPartyMemberByIndex(*(unsigned char*)(var4 + 0xf78 + var5));
            if (var6) {
                if (!TestGlobalFlags_02046708(var1, 0x200000) &&
                    func_02094b5c(var8, var6->obj3D_.unknown_4_) != 0) {
                    switch (var9[0]) {
                    case 2:
                        func_020a8ac8(var9, var6->obj3D_.unknown_4_ & 0xff);
                        break;
                    case 3:
                        func_020a8c4c(var9, var6->obj3D_.unknown_4_ & 0xff);
                        break;
                    }
                }
                switch (var9[0]) {
                case 2:
                    func_020a8b0c(var9, var6->obj3D_.unknown_4_ & 0xff);
                    break;
                case 3:
                    func_020a8d08(var9, var6->obj3D_.unknown_4_ & 0xff);
                    break;
                }
            }
            var5++;
        }
        if (!TestGlobalFlags_02046708(var1, 0x200000) &&
            func_02094b5c(var8, GetOwnPartyLeaderObjectIndex_020100b0(var0)) != 0) {
            if (var9[0] == 1) {
                func_020a87d0(var9);
            }
        } else {
            if (var9[0] == 1) {
                func_020a8874((struct Struct_020a84e0*)var9);
            }
        }
        if (var9[0] == 1) {
            func_020a88e8(var9);
        }
    }
    if (var2->currentZoneID_ != 0x1644) {
        return;
    }
    if (IsFlagSet_0206dfb0(var3, (unsigned char*)var3 + 0x8c, 0x384) == 0) {
        return;
    }
    func_020aeb34();
}
