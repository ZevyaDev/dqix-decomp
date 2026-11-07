#include <globaldefs.h>

struct LocalWireless_0202b2f0;
extern "C" struct LocalWireless_0202b2f0* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(struct LocalWireless_0202b2f0* wireless);
extern "C" int IsLocalWirelessPlayerDisconnected_0202c578(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);

// USA: func_ov017_021959b4
extern "C" ARM int func_ov017_021959b4(void) {
    struct LocalWireless_0202b2f0* var0 = GetLocalWireless_0202ae18();
    if (IsLocalWirelessGuest_0202c540(var0)) {
        if (IsLocalWirelessPlayerDisconnected_0202c578(var0, 0) != 0) return 1;
    }
    return 0;
}
