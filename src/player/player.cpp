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

void Player::setPlayerDraggableState(Vector2 clickPosition)
{
    if (
        clickPosition.x >= playerInfo.position.x
        && clickPosition.y >= playerInfo.position.y
        && clickPosition.x <= playerInfo.rightEdge
        && clickPosition.y <= playerInfo.bottomEdge)
    {
        isPlayerSelected = true;
    }
    else
    {
        isPlayerSelected = false;
    }

}

string Player::getPlayerName()
{
    return playerName;
}

PlayerInfo Player::getPlayerInfo()
{
    return playerInfo;
}

bool Player::getIsPlayerSelected()
{
    return isPlayerSelected;
}