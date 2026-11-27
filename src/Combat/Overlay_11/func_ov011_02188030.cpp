#include <globaldefs.h>

struct ScriptValue_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct ScriptValue_ov011_02184c30* arg0);
extern "C" void SaveMainBGVRAMBanks_ov011_02184c00(void* menu);

extern "C" void* GetCurrentMenu_ov017_021b2164(void);
extern "C" void MapVRAMBanksToMainBG(int v);

struct Struct_ov011_02188954 { int unknown_0_[17]; };
extern struct Struct_ov011_02188954 data_ov011_02188954;

// USA: SaveAndMapMainBGVRAMBanks_ov011_02188030
extern "C" ARM int SaveAndMapMainBGVRAMBanks_ov011_02188030(struct ScriptValue_ov011_02184c30* value) {
	SaveMainBGVRAMBanks_ov011_02184c00(GetCurrentMenu_ov017_021b2164());
	int bankSetIndex = func_ov011_02184c30(value);
	struct Struct_ov011_02188954 bankSets = data_ov011_02188954;
	MapVRAMBanksToMainBG(bankSets.unknown_0_[bankSetIndex]);
	return 1;
}
