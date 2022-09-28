#include <stdio.h>
void affiche(int *tableau, int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int main(int argc, char *argv[])
{
    int tableau[10] = {10, 15, 3, 5, 14, 7,  18, 14, 9, 15 };
 
    // On affiche le contenu du tableau
    affiche(tableau, 10);
 
    return 0;
}

 
#include <stdio.h>

 
double moyenneTableau(int tableau[], int tailleTableau);
 
int main()
{
    int tableau[10] = {10, 15, 3, 5, 14, 7,  18, 14, 9, 15 };
    double moyenne = 0;
    moyenne = moyenneTableau(tableau, 4);
    printf("\nLa moyenne des valeurs du tableau est %f\n", moyenne); // f car la reponse est un chiffre a virgule
 
    return 0;
}
 
double moyenneTableau(int tableau[], int tailleTableau)
{
    int i = 0;
    double moyenne = 0;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        moyenne += (double)tableau[i];
    }
 
    return moyenne/tailleTableau;
}






#include <stdio.h>

void min(int tableau[], int tailleTableau)
{
    int i= 0;
    
    // Boucle pour stocker le min dans tab[0]
    for(i = 1; i < tailleTableau; ++i)
    {
       if(tableau[0] < tableau[i])
           tableau[0] = tableau[i];
    }

    printf("\nLe plus grand element est %d\n", tableau[0]);
    
}

void max(int tableau[], int tailleTableau)
{
    int i = 0;

    for(i = 1; i < tailleTableau; ++i)
    {
       if(tableau[0] > tableau[i])
           tableau[0] = tableau[i];
    }

    printf("\nLe plus petit element est %d\n", tableau[0]);
}

int main(int argc, char *argv[])
{
    int tableau[10] = {10, 15, 3, 5, 14, 7,  18, 14, 9, 15 };
 
    // On affiche le contenu du tableau
    min(tableau, 10);
    max(tableau, 10);

    return 0;
}

#include <stdio.h>

void modif(int tableau[], int tailleTableau )
{
    int i = 0;
    int a = 0;

    printf("Entrez la valeur de a :\n");             
    scanf("%d", &a);

     for (i=0; i<tailleTableau; i++)
     {
     printf("%d",*(tableau+a));                //afficher la valeur
     
    }
    
}

int main(int argc, char *argv[])
{
    int tableau[10] = {10, 15, 3, 5, 14, 7,  18, 14, 9, 15 };
 
    
    modif(tableau, 1);
    

    return 0;
}



#include <stdio.h>

void ajout(int tableau[], int tailleTableau)
{
    int i = 0;

     for (i=0; i<tailleTableau; i++)
     {
     tableau[i]=tableau[i] + 1;
     printf("%d\n", tableau[i]);
    }
    
}

int main(int argc, char *argv[])
{
    int tableau[10] = {10, 15, 3, 5, 14, 7,  18, 14, 9, 15 };
 
    
    ajout(tableau, 10);
    

    return 0;
}