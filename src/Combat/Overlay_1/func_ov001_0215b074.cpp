#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/GameResources.h"

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" GameResources* GetResources_0200fb8c(int* gameState);

// USA: RunBrightnessScriptCommand_ov001_0215b074
extern "C" ARM int RunBrightnessScriptCommand_ov001_0215b074(int command, char* args, int argCount) {
    int brightness;
    int var1;
    int duration = GetScriptValueAsInt_ov017_021d60f4(args);
    brightness = -16;
    if (argCount >= 2) {
        brightness = GetScriptValueAsInt_ov017_021d60f4(args + 8);
    }
    GameResources* resources = GetResources_0200fb8c((int*)GameState::GetInstance());
    if (resources == NULL) return 0;
    var1 = 0;
    if (command == 0) {
        SetBrightness(resources, 0, duration);
    } else if (command == 1) {
        SetBrightness(resources, brightness, duration);
    } else if (command == 2) {
        SetSubBrightness(resources, 0, duration);
    } else if (command == 3) {
        SetSubBrightness(resources, brightness, duration);
    } else if (command == 4) {
        SetMainBrightness(resources, 0, duration);
    } else if (command == 5) {
        SetMainBrightness(resources, brightness, duration);
    } else if (command == 6) {
        SetAndLockBrightness(resources, 0, duration);
    } else if (command == 7) {
        SetAndLockBrightness(resources, brightness, duration);
    } else if (command == 8) {
        SetAndLockSubBrightness(resources, 0, duration);
    } else if (command == 9) {
        SetAndLockSubBrightness(resources, brightness, duration);
    } else if (command == 10) {
        SetAndLockMainBrightness(resources, 0, duration);
    } else if (command == 11) {
        SetAndLockMainBrightness(resources, brightness, duration);
    } else if (command == 12) {
        UnlockAndSetBrightness(resources, 0, duration);
    } else if (command == 13) {
        UnlockAndSetBrightness(resources, brightness, duration);
    } else if (command == 14) {
        UnlockAndSetSubBrightness(resources, 0, duration);
    } else if (command == 15) {
        UnlockAndSetSubBrightness(resources, brightness, duration);
    } else if (command == 16) {
        UnlockAndSetMainBrightness(resources, 0, duration);
    } else if (command == 17) {
        UnlockAndSetMainBrightness(resources, brightness, duration);
    }
    int var4 = (command % 2 == 1);
    if (command % 6 < 4 && var4) {
        var1 = 1;
    }
    char* var5 = (char*)GetGameResources()->unknown_ptr_array_371c[6];
    if (var1) {
        if (*(unsigned short*)(var5 + 0xa) <= 3) {
            #if defined(jpn)
            var5[0xfe] = 1;
#else
            var5[0x102] = 1;
#endif
        }
    }
    return 1;
}
