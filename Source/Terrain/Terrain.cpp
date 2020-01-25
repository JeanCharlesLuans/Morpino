//
// Created by jean- on 24/01/2020.
//

#include "Terrain.h"
#include "errTerrain.h"
using namespace std;

Terrain::Terrain(int newLongueur, int newHauteur) {
    longueur = newLongueur;
    hauteur = newHauteur;
}

int Terrain::getLongueur() {
    return longueur;
}

int Terrain::getHauteur() {
    return hauteur;
}

vector<Case> Terrain::getListeJouer() {
    return listeJouer;
}

bool Terrain::isJouer(Case aTester) {
    bool isSame = false;
    for (int i = 0; i < listeJouer.size() && !isSame ; i++) {
        isSame = listeJouer[i].isSame(aTester);
    }
    return isSame;
}

void Terrain::addCase(Case caseAdd) {
    if (isJouer(caseAdd)) {
        throw errTerrain(2, "Case deja jouer", 2);
    }
    if (caseAdd.getAxeX() > longueur || caseAdd.getAxeY() > hauteur) {
        throw errTerrain(1, "Case hors du terrain", 2);
    }
    listeJouer.push_back(caseAdd);
}
