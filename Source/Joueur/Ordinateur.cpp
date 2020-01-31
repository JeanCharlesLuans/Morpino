//
// Created by jean- on 26/01/2020.
//

#include "Ordinateur.h"
#include "../Terrain/errTerrain.h"
#include <stdio.h>
#include <stdlib.h>

Ordinateur::Ordinateur(int newDifficulte)
        : Joueur(nom, typePion) {
        this->nom = nom;
        this->typePion = typePion;
        difficulte = newDifficulte;
}

void Ordinateur::jouer(Terrain *terrain) {
    if(difficulte == 0) {
        facile(terrain);
    } else {
        difficile(terrain);
    }
}

void Ordinateur::difficile(Terrain *pTerrain) {

}

void Ordinateur::facile(Terrain *pTerrain) {

    int longueurMax; // Longueuer maximale exclu
    int hauteurMax;  // Haueur maximale exclu
    int rndAxeX;
    int rndAxeY;

    bool ok;

    longueurMax = pTerrain->getLongueur() + 1;
    hauteurMax = pTerrain->getHauteur() + 1;

    do {
        rndAxeX = rand() % longueurMax;
        rndAxeY = rand() % hauteurMax;

        Case aPlacer = Case(rndAxeX, rndAxeY);
        try {
            pTerrain->addCase(aPlacer);
            ok = true;
        } catch (errTerrain err) {
            ok = false;
        }

    } while (!ok);
}
