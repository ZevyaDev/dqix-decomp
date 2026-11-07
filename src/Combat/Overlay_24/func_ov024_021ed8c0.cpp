#include <globaldefs.h>
#include "std_library_functions.h"
#include "Util/Random.h"

extern "C" int func_ov000_02154f30(struct Random* arg0, int arg1, int arg2, short* arg3);

struct ActionData_ov024_021ed8c0 {
	char unknown_0_[0x1c];
	unsigned int unknown_1c_0_ : 14;
	unsigned int unknown_1d_6_ : 5;
	unsigned int unknown_1e_3_ : 13;
};

struct Struct_ov024_021fec5c { short unknown_0_[8]; };
extern struct Struct_ov024_021fec5c data_ov024_021fec5c;

// USA: ChooseEnemyActionTargets_ov024_021ed8c0
extern "C" ARM void ChooseEnemyActionTargets_ov024_021ed8c0(struct Random** targetSelector, int actorIndex, struct ActionData_ov024_021ed8c0* action, int* count, short* targetIndices) {
	struct Random* battle = *targetSelector;
	int pickCount = 1;
	switch (action->unknown_1d_6_) {
	case 0:
	case 10:
		break;
	case 3:
		pickCount = NextRandomBetween(battle, 3, 4);
		break;
	case 4:
		pickCount = 2;
		break;
	case 5:
		pickCount = 4;
		break;
	case 7:
		pickCount = 7;
		break;
	case 8:
		pickCount = 3;
		break;
	}

	short pickedCount = 0;
	struct Struct_ov024_021fec5c picks = data_ov024_021fec5c;
	for (int i = 0; i < pickCount; i++) {
		int targetIndex = func_ov000_02154f30(*targetSelector, actorIndex, *count, targetIndices);
		if (targetIndex < 0) break;
		picks.unknown_0_[pickedCount] = targetIndex;
		pickedCount++;
	}
	*count = pickedCount;
	memcpy(targetIndices, picks.unknown_0_, sizeof(picks));
}
