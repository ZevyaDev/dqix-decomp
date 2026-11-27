#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void IsInsideZoneFeature_02094b9c(void* feature, void* position);

struct Struct_02094b5c { unsigned int unknown_0_[3]; };

// USA: func_02094b5c
extern "C" ARM void func_02094b5c(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetGameObjectByIndex(arg1);
    struct Struct_02094b5c var2 = *(struct Struct_02094b5c*)((char*)var1 + 0x44);
    IsInsideZoneFeature_02094b9c(arg0, &var2);
}
