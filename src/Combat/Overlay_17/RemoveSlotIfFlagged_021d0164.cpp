#include <globaldefs.h>
#include "GameState/GameState.h"

int GetFieldAt0x150(unsigned char* obj);
struct Slots0208386c;
void RemoveSlotShiftDown0208386c(struct Slots0208386c* s, int idx);

struct Obj_021d0164 { unsigned char pad0[4]; int id; signed char idx; };

// USA: func_ov017_021d0164
ARM void RemoveSlotIfFlagged_021d0164(int unused, Obj_021d0164* obj, GameState* battleStruct) {
	GameObject* c = GetCombatantWithFlag0x100(battleStruct, obj->id);
	if (c == NULL) return;
	int val = GetFieldAt0x150((unsigned char*)c);
	if (val == 0) return;
	RemoveSlotShiftDown0208386c((struct Slots0208386c*)val, obj->idx);
}
