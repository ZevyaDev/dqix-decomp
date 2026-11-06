#include <globaldefs.h>



extern "C" void* GetZone3D_02012fe4(void);
extern "C" void* GetFlagManager_0205ec34(void);
extern "C" void func_02017098(void* arg0, int arg1);
struct ActiveZone_020fdd44;
extern "C" struct ActiveZone_020fdd44* GetActiveZones_02027ca4(void);
extern "C" struct ActiveZone_020fdd44* FindActiveZone_02028bd0(struct ActiveZone_020fdd44* zones, int zoneId);
struct Struct_02028c14;
extern "C" void func_02028c14(struct Struct_02028c14* arg0, int arg1);
extern "C" void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet);

// USA: func_ov017_021b6174
extern "C" ARM void func_ov017_021b6174(int arg0, int arg1, int arg2) {
	void* var0 = GetZone3D_02012fe4();
	void* var1 = GetFlagManager_0205ec34();
	unsigned short var2 = *(unsigned short*)var0;
	if (arg0 == var2) {
		func_02017098(var0, arg1);
	}
	struct ActiveZone_020fdd44* var3 = FindActiveZone_02028bd0(GetActiveZones_02027ca4(), arg0);
	if (var3 != NULL) {
		func_02028c14((struct Struct_02028c14*)var3, arg1);
	}
	SetFlag_0206df6c(var1, (unsigned char*)var1 + 0x8c, arg2 + 0x9e + 0x700, 1);
}
