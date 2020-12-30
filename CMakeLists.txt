cmake_minimum_required(VERSION 3.17)
project(juego_laberinto)

set(CMAKE_CXX_STANDARD 17)

add_executable(juego_laberinto src/main.cpp src/models/Player.cpp src/headers/Player.h src/models/MapCell.cpp src/headers/MapCell.h src/models/GameMap.cpp src/headers/GameMap.h)