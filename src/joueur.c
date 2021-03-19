char entree_du_joueur(void)
{
	char direction;
		
	while (direction != 'z' && direction != 'q' && direction != 's' && direction != 'd' && direction != 'a')
	{
		printf("Dans quelle direction aller ? (Déplacement : zqsd; retour en arrière : a) : ");
		scanf("%c", &direction);
		printf("\n");
	};
	return direction;
}