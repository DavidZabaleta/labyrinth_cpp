//
// Created by david.zabaleta on 12/30/2020.
//

#include <iostream>
#include "../headers/GameMap.h"

GameMap::GameMap() {}

void GameMap::draw() {
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << 0;
        }
        std::cout<<std::endl;
    }
}
