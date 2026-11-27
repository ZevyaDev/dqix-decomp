#include <globaldefs.h>

struct TextWindow_ov023_021f7eb8_2 {
#if defined(jpn)
    char unknown1_0_[0xb4];
    short unknown_b4_;
    short lineHeight_b6_;
    char unknown_b8_[0xe0 - 0xb8];
#else
    char unknown_0_[0xe0];
#endif

};

class MenuObject_ov023_021f7eb8 {
public:
    unsigned short unknown_4_;
    short id_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char flags_c_;
    char unknown_d_[3];
    const char* unknown_10_;
    MenuObject_ov023_021f7eb8* unknown_14_;
    MenuObject_ov023_021f7eb8* unknown_18_;
    int unknown_1c_;

    virtual void inline_ov023_021f7eb8();
};

class MenuWindow_ov023_021f7eb8_3 : public MenuObject_ov023_021f7eb8 {
public:
    TextWindow_ov023_021f7eb8_2 textWindow_20_;
    unsigned short pixelX_100_;
    unsigned short pixelY_102_;
    short page_104_;
    short pageCount_106_;
    unsigned char unknown_108_;
    char unknown_109_;
    unsigned char pageNumberColorIndex_10a_;
    char unknown_10b_;
    unsigned short unknown_10c_;
    unsigned short unknown_10e_;
};

struct FontGlyph_ov023_021f7eb8_4 {
    int unknown_0_;
    signed char width_4_;
};

struct TextWindow_0204fbf8_2;

extern "C" void SetTextWindowCharacterDataOffsetAndId_0204f160(unsigned char*, int, int);
extern "C" void func_0204f174(TextWindow_ov023_021f7eb8_2* arg0, short arg1, short arg2, short arg3, short arg4,
                              unsigned char arg5, unsigned char arg6, unsigned char arg7, int);
extern "C" void func_0204fae8(TextWindow_ov023_021f7eb8_2* arg0);
extern "C" FontGlyph_ov023_021f7eb8_4* FindFontGlyph_0204254c(int, int);
extern "C" void func_0204f7e8(TextWindow_ov023_021f7eb8_2* arg0, short arg1, short arg2, int arg3, unsigned char arg4,
                              unsigned char arg5, unsigned short* arg6, unsigned short* arg7, int, int, int, int);
extern "C" void func_0204f41c(TextWindow_ov023_021f7eb8_2* arg0, short arg1, short arg2, const char* arg3, unsigned char arg4,
                              unsigned char arg5, unsigned short* arg6, unsigned short* arg7, int);
extern "C" void func_ov023_021f8240(MenuWindow_ov023_021f7eb8_3* arg0, void* arg1);
extern "C" void LoadTextWindowCharacterData_0204fbf8(TextWindow_0204fbf8_2*);

extern const char data_ov023_021fd91c[];
#if defined(jpn)
extern "C" void func_02050cc0(TextWindow_ov023_021f7eb8_2*, short, short, int, unsigned char, unsigned char, unsigned short*, unsigned short*, int, int, int, int);
extern "C" void func_02050678(TextWindow_ov023_021f7eb8_2*, short, short, const char*, unsigned char, unsigned char, unsigned short*, unsigned short*);
#endif

// USA: DrawMenuWindow_ov023_021f7eb8
extern "C" ARM void DrawMenuWindow_ov023_021f7eb8(MenuWindow_ov023_021f7eb8_3* window, void* menu, int characterDataOffset, short x, short y,
                                        short width, short height, unsigned char palette, unsigned char isTransparent,
                                        unsigned char isFrameless) {
    SetTextWindowCharacterDataOffsetAndId_0204f160((unsigned char*)&window->textWindow_20_, characterDataOffset, window->id_6_);
    func_0204f174(&window->textWindow_20_, x, y, width, height, palette, isTransparent, isFrameless, 0);
    if (window->flags_c_ & 4) {
        if (window->pageCount_106_ > 1)
            func_0204fae8(&window->textWindow_20_);
#if defined(jpn)
        unsigned char colorIndex = window->pageNumberColorIndex_10a_;
        window->textWindow_20_.unknown_b4_ = 8;
        window->textWindow_20_.lineHeight_b6_ = 9;
        width = (short)(width * 4) - 4;
        height = (short)(height * 8) - 12;
        unsigned short textWidth;
        unsigned short textHeight;
        func_02050cc0(&window->textWindow_20_, (short)(width - 24), height, window->page_104_ + 1, 8, colorIndex, &textWidth, &textHeight, 1, 3, 0, 0);
        func_02050cc0(&window->textWindow_20_, (short)(width + 8), height, window->pageCount_106_, 8, colorIndex, &textWidth, &textHeight, 0, 3, 0, 0);
        func_02050678(&window->textWindow_20_, width, height, data_ov023_021fd91c, 8, colorIndex, &textWidth, &textHeight);

#else
        height = (short)(height * 8) - 13;
        unsigned char colorIndex;
        int separatorWidth = 0;
        colorIndex = window->pageNumberColorIndex_10a_;
        FontGlyph_ov023_021f7eb8_4* separatorGlyph = FindFontGlyph_0204254c((int)data_ov023_021fd91c, 0);
        if (separatorGlyph != NULL)
            separatorWidth = separatorGlyph->width_4_;
        unsigned short textWidth;
        unsigned short textHeight;
        short centerX = width * 4;
        func_0204f7e8(&window->textWindow_20_, centerX - separatorWidth, height, window->page_104_ + 1, 8, colorIndex, &textWidth,
                      &textHeight, 1, 3, 0, 0);
        func_0204f7e8(&window->textWindow_20_, centerX + separatorWidth + 1, height, window->pageCount_106_, 8, colorIndex, &textWidth,
                      &textHeight, 0, 3, 0, 0);
        func_0204f41c(&window->textWindow_20_, centerX - (separatorWidth >> 1), height, data_ov023_021fd91c, 8, colorIndex,
                      &textWidth, &textHeight, 0);

#endif
    }
    func_ov023_021f8240(window, menu);
    LoadTextWindowCharacterData_0204fbf8((TextWindow_0204fbf8_2*)&window->textWindow_20_);
    window->pixelX_100_ = x * 8;
    window->pixelY_102_ = y * 8;
}
