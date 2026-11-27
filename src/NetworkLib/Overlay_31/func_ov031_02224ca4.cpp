#include <globaldefs.h>

struct Struct_020b0a1c {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov031_022489c0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};
struct Struct_ov031_022489cc {
    unsigned char unknown_0_[5];
};
struct Keyboard_ov031_02224ca4 {
    void* unknown_0_[3][4];
    Struct_020b0a1c* keySprites_30_[47];
    Struct_020b0a1c* specialKeySprites_ec_[4];
    void* buttonSprites_fc_[2];
    void* unknown_104_[4];
};

extern Keyboard_ov031_02224ca4* gKeyboard_ov031_02250bfc;
extern const Struct_ov031_022489c0 data_ov031_022489c0 = {0x1c, 2};
extern const Struct_ov031_022489c0 data_ov031_022489c4 = {0x78, 0x12};
extern const Struct_ov031_022489c0 data_ov031_022489c8 = {0x11, 0x12};
extern const Struct_ov031_022489cc data_ov031_022489cc = {{0, 0, 0, 0, 2}};
extern const Struct_ov031_022489cc data_ov031_022489d1 = {{12, 12, 12, 11, 0}};
extern const Struct_ov031_022489cc data_ov031_022489d6 = {{1, 1, 1, 1, 0}};
extern const Struct_ov031_022489c0 data_ov031_02248a0c[47];
extern const Struct_ov031_022489c0 data_ov031_022489e4[4];
extern const Struct_ov031_022489c0 data_ov031_022489dc[2];

extern "C" void func_ov031_0223ca54(void* arg0, int arg1, int arg2, void* arg3, int arg4);
extern "C" int FastIntModulus(int arg0, int arg1);
extern "C" void func_ov031_0223bab4(void* arg0, int arg1, int arg2, int arg3);
extern "C" void SetSpritePosition_ov031_0223bbd8(void* sprite, int entryIndex, int x, int y);

static inline void inline_020b0a1c(Struct_020b0a1c* arg0) {
    arg0->unknown_0_ &= 0xc1fffcff;
}

static inline void inline_ov031_02224ca4(Struct_020b0a1c* arg0, unsigned int arg1, unsigned int arg2) {
    arg0->unknown_0_ = (arg0->unknown_0_ & 0xfe00ff00) | arg2 | arg1;
}

// USA: SetKeyboardRowY_ov031_02224ca4
extern "C" ARM void SetKeyboardRowY_ov031_02224ca4(int characterSet, int row, int y) {
    Struct_ov031_022489cc keyCounts = data_ov031_022489d1;
    Struct_ov031_022489cc specialKeyCounts = data_ov031_022489d6;
    Struct_ov031_022489cc buttonCounts = data_ov031_022489cc;
    int firstKey = row * 12;
    int specialKey;
    int key;
    int i;
    int button;

    {
        const unsigned char* rowKeyCount = &keyCounts.unknown_0_[row];
        key = firstKey;
        i = 0;
        if (i < *rowKeyCount) {
            unsigned char keyY = y;
            do {
                inline_020b0a1c(gKeyboard_ov031_02250bfc->keySprites_30_[key]);
                inline_ov031_02224ca4(gKeyboard_ov031_02250bfc->keySprites_30_[key], (unsigned int)data_ov031_02248a0c[key].unknown_0_ << 23 >> 7, keyY);
                i++;
                key++;
            } while (i < *rowKeyCount);
        }
    }
    if (row < 4) {
        Keyboard_ov031_02224ca4* keyboard = gKeyboard_ov031_02250bfc;
        func_ov031_0223ca54(keyboard->unknown_0_[characterSet][row], data_ov031_02248a0c[firstKey].unknown_0_, y, keyboard->unknown_104_[row], 2);
    }
    specialKey = FastIntModulus(row + 3, 4);
    {
        const unsigned char* rowSpecialKeyCount = &specialKeyCounts.unknown_0_[row];
        i = 0;
        if (i < *rowSpecialKeyCount) {
            unsigned char specialKeyY = y;
            do {
                inline_020b0a1c(gKeyboard_ov031_02250bfc->specialKeySprites_ec_[specialKey]);
                inline_ov031_02224ca4(gKeyboard_ov031_02250bfc->specialKeySprites_ec_[specialKey], (unsigned int)data_ov031_022489e4[specialKey].unknown_0_ << 23 >> 7, specialKeyY);
                i++;
            } while (i < *rowSpecialKeyCount);
        }
    }
    {
        const unsigned char* rowButtonCount = &buttonCounts.unknown_0_[row];
        button = 0;
        if (button < *rowButtonCount) {
            do {
                func_ov031_0223bab4(gKeyboard_ov031_02250bfc->buttonSprites_fc_[button], -1, 0, 0);
                SetSpritePosition_ov031_0223bbd8(gKeyboard_ov031_02250bfc->buttonSprites_fc_[button], -1, data_ov031_022489dc[button].unknown_0_, y);
                button++;
            } while (button < *rowButtonCount);
        }
    }
}
