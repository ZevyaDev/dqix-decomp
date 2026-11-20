#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct LocalWireless_0202b2f0;
extern "C" struct LocalWireless_0202b2f0* func_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(struct LocalWireless_0202b2f0* wireless);
extern "C" int IsLocalWirelessPlayerDisconnected_0202c578(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);

// USA: IsLocalWirelessHostDisconnected_ov017_021959b4
extern "C" ARM int IsLocalWirelessHostDisconnected_ov017_021959b4(void) {
    struct LocalWireless_0202b2f0* wireless = func_0202ae18();
    if (IsLocalWirelessGuest_0202c540(wireless)) {
        if (IsLocalWirelessPlayerDisconnected_0202c578(wireless, 0) != 0) return 1;
    }
    return 0;
}
