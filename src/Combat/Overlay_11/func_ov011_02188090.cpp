#include <globaldefs.h>

struct ScriptValue_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct ScriptValue_ov011_02184c30* arg0);
struct Struct_ov011_02184c14;
extern "C" void SaveSubBGVRAMBanks_ov011_02184c14(struct Struct_ov011_02184c14* menu);

extern "C" void* GetCurrentMenu_ov017_021b2164(void);
extern "C" void MapVRAMBanksToSubBG(int v);

struct Struct_ov011_02188904 { int unknown_0_[4]; };
extern struct Struct_ov011_02188904 data_ov011_02188904;

// USA: SaveAndMapSubBGVRAMBanks_ov011_02188090
extern "C" ARM int SaveAndMapSubBGVRAMBanks_ov011_02188090(struct ScriptValue_ov011_02184c30* value) {
    void* menu = GetCurrentMenu_ov017_021b2164();
    SaveSubBGVRAMBanks_ov011_02184c14((struct Struct_ov011_02184c14*)menu);
    int bankSetIndex = func_ov011_02184c30(value);
    struct Struct_ov011_02188904 bankSets = data_ov011_02188904;
    MapVRAMBanksToSubBG(bankSets.unknown_0_[bankSetIndex]);
    return 1;
}
