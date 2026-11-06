#include <globaldefs.h>

extern "C" unsigned short func_0202df58(void);

struct LocalWireless_0202c540 { int state_0_; };

// USA: IsLocalWirelessGuest_0202c540
extern "C" ARM int IsLocalWirelessGuest_0202c540(LocalWireless_0202c540* wireless) {
    int isOn = wireless->state_0_ != 0;
    if (isOn) {
        return func_0202df58() != 0;
    }
    return 0;
}
