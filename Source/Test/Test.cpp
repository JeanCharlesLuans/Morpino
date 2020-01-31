//
// Created by jean- on 24/01/2020.
//
#include "Test.h"
#include "../Case/Case.h"
#include <iostream>
#include "../Terrain/Terrain.h"
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

void testTerrain() {

    int hauteur,
        longueur;

    cout << "Choisissez une hauteur :" << endl << ">>> ";
    cin >> hauteur;

    cout << "Choisissez une longueur :" << endl << ">>> ";
    cin >> longueur;

    cout << "Création du terain en cour ..." << endl;
    Terrain terrainTest = Terrain(longueur, hauteur);

    cout << "Creation d'une case ne faisant pas partie du terrain :" << endl;
    Case caseHorsTerrain = Case(longueur+1, hauteur+1);

    cout << "Creation d'une case dans le terrain :" << endl;
    Case caseDansTerrain = Case(longueur-1, hauteur-1);

    cout << "Creation d'une case ayant les memes coordonner que la case precedente" << endl;
    Case caseDansTerrain2 = Case(longueur-1, hauteur-1);

    cout << "Ajout de la case sans anomalie : " << endl;
    try {
        terrainTest.addCase(caseDansTerrain);
    } catch (std::exception const& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    cout << "Ajout de la case avec anomalie (taille > taille Terrain) : " << endl;
    try {
        terrainTest.addCase(caseHorsTerrain);
    } catch (std::exception const& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    cout << "Ajout de la case avec anomalie (case deja existante) : " << endl;
    try {
        terrainTest.addCase(caseDansTerrain2);
    } catch (std::exception const& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

}

void testOrdinateur() {}