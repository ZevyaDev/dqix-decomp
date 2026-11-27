#include <globaldefs.h>

struct LocalWireless_0202b2f0;
extern "C" signed char FindConsoleByProtagonistObjectIndex_0202bcbc(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
struct LocalWireless_0202b2f0;
extern "C" int GetConnectedConsoleMask_0202bc8c(struct LocalWireless_0202b2f0*);

// USA: func_0202bd34
extern "C" ARM int func_0202bd34(struct LocalWireless_0202b2f0* arg0, int arg1) {
    int var0 = FindConsoleByProtagonistObjectIndex_0202bcbc(arg0, arg1);
    if (var0 < 0) return 0;
    return (GetConnectedConsoleMask_0202bc8c((struct LocalWireless_0202b2f0*)arg0) & (1 << var0)) != 0;
}
