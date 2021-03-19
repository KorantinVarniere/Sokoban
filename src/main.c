#include "../includes/main.h"

int main(void) {
	// Création d'un niveau de 10 colonnes et 4 lignes.
	niveau_t* niveau = nouveau_niveau(10, 4);

	// Initialisation du niveau.
	initialise_le_terrain(niveau);

	// Affiche le niveau.
	affichage_niveau(niveau);

	char test = entree_du_joueur();
	printf("%c\n", test);

	// Libère la mémoire du niveau.
	liberation_du_niveau(niveau);

	// Code de retour.
	return 0;
}