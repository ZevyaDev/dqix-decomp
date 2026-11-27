#pragma once



struct Struct_020fe6fc {
#if defined(jpn)
    int unknown_4_;
    void* unknown_0_;
#else
    void* unknown_0_;
    int unknown_4_;
#endif
};

#if defined(jpn)
extern Struct_020fe6fc gScreenBitmap_020fe9a4;
#define glyphBitmapContext gScreenBitmap_020fe9a4
#else
extern Struct_020fe6fc gScreenBitmap_020fe9a4;
#define glyphBitmapContext gScreenBitmap_020fe9a4
#endif
