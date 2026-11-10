#include <globaldefs.h>

// USA: SetCanvasCharacterData_0205b220
extern "C" ARM void SetCanvasCharacterData_0205b220(void* canvas, int characterData) {
    *(int*)canvas = characterData;
}
