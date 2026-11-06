#include <globaldefs.h>


extern "C" void* GetFlagManager_0205ec34(void* arg0);
extern "C" int func_020420e8(int arg0, int arg1);
extern "C" int IsFlagSet_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);
extern "C" int GetStandardString_020e51cc(int stringId);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int AppendTextColorTag_02041e70(char* buffer, int colorIndex);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int AppendXPositionTag_02041a28(char* buffer, int x);

extern short data_ov002_0216ca04[];
extern int data_ov002_0216ca58[];
extern char data_ov002_0216d26e;

#if defined(jpn)
extern int data_ov002_0216d09c[];
extern const char* data_ov002_0216d600[];
extern char data_ov002_0216d92a;

extern "C" ARM void func_ov002_0215c178(void* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;
    char* var0 = (char*)arg0 + 0x1a00;
    short var1 = *(short*)(var0 + 0xa8);
    void* var2 = GetFlagManager_0205ec34(var0);
    int var3 = IsFlagSet_0206dfb0((int)(long)var2, (unsigned char*)var2 + 0x8c, 4506) != 0;
    if (arg2 != 0) {
        AppendFrameTag_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var1);
    for (int var4 = 0; var4 < 6; var4++) {
        if (var4 == 3 && var3 == 0) {
            AppendTextColorTag_02041e70(arg1, 3);
        }
        int var5 = data_ov002_0216d09c[var4];
        AppendMenuEntry_02041b70(arg1, var5, data_ov002_0216d600[var5]);
        if (var4 == 1 || var4 == 3) {
            AppendText_02042058(arg1, &data_ov002_0216d92a);
        } else {
            AppendXPositionTag_02041a28(arg1, 0x3e);
        }
        if (var4 == 3 && var3 == 0) {
            AppendTextColorTag_02041e70(arg1, 15);
        }
    }
}
#else
// USA: func_ov002_0215c178
extern "C" ARM void func_ov002_0215c178(void* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;
    char* var6 = (char*)arg0 + 0x1b00;
    short var7 = *(short*)(var6 + 0xe0);
    void* var8 = GetFlagManager_0205ec34(var6);
    int var9 = IsFlagSet_0206dfb0((int)(long)var8, (unsigned char*)var8 + 0x8c, 4506) != 0;
    int var10 = 0;
    for (int var11 = 0; var11 < 3; var11++) {
        int var12 = func_020420e8(GetStandardString_020e51cc(data_ov002_0216ca04[var11]), 0);
        if (var10 < var12) var10 = var12;
    }
    if (arg2 != 0) {
        AppendFrameTag_02041c08(arg1, var7, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var7);
    for (int var13 = 0; var13 < 6; var13++) {
        if (var13 == 3 && var9 == 0) {
            AppendTextColorTag_02041e70(arg1, 3);
        }
        int var14 = data_ov002_0216ca58[var13];
        int var15 = GetStandardString_020e51cc(data_ov002_0216ca04[var14]);
        AppendMenuEntry_02041b70(arg1, var14, (const char*)(long)var15);
        if (var13 == 1 || var13 == 3) {
            AppendText_02042058(arg1, &data_ov002_0216d26e);
        } else {
            AppendXPositionTag_02041a28(arg1, var10 + 0x20);
        }
        if (var13 == 3 && var9 == 0) {
            AppendTextColorTag_02041e70(arg1, 15);
        }
    }
}
#endif
