#include <globaldefs.h>

extern "C" ARM int GetVocationSkill_020dd11c(unsigned int vocation, unsigned int index);
extern unsigned char data_020ee700[];

// USA: HasVocationSkillForEquipmentType_020dd19c
extern "C" ARM int HasVocationSkillForEquipmentType_020dd19c(unsigned int vocation, int equipmentType) {
    int var0 = 0;
    for (unsigned char var1 = 0; var1 < 4; var1++) {
        unsigned int var2 = GetVocationSkill_020dd11c(vocation, var1);
        if (var2 != 0 && var2 <= 0xe) {
            if (data_020ee700[var2] == equipmentType) {
                var0 = 1;
                break;
            }
        }
    }
    return var0;
}
