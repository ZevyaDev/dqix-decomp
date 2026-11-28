#include <globaldefs.h>

// USA: CanRaiseTension_020881c4
extern "C" ARM int CanRaiseTension_020881c4(unsigned char* stats) {
    int var0 = *(int*)(stats + 0x14);
    if (var0 & 1) {
        return 0;
    }
    if (var0 & 0x1000000) {
        return 0;
    }
    if (var0 & 0x10) {
        return 0;
    }
    if (var0 & 0x80000) {
        return 0;
    }
    return (var0 & 0x8) == 0;
}
