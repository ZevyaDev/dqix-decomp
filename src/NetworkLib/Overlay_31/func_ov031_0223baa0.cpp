#include <globaldefs.h>

struct OAMEntry_ov031_02223268_2 { int unknown_0_, unknown_4_; };
struct OAMAllocation_ov031_022269d8 { int unknown_0_, unknown_4_; OAMEntry_ov031_02223268_2* pOAMEntries_8_; };

// USA: GetSpriteOAMEntry_ov031_0223baa0
extern "C" ARM OAMEntry_ov031_02223268_2* GetSpriteOAMEntry_ov031_0223baa0(OAMAllocation_ov031_022269d8* sprite, int entryIndex) {
	return &sprite->pOAMEntries_8_[entryIndex];
}
