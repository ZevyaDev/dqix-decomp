#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"

#if defined(jpn)
#define func_020100bc func_0200ff18
#endif

struct Struct_ov025_021e2980 {
    unsigned char unknown_0_[8];
    const char* unknown_8_;
    unsigned short unknown_c_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};
struct Struct_ov025_021e2980_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_;
};
struct Struct_ov025_021e2980_3 {
    Object3D unknown_0_;
    unsigned char unknown_ac_[0x12];
    unsigned char unknown_be_;
};
struct Struct_ov025_021ef988_4 {
#if defined(jpn)
    unsigned char unknown_0_[0xc];
#else
    unsigned char unknown1_0_[0x1c];
#endif

    unsigned int unknown_1c_;
};
struct Struct_ov025_021e2980_4 {
#if defined(jpn)
    unsigned char unknown_0_[0x71c4];
#else
    unsigned char unknown1_0_[0x6fd4];
#endif

    unsigned char unknown_6fd4_;
};
struct Struct_0204a438;
struct Struct_0202df68;
struct Combatant_02048c90;
struct Struct_02010604;
struct SoundEffectManager_02108760;
extern Struct_ov025_021ef988_4 data_ov025_021ef988;
extern char data_ov025_021ef7d9[];
extern char data_ov025_021ef7df[];
extern char data_ov025_021ef7e6[];
extern SoundEffectManager_02108760 gSoundEffectManager_02108760;
extern "C" int GetCameraClassFlags_0202e09c(int);
extern "C" Object3D* func_0204a438(Struct_0204a438*);
extern "C" void SetCameraFieldOfView_0202e9a4(Struct_0202df68*, int);
extern "C" void func_0204a170(int);
extern "C" int CollectObjectIndicesBySelector_ov000_021820bc(void*, int, int, int);
extern "C" void ClearCombatantPath_02048c90(Combatant_02048c90*);
extern "C" void StopCombatantSidestep_02049ae4(unsigned char*);
extern "C" void SetMotion_02033b88(Struct_02010604*, int);
extern "C" Struct_ov025_021e2980_4* GetBattleScene_ov000_02160130();
extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760*, int, int);

// USA: RunBACTSetAnimationCommand_ov025_021e2980
extern "C" ARM int RunBACTSetAnimationCommand_ov025_021e2980(Struct_ov025_021e2980* command, Struct_ov025_021e2980_2* action, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    if (command->unknown_e_ == 0x19) {
        void* var1 = func_020100bc(var0);
        if (GetCameraClassFlags_0202e09c((int)var1) & 0x10) {
            Object3D* var2 = func_0204a438((Struct_0204a438*)var1);
            if (var2) {
                SetCameraFieldOfView_0202e9a4((Struct_0202df68*)var1, 0xf000);
                var2->MaybeSetRegularAnimation(command->unknown_8_, command->unknown_c_);
                func_0204a170((int)var1);
                data_ov025_021ef988.unknown_1c_ |= 8;
            }
        }
    } else {
        int var3[8];
        int var4 = CollectObjectIndicesBySelector_ov000_021820bc(arg3, (int)action, command->unknown_e_, (int)var3);
        if (!var4) return 1;
        for (int var5 = 0; var5 < var4; var5++) {
            Struct_ov025_021e2980_3* var6 = (Struct_ov025_021e2980_3*)var0->GetGameObjectByIndex(var3[var5]);
            if (!var6) continue;
            if (var6->unknown_0_.unknown_0_ & 0x80) {
                ClearCombatantPath_02048c90((Combatant_02048c90*)var6);
                StopCombatantSidestep_02049ae4((unsigned char*)var6);
                int var7 = var6->unknown_be_;
                if (var7 != 0 && var7 != 4 && var7 != 6)
                    SetMotion_02033b88((Struct_02010604*)var6, 0);
            }
            var6->unknown_0_.SetAnimationPlaybackSpeed(0x1000, 0);
            var6->unknown_0_.SkipAnimationTransition();
            if (!var6->unknown_0_.MaybeSetRegularAnimation(command->unknown_8_, command->unknown_c_) &&
                strcmp(command->unknown_8_, data_ov025_021ef7d9) == 0) {
                if (!var6->unknown_0_.MaybeSetRegularAnimation(data_ov025_021ef7df, command->unknown_c_))
                    var6->unknown_0_.MaybeSetRegularAnimation(data_ov025_021ef7e6, command->unknown_c_);
            }
        }
        LightingManager* var8 = LightingManager::GetInstance();
        if (!(command->unknown_f_ & 2) && action->unknown_0_ != 1 && action->unknown_0_ != 2 && action->unknown_0_ != 0xdb) {
            Struct_ov025_021e2980_4* var9 = GetBattleScene_ov000_02160130();
            if (!var9->unknown_6fd4_) {
                var8->BeginFade(0x999, 300);
                var9->unknown_6fd4_ = 1;
            }
        }
        const char* var10 = command->unknown_8_;
        if (strcmp(var10, data_ov025_021ef7e6) == 0 ||
            strcmp(var10, data_ov025_021ef7d9) == 0 ||
            strcmp(var10, data_ov025_021ef7df) == 0) {
            if (!(command->unknown_f_ & 1)) {
                if (action->unknown_a_ & 1) PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 0x66, 0);
                else PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 0x64, 0);
            }
            var8->BeginFade(0x4cc, 1000);
            data_ov025_021ef988.unknown_1c_ |= 0x200;
        } else {
            data_ov025_021ef988.unknown_1c_ |= 1;
        }
    }
    data_ov025_021ef988.unknown_1c_ |= 4;
    return 1;
}
