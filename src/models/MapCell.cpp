//
// Created by david.zabaleta on 12/30/2020.
//

#include "../headers/MapCell.h"

MapCell::MapCell() {
    id = ' ';
}

bool MapCell::isBlocked() {
    return id  == '1';
}
