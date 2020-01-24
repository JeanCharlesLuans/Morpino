//
// Created by jean- on 24/01/2020.
//

#include "Terrain.h"

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
    // TODO parcourir le tableau, verifier une a une les case qui existe puis retourner true si une case existe deja
}

// TODO finir d'ecrire les methode de terrain