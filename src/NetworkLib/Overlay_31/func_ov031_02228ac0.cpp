#include <globaldefs.h>

extern "C" int AreKeysPressed_ov031_0223d354(int keys);
extern "C" void func_ov031_02222e20(int arg0);

// USA: func_ov031_02228ac0
extern "C" ARM void func_ov031_02228ac0(void) {
	if (AreKeysPressed_ov031_0223d354(1) == 0) return;
	func_ov031_02222e20(0);
}
