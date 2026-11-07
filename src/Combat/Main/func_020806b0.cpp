#include <globaldefs.h>

struct MenuLayoutTextEntry_0207f6ac;
struct MenuLayoutTextEntryList_0207f524 { MenuLayoutTextEntry_0207f6ac* pEntries_0_; short count_4_; };
struct Struct_020806b0 {
    void* unknown_0_;
    MenuLayoutTextEntryList_0207f524 unknown_4_;
};
extern "C" void func_0207f7ac(struct MenuLayoutTextEntryList_0207f524* arg0, int arg1, int arg2);

// USA: func_020806b0
extern "C" ARM void func_020806b0(void* arg0, int arg1) {
    Struct_020806b0* var0 = (Struct_020806b0*)arg0;
    func_0207f7ac(&var0->unknown_4_, arg1, 2);
}
