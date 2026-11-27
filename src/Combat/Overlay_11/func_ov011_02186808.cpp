#include <globaldefs.h>

struct ScriptValue_ov011_02184c30;
extern "C" ARM int func_ov011_02184c30(struct ScriptValue_ov011_02184c30* arg0);
extern "C" void* GetCurrentMenu_ov017_021b2164(void);
extern "C" void StartMenuCallback_ov011_02184a40(void* menu, int callbackIndex);

// USA: StartCurrentMenuCallback_ov011_02186808
extern "C" ARM int StartCurrentMenuCallback_ov011_02186808(struct ScriptValue_ov011_02184c30* value) {
    int callbackIndex = func_ov011_02184c30(value);
    if (callbackIndex <= 0) return 0;
    StartMenuCallback_ov011_02184a40(GetCurrentMenu_ov017_021b2164(), callbackIndex);
    return 1;
}
