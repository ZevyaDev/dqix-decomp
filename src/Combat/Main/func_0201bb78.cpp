#include <globaldefs.h>

#if defined(jpn)
#define func_0206dfb0 func_0206f104
#endif

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


extern "C" unsigned char* func_0205ec34(void* arg0, int arg1);
extern "C" int func_02012f68(int arg0);
extern "C" int func_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);
extern "C" int func_02012f24(int arg0);
extern "C" int _s32_div_f(int a, int b);

struct Zone3D_0201bb78 { unsigned short currentZoneID_0_; };

// USA: HasVisitedZone_0201bb78
extern "C" ARM int HasVisitedZone_0201bb78(struct Zone3D_0201bb78* zone, unsigned int zoneId) {
    unsigned char* flagManager = func_0205ec34(zone, zoneId);
    int hasVisited = 0;
    if (zoneId >= 20000 && zoneId <= 0x752f) {
        int fieldIndex = func_02012f68(zoneId);
        if (fieldIndex >= 0) {
            hasVisited = func_0206dfb0((int)flagManager, flagManager + 0x8c, fieldIndex + 0x5a + 0xa00);
        }
    } else if (zoneId >= 100 && zoneId <= 0x270f) {
        int areaIndex = _s32_div_f(zoneId, 100);
        if (areaIndex < 100) {
            hasVisited = func_0206dfb0((int)flagManager, flagManager + 0x8c, areaIndex + 0x96 + 0xa00);
        }
    } else if (zoneId == 10000) {
        hasVisited = func_0206dfb0((int)flagManager, flagManager + 0x8c, 0x2b);
    } else {
        int currentFieldIndex = func_02012f24(zone->currentZoneID_0_);
        if (currentFieldIndex >= 0) {
            hasVisited = func_0206dfb0((int)flagManager, flagManager + 0x8c, currentFieldIndex + 0x5a + 0xa00);
        }
    }
    return hasVisited;
}
