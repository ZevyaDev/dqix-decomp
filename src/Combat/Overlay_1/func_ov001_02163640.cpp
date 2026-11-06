#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
struct Struct_0209c3b4_2;
extern "C" void func_0209c3b4(struct Struct_0209c3b4_2* arg0, int arg1);
struct MusicManager_02109bf4_4;
extern "C" void func_0209c678(struct MusicManager_02109bf4_4* arg0, int arg1);
extern int gMusicManager_02109bf4;

// USA: func_ov001_02163640
extern "C" ARM int func_ov001_02163640(void* arg0, int arg1) {
	int var0 = -1;
	if (arg1 == 2) {
		int var1 = GetScriptValueAsInt_ov017_021d60f4(arg0);
		var0 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 8);
	} else if (arg1 == 1) {
		var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
	}
	if (var0 < 0) {
		return 0;
	}
	func_0209c3b4((struct Struct_0209c3b4_2*)&gMusicManager_02109bf4, var0);
	func_0209c678((struct MusicManager_02109bf4_4*)&gMusicManager_02109bf4, 0);
	return 1;
}
