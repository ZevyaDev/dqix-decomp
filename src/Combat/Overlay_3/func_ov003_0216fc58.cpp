#include <globaldefs.h>

struct TextWindowManager_0205de24_2;
struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
struct TextWindowManager_0205d81c;
struct Struct_0204c610;
struct Struct_0201099c_3;

struct Struct_ov003_0216fc58 {
    char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
};

extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex);
extern "C" void EnableTouchMenuCursor_0205cef8(void* windowManager);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" short func_ov003_0216df38(char* arg0, struct Struct_0201099c_3* arg1, int arg2);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" const char* FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern char data_ov003_0217ea90[];
extern char data_ov003_0217eaac[];
extern char data_ov003_0217eabf[];
extern char data_ov003_0217ea6f[];
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif
extern "C" void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor);
extern "C" void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount);
extern "C" struct Struct_ov003_0216fc58* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" void func_0204c610(struct Struct_0204c610* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void* func_ov023_021e2ca8(void* arg0, void* arg1, int arg2, int arg3);
extern "C" void* func_ov023_021e2cc8(void* arg0, void* arg1, int arg2, int arg3);

#if defined(jpn)
// USA: func_ov003_0216fc58
extern "C" ARM void func_ov003_0216fc58(char* arg0, int arg1, int arg2) {
    char* var0 = *(char**)(arg0 + 0x3c);
    if (var0 == 0) {
        return;
    }
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)var0, 0, 1);

    (*(char**)(arg0 + 0x3c))[0xb1] = 0;

    var0 = *(char**)(arg0 + 0x3c);
    *(short*)(var0 + 0xa0) = 0x11;
    *(short*)(var0 + 0xa2) = 9;

    var0 = *(char**)(arg0 + 0x3c);
    *(short*)(var0 + 0xa4) = 6;
    *(short*)(var0 + 0xa6) = 6;

    var0 = *(char**)(arg0 + 0x3c);
    *(short*)(var0 + 0xa8) = 0;
    *(short*)(var0 + 0xaa) = 0xe;

    var0 = *(char**)(arg0 + 0x3c);
    *(short*)(var0 + 0xac) = 0xa;
    *(short*)(var0 + 0xae) = 0x10;

    (*(char**)(arg0 + 0x3c))[0xb5] = 1;

    EnableTouchMenuCursor_0205cef8(*(char**)(arg0 + 0x3c));

    char var1[0x200];
    char var2[0x80];
    __clear(var1, 0x200);
    __clear(var2, 0x80);
    AppendFrameTag_02041c08(var1, arg2, 8, 5, 5, 5);

    if (arg1) {
        sprintf(var2, data_ov003_0217ea90, FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xdc), 6));
    } else {
        sprintf(var2, data_ov003_0217ea90, FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xdc), 5));
    }
    AppendText_02042058(var1, var2);
    sprintf(var2, data_ov003_0217eaac, FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xdc), 7));
    AppendText_02042058(var1, var2);
    sprintf(var2, data_ov003_0217eabf, data_ov003_0217ea6f);
    AppendText_02042058(var1, var2);

    OpenTextWindow_0205d304(*(char**)(arg0 + 0x3c), var1, 0, 0, 0, 1, 0);

    var0 = *(char**)(arg0 + 0x3c);
    *(int*)(var0 + 0x8) = 1;
    *(int*)(var0 + 0x58) = 1;
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var0 + 0x4), 1, 3, 0);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var0 + 0x54), 1, 3, 0);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var0 + 0x4), 3);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var0 + 0x54), 3);
}
#else
// USA: func_ov003_0216fc58
extern "C" ARM void func_ov003_0216fc58(char* arg0, int arg1, int arg2) {
    char* var3 = *(char**)(arg0 + 0x3c);
    if (var3 == 0) {
        return;
    }
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)var3, 0, 1);

    (*(char**)(arg0 + 0x3c))[0xb1] = 0;

    var3 = *(char**)(arg0 + 0x3c);
    *(short*)(var3 + 0xa0) = 0x11;
    *(short*)(var3 + 0xa2) = 9;

    var3 = *(char**)(arg0 + 0x3c);
    *(short*)(var3 + 0xa4) = 6;
    *(short*)(var3 + 0xa6) = 6;

    var3 = *(char**)(arg0 + 0x3c);
    *(short*)(var3 + 0xa8) = 0xc;
    *(short*)(var3 + 0xaa) = 0xe;

    var3 = *(char**)(arg0 + 0x3c);
    *(short*)(var3 + 0xac) = 0xa;
    *(short*)(var3 + 0xae) = 0x10;

    (*(char**)(arg0 + 0x3c))[0xb5] = 1;

    EnableTouchMenuCursor_0205cef8(*(char**)(arg0 + 0x3c));

    char var4[0x200];
    __clear(var4, 0x200);
    AppendFrameTag_02041c08(var4, arg2, 8, 5, 5, 5);

    short var5 = func_ov003_0216df38(var4, (struct Struct_0201099c_3*)(arg0 + 0xdc), arg1);

    var3 = *(char**)(arg0 + 0x3c);
    *(short*)(var3 + 0xa4) = (short)((0x20 - var5) >> 1);
    *(short*)(var3 + 0xa6) = 6;

    var3 = *(char**)(arg0 + 0x3c);
    *(short*)(var3 + 0xa0) = var5;
    *(short*)(var3 + 0xa2) = 9;

    OpenTextWindow_0205d304(*(char**)(arg0 + 0x3c), var4, 0, 0, 0, 1, 0, 0);

    var3 = *(char**)(arg0 + 0x3c);
    *(int*)(var3 + 0x8) = 1;
    *(int*)(var3 + 0x58) = 1;
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var3 + 0x4), 1, 3, 0);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(var3 + 0x54), 1, 3, 0);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var3 + 0x4), 3);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(var3 + 0x54), 3);

    struct Struct_ov003_0216fc58* var6 = FindTextWindow_0205d81c(*(struct TextWindowManager_0205d81c**)(arg0 + 0x3c), 0);
    if (var6 == 0) {
        return;
    }

    short var7 = var6->unknown_ac_ * 8;
    short var8 = var6->unknown_ae_ * 8;
    short var9 = 0x16;
    for (int var10 = 0; var10 < 3; var10++, var9++) {
        short var11, var12, var13, var14;
        func_0204c610((struct Struct_0204c610*)var6, (short)var10, &var11, &var12, &var13, &var14);
        func_ov023_021e2ca8(*(void**)(arg0 + 0xd4), (void*)var9, (short)(var11 + var7), (short)(var12 + var8));
        func_ov023_021e2cc8(*(void**)(arg0 + 0xd4), (void*)var9, var13, var14);
    }
}
#endif
