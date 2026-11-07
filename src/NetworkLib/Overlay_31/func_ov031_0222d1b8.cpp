#include <globaldefs.h>

extern "C" void func_ov031_02223440(void);

struct Struct_ov031_0222d1b8 { unsigned int unknown_0_; };
extern "C" int func_ov031_0223da58(Struct_ov031_0222d1b8*);

extern "C" ARM void* func_ov031_0223c7c4(int arg0);

typedef void (*VRAMLoader_ov031_022234d8)(void*, int, int);
extern "C" void LoadFileToVRAM_ov031_022234d8(int path, VRAMLoader_ov031_022234d8 loadToVRAM);
extern "C" int LoadToMainObjStandardPalette(int, int, unsigned int);

extern "C" void HideScreenLayers_ov031_0223cbbc(int, int);

extern "C" void func_ov031_02227520(int*, int*);
extern "C" ARM void SetStepIndicatorAndButtonBarModes_ov031_022274d0(int stepIndicatorMode, int buttonBarMode);
extern "C" void func_ov031_0222750c(int, int);
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int);

extern "C" void* func_ov031_0222ea24(void);
extern "C" void* func_ov031_0222b644(void);
extern "C" void* func_ov031_022340c0(void);

extern void* data_ov031_02290c94;
extern "C" unsigned int FreeAndClearPointer_ov031_0223cf70(void**);
extern int data_ov031_0224ba64;

// USA: func_ov031_0222d1b8
extern "C" ARM void func_ov031_0222d1b8(void) {
    func_ov031_02223440();
    func_ov031_0223da58(*(Struct_ov031_0222d1b8**)((char*)data_ov031_02290c94 + 4));
    func_ov031_0223c7c4(0);
    LoadFileToVRAM_ov031_022234d8((int)&data_ov031_0224ba64, (VRAMLoader_ov031_022234d8)LoadToMainObjStandardPalette);
    HideScreenLayers_ov031_0223cbbc(1, 1);
    HideScreenLayers_ov031_0223cbbc(0, 0x15);

    int var0, var1;
    func_ov031_02227520(&var0, &var1);
    if (var1 == 0) {
        SetStepIndicatorAndButtonBarModes_ov031_022274d0(2, 1);
        func_ov031_0222750c(0, var0);
        SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222ea24);
    } else {
        if (*((unsigned char*)data_ov031_02290c94 + 0x2a) == 0) {
            SetStepIndicatorAndButtonBarModes_ov031_022274d0(0, 1);
            func_ov031_0222750c(1, 0);
            SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222b644);
        } else {
            SetStepIndicatorAndButtonBarModes_ov031_022274d0(0, 0);
            func_ov031_0222750c(0, 1);
            SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_022340c0);
        }
    }
#if defined(jpn)
    FreeAndClearPointer_ov031_0223cf70((void**)0x02291894);
#else
    FreeAndClearPointer_ov031_0223cf70((void**)0x02290C94);
#endif
}
