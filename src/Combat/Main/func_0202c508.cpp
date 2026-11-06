#include <globaldefs.h>

extern "C" unsigned short func_0202df58(void);

struct LocalWireless_0202c508 { int state_0_; };

// USA: IsNotLocalWirelessGuest_0202c508
extern "C" ARM int IsNotLocalWirelessGuest_0202c508(LocalWireless_0202c508* wireless) {
    int isOn = wireless->state_0_ != 0;
    if (isOn) {
        return func_0202df58() == 0;
    }
    return 1;
}
