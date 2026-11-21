#include <globaldefs.h>

struct ZoneFeatures_0201e830 {
    char unknown_0_[0x7e];
    unsigned short clearColor_7e_;
};

// USA: GetZoneClearColor_0201e830
extern "C" ARM int GetZoneClearColor_0201e830(struct ZoneFeatures_0201e830* zoneFeatures) {
    return zoneFeatures->clearColor_7e_;
}
