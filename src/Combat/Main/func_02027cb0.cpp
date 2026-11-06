#include <globaldefs.h>

extern "C" unsigned short* GetZone3D_02012fe4(void);

struct ActiveZone_020fdd44;
extern struct ActiveZone_020fdd44 data_020fdd44;
extern "C" struct ActiveZone_020fdd44* FindActiveZone_02028bd0(struct ActiveZone_020fdd44* zones, int zoneId);

// USA: func_02027cb0
extern "C" ARM struct ActiveZone_020fdd44* func_02027cb0(void) {
    return FindActiveZone_02028bd0(&data_020fdd44, *GetZone3D_02012fe4());
}
