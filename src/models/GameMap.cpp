//
// Created by david.zabaleta on 12/30/2020.
//

#include <iostream>
#include "../headers/GameMap.h"
#include <fstream>

GameMap::GameMap() {
    playerCell = NULL;
    loadMapFromFile();
}

void GameMap::draw() {
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << cells[i][j].id;
        }
        std::cout<<std::endl;
    }
}

bool GameMap::setPlayerCell(int playerXAxis, int playerYAxis) {

    if (!cells[playerYAxis][playerXAxis].isBlocked()) {
        if (playerCell != NULL) {
            playerCell->id = ' ';
        }

        playerCell = &cells[playerYAxis][playerXAxis];
        playerCell->id = '0';

        return true;
    } else {
        return false;
    }

    //std::cout<<"Las coordenadas del jugador son: " << playerXAxis << "," << playerYAxis;
}

void GameMap::loadMapFromFile() {
    std::ofstream fileCreated("Map.txt");

    if (fileCreated.is_open()) {
        for (int i = 0; i < 15; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (i == 0 || i == 14) {
                    fileCreated.put('1');
                } else {
                    if (j == 0 || j == 9) {
                        fileCreated.put('1');
                    } else {
                        fileCreated.put(' ');
                    }
                }
            }
            fileCreated.put('\n');
        }
        fileCreated.close();
    } else {
        std::cout<<"FATAL_ERROR: MAP FILE COULD NOT BE CREATED";
    }

    std::string line;
    int row = 0;
    std::ifstream myFile("Map.txt");

    if (myFile.is_open()) {
        std::cout<<"prueba dibujado" << std::endl;
        while (getline(myFile, line)) {
            for (int i = 0; i < line.length(); ++i) {
                cells[row][i].id = line[i];
            }
            row++;
        }
        std::cout<<"final prueba dibujado" << std::endl;
    } else {
        std::cout<<"FATAL_ERROR: MAP FILE COULD NOT BE OPEN";
    }
}
