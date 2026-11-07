#include "std_library_functions.h"
#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov002_02160068_3784 = 0xe20, Enum_ov002_02160068_3024 = 0xa98, Enum_ov002_02160068_3000 = 0xa80, Enum_ov002_02160068_7174 = 0x1ace, Enum_ov002_02160068_2400 = 0x800, Enum_ov002_02160068_29 = 0x1e, Enum_ov002_02160068_21 = 0x16, Enum_ov002_02160068_4 = 5 };
#define FINAL_ARG_02160068
extern "C" void OpenTextWindow_0205d304(void *windowManager, void *text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
enum { Enum_ov002_02160068_3784 = 0xec8, Enum_ov002_02160068_3024 = 0xbd0, Enum_ov002_02160068_3000 = 0xbb8, Enum_ov002_02160068_7174 = 0x1c06, Enum_ov002_02160068_2400 = 0x960, Enum_ov002_02160068_29 = 0x1d, Enum_ov002_02160068_21 = 0x15, Enum_ov002_02160068_4 = 4 };
#define FINAL_ARG_02160068 , 0
extern "C" void OpenTextWindow_0205d304(void *windowManager, void *text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif
extern "C" void SetNextTextWindow_ov002_0215be00(void *menu, int windowId, int x, int y);
struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2 *windowManager, unsigned char isSubScreen,
                                                                        unsigned char bgIndex);
struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c *windowManager, int windowId, int palette);
extern "C" int AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" void func_ov002_021601e0(char *arg0, char *arg1, int);

struct Struct_ov002_02160068 {
    char unknown_0_[Enum_ov002_02160068_3024];
    char *unknown_bd0_;
};
struct Struct_ov002_02160068_2 {
    char unknown_0_[Enum_ov002_02160068_3000];
    int unknown_bb8_;
};

// USA: func_ov002_02160068
extern "C" ARM void func_ov002_02160068(char *arg0) {
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2 *) (arg0 + Enum_ov002_02160068_3784), 0, 3);
    SetNextTextWindow_ov002_0215be00(arg0, Enum_ov002_02160068_29, Enum_ov002_02160068_21, 0xb);
    memset(((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, Enum_ov002_02160068_2400);
    func_ov002_021601e0(arg0, ((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0);
    OpenTextWindow_0205d304(arg0 + Enum_ov002_02160068_3784, ((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 1, 0 FINAL_ARG_02160068);

    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2 *) (arg0 + Enum_ov002_02160068_3784), 0, 3);
    SetNextTextWindow_ov002_0215be00(arg0, ((struct Struct_ov002_02160068_2 *) (arg0 + 0x1000))->unknown_bb8_ & 0xff, Enum_ov002_02160068_4, 3);
    memset(((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, Enum_ov002_02160068_2400);
    AppendCursorTag_02041ea4(((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, *(short *) (arg0 + Enum_ov002_02160068_7174));
    OpenTextWindow_0205d304(arg0 + Enum_ov002_02160068_3784, ((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 1, 0 FINAL_ARG_02160068);

    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c *) (arg0 + Enum_ov002_02160068_3784), Enum_ov002_02160068_29, 0);
}
