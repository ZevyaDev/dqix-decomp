#include <globaldefs.h>

extern "C" unsigned short GetScriptValueAsInt_ov017_021d60f4(int value);

struct MusicManager_02109bf4_2 {
	char unknown_0_[0xc9];
	unsigned char jingleState_c9_;
	char unknown_ca_[4];
	unsigned short jingleIndex_ce_;
};
extern "C" void QueueJingle_0209c830(MusicManager_02109bf4_2* manager, int jingleIndex);

extern struct MusicManager_02109bf4_2 gMusicManager_02109bf4;

// USA: func_ov001_02163744
extern "C" ARM int func_ov001_02163744(int arg0) {
	QueueJingle_0209c830(&gMusicManager_02109bf4, GetScriptValueAsInt_ov017_021d60f4(arg0));
	return 1;
}
