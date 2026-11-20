#include <globaldefs.h>

extern "C" int AreKeysPressed_ov031_0223d354(int keys);
extern "C" void SetButtonBarChoice_ov031_02222e20(int choice);

// USA: func_ov031_02229d30
extern "C" ARM void func_ov031_02229d30(void) {
	if (AreKeysPressed_ov031_0223d354(1) == 0) return;
	SetButtonBarChoice_ov031_02222e20(0);
}
