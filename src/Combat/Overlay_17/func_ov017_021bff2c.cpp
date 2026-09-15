#include <globaldefs.h>
#include "GameState/GameState.h"

void SetByteField0x253(void* obj);
int GetFieldIfFlag4(char* obj);
void SetField0x23cTrue(void* obj);
void ClearBitsInField4(unsigned int* obj, unsigned int mask);

struct ShortField02033e2c;
void ClearField0xc602033e2c(struct ShortField02033e2c* obj);
struct Foo02033b58;
void SetByteSavingPrevious(struct Foo02033b58* p, unsigned char v);


// USA: func_ov017_021bff2c
extern "C" ARM void func_ov017_021bff2c(void) {
	GameState* battle = GameState::GetInstance();
	GameObject* c = battle->GetUnknownGameObject();
	SetByteField0x253(c);
	ClearField0xc602033e2c((struct ShortField02033e2c*)c);
	SetByteSavingPrevious((struct Foo02033b58*)c, 0);

	void* ov = func_ov017_0218b5b0();

	int flagResult = GetFieldIfFlag4((char*)battle);
	if (flagResult != 0) {
		SetField0x23cTrue((void*)flagResult);
	}

	if (ov != NULL) {
		ClearBitsInField4((unsigned int*)ov, 0x80);
	}
}
