#include <iostream>
#include "raylib.h"
#include "raymath.h"

using namespace std;

// enum PLAYER_JOBS

struct PlayerInfo {
    Vector2 position = { 0 }; 
    float rightEdge = 0;
    float bottomEdge = 0;
    Vector2 size = { 0 };
    Color color = { 0 };
};

class Player
{
    private:
        string playerName = "";
        double lifePoints = 0;
        double magicPoints = 0;
        string job = "Jobless";
        PlayerInfo playerInfo = {0};
        bool isPlayerSelected = false;
    public:
        // /**
        //  * Várias declarações de construtores diferentes retornam um objeto
        //  * com resultados diferentes.
        //  */
        Player(string _playerName, Vector2 _playerPosition, Vector2 _playerSize, Color _color)
        {   
            playerName = _playerName;
            playerInfo.position = _playerPosition;
            playerInfo.size = _playerSize;
            playerInfo.rightEdge = _playerPosition.x + _playerSize.x;
            playerInfo.bottomEdge = _playerPosition.y + _playerSize.y;
            playerInfo.color = _color;
        };
        // Player(string _playerName, double _lifePoints, double _magicPoints, string _job)
        //         : playerName(_playerName), lifePoints(_lifePoints), magicPoints(_magicPoints), job(_job) {};
        
        void drawPlayer();
        void updatePosition(Vector2 newPosition);
        void setPlayerDraggableState(Vector2 clickPosition);

        string getPlayerName();
        PlayerInfo getPlayerInfo();
        bool getIsPlayerSelected();
};