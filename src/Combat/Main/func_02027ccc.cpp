#include <globaldefs.h>

struct ActiveZone_020fdd44;
extern struct ActiveZone_020fdd44 data_020fdd44;
extern "C" struct ActiveZone_020fdd44* FindActiveZone_02028bd0(struct ActiveZone_020fdd44* zones, int zoneId);

// USA: func_02027ccc
extern "C" ARM struct ActiveZone_020fdd44* func_02027ccc(int arg0) {
    return FindActiveZone_02028bd0(&data_020fdd44, arg0);
}
