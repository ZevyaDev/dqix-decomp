#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xe24
#define REGION_OFFSET_1 0xe28
#else
#define REGION_OFFSET_0 0xea8
#define REGION_OFFSET_1 0xeac
#endif

extern int data_ov000_02184220;

// USA: SetBattleSceneState_ov000_02160d80
extern "C" ARM void SetBattleSceneState_ov000_02160d80(void* battleScene, int state) {
	*(int*)((char*)battleScene + REGION_OFFSET_0) = state;
	*(int*)((char*)battleScene + REGION_OFFSET_1) = 0;
	data_ov000_02184220 = 1;
}
