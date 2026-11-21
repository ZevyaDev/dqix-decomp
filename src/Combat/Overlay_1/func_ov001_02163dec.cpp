#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void* GetZone3D_02012fe4(void);
struct BMDJEntry_02019508;
struct Zone3D_02019508_3;
extern "C" ARM struct BMDJEntry_02019508* FindBMDJEntry_02019508(struct Zone3D_02019508_3* zone, int bmdjId, int entryId);
struct Struct_02013380;
extern "C" void func_02013380(Struct_02013380* arg0, int arg1, int arg2);

// USA: func_ov001_02163dec
extern "C" ARM int func_ov001_02163dec(void* arg0) {
    int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    int var1 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 0x8);
    void* var2 = GetZone3D_02012fe4();
    if (!var2) {
        return 0;
    }
    struct BMDJEntry_02019508* var3 = FindBMDJEntry_02019508((struct Zone3D_02019508_3*)var2, var0, var1);
    if (!var3) {
        return 0;
    }
    int var4 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 0x10);
    func_02013380((Struct_02013380*)var3, var0, var4);
    return 1;
}
