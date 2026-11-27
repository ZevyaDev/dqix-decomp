#include <globaldefs.h>
#include "Combat/CombatantDisplay.h"
#if defined(jpn)
enum { Enum_02027100_1880 = 0x6ac, Enum_02027100_1884 = 0x6b0, Enum_02027100_1885 = 0x6b1 };
#else
enum { Enum_02027100_1880 = 0x758, Enum_02027100_1884 = 0x75c, Enum_02027100_1885 = 0x75d };
#endif
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

#if defined(jpn)
#define func_0203bd08 func_0203b760
#endif

extern "C" void func_0203bd08(void);
extern "C" int func_02053c6c(unsigned char* gameObject);
extern "C" void DrawMetatileAt_0202756c(void* subScreenDisplay, int positionX, int positionY, int metatileIndex,
        unsigned char destinationObjIndex, unsigned char priority, unsigned short palette, unsigned char rotScaleDataIndex, int scaleX, int scaleY);
extern Struct_020fdc60_2 data_020fdc60[];
extern int gPartyStatsCache_020fdcb0;

// USA: func_02027100
extern "C" ARM void func_02027100(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0203bd08();
    ((int)GetGameResources());
    for (int var1 = 0; var1 < arg0[Enum_02027100_1884]; var1++) {
        unsigned char* var2 = arg0 + var1;
        int var3 = var2[Enum_02027100_1880];
        if (arg0[Enum_02027100_1885] & (1 << var3)) {
            continue;
        }
        GameObject* var4 = GetPartyMemberBaseByIndex_0200ff1c(var0, var3);
        if (var4 == NULL) {
            continue;
        }
        if (func_02053c6c((unsigned char*)var4) == 0) {
            continue;
        }
        if (*(int*)((char*)&gPartyStatsCache_020fdcb0 + (var3 << 5)) < 0) {
            continue;
        }
        Struct_020fdc60_2* var5 = &data_020fdc60[var1];
        func_0201fca0(var5, var1, var3);
        func_0201fd38(var5, var1, var3);
        int var6 = (int)var5->unknown_10_;
        DrawMetatileAt_0202756c(arg0, var1 << 18, var6 << 12, (var3 + 1) & 0xff,
            (var3 + 0x3c) & 0xff, 0, (unsigned short)var3, 0xff, 0x1000, 0x1000);
    }
}
