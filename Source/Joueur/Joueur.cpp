//
// Created by jean- on 26/01/2020.
//

#include "Joueur.h"

using namespace std;

Joueur::Joueur(string newNom, char newTypePion) {
    nom = newNom;
    typePion = newTypePion;
}

void Joueur::jouer(Terrain *terrain) {
    bool positionnement = false;

    // Faire
        // Chox des coordonnée
        // Création d'un pion avec le type associé au joueur
        // Création de la case
        // esseyer
            // Positionnement de la case au terrain
            // positionnement = true
        // attraper errTerrain
            // positionnement = false
    // Tant que positionnement n'est pas true
}