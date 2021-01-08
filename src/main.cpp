#include <iostream>
#include "headers/Player.h"
#include "headers/MapCell.h"
#include "headers/GameMap.h"

int main() {

    Player hero;
    GameMap gameMap;

    gameMap.drawIntro();

    while (gameMap.isGameOver == false) {

        std::cout<<"Introduce el comando de movimiento 'w''a''s''d': ";
        hero.CallInput();

        if (gameMap.setPlayerCell(hero.getX(), hero.getY())) {
            gameMap.draw();
        } else {
            hero.resetToSafePosition();
            gameMap.draw();
        }
    }

    return 0;
}
