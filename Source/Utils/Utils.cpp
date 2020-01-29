//
// created by TNLcorp 
//

#include "Utils.h"
#include <stdio.h>


using namespace std;

void affichageConsole() {
	/* TODO */
}

bool Utils::validateurEnv(vector<Case> caseJouee) {
	Case ptDepart = caseJouee.at(caseJouee.size()-1); // Dernier coup joué qui est le point de depart
	int nbAligne = 0; // nb de pions alignés max 
	int x, y;

	/* On parcours toutes les directions possibles */
	for (int i = 0; i < 8; i++) {
        switch (i) {
        	case 0 : 
        	    x = 0;
        	    y = 1;
        	    break;
        	case 1 : 
        	    x = -1;
        	    y = 1;
        	    break;
        	case 2 : 
        	    x = -1;
        	    y = 0;
        	    break;
        	case 3 : 
        	    x = -1;
        	    y = -1;
        	    break;
        	case 4 : 
        	    x = 0;
        	    y = -1;
        	    break;
        	case 5 : 
        	    x = 1;
        	    y = -1;
        	    break;
        	case 6 : 
        	    x = 1;
        	    y = 0;
        	    break;
        	case 7 : 
        	    x = 1;
        	    y = 1;
        	    break;
        	default : 
        	    break;
        }
        if (validateur(ptDepart, 0, x, y)) {
        	return true;
        }
	}

	/* On gère les cas exceptionnels (Taille Terrain = 3 ou 4) */
	return false; // stub
}

bool Utils::validateur(Case ptDepart, nbAligne, x, y) {
    /* */
	if (nbAligne == 5) {
		return true;
	}

    /* On créer une case tempo qui est équivalente à la case de départ 
     * mais avec la position différentes suivant la ligne à examiner  
     */
	Case tempo = new Case(ptDepart.getAxeX()+1, ptDepart.getAxeY()+1);
	tempo.setPion(ptDepart.getPion());

	/* On parcours toutes les cases du tableau et on vérifie si elle existe */
	vector<Case>::iterator it = find(caseJouee.begin(), caseJouee.end(), tempo);
	if (it != vecOfNums.end()) {
        // On récupère l'index de la case trouvée 
        int index = distance(caseJouee.begin(), it);

        nbAligne++;
 	    /* On vérifie que le pion soit le même que celui vérifié */
 	    validateur(*caseJouee.at(index), nbAligne, x, y);
    } else {
    	return false;
    }
}


int * saisieCoordonnees() {
    /* TODO */
    return 0; // stub
}

char saisieType() {
	/* TODO */
	return 'c'; // stub
}

bool isTypeCorrect(char type) {
	return true; // stub 
}