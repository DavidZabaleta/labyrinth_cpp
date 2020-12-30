#include <iostream>
#include "headers/Player.h"
#include "headers/MapCell.h"
#include "headers/GameMap.h"

int main() {
    bool isGameOver = false;
    Player hero;
    GameMap gameMap;

    while (isGameOver == false) {
        hero.CallInput();
        gameMap.draw();
    }

    return 0;
}
