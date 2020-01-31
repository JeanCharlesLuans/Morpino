//
// Created by jean- on 24/01/2020.
//

#ifndef MORPINO_TERRAIN_H
#define MORPINO_TERRAIN_H

#include <vector>
#include "../Case/Case.h"

class Terrain {
public:
    /**
     * Créer un terrain selon une longueur et une hauteur prédéfinie
     * @param newLongueur longueur du terrain
     * @param newHauteur  hauteur du terrain
     */
    Terrain(int newLongueur, int newHauteur);

    /**
     * @return la longueur du terrain
     */
     int getLongueur();

    /**
     * @return la hauteur du terrain
     */
    int getHauteur();

      /**
       * @return la liste des case jouer
       */
       std::vector<Case> getListeJouer();

       /**
        * @return true si une case est deja jouer
        */
        bool isJouer(Case aTester);

        /**
         * Ajoute une case a la liste des case jouer si cette derniere rentre dans le terrain
         * @param caseAdd case a ajouter
         */
         void addCase(Case caseAdd);

private:
    int longueur; /** Longueur du terrain */
    int hauteur; /** Hauteur du pion */
    std::vector<Case> listeJouer; /** Liste des cases qui on était jouer */
};


#endif //MORPINO_TERRAIN_H
