#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#define K(u, j) (j)
#else
#define RG(u, j) (u)
#define K(u, j) (u)
#endif

struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
struct MenuCursor_0205bcdc;
struct TextWindowManager_0205cf1c;
extern "C" void EnableTouchMenuCursor_0205cef8(void *windowManager);
extern "C" void EnableKeyMenuCursor_0205cf04(void *windowManager);
extern "C" void DisableTouchMenuCursor_0205cf10(void *windowManager);
extern "C" void DisableKeyMenuCursor_0205cf1c(struct TextWindowManager_0205cf1c *windowManager);
extern "C" unsigned char func_02011804(GameState* arg0);
extern "C" int func_ov002_02157108(void *arg0, int arg1);
extern "C" void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68 *cursor, int columnCount, int rowCount, int isRowMajor);
extern "C" void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc *cursor, int itemCount);
extern "C" void SetTouchMenuCursorIndex_0205bcdc(struct MenuCursor_0205bcdc *cursor, int index);
extern "C" void SetMenuCursorIndex_0205bb04(void *cursor, int index);
extern "C" int func_020dc428();
extern "C" void func_ov002_02156080(void *arg0, short *arg1, short *arg2);

// USA: ConfigureMenuCursors_ov002_02161cf0
extern "C" ARM void ConfigureMenuCursors_ov002_02161cf0(char *menu) {
    int columnCount;
    int rowCount;
    int itemCount;
    int pageCount;
    int cursorIndex;
    char *windowManager = menu + RG(0x2c8 + 0xc00, 0xe20);
    int isRowMajor;
    GameState::GetInstance();
    isRowMajor = 0;
    EnableTouchMenuCursor_0205cef8(menu + RG(0x2c8 + 0xc00, 0xe20));
    EnableKeyMenuCursor_0205cf04(menu + RG(0x2c8 + 0xc00, 0xe20));
    switch (*(int *) (menu + 0x1000 + RG(0xbb8, 0xa80))) {
        case 1:
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xe0, 0x1a00 + 0xa8));
            columnCount   = 2;
            rowCount   = 3;
            itemCount  = 6;
            pageCount  = 1;
            break;
        case 2:
            itemCount  = *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37));
            columnCount   = 1;
            rowCount   = itemCount;
            pageCount  = 1;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xe2, 0x1a00 + 0xaa));
            break;
        case 3:
            pageCount  = 1;
            itemCount  = 3;
            columnCount   = 1;
            rowCount   = 3;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xe4, 0x1a00 + 0xac));
            if (func_02011804(GameState::GetInstance()) == 0) {
                itemCount = 2;
                rowCount  = 2;
            }
            break;
        case 4:
            itemCount = *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37)) + 2;
            pageCount = 1;
            rowCount  = itemCount;
            columnCount  = pageCount;
            if (*(unsigned char *) (menu + 0x2000 + RG(0x485, 0x2b5))) rowCount = itemCount - 1;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xe6, 0x1a00 + 0xae));
            break;
        case 5:
        case K(10, 11):
            if (*(short *) (menu + RG(0x1b00 + 0xe6, 0x1a00 + 0xae)) >= 0) {
                *(signed char *) (menu + 0x1000 + RG(0xc20, 0xae8)) =
                    *(signed char *) (menu + *(short *) (menu + RG(0x1b00 + 0xe6, 0x1a00 + 0xae)) + RG(0x1c00 + 0x6e, 0x1b00 + 0x32));
                if (*(short *) (menu + RG(0x1b00 + 0xe6, 0x1a00 + 0xae)) == *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37)))
                    *(signed char *) (menu + 0x1000 + RG(0xc20, 0xae8)) = 4;
                if (*(short *) (menu + RG(0x1b00 + 0xe6, 0x1a00 + 0xae)) == *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37)) + 1)
                    *(signed char *) (menu + 0x1000 + RG(0xc20, 0xae8)) = -1;
            }
            columnCount  = 1;
            rowCount  = 8;
            itemCount = func_ov002_02157108(menu, *(signed char *) (menu + RG(0x1c00 + 0x20, 0x1a00 + 0xe8)));
            pageCount = (itemCount + 7) / 8;
            if (itemCount < 8) rowCount = itemCount;
            if (itemCount <= *(short *) (menu + RG(0x1b00 + 0xe8, 0x1a00 + 0xb0))) *(short *) (menu + RG(0x1b00 + 0xe8, 0x1a00 + 0xb0)) = itemCount - 1;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xe8, 0x1a00 + 0xb0));
            break;
        case K(6, 7):
            pageCount  = 1;
            itemCount  = 4;
            columnCount   = 1;
            rowCount   = 4;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xea, 0x1a00 + 0xb2));
            break;
        case K(7, 8):
            pageCount = 1;
            columnCount  = 1;
            if (*(unsigned char *) (menu + 0x1000 + RG(0xc84, 0xb48)) == 7)
                itemCount = *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37));
            else
                itemCount = *(unsigned char *) (menu + 0x1000 + RG(0xc6d, 0xb31));
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xec, 0x1a00 + 0xb4));
            rowCount   = itemCount;
            break;
        case K(9, 10):
            itemCount  = *(unsigned char *) (menu + 0x1000 + RG(0xc6d, 0xb31)) + 1;
            pageCount  = 1;
            columnCount   = 1;
            rowCount   = itemCount;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xee, 0x1a00 + 0xb6));
            break;
        case K(11, 12):
            itemCount  = *(int *) (menu + 0x1000 + RG(0xc38, 0xafc)) + 1;
            pageCount  = 1;
            columnCount   = 1;
            rowCount   = itemCount;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xf0, 0x1a00 + 0xb8));
            break;
        case K(12, 13):
            pageCount  = 1;
            itemCount  = 2;
            columnCount   = 1;
            rowCount   = 2;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xf2, 0x1a00 + 0xba));
            break;
        case K(13, 14):
            columnCount  = 1;
            rowCount  = 8;
            itemCount = func_ov002_02157108(menu, *(signed char *) (menu + RG(0x1c00 + 0x21, 0x1a00 + 0xe9))) + 1;
            pageCount = 1;
            if (itemCount > 8) itemCount = 8;
            if (itemCount < 8) rowCount = itemCount;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xf4, 0x1a00 + 0xbc));
            break;
        case K(14, 15): {
            signed char lastIndex = func_020dc428();
            itemCount         = lastIndex + 1;
            if (*(short *) (menu + RG(0x1b00 + 0xf6, 0x1a00 + 0xbe)) > lastIndex) *(short *) (menu + RG(0x1b00 + 0xf6, 0x1a00 + 0xbe)) = lastIndex;
            columnCount  = 1;
            rowCount  = itemCount;
            pageCount = 1;
            if (*(short *) (menu + RG(0x1b00 + 0xf6, 0x1a00 + 0xbe)) < 0) *(short *) (menu + RG(0x1b00 + 0xf6, 0x1a00 + 0xbe)) = 0;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xf6, 0x1a00 + 0xbe));
            break;
        }
        case K(16, 17):
            itemCount  = *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37));
            columnCount   = 1;
            rowCount   = itemCount;
            pageCount  = 1;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xf8, 0x1a00 + 0xc0));
            break;
        case K(17, 18):
            itemCount = *(unsigned char *) (menu + 0x2000 + RG(0x520, 0x350));
            rowCount  = 8;
            columnCount  = 1;
            pageCount = (itemCount + 7) / 8;
            if (itemCount < 8) rowCount = itemCount;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xfa, 0x1a00 + 0xc2));
            break;
        case K(20, 21): {
            char *entryList = *(char **) (menu + 0x2000 + RG(0x474, 0x2a4));
            if (entryList != NULL) {
                itemCount = *(unsigned short *) (entryList + 0xc);
                rowCount  = 6;
                columnCount  = 1;
                if (itemCount < 6) rowCount = itemCount;
                cursorIndex = *(short *) (menu + RG(0x1b00 + 0xfc, 0x1a00 + 0xc4));
                pageCount  = (itemCount - 1) / 6 + 1;
            } else {
                columnCount   = isRowMajor;
                rowCount   = columnCount;
                itemCount  = columnCount;
                cursorIndex = columnCount;
                pageCount  = columnCount;
            }
            break;
        }
        case K(21, 22): {
            short optionCount = 0;
            short optionIds[9];
            func_ov002_02156080(menu, optionIds, &optionCount);
            itemCount  = optionCount;
            columnCount   = 1;
            rowCount   = itemCount;
            pageCount  = 1;
            cursorIndex = *(short *) (menu + RG(0x1b00 + 0xfe, 0x1a00 + 0xc6));
            break;
        }
        case K(23, 24): break;
        case K(24, 25):
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0x2, 0x1a00 + 0xca));
            columnCount   = 3;
            rowCount   = *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37)) + 1;
            itemCount  = rowCount * 3;
            pageCount  = 1;
            break;
        case K(25, 26):
            pageCount  = 1;
            itemCount  = 6;
            columnCount   = 1;
            rowCount   = 6;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0x4, 0x1a00 + 0xcc));
            break;
        case K(28, 29):
            rowCount   = 4;
            pageCount  = 1;
            columnCount   = 4;
            isRowMajor   = 1;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0x6, 0x1a00 + 0xce));
            itemCount  = 0x10;
            break;
        case K(31, 32):
            itemCount  = *(signed char *) (menu + RG(0x1c00 + 0x73, 0x1b00 + 0x37));
            pageCount  = 1;
            columnCount   = 1;
            rowCount   = itemCount;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0x8, 0x1a00 + 0xd0));
            break;
        case K(33, 36):
            pageCount  = 1;
            itemCount  = 8;
            columnCount   = 1;
            rowCount   = 8;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0xa, 0x1a00 + 0xd2));
            break;
        case K(34, 37):
            columnCount   = 2;
            pageCount  = 2;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0xc, 0x1a00 + 0xd4));
            rowCount   = 8;
            itemCount  = 0x20;
            isRowMajor   = 1;
            break;
        case K(35, 38):
            pageCount  = 1;
            itemCount  = 3;
            columnCount   = 1;
            rowCount   = 3;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0xe, 0x1a00 + 0xd6));
            break;
        case K(36, 39):
            pageCount  = 1;
            itemCount  = 2;
            columnCount   = 1;
            rowCount   = 2;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0x10, 0x1a00 + 0xd8));
            break;
        case K(37, 40):
            pageCount  = 1;
            itemCount  = 2;
            columnCount   = 1;
            rowCount   = 2;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0x12, 0x1a00 + 0xda));
            break;
        case K(39, 42):
            pageCount  = 1;
            itemCount  = 2;
            columnCount   = 1;
            rowCount   = 2;
            cursorIndex = *(short *) (menu + RG(0x1c00 + 0x14, 0x1a00 + 0xdc));
            break;
        default:
            DisableTouchMenuCursor_0205cf10(menu + RG(0x2c8 + 0xc00, 0xe20));
            DisableKeyMenuCursor_0205cf1c((struct TextWindowManager_0205cf1c *) (menu + RG(0x2c8 + 0xc00, 0xe20)));
            return;
    }
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68 *) (windowManager + 4), columnCount, rowCount, isRowMajor);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68 *) (windowManager + 0x54), columnCount, rowCount, isRowMajor);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc *) (windowManager + 4), itemCount);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc *) (windowManager + 0x54), itemCount);
    *(int *) (windowManager + 8)    = pageCount;
    *(int *) (windowManager + 0x58) = pageCount;
    SetTouchMenuCursorIndex_0205bcdc((struct MenuCursor_0205bcdc *) (windowManager + 4), cursorIndex);
    SetMenuCursorIndex_0205bb04(windowManager + 0x54, cursorIndex);
    *(unsigned int *) (menu + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
}
