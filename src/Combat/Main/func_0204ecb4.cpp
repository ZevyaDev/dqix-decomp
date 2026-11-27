#include <globaldefs.h>

struct TextWindow_0204ecb4 {
    char unknown_0_[0xa8];
    short width_a8_;
    short height_aa_;
};

extern "C" int func_0204fd00(TextWindow_0204ecb4* arg0, int arg1);
extern "C" void* GetWindowTile_020421b0(int tileIndex);
extern "C" void func_0204e1c8(TextWindow_0204ecb4* arg0, void* arg1, short arg2, short arg3, int arg4, int arg5, int arg6, int arg7);

static inline short inline_0204ecb4(short arg0) {
    return arg0 << 3;
}

// USA: DrawTextWindowFrame_0204ecb4
extern "C" ARM void DrawTextWindowFrame_0204ecb4(TextWindow_0204ecb4* textWindow, int tileX, int tileY, short width, short height, signed char* margins) {
    if (width < 0 || height < 0) {
        return;
    }
    short lastTileOffset;
    int topMargin = 0;
    int bottomMargin = 0;
    int leftMargin = 0;
    int rightMargin = 0;
    if (margins) {
        topMargin = margins[0];
        bottomMargin = margins[1];
        leftMargin = margins[2];
        rightMargin = margins[3];
    }

    int sharedEdge = func_0204fd00(textWindow, 1);
    int tileIndex = 0;
    if (sharedEdge == 1) {
        tileIndex = 8;
    } else if (sharedEdge == 2) {
        tileIndex = 12;
    }
    void* tile = GetWindowTile_020421b0(tileIndex);
    if (tile) {
        func_0204e1c8(textWindow, tile, leftMargin, topMargin, 8, 8, 0xf0, 0xf);
    }

    void* topEdgeTile = GetWindowTile_020421b0(1);
    if (topEdgeTile) {
        for (short column = 1; column < textWindow->width_a8_ - 1; column++) {
            func_0204e1c8(textWindow, topEdgeTile, inline_0204ecb4(column), topMargin, 8, 8, 0xf0, 0xf);
        }
    }

    short windowWidth = textWindow->width_a8_;
    sharedEdge = func_0204fd00(textWindow, 2);
    tileIndex = 2;
    if (sharedEdge == 3) {
        tileIndex = 9;
    } else if (sharedEdge == 2) {
        tileIndex = 13;
    }
    tile = GetWindowTile_020421b0(tileIndex);
    if (tile) {
        func_0204e1c8(textWindow, tile, inline_0204ecb4(windowWidth - 1) - rightMargin, topMargin, 8, 8, 0xf0, 0xf);
    }

    tile = GetWindowTile_020421b0(3);
    if (tile) {
        for (short row = 1; row < textWindow->height_aa_ - 1; row++) {
            func_0204e1c8(textWindow, tile, leftMargin, inline_0204ecb4(row), 8, 8, 0xf0, 0xf);
        }
    }

    tile = GetWindowTile_020421b0(4);
    lastTileOffset = inline_0204ecb4(textWindow->width_a8_ - 1);
    if (tile) {
        for (short row = 1; row < textWindow->height_aa_ - 1; row++) {
            func_0204e1c8(textWindow, tile, lastTileOffset - rightMargin, inline_0204ecb4(row), 8, 8, 0xf0, 0xf);
        }
    }

    short windowHeight = textWindow->height_aa_;
    sharedEdge = func_0204fd00(textWindow, 4);
    tileIndex = 5;
    if (sharedEdge == 1) {
        tileIndex = 10;
    } else if (sharedEdge == 4) {
        tileIndex = 14;
    }
    tile = GetWindowTile_020421b0(tileIndex);
    if (tile) {
        func_0204e1c8(textWindow, tile, leftMargin, inline_0204ecb4(windowHeight - 1) - bottomMargin, 8, 8, 0xf0, 0xf);
    }

    void* bottomEdgeTile = GetWindowTile_020421b0(6);
    lastTileOffset = inline_0204ecb4(textWindow->height_aa_ - 1);
    if (bottomEdgeTile) {
        for (short column = 1; column < textWindow->width_a8_ - 1; column++) {
            func_0204e1c8(textWindow, bottomEdgeTile, inline_0204ecb4(column), lastTileOffset - bottomMargin, 8, 8, 0xf0, 0xf);
        }
    }

    windowWidth = textWindow->width_a8_;
    windowHeight = textWindow->height_aa_;
    sharedEdge = func_0204fd00(textWindow, 8);
    tileIndex = 7;
    if (sharedEdge == 3) {
        tileIndex = 11;
    } else if (sharedEdge == 4) {
        tileIndex = 15;
    }
    tile = GetWindowTile_020421b0(tileIndex);
    if (tile) {
        func_0204e1c8(textWindow, tile, inline_0204ecb4(windowWidth - 1) - rightMargin, inline_0204ecb4(windowHeight - 1) - bottomMargin, 8, 8, 0xf0, 0xf);
    }
}
