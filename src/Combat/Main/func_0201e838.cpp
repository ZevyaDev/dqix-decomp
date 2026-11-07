#include <globaldefs.h>

// USA: GetFirstZoneFeatureOfType_0201e838
extern "C" ARM void* GetFirstZoneFeatureOfType_0201e838(unsigned char* zoneFeatures, unsigned int type) {
    return *(void**)(zoneFeatures + type * 4 + 0x3c);
}
