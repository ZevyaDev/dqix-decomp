#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct LocalWireless_0202b2f0;
extern "C" signed char func_0202bcbc(struct LocalWireless_0202b2f0* arg0, int arg1);

// USA: GetLocalWirelessPlayerRecord_0202c178
extern "C" ARM Struct_0202b2f0_2* GetLocalWirelessPlayerRecord_0202c178(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex) {
    int console = func_0202bcbc(wireless, protagonistObjectIndex);
    if (console < 0) return NULL;
    return (Struct_0202b2f0_2*)((char*)wireless + 0xbc0 + console * 0x74);
}
