#include <globaldefs.h>

// USA: IsLocalWirelessOn_0202b7d8
extern "C" ARM int IsLocalWirelessOn_0202b7d8(int* wireless) {
    return wireless[0] != 0;
}
