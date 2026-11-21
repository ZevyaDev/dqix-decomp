#include <globaldefs.h>

// USA: ResolveEventObjectIndex_ov001_0215ad2c
extern "C" ARM int ResolveEventObjectIndex_ov001_0215ad2c(int scriptObjectId) {
	if (scriptObjectId < 0) {
		scriptObjectId = 0 - scriptObjectId;
		scriptObjectId = scriptObjectId + 0x9f;
	}
	return scriptObjectId;
}
