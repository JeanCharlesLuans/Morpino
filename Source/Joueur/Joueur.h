//
// Created by jean- on 26/01/2020.
//

#ifndef MORPINO_JOUEUR_H
#define MORPINO_JOUEUR_H

#include <iostream>
#include "../Terrain/Terrain.h"

class Joueur {

public:
    /**
     * Créer un joueur avec un nom prédéfini
     * @param nom : nom du joueur
     */
    Joueur(std::string nom, char newTypePion);

    /**
     * Fait jouer un joueur
     * @param l'adresse du terrin actuelle
     */
     void jouer(Terrain* terrain);

// Nom du joueur
    // Défini le type de pion du joueur
protected:
    char typePion;
    std::string nom;
};


#endif //MORPINO_JOUEUR_H
