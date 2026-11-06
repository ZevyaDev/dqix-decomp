#include <globaldefs.h>

extern "C" void* GetZone3D_02012fe4(void);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned short);

// USA: func_ov023_021ea958
extern "C" ARM int func_ov023_021ea958(void* arg0) {
	void* var0 = GetZone3D_02012fe4();
	unsigned short var1 = *(unsigned short*)var0;
	SetScriptRefInt_ov017_021d6134(arg0, var1);
	return 1;
}
