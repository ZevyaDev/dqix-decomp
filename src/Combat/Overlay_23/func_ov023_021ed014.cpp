#include <globaldefs.h>
#include "Input/Input.h"

struct SoundEffectManager_02108760;
extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;

extern "C" int PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);

// USA: func_ov023_021ed014
extern "C" ARM int func_ov023_021ed014(struct Struct_ov023_021ec480* arg0) {
	if (g_keyManager.TestKeysPressed(0xf03) == 0 && g_touchInput.pressed_ == 0) {
		return 0;
	}
	PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
	return 1;
}
