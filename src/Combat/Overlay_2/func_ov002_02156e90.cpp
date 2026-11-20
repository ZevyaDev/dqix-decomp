#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#define data_ov002_0216c99d data_ov002_0216cff9
#define data_ov002_0216c99e data_ov002_0216cffa
#else
#define RG(u, j) (u)
#endif

struct TextWindowManager_0205d0e0_2;
struct TextWindowManager_0205d6a0;
struct TextWindowManager_0205d81c;
struct TextWindow_ov002_02156e90 {
    char unknown_0_[0xc4];
    unsigned char id_c4_;
};
extern "C" struct TextWindow_ov002_02156e90 *GetLastOpenedTextWindow_0205d888(struct TextWindowManager_0205d0e0_2 *windowManager);
extern "C" void *FindTextWindow_0205d81c(struct TextWindowManager_0205d81c *windowManager, int windowId);
extern "C" void CloseTextWindows_0205d6a0(struct TextWindowManager_0205d6a0 *windowManager, int isAll);
extern "C" void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c *windowManager, int windowId, int palette);
extern "C" void ConfigureMenuCursors_ov002_02161cf0(void *menu);
extern "C" void RebuildMenuWindowText_ov002_0215b9a4(void *menu, int windowId, int hasCursorMark);
extern "C" const unsigned char data_ov002_0216c99d[];
extern "C" const unsigned char data_ov002_0216c99e[];

// USA: ReturnToPreviousMenuWindow_ov002_02156e90
extern "C" ARM void ReturnToPreviousMenuWindow_ov002_02156e90(char *menu) {
    int closeCount              = 1;
    struct TextWindow_ov002_02156e90 *topWindow = GetLastOpenedTextWindow_0205d888((struct TextWindowManager_0205d0e0_2 *) (menu + RG(0xec8, 0xe20)));
    if (topWindow != NULL) {
        for (int i = 0; i < 8; i++) {
            unsigned char topWindowId = topWindow->id_c4_;
            unsigned char pairedWindowId = data_ov002_0216c99d[i * 2];
            if (pairedWindowId == topWindowId) {
                closeCount = 2;
                break;
            }
            if (topWindowId >= RG(0x2c, 0x2f) && topWindowId <= RG(0x2f, 0x32)) {
                closeCount = 0;
                for (unsigned char groupWindowId = RG(0x2c, 0x2f); groupWindowId <= RG(0x2f, 0x32); groupWindowId++) {
                    if (FindTextWindow_0205d81c((struct TextWindowManager_0205d81c *) (menu + RG(0xec8, 0xe20)), groupWindowId) != NULL) {
                        closeCount++;
                    }
                }
                break;
            }
        }
    }
    for (int i = 0; i < closeCount; i++) {
        CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0 *) (menu + RG(0xec8, 0xe20)), 0);
    }
    topWindow = GetLastOpenedTextWindow_0205d888((struct TextWindowManager_0205d0e0_2 *) (menu + RG(0xec8, 0xe20)));
    if (topWindow == NULL) return;
    *(int *) (menu + 0x1000 + RG(0xbb8, 0xa80)) = topWindow->id_c4_;
    ConfigureMenuCursors_ov002_02161cf0(menu);
    for (int i = 0; i < 8; i++) {
        unsigned char pairedWindowId = data_ov002_0216c99d[i * 2];
        if (pairedWindowId == topWindow->id_c4_) {
            unsigned char companionWindowId = data_ov002_0216c99e[i * 2];
            FindTextWindow_0205d81c((struct TextWindowManager_0205d81c *) (menu + RG(0xec8, 0xe20)), companionWindowId);
            SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c *) (menu + RG(0xec8, 0xe20)), companionWindowId, 0);
            break;
        }
    }
    RebuildMenuWindowText_ov002_0215b9a4(menu, *(int *) (menu + 0x1000 + RG(0xbb8, 0xa80)) & 0xff, 0);
}
