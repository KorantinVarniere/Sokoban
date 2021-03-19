#include "../includes/main.h"

// Créer et retourne un pointeur vers un nouveau niveau.
niveau_t* nouveau_niveau(int nb_colonnes, int nb_lignes)
{
	niveau_t* niv = malloc(sizeof(niveau_t));
	niv->nb_lignes = nb_lignes;
	niv->nb_colonnes = nb_colonnes;
	niv->terrain = malloc((nb_colonnes * nb_lignes)*sizeof(char));
	return niv;
}

//place le caractère car dans le tableau à la ligne et colonne données
void place_sur_terrain (niveau_t *niveau,int colonne,int ligne,char car){
  *(niveau->terrain + ligne*niveau->nb_colonnes+colonne)=car;
}

// Permet la lecture du charactère situé à une ligne et une colonne spécifiées.
char lecture_du_terrain(niveau_t* niveau, int colonne, int ligne)
{
	return *(niveau->terrain + ligne * niveau->nb_colonnes + colonne);
}

//Initialise toutes les cases du tableau avec un mur donc le signe '#'
void initialise_le_terrain (niveau_t* niveau){
  for(int i=0; i<(niveau->nb_lignes*niveau->nb_colonnes); i++){
    *(niveau->terrain+i)= '#';
  }
}

// Affiche le niveau.
void affichage_niveau(niveau_t* niveau)
{
	for (int ligne = 0; ligne < niveau->nb_lignes; ligne++) {
		for (int colonne = 0; colonne < niveau->nb_colonnes; colonne++) {
			printf("%c", lecture_du_terrain(niveau, colonne, ligne));
		}
		printf("\n");
	}
}

// Permet la lecture du fichier niveau correspondant.
/*
niveau_t* lecture_du_niveau(int quel_niveau){
  char chaine[80];
  sprintf(chaine,"niveau_%d",quel_niveau);
	FILE* niveau=fopen(chaine,"r");
  int colonne=0;
  char car = getc(fichier);
  while(car !=' '){
    colonne=colonne+car-'0';
    car = getc(fichier);
  }
  niveau_t* niv = nouveau_niveau(colonne,);

}
*/
// Libère la mémoire.
void liberation_du_niveau(niveau_t* niveau)
{
	free(niveau->terrain);
	free(niveau);
}