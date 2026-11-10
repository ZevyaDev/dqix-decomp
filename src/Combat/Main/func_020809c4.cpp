#include <globaldefs.h>

struct MenuLayoutWindowEntryList_0207f0ac;
struct MenuLayoutWindowEntry_0207f0ac_2;
extern "C" MenuLayoutWindowEntry_0207f0ac_2* FindMenuLayoutWindowEntry_0207f0ac(MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);

struct MenuLayoutTextEntryList_0207f524;
struct MenuLayoutTextEntry_0207f6ac;
extern "C" MenuLayoutTextEntry_0207f6ac* FindMenuLayoutTextEntry_0207f6ac(MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: func_020809c4
extern "C" ARM void func_020809c4(void* arg0, int arg1, int arg2, short* arg3, short* arg4) {
    MenuLayoutWindowEntry_0207f0ac_2* var0 = FindMenuLayoutWindowEntry_0207f0ac((MenuLayoutWindowEntryList_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 == NULL) {
        return;
    }
    *arg3 = (short)(*(short*)((char*)var0 + 0xa) << 3);
    *arg4 = (short)(*(short*)((char*)var0 + 0xc) << 3);
    for (unsigned char var1 = 0; var1 < *(unsigned char*)((char*)var0 + 0x13); var1++) {
        short* var2 = *(short**)((char*)var0);
        if (arg2 == var2[var1]) {
            MenuLayoutTextEntry_0207f6ac* var3 = FindMenuLayoutTextEntry_0207f6ac((MenuLayoutTextEntryList_0207f524*)((char*)arg0 + 4), arg2);
            if (var3 == NULL) {
                return;
            }
            *arg3 = *arg3 + *(short*)((char*)var3 + 0x6);
            *arg4 = *arg4 + *(short*)((char*)var3 + 0x8);
            return;
        }
    }
}
