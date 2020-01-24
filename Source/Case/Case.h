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

    int getAxeX();
    int getAxeY();

    Pion getOccupe();

    void setPion(Pion newPion);

    /**
     * @return les coordonner sous forme d'afficahge de la forme (x,y)
     */
    std::string toString();

private:
    int axeX;
    int axeY;
    Pion occupe;
};


#endif //MORPINO_CASE_H
