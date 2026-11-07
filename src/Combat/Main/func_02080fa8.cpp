#include <globaldefs.h>

struct MenuLayoutTextEntry_02080fa8_2 { int value_0_; };
struct Struct_0207f524 { struct MenuLayoutTextEntry_02080fa8_2* unknown_0_; short unknown_4_; };
extern "C" struct MenuLayoutTextEntry_02080fa8_2* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

struct MenuLayout_02080fa8 { char unknown_0_[4]; struct Struct_0207f524 textEntries_4_; };

// USA: SetMenuLayoutTextValue_02080fa8
extern "C" ARM void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value) {
    struct MenuLayoutTextEntry_02080fa8_2* textEntry = func_0207f6ac(&menuLayout->textEntries_4_, textId);
    if (textEntry != NULL) {
        textEntry->value_0_ = value;
    }
}
