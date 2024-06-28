#include <iostream>

#include "raylib.h"

void DrawTitleScreen(bool isTitleScreen)
{
    BeginDrawing();
    ClearBackground({230, 230, 230, 255});
    DrawText("Raylib Experiments Title Screen", 48, 96, 32, {25, 25, 25, 255});
    DrawText("Click anywhere to continue", 48, 144, 24, {25, 25, 25, 255});
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        isTitleScreen = false;
        std::cout << isTitleScreen << std::endl;
    }
    EndDrawing();
}
