#include <globaldefs.h>

// USA: IsQuestersRestZone_020981e4
extern "C" ARM int IsQuestersRestZone_020981e4(int questersRest, int zoneId) {
    if (zoneId >= 0xc3b5 && zoneId <= 0xc55b) return 1;
    return 0;
}
