#pragma once

#if defined(jpn)
#define func_02011584 func_020112f4
#endif

struct MapListEntry_0201cb60 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    char mapShortName_5_[7];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct MapList_0201cb60_2 {
    struct MapListEntry_0201cb60 *pEntries_0_;
    int count_4_;
    int unknown_8_;
};

extern "C" void *func_02011584(void *gameState);
extern "C" MapListEntry_0201cb60 *FindMapListEntryByShortName_0209998c(MapList_0201cb60_2 *mapList, const char *mapShortName);
