//
// Created by jean- on 24/01/2020.
//
#include "Test.h"
#include "../Case/Case.h"
#include <iostream>
using namespace std;

void testCase() {

    int axeX;
    int axeY;

    char typePion;

    cout << "Test des Cases :" << endl;

    /*------------------------------- TEST DES CASE -------------------------------------*/
    cout << "Creation d'une case ... " << endl << "Choix de l'axe X :" << endl << ">>> ";
    cin >> axeX;

    cout << "Choix de l'axe Y :" << endl << ">>> ";
    cin >> axeY;

    Case caseDeTest = Case(axeX, axeY);
    cout << "Case creer avec les coordonnees : (" << caseDeTest.getAxeX() << ',' << caseDeTest.getAxeY() << ')' << endl;

    cout << "----------------------------------------------" << endl;

    /*----------------------------------------- TEST DES PION -----------------------------------*/
    cout << "Creation d'un pion indefini..." << endl;
    Pion pionDeTest = Pion();
    cout << "Type du pion creer : " << pionDeTest.getType() << endl;

    cout << "Choix du type de pion" << endl << ">>> ";
    cin >> typePion;
    pionDeTest.setType(typePion);
    cout << "Type du pion : " << pionDeTest.getType() << endl;
}
