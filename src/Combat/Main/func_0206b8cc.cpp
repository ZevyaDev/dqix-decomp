#include <globaldefs.h>

extern "C" void ParseTagNumbers_020696bc(int text, int* values, int count);

// USA: ApplyXOffsetTag_0206b8cc
extern "C" ARM int ApplyXOffsetTag_0206b8cc(int arg0, int* arg1) {
    int var0;
    ParseTagNumbers_020696bc(arg0, &var0, 1);
    *arg1 = *arg1 + var0;
    return 0;
}
