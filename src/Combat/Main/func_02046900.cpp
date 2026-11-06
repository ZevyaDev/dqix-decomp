#include <globaldefs.h>

struct PacEntry_02020cb8_4 {
    signed char unknown_0_;
    char unknown_1_[0x47];
    int nextOffset_48_;
};

// USA: CountPacEntries_02046900
extern "C" ARM int CountPacEntries_02046900(struct PacEntry_02020cb8_4* pac) {
    int count = 0;
    while (pac->unknown_0_ ? 1 : 0) {
        count++;
        pac = (struct PacEntry_02020cb8_4*)((char*)pac + pac->nextOffset_48_);
    }
    return count;
}
