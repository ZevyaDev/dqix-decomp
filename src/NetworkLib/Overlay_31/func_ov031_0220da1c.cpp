#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Timing.h"

extern int gAccessPointConnection_ov031_0224e53c;
extern "C" int func_ov031_0220db28(void);

struct Struct_ov031_0220da1c {
	char unknown_0_[0x260];
	int state_260_;
};

struct Struct_ov031_0220da1c_2 {
	char unknown_0_[0x2000];
	Struct_ov031_0220da1c unknown_2000_;
};

// USA: SetAccessPointConnectionState_ov031_0220da1c
extern "C" ARM void SetAccessPointConnectionState_ov031_0220da1c(int state) {
	int priorState = DisableIRQInterrupts();
	if (*(int*)((char*)gAccessPointConnection_ov031_0224e53c + 0x2260) == 9 && state != 9) {
		CancelAlarm((Alarm*)((char*)gAccessPointConnection_ov031_0224e53c + 0x22cc));
	}
	Struct_ov031_0220da1c_2* connection = (Struct_ov031_0220da1c_2*)gAccessPointConnection_ov031_0224e53c;
	if (connection->unknown_2000_.state_260_ != 0xb) {
		connection->unknown_2000_.state_260_ = state;
	}
	if (state == 9) {
		SetTimeout((Alarm*)((char*)gAccessPointConnection_ov031_0224e53c + 0x22cc), 0x22f5341, (Alarm::PFNCompletion)&func_ov031_0220db28, NULL);
	}
	SetIRQInterruptState(priorState);
}
