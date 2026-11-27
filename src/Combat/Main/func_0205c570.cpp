#include <globaldefs.h>

struct Struct_0205bd04;
extern "C" int func_0205bd04(struct Struct_0205bd04*);
struct MenuCursor_0205bb84;
extern "C" int GetMenuCursorIndex_0205bb84(struct MenuCursor_0205bb84*);

struct Struct_0205c570 {
    char unknown_0_[0x50];
    unsigned char unknown_50_;
    char unknown_51_[0x94 - 0x51];
    unsigned char unknown_94_;
    unsigned char unknown_95_;
};

// USA: GetMenuCursorsIndex_0205c570
extern "C" ARM int GetMenuCursorsIndex_0205c570(struct Struct_0205c570* cursors) {
    int cursorIndex = -1;
    if (cursors->unknown_94_ != 0 && cursors->unknown_50_ != 0) {
        cursorIndex = func_0205bd04((struct Struct_0205bd04*)((char*)cursors + 0x4));
    }
    if (cursors->unknown_95_ == 0) {
        return cursorIndex;
    }
    return GetMenuCursorIndex_0205bb84((struct MenuCursor_0205bb84*)((char*)cursors + 0x54));
}
