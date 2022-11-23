#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Question 1 :
#define N 1000
typedef int tab[N];


int main(int argc, char const *argv[])
{
    float somme;
    float temps[10];
    float moyenne;
    for(int i=0; i < 10; i++)
    {
        double temps_debut, temps_fin;
        temps_debut=(double)clock(); 
        f (); 
        temps_fin = (double)clock();
        printf ("\nDuree de traitement : %f ms\n", 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC);
        temps[i] = (temps_fin -temps_debut);
    }
    for( int j = 0;j<10;j++)
    {
        somme = somme + temps[j];
        moyenne = somme /10;
    }
    printf("la moyenne =: %d", moyenne);
    return 0;

}