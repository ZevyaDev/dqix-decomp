#include <globaldefs.h>
extern int data_ov031_02250c0c;

// USA: SetStepIndicatorAndButtonBarModes_ov031_022274d0
extern "C" ARM void SetStepIndicatorAndButtonBarModes_ov031_022274d0(int stepIndicatorMode, int buttonBarMode) {
	*(int*)((char*)&data_ov031_02250c0c + 0x10) = stepIndicatorMode;
	*(int*)((char*)&data_ov031_02250c0c + 0x14) = buttonBarMode;
}
