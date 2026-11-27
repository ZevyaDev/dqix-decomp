#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct LocalWireless_0202b2f0;
extern "C" int IsNotLocalWirelessGuest_0202c508(struct LocalWireless_0202b2f0* wireless);
extern "C" unsigned short func_0202d698(void);

// USA: GetConnectedConsoleMask_0202bc8c
extern "C" ARM unsigned short GetConnectedConsoleMask_0202bc8c(struct LocalWireless_0202b2f0* wireless) {
    if (IsNotLocalWirelessGuest_0202c508(wireless)) {
        return func_0202d698();
    }
    return GetLocalWirelessPlayerRecord_0202c178(wireless, 0)->unknown_4_;
}
