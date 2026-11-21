#include <globaldefs.h>

struct YesNoWindow_020e28dc;
struct YesNoWindow_020e2794_2;
extern "C" int IsYesNoWindowOpen_020e28dc(struct YesNoWindow_020e28dc* yesNoWindow);
extern "C" void DrawYesNoWindow_020e2794(struct YesNoWindow_020e2794_2* yesNoWindow, void* spriteSet);

struct Struct_ov003_0217480c {
	void* unknown_0_;
};

// USA: func_ov003_02176098
extern "C" ARM void func_ov003_02176098(struct Struct_ov003_0217480c* arg0) {
	if (arg0->unknown_0_ == NULL) return;
	if (!IsYesNoWindowOpen_020e28dc((struct YesNoWindow_020e28dc*)arg0->unknown_0_)) return;
#if defined(jpn)
    enum { Enum_ov003_02176098_2008 = 0x754 };
#else
    enum { Enum_ov003_02176098_2008 = 0x7d8 };
#endif
	void* var0 = (char*)arg0 + Enum_ov003_02176098_2008;
	DrawYesNoWindow_020e2794((struct YesNoWindow_020e2794_2*)arg0->unknown_0_, var0);
}
