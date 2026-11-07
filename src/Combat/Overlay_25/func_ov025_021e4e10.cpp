#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_02160f14(void* arg0);
extern "C" void ResetBattleCamera_ov000_0216d370(int camera, int resetRoll, int resetFieldOfView, int resetTurns);
extern "C" void* GetBattleScene_ov000_02160130(void);
extern "C" void SetCamera_020100c4(GameState* gameState, int camera);
struct Vector3i;
extern "C" void SetCameraOrbitFromArray_0202e694(void* camera, int* orbit);

struct Struct_ov025_021e4e10 {
    unsigned int unknown_0_[3];
};

struct Struct_ov025_021e4e10_2 {
    char unknown_0_[0x10];
    struct Struct_ov025_021e4e10 unknown_10_;
    char unknown_1c_[0x70 - 0x1c];
    struct Struct_ov025_021e4e10 unknown_70_;
};

// USA: func_ov025_021e4e10
extern "C" ARM int func_ov025_021e4e10(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetBattleScene_ov000_02160130();
    struct Struct_ov025_021e4e10_2* var2 = (struct Struct_ov025_021e4e10_2*)GetCamera_020100bc(var0);
    struct Struct_ov025_021e4e10 var3 = var2->unknown_10_;
    struct Struct_ov025_021e4e10 var4 = var2->unknown_70_;
    int var5 = func_ov000_02160f14(var1);
    SetCamera_020100c4(var0, var5);
    ResetBattleCamera_ov000_0216d370(var5, 1, 1, 1);
    struct Struct_ov025_021e4e10_2* var6 = (struct Struct_ov025_021e4e10_2*)GetCamera_020100bc(var0);
    *(Vector3i*)((int*)&var6->unknown_10_) = *(Vector3i const*)((int*)&var3);
    SetCameraOrbitFromArray_0202e694(var6, (int*)&var4);
    return 1;
}
