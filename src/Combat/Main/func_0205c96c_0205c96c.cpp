#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0205c570;
extern "C" int GetMessageWindow_020421a0(void);
extern "C" int GetMenuCursorsIndex_0205c570(struct Struct_0205c570* cursors);
extern "C" void func_02042b10(void* arg0, void* arg1);
extern "C" void func_0202f404(void* arg0, int arg1, int arg2);
extern "C" void func_02042b1c(unsigned char* arg0);
extern "C" int func_0205cde8(unsigned char* arg0);
#if defined(jpn)
extern "C" void func_02046c78(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#else
extern "C" void func_02045f3c(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
#endif

struct SpriteAnimationList_0205a254;
struct Struct_0205c96c {
    char unknown_0_[4];
    unsigned short drawX_4_;
    unsigned short drawY_6_;
    char unknown_8_[0xd];
    unsigned char flags_15_;
};

static inline int inline_0205c96c(unsigned char* arg0) { return *(int*)(arg0 + 0x88); }
static inline int inline_0205c96c_2(unsigned char* arg0) { return *(int*)(arg0 + 0x8c); }

// USA: DrawChoiceList_0205c96c
extern "C" ARM void DrawChoiceList_0205c96c(unsigned char* choiceList, int arg1) {
    unsigned char* messageWindow;
    int touchedIndex;
    int pageEndIndex;
    int cursorIndex;
    int textColor;
    int x;
    int y;
    int firstRowY;
    int i;
    int rowCount;
    int cursorColumn;
    int cursorRow;
    void* spriteSet;
    struct SpriteAnimationList_0205a254* spriteList;
    unsigned short cursorSpriteId;
    struct Struct_0205c96c* cursorSprite;

    if (choiceList[RG(0x233, 0x1c3)] == 0 || choiceList[RG(0x232, 0x1c2)] == 0) {
        return;
    }

    messageWindow = (unsigned char*)GetMessageWindow_020421a0();
    touchedIndex = *(int*)(choiceList + 0x50);
    cursorIndex = GetMenuCursorsIndex_0205c570((struct Struct_0205c570*)(choiceList + 0x1c));
    textColor = 0x7fff;
    if (choiceList[RG(0x234, 0x1c4)] == 0) {
        textColor = 0x3def;
    }

    if (arg1 == 0) {
        *(short*)(choiceList + 0xcc) = textColor;
        func_02042b10(messageWindow, choiceList + 0xb4);
        func_0202f404(messageWindow + RG(0x19e0, 0x1804), 1, 1);
        func_02042b1c(messageWindow);
    }

    if (func_0205cde8(choiceList) == 0) {
        return;
    }

    messageWindow[RG(0x19b0, 0x17e0)] = 1;

    rowCount = *(int*)(choiceList + 0x7c);
    i = rowCount * *(int*)(choiceList + 0x84);
    x = *(short*)(choiceList + 0xb4) + 0xc;
    y = *(short*)(choiceList + 0xb6) + 8;
    pageEndIndex = i + rowCount;
    firstRowY = y;

    for (; i < pageEndIndex; i++) {
        int entryColor = textColor;
        if (i == touchedIndex && touchedIndex == cursorIndex) {
            entryColor = 0xf0a;
        }
#if defined(jpn)
        func_02046c78(messageWindow, (unsigned short*)(choiceList + 0x120) + *(unsigned short*)(choiceList + 0x1b0 + i * 2), x, y, entryColor, 0xc, 0x14, arg1);
#else
        func_02045f3c(messageWindow, (unsigned short*)(choiceList + 0x120) + *(unsigned short*)(choiceList + 0x220 + i * 2), x, y, entryColor, 0xc, 0x14, arg1, 1, 0x11);
#endif
        y += *(int*)(choiceList + 0xd8);
    }

    if ((choiceList[0xb0] | choiceList[0xb1]) == 0) {
        return;
    }

    cursorColumn = inline_0205c96c(choiceList);
    cursorRow = inline_0205c96c_2(choiceList);
    x = cursorColumn * *(int*)(choiceList + 0xd4) + (x - 0x10);
    y = cursorRow * *(int*)(choiceList + 0xd8) + (firstRowY - 2);
    spriteSet = *(void**)(messageWindow + RG(0x2d8, 0x228));
    spriteList = *(struct SpriteAnimationList_0205a254**)(messageWindow + RG(0x2e0, 0x230));
    cursorSpriteId = *(unsigned short*)(messageWindow + RG(0x2e4, 0x234));
    if (spriteSet == NULL || spriteList == NULL) {
        return;
    }

    ((OBJSpriteSet::List*)(spriteList))->PlaySpriteAnimation(cursorSpriteId);
    cursorSprite = ((Struct_0205c96c*)((OBJSpriteSet::List*)(spriteList))->GetSprite(cursorSpriteId));
    if (cursorSprite != NULL) {
        cursorSprite->flags_15_ |= 8;
    }
    cursorSprite = ((Struct_0205c96c*)((OBJSpriteSet::List*)(spriteList))->GetSprite(cursorSpriteId));
    if (cursorSprite != NULL) {
        cursorSprite->drawX_4_ = x;
        cursorSprite->drawY_6_ = y;
    }
    ((OBJSpriteSet*)(spriteSet))->DrawAll();
}
