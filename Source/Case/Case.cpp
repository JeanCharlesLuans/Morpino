//
// Created by jean- on 23/01/2020.
//

#include "Case.h"

using namespace std;

Case::Case(int newAxeX, int newAxeY) {
    axeX = newAxeX;
    axeY = newAxeY;
    occupe = Pion();
}

int Case::getAxeX() {
    return axeX;
}

int Case::getAxeY() {
    return axeY;
}

Pion Case::getOccupe() {
    Pion aRetourner;
    occupe = aRetourner;
    return aRetourner;
}

void Case::setPion(Pion newPion) {
    occupe = newPion;
}

bool Case::isSame(Case caseATester) {

    int testAxeX = caseATester.getAxeX();
    int testAxeY = caseATester.getAxeY();

    return axeX == testAxeX && axeY == testAxeY;
}
