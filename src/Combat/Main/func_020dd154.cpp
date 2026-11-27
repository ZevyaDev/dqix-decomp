#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020dd154_2384 = 0x8b8 };
#else
enum { Enum_020dd154_2384 = 0x950 };
#endif
extern "C" int HasVocationSkillForEquipmentType_020dd19c(unsigned int, int);
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" void* func_02053c6c(unsigned char*);

// USA: HasPartyMemberVocationSkillForEquipmentType_020dd154
extern "C" ARM int HasPartyMemberVocationSkillForEquipmentType_020dd154(int memberIndex, int equipmentType) {
    GameObject* var0 = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), memberIndex);
    if (var0 == NULL) {
        return 0;
    }
    void* var1 = func_02053c6c((unsigned char*)var0);
    if (var1 == NULL) {
        return 0;
    }
    int var2 = *(int*)((char*)var1 + Enum_020dd154_2384);
    return HasVocationSkillForEquipmentType_020dd19c((unsigned int)(var2 & 0xff), (int)(equipmentType));
}
