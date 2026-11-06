#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02028bd0_790 = 0x312 };
#else
enum { Enum_02028bd0_790 = 0x316 };
#endif

struct ActiveZone_020fdd44 {
    unsigned short zoneId_0_;
    char unknown_2_[Enum_02028bd0_790];
};

// USA: FindActiveZone_02028bd0
extern "C" ARM struct ActiveZone_020fdd44* FindActiveZone_02028bd0(struct ActiveZone_020fdd44* zones, int zoneId) {
    int i;
    if (zoneId < 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        if (zoneId == zones[i].zoneId_0_) {
            return &zones[i];
        }
    }
    return 0;
}
