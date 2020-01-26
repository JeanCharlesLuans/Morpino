//
// Created by jean- on 26/01/2020.
//

#ifndef MORPINO_ORDINATEUR_H
#define MORPINO_ORDINATEUR_H


#include "Joueur.h"
#include <iostream>

class Ordinateur : public Joueur {

public:
    explicit Ordinateur(int newDifficulte);

private:
    int difficulte; // Difficulté de l'ordinateur
};


#endif //MORPINO_ORDINATEUR_H
