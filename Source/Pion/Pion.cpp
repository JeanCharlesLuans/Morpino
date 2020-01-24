//
// Created by jean- on 23/01/2020.
//

#include "Pion.h"

// Initialise un pion avec un type
Pion::Pion(char newType) {
    type = newType;
}

char Pion::getType() {
    return type;
}

Pion::Pion() {
    type = '\0';
}

void Pion::setType(char newType) {
    type = newType;
}
