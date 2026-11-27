#include <globaldefs.h>

extern "C" void func_ov031_022274e4(int *arg0, int *arg1);
extern "C" int func_ov031_0223690c(void *arg0);
extern "C" int func_ov031_02236ea0(void *arg0);

// USA: ShowStepIndicator_ov031_02223518
extern "C" ARM int ShowStepIndicator_ov031_02223518(void *step) {
	int stepIndicatorMode;
	func_ov031_022274e4(&stepIndicatorMode, 0);
	if (stepIndicatorMode == 1) return func_ov031_0223690c(step);
	if (stepIndicatorMode != 2) return stepIndicatorMode;
	return func_ov031_02236ea0(step);
}
