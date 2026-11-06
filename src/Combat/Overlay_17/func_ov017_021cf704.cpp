#include <globaldefs.h>

struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" void func_ov017_021cf730(int arg0, int arg1);

// USA: func_ov017_021cf704
extern "C" ARM void func_ov017_021cf704(int arg0, int arg1, int arg2, int arg3, struct LocalWireless_0202c1a4* arg4) {
    signed char var0 = GetOwnProtagonistObjectIndex_0202c1a4(arg4);
    if (var0 != 0) return;
    func_ov017_021cf730((signed char)arg0, 0);
}
