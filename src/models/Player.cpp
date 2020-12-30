//
// Created by david.zabaleta on 12/29/2020.
//

#include <iostream>
#include "../headers/Player.h"

Player::Player() {
    x = 1;
    y = 1;
}

void Player::CallInput() {
    char userInput = ' ';

    std::cin>> userInput;

    switch (userInput) {
        case 'w':
            y++;
            std::cout<< "El player se mueve pa arriba"<<std::endl;
            break;
        case 'a':
            x--;
            std::cout<< "El player se mueve pa la izq"<<std::endl;
            break;
        case 's':
            y--;
            std::cout<< "El player se mueve pa abajo"<<std::endl;
            break;
        case 'd':
            x++;
            std::cout<< "El player se mueve pa la dcha"<<std::endl;
            break;
    }

    std::cout<< "Coordenadas: "<< x << "," << y <<std::endl;
}
