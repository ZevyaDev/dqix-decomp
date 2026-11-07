#include <globaldefs.h>

struct MenuLayoutTextEntry_0207f6ac {
    unsigned char unknown_0_[0x2a];
    unsigned char unknown_2a_;
    unsigned char unknown_2b_[5];
};
struct MenuLayoutTextEntryList_0207f524 {
    MenuLayoutTextEntry_0207f6ac* pEntries_0_;
    short count_4_;
};
struct Struct_02080dd4 {
    void* unknown_0_;
    MenuLayoutTextEntryList_0207f524 unknown_4_;
};

extern "C" int func_02080e40(void* arg0, int arg1, int arg2, int arg3);
extern "C" struct MenuLayoutTextEntry_0207f6ac* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

extern "C" void func_02080558(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4);

// USA: func_02080dd4
extern "C" ARM int func_02080dd4(void* arg0, int arg1, int arg2, int arg3,
                                  unsigned char* arg4, unsigned char arg5) {
    Struct_02080dd4* var0 = static_cast<Struct_02080dd4*>(arg0);
    int var1;
    struct MenuLayoutTextEntry_0207f6ac* var2;
    var1 = func_02080e40(var0, arg1, arg2, arg3);
    if (var1 == -1) {
        return -1;
    }
    *arg4 = 0;
    var2 = FindMenuLayoutTextEntry_0207f6ac(&var0->unknown_4_, var1);
    if (var2->unknown_2a_ & 4) {
        *arg4 = 1;
    }
    func_02080558(var0, arg1, var1, 1, arg5);
    return var1;
}
