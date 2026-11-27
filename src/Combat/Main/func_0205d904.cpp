#include <globaldefs.h>

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);

extern "C" void GetTextWindowEntryRectArrays_0204f138(unsigned char* textWindow, unsigned char** outXs, unsigned char** outYs, unsigned char** outWidths, unsigned char** outHeights);

struct Struct_0205bd58;
extern "C" void SetMenuCursorEntryRects_0205bd58(struct Struct_0205bd58* cursor, int entryCount, int entryXs, int entryYs, int entryWidths, int entryHeights);

struct TextWindow_0205d904 {
    char unknown_0_[0xac];
    short tileX_ac_;
    short tileY_ae_;
};

// USA: SetTouchMenuCursorEntryRects_0205d904
extern "C" ARM void SetTouchMenuCursorEntryRects_0205d904(unsigned char* windowManager) {
    struct TextWindow_0205d0e0* cursorWindow;
    unsigned char* entryXs;
    unsigned char* entryYs;
    unsigned char* entryWidths;
    unsigned char* entryHeights;
    struct TextWindow_0205d904* textWindow;

    cursorWindow = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)windowManager, windowManager[0xb0]);
    if (cursorWindow == NULL) return;

    GetTextWindowEntryRectArrays_0204f138((unsigned char*)cursorWindow, &entryXs, &entryYs, &entryWidths, &entryHeights);
    SetMenuCursorEntryRects_0205bd58((struct Struct_0205bd58*)(windowManager + 4), 0x12, (int)entryXs, (int)entryYs, (int)entryWidths, (int)entryHeights);

    textWindow = (struct TextWindow_0205d904*)cursorWindow;
    {
        short tileX = textWindow->tileX_ac_;
        short tileY = textWindow->tileY_ae_;
        *(short*)(windowManager + 0x3c) = tileX << 3;
        *(short*)(windowManager + 0x3e) = tileY << 3;
    }
}
