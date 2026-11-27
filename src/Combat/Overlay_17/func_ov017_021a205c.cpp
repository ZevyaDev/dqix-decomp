#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

struct ActiveZone_02028bac { unsigned char unknown_0_[0x318]; };
extern "C" struct ActiveZone_02028bac* GetActiveZoneByIndex_02028bac(struct ActiveZone_02028bac* zones, int index);
struct ActiveZone_020fdd44;
extern "C" struct ActiveZone_020fdd44* GetActiveZones_02027ca4(void);
extern "C" void func_020733d8(void* arg0, int arg1);

struct Struct_ov017_021a205c { unsigned short unknown_0_0_ : 3; unsigned short unknown_0_3_ : 1; unsigned short unknown_0_4_ : 12; };

// USA: func_ov017_021a205c
extern "C" ARM void func_ov017_021a205c(GameResources*) {
	GameState* var0 = GameState::GetInstance();
	struct ActiveZone_02028bac* var1 = (struct ActiveZone_02028bac*)GetActiveZones_02027ca4();
	(int)BackgroundLoader::GetInstance();
	for (int var2 = 0; var2 < 4; var2++) {
		var0->GetPartyMemberByIndex(var2);
		struct ActiveZone_02028bac* var3 = GetActiveZoneByIndex_02028bac(var1, var2);
		struct Struct_ov017_021a205c* var4 = (struct Struct_ov017_021a205c*)((unsigned char*)var3 + 2);
		if (var4->unknown_0_3_) {
			func_020733d8(var3, 0);
		}
	}
}
