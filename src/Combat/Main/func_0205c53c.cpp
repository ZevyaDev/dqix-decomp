#include <globaldefs.h>

struct Struct_0205bbcc;
extern "C" void func_0205bbcc(struct Struct_0205bbcc*);
struct KeyMenuCursor_0205bef8;
extern "C" void InitKeyMenuCursor_0205bef8(struct KeyMenuCursor_0205bef8*);

struct Struct_0205c53c {
    char unknown_0_[0x94];
    unsigned char unknown_94_;
    unsigned char unknown_95_;
};

// USA: InitMenuCursors_0205c53c
extern "C" ARM void InitMenuCursors_0205c53c(struct Struct_0205c53c* cursors) {
    func_0205bbcc((struct Struct_0205bbcc*)((char*)cursors + 0x4));
    InitKeyMenuCursor_0205bef8((struct KeyMenuCursor_0205bef8*)((char*)cursors + 0x54));
    cursors->unknown_94_ = 0;
    cursors->unknown_95_ = 0;
}
