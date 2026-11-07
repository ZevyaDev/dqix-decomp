#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetZoneEntry_0200fd0c(GameState* gameState);
extern "C" unsigned short* GetZone3D_02012fe4(void* arg0);
extern "C" void InitZoneEntry_02070378(char* zoneEntry);
struct Vector3i;

// USA: func_ov017_0219bcac
extern "C" ARM void func_ov017_0219bcac(unsigned char arg0) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)GetZoneEntry_0200fd0c(var0);
    unsigned short* var2 = GetZone3D_02012fe4(var1);
    char* var3 = (char*)var0->GetProtagonist();
    InitZoneEntry_02070378(var1);
    *(short*)(var1 + 0x0) = *var2;
    *(Vector3i*)((int*)(var1 + 0x10)) = *(Vector3i const*)((int*)(var3 + 0x44));
    *(short*)(var1 + 0x1c) = *(int*)(var3 + 0x54);
    *(unsigned char*)(var1 + 0x7) = 1;
    *(unsigned char*)(var1 + 0x2) = 1;
    *(unsigned char*)(var1 + 0x9) = 0;
    *(unsigned char*)(var1 + 0xa) = 1;
    *(unsigned char*)(var1 + 0x65) = arg0;
}
