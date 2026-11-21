#include <globaldefs.h>
#include "Input/Input.h"

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;
extern "C" TextWindow_0205d0e0* FindTextWindow_0205d81c(TextWindowManager_0205d81c*, int);

struct TextWindow_0204c610;
extern "C" void GetTextWindowEntryRect_0204c610(struct TextWindow_0204c610* textWindow, int entryIndex, short* outX, short* outY, short* outWidth, short* outHeight);

// USA: func_ov013_021842a0
extern "C" ARM int func_ov013_021842a0(void* arg0, int arg1) {
    if (!g_touchInput.repeatFired_) goto fail;

    {
    TextWindow_0205d0e0* var0 = FindTextWindow_0205d81c((TextWindowManager_0205d81c*)arg0, 0);
    if (var0 == 0) goto fail;

    short var1 = *(short*)((char*)var0 + 0xac);
    short var2 = *(short*)((char*)var0 + 0xae);

    short var3, var4, var5, var6;
    GetTextWindowEntryRect_0204c610((struct TextWindow_0204c610*)var0, (short)arg1, &var3, &var4, &var5, &var6);

    return g_touchInput.TestHoldInRectangle(var3 + (short)(var1 << 3), var4 + (short)(var2 << 3), var5, var6);
    }

fail:
    return 0;
}
