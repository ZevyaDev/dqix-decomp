#include <globaldefs.h>

extern "C" int AreKeysPressed_ov031_0223d354(int);
extern "C" void func_ov031_02222e20(int);

// USA: func_ov031_02229fac
extern "C" ARM void func_ov031_02229fac(void) {
    if (AreKeysPressed_ov031_0223d354(1)) {
        func_ov031_02222e20(1);
    }
    if (AreKeysPressed_ov031_0223d354(2) == 0) return;
    func_ov031_02222e20(0);
}
