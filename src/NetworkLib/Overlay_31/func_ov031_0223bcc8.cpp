#include <globaldefs.h>

struct OAMEntry_ov031_0223bcc8 { unsigned int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct OAMAllocation_ov031_02222ce4 { unsigned char unknown_0_[8]; OAMEntry_ov031_0223bcc8* unknown_8_; unsigned char oamCount_c_; };

// USA: SetSpritePriority_ov031_0223bcc8
extern "C" ARM void SetSpritePriority_ov031_0223bcc8(OAMAllocation_ov031_02222ce4* sprite, int entryIndex, int priority) {
	OAMEntry_ov031_0223bcc8* oamEntries = sprite->unknown_8_;
	if (entryIndex >= 0) {
		oamEntries[entryIndex].unknown_4_ = (oamEntries[entryIndex].unknown_4_ & ~0xc00) | (priority << 10);
		return;
	}
	for (int i = 0; i < sprite->oamCount_c_; i++) {
		oamEntries[i].unknown_4_ = (oamEntries[i].unknown_4_ & ~0xc00) | (priority << 10);
	}
}
