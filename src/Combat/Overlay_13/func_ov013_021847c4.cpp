#if defined(jpn)
#define R(j,u) (j)
#define func_ov013_021846a0 func_ov013_021856dc
#define func_ov013_02184d80 func_ov013_02185db4
#define func_ov013_02186160 func_ov013_02187178
#define func_ov013_0218678c func_ov013_02187ab8
#define func_ov013_0218683c func_ov013_02187b68
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#if defined(jpn)
#define func_ov013_021864f0 func_ov013_02187820
#endif
#include "GameState/GameState.h"

struct TextWindowManager_0205d0e0_2;
extern "C" void* GetLastOpenedTextWindow_0205d888(struct TextWindowManager_0205d0e0_2* windowManager);
extern "C" int IsTextWindowReady_0204c7cc(unsigned char* textWindow);
extern "C" void SetMenuCursorTouchedIndex_0205bc24(void* cursor, int index);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void func_0205c904(unsigned char* arg0, int arg1);

struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks);

struct Struct_0205bc10;
extern "C" void func_0205bc10(struct Struct_0205bc10* arg0);

struct MenuCursor_0205ba68;
extern "C" void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor);

struct MenuCursor_0205bacc;
extern "C" void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount);

struct MenuCursor_0205bcdc;
extern "C" void SetTouchMenuCursorIndex_0205bcdc(struct MenuCursor_0205bcdc* cursor, int index);

struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c* windowManager, int windowId, int palette);

extern "C" void SetMenuCursorIndex_0205bb04(void* cursor, int index);
extern "C" int UpdateTextWindowManager_0205d0e0(void* windowManager, int ticks);
extern "C" void func_ov013_02186bd4(void* arg0);
extern "C" void func_ov013_02184d80(void* arg0);
extern "C" void func_ov013_02186160(void* arg0);
extern "C" void func_ov013_0218678c(void* arg0);
extern "C" void func_ov013_021864f0(void* arg0);
extern "C" void func_ov013_0218683c(void* arg0);
extern "C" void func_ov013_02186590(void* arg0);
extern "C" void func_ov013_021846a0(void* arg0);

// USA: func_ov013_021847c4
extern "C" ARM unsigned char func_ov013_021847c4(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    GameState* var1;
    void* var2;
    int var3;

    *(int*)(var0 + 0x14) = arg1;
    var1 = GameState::GetInstance();
    *(int*)(var0 + R(0x5d0,0x644)) = var1->GetTickCount();

    var2 = GetLastOpenedTextWindow_0205d888((struct TextWindowManager_0205d0e0_2*)(var0 + R(0x34,0x38)));
    if (var2 != 0) {
        if (IsTextWindowReady_0204c7cc((unsigned char*)var2) != 0) {
            if ((((unsigned char*)var2)[0xc5] & 2) == 0) {
                SetMenuCursorTouchedIndex_0205bc24(var0 + R(0x38,0x3c), -1);
            }
        }
    }

    *(int*)(var0 + R(0x5d4,0x648)) = UpdateTextWindowManager_0205d0e0(var0 + R(0x34,0x38), *(int*)(var0 + R(0x5d0,0x644)));
    func_0205c904(var0 + R(0x3d0,0x3d4), *(int*)(var0 + R(0x5d0,0x644)));

    {
        int var4 = GetMessageWindow_020421a0();
        struct SpriteAnimationList_0205a330* var5 = *(struct SpriteAnimationList_0205a330**)(var4 + R(0x230,0x2e0));
        if (var5 != 0) {
            AdvanceSpriteAnimations_0205a330(var5, var1->GetTickCount());
        }
    }

    if (var0[R(0x5cb,0x63f)] != 0) {
        if (var0[R(0x5cc,0x640)] != 0) {
            func_0205bc10((struct Struct_0205bc10*)(var0 + R(0x38,0x3c)));
        }
        if (var0[R(0x5c8,0x63c)] == 1) {
            var0[R(0xe5,0xe9)] = 0;
            *(int*)(var0 + R(0x3c,0x40)) = 1;
            *(int*)(var0 + R(0x8c,0x90)) = 1;
            SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var0 + R(0x38,0x3c)), 1, 6, 0);
            SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var0 + R(0x88,0x8c)), 1, 6, 0);
            SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var0 + R(0x38,0x3c)), 6);
            SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var0 + R(0x88,0x8c)), 6);
            var3 = *(int*)(var0 + R(0x5e4,0x65c));
            SetTouchMenuCursorIndex_0205bcdc((struct MenuCursor_0205bcdc*)(var0 + R(0x38,0x3c)), var3);
            SetMenuCursorIndex_0205bb04(var0 + R(0x88,0x8c), var3);
            func_ov013_02186bd4(arg0);
        }
        if (var0[R(0x5c8,0x63c)] == 3 && var0[R(0x5cc,0x640)] != 0) {
            var0[R(0xe5,0xe9)] = 3;
            *(int*)(var0 + R(0x3c,0x40)) = 1;
            *(int*)(var0 + R(0x8c,0x90)) = 1;
            SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var0 + R(0x38,0x3c)), 1, 2, 0);
            SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var0 + R(0x88,0x8c)), 1, 2, 0);
            SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var0 + R(0x38,0x3c)), 2);
            SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var0 + R(0x88,0x8c)), 2);
            SetTouchMenuCursorIndex_0205bcdc((struct MenuCursor_0205bcdc*)(var0 + R(0x38,0x3c)), 0);
            SetMenuCursorIndex_0205bb04(var0 + R(0x88,0x8c), 0);
        }
        var0[R(0x5cb,0x63f)] = 0;
        return var0[R(0x5c8,0x63c)];
    }

    switch (var0[R(0x5c8,0x63c)]) {
        case 0:
            func_ov013_02184d80(arg0);
            break;
        case 1:
            func_ov013_02186160(arg0);
            break;
        case 2:
            if (var0[R(0x5cc,0x640)] != 0) func_ov013_0218678c(arg0);
            else func_ov013_021864f0(arg0);
            break;
        case 3:
        case 4:
            if (var0[R(0x5cc,0x640)] != 0) func_ov013_0218683c(arg0);
            else func_ov013_02186590(arg0);
            break;
        case 5:
            func_ov013_021846a0(arg0);
            break;
    }

    for (var3 = 0; var3 < 4; var3++) {
        unsigned char* var6 = var0 + var3;
        unsigned char var7 = var6[R(0x5c4,0x638)];
        struct TextWindowManager_0205d81c* var8 = (struct TextWindowManager_0205d81c*)(var0 + R(0x34,0x38));
        SetTextWindowPalette_0205deb4(var8, (unsigned char)var3, var7);
    }

    var0[R(0x5cb,0x63f)] = (var0[R(0x5c8,0x63c)] != var0[R(0x5c9,0x63d)]) ? 1 : 0;
    var0[R(0x5c9,0x63d)] = var0[R(0x5c8,0x63c)];
    return var0[R(0x5c8,0x63c)];
}
