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

    void jouer(Terrain* terrain) override;

private:
    int difficulte; // Difficulté de l'ordinateur
    void difficile(Terrain *pTerrain);

    static void facile(Terrain *pTerrain);
};


#endif //MORPINO_ORDINATEUR_H
