#include <globaldefs.h>

struct ScriptValue_ov011_02184c30;
extern "C" int func_ov011_02184c30(ScriptValue_ov011_02184c30*);

// USA: SetScreenLayers_ov011_02185720
extern "C" ARM int SetScreenLayers_ov011_02185720(ScriptValue_ov011_02184c30* params) {
    int screen = func_ov011_02184c30(params);
    int layers = func_ov011_02184c30((ScriptValue_ov011_02184c30*)((char*)params + 8));
    if (screen == 0) {
        unsigned int* mainDisplayControl = (unsigned int*)0x4000000;
        *mainDisplayControl = (*mainDisplayControl & ~0x1f00) | (layers << 8);
    } else if (screen == 1) {
        unsigned int* subDisplayControl = (unsigned int*)0x4001000;
        *subDisplayControl = (*subDisplayControl & ~0x1f00) | (layers << 8);
    }
    return 1;
}
