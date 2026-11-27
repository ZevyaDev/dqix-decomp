#include <globaldefs.h>

struct ActiveZone_02028bac {
#if defined(jpn)
    unsigned char unknown1_0_[0x314];
#else
    unsigned char unknown_0_[0x318];
#endif
};

// USA: GetActiveZoneByIndex_02028bac
extern "C" ARM struct ActiveZone_02028bac* GetActiveZoneByIndex_02028bac(struct ActiveZone_02028bac* zones, int index) {
    if (index < 0 || index >= 4) {
        return NULL;
    }
    return &zones[index];
}
