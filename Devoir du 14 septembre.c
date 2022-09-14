#include <stdio.h>

void affiche_B(int C )
{
	int A = 2, B = 5;
	for (A = 1;A<=C;A++)                 
	{
		printf("t%d= %d\n",A,B );                               // ce programme va demander a l'utilisateur un chiffre "C" qui
		B = B * (A * 2) + B;                                      // va lui meme se repeter "C" fois en gardant toujours la valeur
	}                                                           // obtenue par le calcul juste avant
}

int main()
{
	int C, B;
	printf("Entrez la valeur de C :\n");                        //le main ici lui va permettre de montrer la Valeur obtenue a chaque T
	scanf("%d",&C);                                             // apres avoir effectuer tout les calculs 
	affiche_B(C);
}