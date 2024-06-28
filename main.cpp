#include <stdio.h>
#include <iostream>
// Por causa da diretiva "#include", raylib é copiado diretamente para o programa
// no pré-processamento.
#include "raylib.h"

// #include "src/titleScreen.cpp"
// #include "src/hud.cpp"

#include "src/player/header/player.h"

using namespace std;

int main()
{
    const int windowWidth = 640;
    const int windowHeight = 480;

    InitWindow(windowWidth, windowHeight, "CPP Raylib Experiments");
    SetTargetFPS(60);

    Player teobaldo("Teobaldo", {144.0, 144.0}, {50.0, 50.0}, VIOLET);
    Player gertrudes("Gertrudes", {144.0, 432.0}, {50.0, 50.0}, GREEN);

    // Não é recomendado criar variáveis sem inicializar para
    // evitar lixo na memória enquanto a variável não é inicializada.
    bool isTitleScreen = true;

    while (!WindowShouldClose())
    {

        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {

            
            // FIXME: Mover o mouse muito rápido enquanto está arrastando
            // algum quadrado solta o quadrado
            teobaldo.setPlayerDraggableState(GetMousePosition());

            if (teobaldo.getIsPlayerSelected()  == true)
            {
                teobaldo.updatePosition(GetMousePosition());
            }

            // if (gertrudes.isPlayerClicked(GetMousePosition()))
            // {
            //     gertrudes.updatePosition(GetMousePosition());
            // }
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        teobaldo.drawPlayer();
        gertrudes.drawPlayer();
        // if (teobaldo.getIsPlayerAlreadyVisible() == false)
        // {
        //     cout << teobaldo.getPlayerName() << endl;
        //     cout << teobaldo.getPlayerInfo().position.x << endl;
        //     // teobaldo.drawPlayer(teobaldo.getPlayerInfo().position, teobaldo.getPlayerInfo().size, teobaldo.getPlayerInfo().color);

        // }

        
        EndDrawing();
        // if (isTitleScreen) {
        //     DrawTitleScreen(isTitleScreen);
        // } else {
        //     DrawHud();
        // }
        // // BeginDrawing();
        // // ClearBackground({100, 100, 100, 255});
        // // DrawText("The most awesome game made", 300, 150, 14, {200, 200, 200, 255});
        // // EndDrawing();
    }

    CloseWindow();

    return 0;
}