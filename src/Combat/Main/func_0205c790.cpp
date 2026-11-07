#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#include "std_library_functions.h"

struct Struct_0205c73c;
extern "C" void func_0205c73c(struct Struct_0205c73c* arg0);
struct Struct_0205c53c;
extern "C" void func_0205c53c(struct Struct_0205c53c* arg0);
struct Struct_02042c68;
extern "C" void func_02042fcc(struct Struct_02042c68* arg0);

// USA: InitChoiceList_0205c790
extern "C" ARM void InitChoiceList_0205c790(char* choiceList) {
    func_0205c73c((struct Struct_0205c73c*)(choiceList + 0x4));
    func_0205c53c((struct Struct_0205c53c*)(choiceList + 0x1c));
    func_02042fcc((struct Struct_02042c68*)(choiceList + 0xb4));

    *(int*)(choiceList + 0xd0) = 0;
    *(int*)(choiceList + 0xd4) = 0x34;
    *(int*)(choiceList + 0xd8) = 0x10;
    *(int*)(choiceList + 0xdc) = 0;

    memset(choiceList + 0xe0, 0, 0x10);
    memset(choiceList + 0xf0, 0, 0x10);
    memset(choiceList + 0x100, 0, 0x10);
    memset(choiceList + 0x110, 0, 0x10);
    memset(choiceList + 0x120, 0, (IS_JPN ? 0x90 : 0x100));
    memset(choiceList + (IS_JPN ? 0x1b0 : 0x220), 0, 0x10);

    *(short*)(choiceList + (IS_JPN ? 0x1c0 : 0x230)) = 0;
    *(unsigned char*)(choiceList + (IS_JPN ? 0x1c2 : 0x232)) = 0;
    *(unsigned char*)(choiceList + (IS_JPN ? 0x1c3 : 0x233)) = 0;
    *(unsigned char*)(choiceList + (IS_JPN ? 0x1c4 : 0x234)) = 0;
}
