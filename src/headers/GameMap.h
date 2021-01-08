//
// Created by david.zabaleta on 12/30/2020.
//

#ifndef JUEGO_LABERINTO_GAMEMAP_H
#define JUEGO_LABERINTO_GAMEMAP_H

#include "MapCell.h"


class GameMap {
public:
    GameMap();

    MapCell* playerCell;

    MapCell cells[15][10];

    void drawIntro();

    void draw();

    void drawVictory();

    bool setPlayerCell(int playerXAxis, int playerYAxis);

    bool isGameOver;
protected:

    void loadMapFromFile();
};


#endif //JUEGO_LABERINTO_GAMEMAP_H
