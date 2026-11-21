#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif


extern "C" int GetMessageWindow_020421a0(void);
#if defined(jpn)
extern "C" int ConvertTextToMessageGlyphs_02045d14(void* arg0, int arg1, void* arg2, int arg3);
extern "C" int func_02046f80(void* arg0, int arg1, void* arg2, int arg3);
#else
extern "C" int ConvertTextToMessageGlyphs_02045d14(void* window, int text, void* glyphCodes, int font);
extern "C" int func_02046170(void* arg0, void* arg1, int arg2, int arg3);
#endif

// USA: AddChoiceListEntry_0205cb74
#pragma optimize_for_size off
extern "C" ARM void AddChoiceListEntry_0205cb74(char* choiceList, int text) {
    if (text == 0) return;

    void* messageWindow = (void*)GetMessageWindow_020421a0();

    *(unsigned short*)(choiceList + (IS_JPN ? 0x1b0 : 0x220) + *(unsigned char*)(choiceList + (IS_JPN ? 0x1c2 : 0x232)) * 2) = *(unsigned short*)(choiceList + (IS_JPN ? 0x1c0 : 0x230));

#if defined(jpn)
    int glyphCount = ConvertTextToMessageGlyphs_02045d14(messageWindow, text, (unsigned short*)(choiceList + 0x120) + *(unsigned short*)(choiceList + (IS_JPN ? 0x1c0 : 0x230)), 0xc);
#else
    int glyphCount = ConvertTextToMessageGlyphs_02045d14(messageWindow, text, (unsigned short*)(choiceList + 0x120) + *(unsigned short*)(choiceList + (IS_JPN ? 0x1c0 : 0x230)), 1);
#endif
    *(unsigned short*)(choiceList + (IS_JPN ? 0x1c0 : 0x230)) = *(unsigned short*)(choiceList + (IS_JPN ? 0x1c0 : 0x230)) + glyphCount;

#if defined(jpn)
    int textWidth = func_02046f80(messageWindow, 0xc, (unsigned short*)(choiceList + 0x120) + *(unsigned short*)(choiceList + (IS_JPN ? 0x1b0 : 0x220) + *(unsigned char*)(choiceList + (IS_JPN ? 0x1c2 : 0x232)) * 2), 0x100);
#else
    int textWidth = func_02046170(messageWindow, (unsigned short*)(choiceList + 0x120) + *(unsigned short*)(choiceList + (IS_JPN ? 0x1b0 : 0x220) + *(unsigned char*)(choiceList + (IS_JPN ? 0x1c2 : 0x232)) * 2), 0x100, 1);
#endif

    if (*(int*)(choiceList + 0xd0) < textWidth) {
        *(int*)(choiceList + 0xd0) = textWidth;
    }

    *(unsigned char*)(choiceList + (IS_JPN ? 0x1c2 : 0x232)) = *(unsigned char*)(choiceList + (IS_JPN ? 0x1c2 : 0x232)) + 1;

    if (*(int*)(choiceList + 0xdc) >= 8) {
        *(int*)(choiceList + 0xdc) = 7;
    } else {
        *(unsigned short*)(choiceList + 0x100 + *(int*)(choiceList + 0xdc) * 2) = textWidth;
        *(unsigned short*)(choiceList + 0x110 + *(int*)(choiceList + 0xdc) * 2) = 0xc;
    }

    *(int*)(choiceList + 0xdc) = *(int*)(choiceList + 0xdc) + 1;
}
