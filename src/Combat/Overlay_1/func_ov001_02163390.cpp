#include <globaldefs.h>


extern "C" void* GetFlagManager_0205ec34(void);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);
extern "C" int IsFlagSet_0206dfb0(int, unsigned char*, int);

// USA: func_ov001_02163390
extern "C" ARM int func_ov001_02163390(void* arg0) {
	unsigned char* var0 = (unsigned char*)GetFlagManager_0205ec34();
	int var1 = GetScriptValueAsInt_ov017_021d60f4(arg0);
	int var2 = var0[0x332];
	int var3 = IsFlagSet_0206dfb0((int)var0, var0 + var2 * 0x1c + 0x10, var1);
	if (var3 != 0) {
		SetScriptRefInt_ov017_021d6134((char*)arg0 + 8, 1);
	} else {
		SetScriptRefInt_ov017_021d6134((char*)arg0 + 8, 0);
	}
	return 1;
}
