#include <globaldefs.h>

struct Struct_0203a950;
extern "C" void func_020bd984(struct Struct_0203a950*);
extern "C" void func_0203a914(void*);

// USA: CloseSoundArchive_0203a950
extern "C" ARM void CloseSoundArchive_0203a950(void* manager) {
    void* heap = *(void**)manager;
    if (heap != NULL) {
        func_020bd984((struct Struct_0203a950*)heap);
    }
    func_0203a914(manager);
}
