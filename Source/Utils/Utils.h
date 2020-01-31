//
// created TNLCorp
//

#ifndef UTILS
#define UTILS

#include "../Terrain/Terrain.h"
#include "../Case/Case.h"

using namespace std;

class Utils {
	
	public: 
	
	/**
	 * Affiche le terrain du Morpion en interface console
	 */
	void affichageConsole();

    /**
     * méthode enveloppe du validateur qui est récursif 
     */
	bool validateurEnv(vector<Case> caseJouee);
	
	/**
	 * Vérifie lors de chaque coup du joueur si il vient de gagner la partie ou non 
     * @return -1 si le joueur 1 gagne 
	 *         0 si personne n'a gagné
	 *         1 si joueur 2 gagne 
	 *         -2 si personne n'a gagné
     */
    bool validateur(Case ptDepart, vector<Case> caseJouee, int nbAligne, int x, int y);
	
	/**
	 * Permet la saisie des coordonnées sur laquelle le joueur veut placer son pion
     * @return un tableau int[2] avec axe abcsisse et axe ordonné	 
     */
    int * saisieCoordonnees();
	
	/**
	 * Vérifie suivant la taille du Terrain si un joueur est gagnant 
	 * @return Le choix du caractère qui représentera le pion du joueur 
     */
    char saisieType();
	
	/**
	 * Vérifie que le type de pion choisie soit program-friendly 
	 * @return true si le type choisit est correcte 
	 *         false sinon 
	 */
	bool isTypeCorrect(char type);

	
};

#endif // UTILS

