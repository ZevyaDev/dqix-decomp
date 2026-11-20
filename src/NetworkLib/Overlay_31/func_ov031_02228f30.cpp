#include <globaldefs.h>

extern "C" int AreKeysPressed_ov031_0223d354(int keys);
extern "C" void SetButtonBarChoice_ov031_02222e20(int choice);

// USA: func_ov031_02228f30
extern "C" ARM void func_ov031_02228f30(void) {
	if (AreKeysPressed_ov031_0223d354(2) == 0) return;
	SetButtonBarChoice_ov031_02222e20(0);
}
