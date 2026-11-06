#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int AppendText_02042058(char* buffer, const char* text);

extern char data_ov003_0217fe7f;

// USA: func_ov003_0215be70
extern "C" ARM void func_ov003_0215be70(char* arg0, char* arg1, int arg2) {
	int var0;
	struct Struct_0201099c_3* var1;
	signed char var2;

	if (arg1 == NULL) return;

	var2 = *(signed char*)(arg0 + 0x586);
	if (arg2) {
		func_02041c08(arg1, var2, 8, 5, 5, 5);
	}
	func_02041ea4(arg1, var2);

	var1 = (struct Struct_0201099c_3*)(arg0 + 0x64);
	for (var0 = 0; var0 < 2; var0++) {
		int var3 = FindStringInTable_020e0434(var1, (short)(var0 + 0x14));
		func_02041b70(arg1, var0, (const char*)var3);
		if (var0 != 1) {
			AppendText_02042058(arg1, &data_ov003_0217fe7f);
		}
	}
}
