#include <globaldefs.h>

struct MenuLayoutTextEntry_02080fa8_2 { int value_0_; };
struct MenuLayoutTextEntryList_0207f524 { struct MenuLayoutTextEntry_02080fa8_2* pEntries_0_; short count_4_; };
struct MenuLayout_02080fa8 { char unknown_0_[4]; struct MenuLayoutTextEntryList_0207f524 textEntries_4_; };
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value);

struct Struct_ov003_02167b34_2 { char unknown_0_[0x10]; struct MenuLayout_02080fa8* unknown_10_; };

// USA: func_ov003_02168088
extern "C" ARM void func_ov003_02168088(struct Struct_ov003_02167b34_2* arg0, int* arg1) {
	struct MenuLayout_02080fa8* var0;
	short var1;
	unsigned char var2;
	if (!arg1) return;
	var0 = arg0->unknown_10_;
	var1 = 0x13;
	for (var2 = 0; var2 < 0xc; var2++) {
		SetMenuLayoutTextValue_02080fa8(var0, var1, arg1[var2]);
		var1++;
	}
}
