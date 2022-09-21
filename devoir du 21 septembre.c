#include <stdio.h>

/*int main (int arcg, char **argv)
{
    
    int a;

printf("Entrez la valeur de a :\n");             entre la valuer numerique (chiffre) de A 

scanf("%d", &a);                                 scanne de sa valeur sa valeur "adresse"

printf("%d\n", a);                               affichage valuer d'orgine
printf("%d", &a);                                affichage de sa valeur "adresse"

}
*/

/*int main (char argv)
{
    
    char a;

printf("Entrez la valeur de a :\n");             entre la valuer numerique (lettre) de A

scanf("%c", &a);                                 scanne de sa valeur sa valeur "adresse"

printf("%c\n", a);                               affichage valuer d'orgine
printf("%d", &a);                                affichage de sa valeur "adresse"

}
*/


//question 3


/*    void permutation(int *a,int *b)
    {

    int permut = *a;                                   creation de la variable qui  
    * a = *b;                                          remplacera la valuer de a 
    * b = permut ;                                     par la valuer de B
     
    }

int main(int argc, char **argv)
{
    int a,b;


    printf("Entrer la valeur de a:");                     
    scanf("%d",&a);


    printf("Entrer la valeur de b:");                     
    scanf("%d",&b);


    printf("a = : %d\n",a);                                 
    printf("b = : %d\n",b);


    permutation(&a,&b);                                      utilisation de la variable permutation
    printf("\nnouvelle valeur de a : %d\n",a);
    printf("\nnouvelle valeur de b : %d\n",b);
        return 0;
}
*/


/*void MetM( int *a,int *b,int *c, int *max, int *min) // valeur max et min de 3 chiffre
{
    *max =*a;
    *min =*a;

    if (*max < *b && *b> *c)
        *max = *b;
    else if (*max > *c)                     
        *max = *a;
    else *max = *c;
                        

    if (*min > *b && *b < *c)
        *min = *b;
    else if (* min <*c)
        *min = *a;
    else *min = *c;
}
int main(int argc, char **argv)
 { int a,b,c;

printf("Entrer la valeur de a:");
scanf("%d",&a);

printf("\nEntrer la valeur de b:");                       //demande entré variable
scanf("%d",&b);

printf("\nEntrer la valeur de c:");
scanf("%d",&c);


 int max =0;

 int min =0;


 printf(" a = %d \n",a);

 printf(" b = %d \n",b);                          //affichage des variables entré
 
 printf(" c = %d \n",c);


 MetM(&a,&b,&c,&max,&min);                             // execution du void


 printf("Valeur max = %d \n",max);

 printf("Valeur min = %d \n",min);                      //affichage min et max

}
*/