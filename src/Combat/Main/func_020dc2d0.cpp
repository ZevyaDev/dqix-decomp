#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" {
    void* func_0202ae18(GrottoStruct* arg0);
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
extern "C" int* GetNoticeQueue_020936f8(void);
extern "C" void func_020941b0(struct Struct_02093b90_2* arg0);
extern "C" void* func_020d6c00(void);
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type);

#if defined(jpn)
enum { Enum_020dc2d0_1788 = 0x4ec };
#else
enum { Enum_020dc2d0_1788 = 0x6fc };
#endif

// USA: RestartMapDisplay_020dc2d0
extern "C" ARM void RestartMapDisplay_020dc2d0(int modeOverride) {
    GameState* gameState = GameState::GetInstance();
    GrottoStruct* grotto = gameState->GetGrottoStruct();
    void* wireless = func_0202ae18(grotto);
    void* zone = GetZone3D_02012fe4();
    int isTreasureMapMode;
    int isWorldMapMode;
    Struct_020dc2d0* currentMap = *(Struct_020dc2d0**)((char*)zone + 0x8);

    int gameResources = ((int)GetGameResources());
    isTreasureMapMode = 0;
    void* queue = *(void**)(gameResources + 0x3000 + Enum_020dc2d0_1788);
    isWorldMapMode = isTreasureMapMode;

    int isTreasureMapTaskQueued = IsTypeInQueue_02046b60((Queue_02038598_5*)queue, 0x43);
    if (isTreasureMapTaskQueued) {
        isTreasureMapMode = 1;
    }

    if (grotto->unknown_0[0] != 0 && grotto->unknown_0[1] != 0) {
        if (IsNotLocalWirelessGuest_0202c508(wireless) != 0 && currentMap != NULL) {
            if (currentMap->unknown_c_0_ == 0) {
                isTreasureMapMode = 1;
            }
        }
    }

    if (modeOverride == 1) {
        isTreasureMapMode = 1;
    } else if (modeOverride == 2) {
        isTreasureMapMode = 0;
    } else if (modeOverride == 3) {
        isWorldMapMode = 1;
    }

    if (isTreasureMapMode) {
        func_020dc214(1);
    } else if (isWorldMapMode) {
        func_020dc214(2);
    } else {
        func_020dc214(0);
    }

    func_020941b0((Struct_02093b90_2*)GetNoticeQueue_020936f8());
    ClearGlobalFlags_020466f4((GlobalFlags_02038598_4*)func_020d6c00(), 0x41);
}
