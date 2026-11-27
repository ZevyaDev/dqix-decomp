#include <globaldefs.h>

extern "C" {
    void* GetCurrentMenu_ov017_021b2164(void);
    void MapVRAMBanksToMainBG(void* p);
}

struct Struct_ov011_021880d8 {
    char unknown_0_[0x1d4];
    void* unknown_1d4_;
};

// USA: RestoreSavedMainBGVRAMBanks_ov011_021880d8
extern "C" ARM int RestoreSavedMainBGVRAMBanks_ov011_021880d8(void) {
    Struct_ov011_021880d8* menu = (Struct_ov011_021880d8*)GetCurrentMenu_ov017_021b2164();
    MapVRAMBanksToMainBG(menu->unknown_1d4_);
    return 1;
}
