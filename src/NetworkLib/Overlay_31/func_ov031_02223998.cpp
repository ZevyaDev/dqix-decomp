#include <globaldefs.h>

#if defined(jpn)
#define func_020ca4b4 func_020cbf80
#endif


extern int data_ov031_0224b3c0[];
extern "C" int func_ov031_02223478(int);
extern "C" int LoadFile_ov031_0223b61c(int, int, int);
extern "C" void func_020ca4b4(int, void*, unsigned int);
extern "C" void FreeLoadedFile_ov031_0223b710(int);
extern "C" void* AddTask_ov031_0223e218(void*, void*, void*, int);
extern void* data_ov031_02250bf4;
extern "C" void func_ov031_02223a24(int arg0);

// USA: ShowPageTitle_ov031_02223998
extern "C" ARM void ShowPageTitle_ov031_02223998(int titleIndex) {
	int path = data_ov031_0224b3c0[titleIndex];
	int localizedPath = func_ov031_02223478(path);
	int fileData = LoadFile_ov031_0223b61c(localizedPath, 0, 4);
	func_020ca4b4(fileData, data_ov031_02250bf4, 0xc0);
	FreeLoadedFile_ov031_0223b710(fileData);
	AddTask_ov031_0223e218((void*)1, (void*)func_ov031_02223a24, NULL, 0x78);
}
