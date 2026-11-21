#include <globaldefs.h>

struct Zone3D_02019508_3;
struct BMDJEntry_02019508;
extern "C" struct Zone3D_02019508_3* GetZone3D_02012fe4(void* arg0);
extern "C" struct BMDJEntry_02019508* FindBMDJEntry_02019508(struct Zone3D_02019508_3* zone, int bmdjId, int entryId);

// USA: func_ov017_021bf5f4
extern "C" ARM int func_ov017_021bf5f4(void* arg0) {
    struct Zone3D_02019508_3* var0 = GetZone3D_02012fe4(arg0);
    char* var1 = *(char**)((char*)arg0 + 0xc);
    unsigned short var2 = *(unsigned short*)(var1 + 0x2c);
    unsigned short var3 = *(unsigned short*)(var1 + 0x2e);
    struct BMDJEntry_02019508* var4 = FindBMDJEntry_02019508(var0, var2, var3);
    return var4 != 0 && *(int*)((char*)var4 + 0x54) != 0;
}
