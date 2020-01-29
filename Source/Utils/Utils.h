//
// created TNLCorp
//

#ifndef UTILS
#define UTILS

class Utils {
	
	public: 
	
	/**
	 * Affiche le terrain du Morpion en interface console
	 */
	void affichageConsole();
	
	/**
	 * Vérifie suivant la taille du Terrain si un joueur est gagnant
	 * On récupère les cases jouées du Terrain et examinons si suffisemment de 
	 * pions sont alignés pour gagner la partie suivant la taille du terrain
     * @return -1 si le joueur 1 gagne 
	 *         0 si personne n'a gagné
	 *         1 si joueur 2 gagne 
	 *         -2 si personne n'a gagné
     */
    int validateur(Terrain terrain);
	
	/**
	 * Permet la saisie des coordonnées sur laquelle le joueur veut placer son pion
     * @return un tableau int[2] avec axe abcsisse et axe ordonné	 
     */
    int[] saisieCoordonnees(Terrain terrain);
	
	/**
	 * Vérifie suivant la taille du Terrain si un joueur est gagnant 
	 * @return Le choix du caractère qui représentera le pion du joueur 
     */
    char saisieType(Terrain terrain);
	
	/**
	 * Vérifie que le type de pion choisie soit program-friendly 
	 * @return true si le type choisit est correcte 
	 *         false sinon 
	 */
	bool isTypeCorrect(char type);

	
}

#endif // UTILS

