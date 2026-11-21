#include <globaldefs.h>

struct OAMEntry_ov031_0223bd28 { unsigned int unknown_0_; unsigned int unknown_4_; };
struct OAMAllocation_ov031_02222f44_2 { unsigned char unknown_0_[8]; struct OAMEntry_ov031_0223bd28* pOAMEntries_8_; };

// USA: GetSpritePosition_ov031_0223bd28
extern "C" ARM void GetSpritePosition_ov031_0223bd28(struct OAMAllocation_ov031_02222f44_2* sprite, int entryIndex, unsigned int* outX, unsigned int* outY) {
	struct OAMEntry_ov031_0223bd28* oamEntries = sprite->pOAMEntries_8_;
	*outX = (oamEntries[entryIndex].unknown_0_ & 0x1ff0000) >> 16;
	*outY = oamEntries[entryIndex].unknown_0_ & 0xff;
}
