#include <globaldefs.h>
#include "GameState/GameState.h"

int GetWord0x0(int* obj);
extern "C" void _Z13SetBrightnessP13GameResourcesii(void* obj, int value, int frames);
extern "C" int _Z28IsBrightnessTransitionActiveP13GameResources(int* obj);

struct S021882d4 {
	unsigned char pad0[0x17a];
	unsigned char byte17a;
	unsigned char byte17b;
};

// USA: func_ov014_021882d4
ARM void UpdateCounterState_021882d4(struct S021882d4* r4) {
	int val = GetWord0x0((int*)GameState::GetInstance());
	if (r4->byte17b == 0) {
		_Z13SetBrightnessP13GameResourcesii((void*)val, -16, 8);
		r4->byte17b++;
		return;
	}
	if (r4->byte17b != 1) return;
	if (!_Z28IsBrightnessTransitionActiveP13GameResources((int*)val)) {
		r4->byte17a = 6;
		r4->byte17b = 0;
	}
}
