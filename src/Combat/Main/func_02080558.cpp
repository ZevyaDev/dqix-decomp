#include <globaldefs.h>

extern "C" void ClearMenuLayoutWindowHighlights_020804fc(void* menuLayout, int windowId);
extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);

struct MenuLayoutWindowEntryList_0207f0ac;
struct Struct_02080558 {
    short* unknown_0_;
    char unknown_4_[0x13 - 4];
    unsigned char unknown_13_;
};
extern "C" Struct_02080558* FindMenuLayoutWindowEntry_0207f0ac(MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);

struct MenuLayoutTextEntryList_0207f524;
struct Struct_02080558_2 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x2a - 6];
    unsigned char unknown_2a_;
};
extern "C" Struct_02080558_2* FindMenuLayoutTextEntry_0207f6ac(MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: func_02080558
extern "C" ARM void func_02080558(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
    if (arg3) {
        ClearMenuLayoutWindowHighlights_020804fc(arg0, arg1);
    }
    Struct_02080558* var0 = FindMenuLayoutWindowEntry_0207f0ac((MenuLayoutWindowEntryList_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 != 0) {
        for (unsigned char var1 = 0; var1 < var0->unknown_13_; var1++) {
            short var2 = var0->unknown_0_[var1];
            Struct_02080558_2* var3 = FindMenuLayoutTextEntry_0207f6ac((MenuLayoutTextEntryList_0207f524*)((char*)arg0 + 4), var2);
            if (var3 != 0) {
                if (var3->unknown_4_ == arg2) {
                    var3->unknown_2a_ = var3->unknown_2a_ | 4;
                    goto end;
                }
            }
        }
    }
end:
    if (arg4 == 0) return;
    OpenMenuLayoutWindow_020813ec(arg0, arg1);
}
