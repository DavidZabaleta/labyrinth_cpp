//
// Created by david.zabaleta on 12/29/2020.
//

#ifndef JUEGO_LABERINTO_PLAYER_H
#define JUEGO_LABERINTO_PLAYER_H


class Player {

public:
    Player();

    void CallInput();
    void resetToSafePosition();

protected:
    int x, y;
    int lastX, lastY;
public:
    int getX() const;

    int getY() const;
};


#endif //JUEGO_LABERINTO_PLAYER_H
