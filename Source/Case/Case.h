//
// Created by jean- on 23/01/2020.
//

#ifndef MORPINO_CASE_H
#define MORPINO_CASE_H

#include <iostream>
#include <sstream>
#include "../Pion/Pion.h"

class Case {

public :
    /**
     * Créer une case avec une position prédefini
     * @param newAxeX
     * @param newAxeY
     */
    Case(int newAxeX, int newAxeY);

    /**
     * @return la position de la case sur l'axe X
     */
    int getAxeX();

    /**
     * @return la position de la case sur l'axe X
     */
    int getAxeY();

    /**
     * @return le pion qui occupe la case
     */
    Pion getOccupe();

    /**
     * @param newPion nouveau pion qui occupe la case
     */
    void setPion(Pion newPion);

    /**
     * Verifie si une case est égale a une autre
     * @param caseATester case a tester
     * @return  true si les deux case sont les mêmes
     */
    bool isSame(Case caseATester);

private:
    int axeX; /** Position sur l'axe X */
    int axeY; /** Position sur l'axe Y */
    Pion occupe; /** Pion qui occupe la case */
};


#endif //MORPINO_CASE_H
