#include <globaldefs.h>

extern const unsigned char data_020ee748[][5];

// USA: GetVocationSkill_020dd11c
extern "C" ARM int GetVocationSkill_020dd11c(unsigned int vocation, unsigned int index) {
    if (vocation == 0 || vocation >= 0xd) return 0;
    if (index >= 5) return 0;
    return data_020ee748[vocation][index];
}
