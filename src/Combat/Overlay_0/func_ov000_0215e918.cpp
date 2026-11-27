#include <globaldefs.h>

// USA: GetNextActionActor_ov000_0215e918
extern "C" ARM void* GetNextActionActor_ov000_0215e918(void* battle) {
	unsigned char actorCount = *((unsigned char*)battle + 0x8e00);
	if (actorCount >= 0x48) {
		return 0;
	}
	return (char*)battle + 0x20 + actorCount * 0x34;
}
