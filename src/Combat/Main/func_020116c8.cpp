#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020116c8_25572 = 0x6184, Enum_020116c8_25573 = 0x6185 };
#else
enum { Enum_020116c8_25572 = 0x63e4, Enum_020116c8_25573 = 0x63e5 };
#endif
#include "Grotto/Main/TreasureMapMetadata.h"

extern "C" int GetTreasureMaps_020ac760(void* treasureMaps);
extern "C" int SetTreasureMaps_020ac734(void* treasureMaps);

extern "C" {
    void func_ov017_021cfabc(void);
    void func_ov017_021cf730(int, int);
}

// USA: StopFollowingTreasureMap_020116c8
extern "C" ARM void StopFollowingTreasureMap_020116c8(void* gameState) {
    unsigned char* gameStateBytes = (unsigned char*)gameState;
    gameStateBytes[Enum_020116c8_25572] = 0;
    gameStateBytes[Enum_020116c8_25573] = 0;

    unsigned char treasureMaps[0xad8];
    GetTreasureMaps_020ac760(treasureMaps);

    for (int i = 0; i < treasureMaps[0]; i++) {
        ((TreasureMapMetadata*)(treasureMaps + 2 + i * 0x1c))->ClearInitialByteUnknownBit();
    }

    SetTreasureMaps_020ac734(treasureMaps);
    func_ov017_021cfabc();
    func_ov017_021cf730(-1, 0);
}
