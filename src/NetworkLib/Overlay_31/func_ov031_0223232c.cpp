#include <globaldefs.h>

extern "C" int AreKeysPressed_ov031_0223d354(int keys);
extern "C" void* func_ov031_022368e0(void);
extern "C" void func_ov031_02222e20(int arg0);

// USA: func_ov031_0223232c
extern "C" ARM void func_ov031_0223232c() {
    if (AreKeysPressed_ov031_0223d354(2) == 0) {
        return;
    }
    func_ov031_022368e0();
    func_ov031_02222e20(0);
}
