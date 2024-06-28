#include "raylib.h"

void DrawHud()
{
    const int topPositionHud = 0;
    const int leftPositionHud = 0;
    const int hudWidth = 300;
    const int hudHeight = 500;
    const Color hudColor = (Color){0, 0, 187, 255};

    BeginDrawing();
    // ###############################
    DrawRectangle(topPositionHud, leftPositionHud, hudWidth, hudHeight, hudColor);
    // ###############################
    EndDrawing();
}