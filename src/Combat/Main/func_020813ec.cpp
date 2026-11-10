#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

struct MenuLayout_0207fdcc_2;
extern "C" int func_02081da8(MenuLayout_0207fdcc_2*, int);
struct MenuLayoutWindowEntryList_0207f0ac;
extern "C" int FindMenuLayoutWindowEntry_0207f0ac(MenuLayoutWindowEntryList_0207f0ac*, int);
struct Struct_020813ec;
extern "C" unsigned int func_02081e18(Struct_020813ec*, int);
struct Struct_020813ec_2;
extern "C" int func_02081de0(Struct_020813ec_2*);
extern "C" int ClearMenuLayoutWindowHighlights_020804fc(void *menuLayout, int windowId);
extern "C" int func_0204f160(unsigned char*, int, int);
struct Struct_020813ec_3;
extern "C" int func_02081498(void*, void*, Struct_020813ec_3*);
extern "C" int func_02081574(void *arg0, void *arg1, void *arg2);
struct Struct_0204fbf8_2;
extern "C" int func_0204fbf8(Struct_0204fbf8_2*);

// USA: OpenMenuLayoutWindow_020813ec
extern "C" ARM int OpenMenuLayoutWindow_020813ec(void *menuLayout, int windowId) {
    if (windowId < 0) {
        return 1;
    }

    int window = func_02081da8((MenuLayout_0207fdcc_2*)menuLayout, windowId);
    int windowEntry = FindMenuLayoutWindowEntry_0207f0ac((MenuLayoutWindowEntryList_0207f0ac*)((char *)menuLayout + 0xc), windowId);
    if (windowEntry == 0) {
        return 1;
    }

    unsigned char bgIndex = *((unsigned char *)menuLayout + (IS_JPN ? 0x2e : 0x3a));
    unsigned int characterDataOffset = func_02081e18((Struct_020813ec*)menuLayout, bgIndex);

    if (window == 0) {
        window = func_02081de0((Struct_020813ec_2*)menuLayout);
        ClearMenuLayoutWindowHighlights_020804fc(menuLayout, windowId);
    }

    if (window != 0) {
        func_0204f160((unsigned char*)window, characterDataOffset, windowId);
        func_02081498(menuLayout, (void *)window, (Struct_020813ec_3*)windowEntry);
        func_02081574(menuLayout, (void *)window, (void *)windowEntry);
        func_0204fbf8((Struct_0204fbf8_2*)window);
    }

    return 0;
}
