#include <globaldefs.h>


extern "C" void* GetFlagManager_0205ec34(void);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);
extern "C" int IsFlagSet_0206dfb0(int, unsigned char*, int);

// USA: func_ov001_021632e4
extern "C" ARM int func_ov001_021632e4(void* arg0) {
	void* var0 = GetFlagManager_0205ec34();
	int var1 = GetScriptValueAsInt_ov017_021d60f4(arg0);
	int var2 = IsFlagSet_0206dfb0((int)var0, (unsigned char*)var0 + 0x8c, var1);
	if (var2 != 0) {
		SetScriptRefInt_ov017_021d6134((char*)arg0 + 8, 1);
	} else {
		SetScriptRefInt_ov017_021d6134((char*)arg0 + 8, 0);
	}
	return 1;
}
