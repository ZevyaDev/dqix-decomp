#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);

struct Struct_02153628_4 {
    unsigned int durationMs_0_;
};
extern struct Struct_02153628_4 data_02153628;

// USA: IsInputLocked_020e11e4
extern "C" ARM int IsInputLocked_020e11e4(void) {
    unsigned long long now = GetCurrentTimestamp();
    unsigned long long startTimestamp = *(unsigned long long*)((char*)&data_02153628 + 4);
    unsigned long long elapsed = now - startTimestamp;
    unsigned long long scaledElapsed = elapsed << 6;
    unsigned long long elapsedMs = _ll_udiv(scaledElapsed, 0x82ea, 0);
    return elapsedMs < data_02153628.durationMs_0_;
}
