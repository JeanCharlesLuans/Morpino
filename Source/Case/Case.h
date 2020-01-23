//
// Created by jean- on 23/01/2020.
//

#ifndef MORPINO_CASE_H
#define MORPINO_CASE_H

#include "../Pion/Pion.h"

class Case {

public :
    Case(int newAxeX, int newAxeY);
    int getAxeX();
    int getAxeY();
    Pion getPion();
    void setPion(Pion newPion);

private:
    int axeX;
    int axeY;
    Pion occupe;
};


#endif //MORPINO_CASE_H
