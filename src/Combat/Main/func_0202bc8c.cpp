#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct LocalWireless_0202b2f0;
extern "C" int IsNotLocalWirelessGuest_0202c508(struct LocalWireless_0202b2f0* wireless);
extern "C" unsigned short func_0202d698(void);

// USA: func_0202bc8c
extern "C" ARM unsigned short func_0202bc8c(struct LocalWireless_0202b2f0* arg0) {
    if (IsNotLocalWirelessGuest_0202c508(arg0)) {
        return func_0202d698();
    }
    return func_0202c178(arg0, 0)->unknown_4_;
}
