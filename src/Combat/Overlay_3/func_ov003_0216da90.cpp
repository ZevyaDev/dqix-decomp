#include <globaldefs.h>

#if defined(jpn)
#define func_ov003_0216da90 func_ov003_0216d478
#endif
#include "GameState/GameState.h"

struct TextWindowManager_0205de24_2;
struct Struct_0205c570;
struct TextWindowManager_0205d81c;
struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
struct Struct_0201099c_3;
struct Struct_02000c9c_8;

struct Struct_ov003_0216da90_2
{
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x40 - 0x8];
};

struct Struct_ov003_0216da90_3
{
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;

    void inline_ov003_0216da90(short arg0, short arg1)
    {
        unknown_0_ = arg0;
        unknown_2_ = arg1;
    }

    void inline_ov003_0216da90_2(short arg0, short arg1)
    {
        unknown_4_ = arg0;
        unknown_6_ = arg1;
    }
};

struct Struct_ov003_0216da90_4
{
    int unknown_0_;
    Struct_ov003_0216da90_2 unknown_4_;
    char unknown_44_[0x54 - 0x44];
    Struct_ov003_0216da90_2 unknown_54_;
    unsigned char unknown_94_;
    unsigned char unknown_95_;
    char unknown_96_[0xa0 - 0x96];
    Struct_ov003_0216da90_3 unknown_a0_;
    Struct_ov003_0216da90_3 unknown_a8_;
    char unknown_b0_;
    unsigned char unknown_b1_;
    char unknown_b2_[3];
    unsigned char unknown_b5_;
};

struct Struct_ov003_0216da90
{
    char unknown_0_[0x10];
    int unknown_10_;
#if defined(jpn)
    char unknown_14_[0x1150 - 0x14];
#else
    char unknown1_14_[0x12c0 - 0x14];
#endif
    Struct_ov003_0216da90_4* unknown_12c0_;
    char unknown_12c4_[0x1324 - 0x12c4];
    char unknown_1324_[4];
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" void SetNextTextWindowBGLayer_0205de24(TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex);
extern "C" void func_0205cef8(void* arg0);
extern "C" unsigned char GetGameLanguage_0200fb08(Struct_02000c9c_8* gameState);
extern "C" int GetCursorIndex_0205d794(Struct_0205c570* windowManager);
extern "C" void AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" void AppendText_02042058(char* buffer, const char* text);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif
extern "C" Struct_ov003_0216da90_4* FindTextWindow_0205d81c(TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" void SetMenuCursorGrid_0205ba68(MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor);
extern "C" void SetMenuCursorItemCount_0205bacc(MenuCursor_0205bacc* cursor, int itemCount);

extern short data_ov003_0217f560[];

// USA: func_ov003_0216da90
extern "C" ARM void func_ov003_0216da90(Struct_ov003_0216da90* arg0)
{
    SetNextTextWindowBGLayer_0205de24((TextWindowManager_0205de24_2*)arg0->unknown_12c0_, 0, 1);
    arg0->unknown_12c0_->unknown_b1_ = 0;
#if defined(jpn)
    arg0->unknown_12c0_->unknown_a0_.inline_ov003_0216da90(0xc, 7);
    arg0->unknown_12c0_->unknown_a0_.inline_ov003_0216da90_2(0x11, 1);
#endif
    arg0->unknown_12c0_->unknown_a8_.inline_ov003_0216da90(0xd, 5);
    arg0->unknown_12c0_->unknown_a8_.inline_ov003_0216da90_2(0xa, 0xc);
    arg0->unknown_12c0_->unknown_b5_ = 1;
    func_0205cef8(arg0->unknown_12c0_);

#if !defined(jpn)
    short var0 = data_ov003_0217f560[GetGameLanguage_0200fb08((Struct_02000c9c_8*)GameState::GetInstance())];
    arg0->unknown_12c0_->unknown_a0_.inline_ov003_0216da90(var0, 7);
    arg0->unknown_12c0_->unknown_a0_.inline_ov003_0216da90_2(0x1f - var0, 1);
#endif

    char var1[0x100];
    char var2[0x40];
    __clear(var1, 0x100);
    __clear(var2, 0x40);
    if (arg0->unknown_10_ == 2)
        AppendFrameTag_02041c08(var1, GetCursorIndex_0205d794((Struct_0205c570*)arg0->unknown_12c0_), 8, 5, 5, 5);
    AppendText_02042058(var1, FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_1324_, 0x5c));
#if defined(jpn)
    OpenTextWindow_0205d304(arg0->unknown_12c0_, var1, 0, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0->unknown_12c0_, var1, 0, 0, 0, 1, 0, 0);
#endif

#if !defined(jpn)
    Struct_ov003_0216da90_4* var3 = FindTextWindow_0205d81c((TextWindowManager_0205d81c*)arg0->unknown_12c0_, 0);
    if (var3)
        var3->unknown_a8_.inline_ov003_0216da90_2(0x1f - var3->unknown_a8_.unknown_0_, var3->unknown_a8_.unknown_6_);
#endif

    Struct_ov003_0216da90_4* var4 = arg0->unknown_12c0_;
    var4->unknown_4_.unknown_4_ = 1;
    var4->unknown_54_.unknown_4_ = 1;
    SetMenuCursorGrid_0205ba68((MenuCursor_0205ba68*)&var4->unknown_4_, 1, 4, 0);
    SetMenuCursorGrid_0205ba68((MenuCursor_0205ba68*)&var4->unknown_54_, 1, 4, 0);
    SetMenuCursorItemCount_0205bacc((MenuCursor_0205bacc*)&var4->unknown_4_, 4);
    SetMenuCursorItemCount_0205bacc((MenuCursor_0205bacc*)&var4->unknown_54_, 4);
    var4->unknown_94_ = 1;
    var4->unknown_95_ = 1;
}
