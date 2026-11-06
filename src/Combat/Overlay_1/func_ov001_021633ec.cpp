#include <globaldefs.h>


extern "C" void* GetFlagManager_0205ec34(void);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);
extern "C" int func_0206eb98(unsigned char*, int);

// USA: func_ov001_021633ec
extern "C" ARM int func_ov001_021633ec(void* arg0) {
	unsigned char* var0 = (unsigned char*)GetFlagManager_0205ec34();
	int var1 = func_ov017_021d60f4(arg0);
	int var2 = func_0206eb98(var0, var1);
	if (var2 != 0) {
		func_ov017_021d6134((char*)arg0 + 8, 1);
	} else {
		func_ov017_021d6134((char*)arg0 + 8, 0);
	}
	return 1;
}
