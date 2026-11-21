#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


#if defined(jpn)
enum { Enum_02017c58_1052 = 0x43c };
#else
enum { Enum_02017c58_1052 = 0x41c };
#endif

extern "C" void* func_0205ec34(void);
extern "C" void* GetZoneEntry_0200fd0c(GameState* gameState);
extern "C" void func_0206eb20(void* arg0, void* arg1, int arg2, int arg3);
extern "C" void func_0206ea8c(void* arg0, unsigned char arg1, short arg2, int arg3);

struct BMDJEntry_02017c58 {
    unsigned short id_0_;
    unsigned short flags_2_;
    char unknown_4_[0x70 - 4];
};

struct BMDJStruct_02017c58_2 {
    int id_0_;
    char unknown_4_[0x14 - 4];
    int entryCount_14_;
    char unknown_18_[0x44 - 0x14 - 4];
    BMDJEntry_02017c58* pEntries_44_;
    char unknown_48_[0x54 - 0x44 - 4];
    BMDJStruct_02017c58_2* pNext_54_;
};

// USA: SaveBMDJEntryVisibility_02017c58
extern "C" ARM void SaveBMDJEntryVisibility_02017c58(void* zone) {
    GameState* gameState = GameState::GetInstance();
    if (gameState == NULL) {
        return;
    }
    char* zoneEntry = (char*)GetZoneEntry_0200fd0c(gameState);
    if (zoneEntry == NULL) {
        return;
    }
    void* flagManager = func_0205ec34();
    if (flagManager == NULL) {
        return;
    }

    int tableIndex;
    for (tableIndex = 0; tableIndex < 2; tableIndex++) {
        func_0206eb20(flagManager, (void*)(unsigned char)tableIndex, 0, 0x7f);
        func_0206eb20(flagManager, (void*)(unsigned char)(unsigned int)tableIndex, 0x80, 0xff);
    }

    int entryCount;
    int bmdjId;
    BMDJStruct_02017c58_2* bmdj = *(BMDJStruct_02017c58_2**)((char*)zone + Enum_02017c58_1052);
    int i;
    while (bmdj != NULL) {
        entryCount = bmdj->entryCount_14_;
        bmdjId = bmdj->id_0_;
        for (i = 0; i < entryCount; i++) {
            BMDJEntry_02017c58* entry = &bmdj->pEntries_44_[i];
            if (entry != NULL && (entry->flags_2_ & 4) != 0) {
                func_0206ea8c(flagManager, bmdjId, (short)(entry->id_0_ + 0x80), 1);
            } else {
                func_0206ea8c(flagManager, bmdjId, (short)entry->id_0_, 1);
            }
        }
        bmdj = bmdj->pNext_54_;
    }
}
