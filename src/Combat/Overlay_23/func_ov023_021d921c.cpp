#include <globaldefs.h>

#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, int text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, int text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif


// USA: func_ov023_021d921c
extern "C" ARM void func_ov023_021d921c(void* arg0, int arg1, int arg2, int arg3) {
	*(short*)((char*)arg0 + 0xc0) = (short)arg2;
	*(short*)((char*)arg0 + 0xc2) = (short)arg3;
	*(short*)((char*)arg0 + 0xc4) = (short)((0x20 - arg2) >> 1);
	*(short*)((char*)arg0 + 0xc6) = (short)((0x18 - arg3) >> 1);
	*(short*)((char*)arg0 + 0xc8) = 0;
	*(short*)((char*)arg0 + 0xca) = 5;
	*(short*)((char*)arg0 + 0xcc) = 0xa;
	*(short*)((char*)arg0 + 0xce) = 0xa;
	*(unsigned char*)((char*)arg0 + 0xd1) = 0;
	*(unsigned char*)((char*)arg0 + 0xd5) = 0;
#if defined(jpn)
	OpenTextWindow_0205d304((char*)arg0 + 0x20, arg1, 0, 0, 0, 1, 0);
#else
	OpenTextWindow_0205d304((char*)arg0 + 0x20, arg1, 0, 0, 0, 1, 0, 0);
#endif

}
