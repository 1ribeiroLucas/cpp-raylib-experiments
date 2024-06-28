#include "header/player.h"
#include <iostream>

using namespace std;

void Player::drawPlayer()
{
    
    
        // playerInfo.position = position;
        // playerInfo.size = size;
        playerInfo.rightEdge = playerInfo.position.x + playerInfo.size.x;
        playerInfo.bottomEdge = playerInfo.position.y + playerInfo.size.y;
        // playerInfo.color = color;
        // BeginDrawing();
        DrawRectangle(playerInfo.position.x, playerInfo.position.y, playerInfo.size.x, playerInfo.size.y, playerInfo.color);
        // EndDrawing();

}

void Player::updatePosition(Vector2 newPosition)
{
    playerInfo.position = {newPosition.x - (playerInfo.size.x / 2), newPosition.y - (playerInfo.size.y / 2)};
    // drawPlayer(playerInfo.position, playerInfo.size, playerInfo.color);
}

bool Player::isPlayerClicked(Vector2 clickPosition)
{
    bool isPlayerClicked = false;

    if (
        clickPosition.x >= playerInfo.position.x
        && clickPosition.y >= playerInfo.position.y
        && clickPosition.x <= playerInfo.rightEdge
        && clickPosition.y <= playerInfo.bottomEdge)
    {
        isPlayerClicked = true;
    }

    return isPlayerClicked;
}

string Player::getPlayerName()
{
    return playerName;
}

PlayerInfo Player::getPlayerInfo()
{
    return playerInfo;
}