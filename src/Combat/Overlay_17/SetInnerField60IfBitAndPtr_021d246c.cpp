#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov017_021d246c
ARM void SetInnerField60IfBitAndPtr_021d246c(int unusedA, char* b, GameState* battleStruct, char* d) {
	GameObject* c = battleStruct->GetUnknownGameObject();
	int* p = *(int**)((char*)c + 0x130);
	if (*p & 1) {
		int* inner = *(int**)(d + 0x3000 + 0xb0c);
		if (inner != 0) {
			*(int*)((char*)inner + 0x60) = *(int*)(b + 4);
		}
	}
}
