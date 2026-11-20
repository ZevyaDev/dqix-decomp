#include <globaldefs.h>

struct MenuLayoutWindowEntryList_0207f0ac;
struct MenuLayoutWindowEntry_0207f0ac_2;
extern "C" MenuLayoutWindowEntry_0207f0ac_2* FindMenuLayoutWindowEntry_0207f0ac(MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);

struct MenuLayoutTextEntryList_0207f524;
struct MenuLayoutTextEntry_0207f6ac;
extern "C" MenuLayoutTextEntry_0207f6ac* FindMenuLayoutTextEntry_0207f6ac(MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: GetMenuLayoutTextPosition_020809c4
extern "C" ARM void GetMenuLayoutTextPosition_020809c4(void* menuLayout, int windowId, int textId, short* outX, short* outY) {
    MenuLayoutWindowEntry_0207f0ac_2* windowEntry = FindMenuLayoutWindowEntry_0207f0ac((MenuLayoutWindowEntryList_0207f0ac*)((char*)menuLayout + 0xc), windowId);
    if (windowEntry == NULL) {
        return;
    }
    *outX = (short)(*(short*)((char*)windowEntry + 0xa) << 3);
    *outY = (short)(*(short*)((char*)windowEntry + 0xc) << 3);
    for (unsigned char i = 0; i < *(unsigned char*)((char*)windowEntry + 0x13); i++) {
        short* textIds = *(short**)((char*)windowEntry);
        if (textId == textIds[i]) {
            MenuLayoutTextEntry_0207f6ac* textEntry = FindMenuLayoutTextEntry_0207f6ac((MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId);
            if (textEntry == NULL) {
                return;
            }
            *outX = *outX + *(short*)((char*)textEntry + 0x6);
            *outY = *outY + *(short*)((char*)textEntry + 0x8);
            return;
        }
    }
}
