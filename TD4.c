#include <stdio.h>

//EXERCICE 1

/*
typedef int Tab[4];
int dicho(Tab t,int c, int g,int d)
{
    int i;
    d=-1;
    for (i=0;i<g;i++)
        if(c == t[i])
            d=(i+1);
    return d;
}
int main()
{
    Tab t[]={1,2,3,4};
    printf("%d",dicho(t,3,1,0));
}
*/

//Exercice2

/*
int Min(int tableau[], int taille){
    int i,j=0;
    for (i = 0;i<taille;i++){ //
        if (tableau[j] > tableau[i+1]) {
            j = i+1;
        }
    }
    return j;
}

void permute(int tableau[],int i, int j){
    int temporaire;
    temporaire = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = permut ;
}

int affiche_tab(int tableau[], int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        printf("%d\n",tableau[i]);
    }
}

int main()
{
    int t[] = {3,17,9,15,2,7,10,9,8,12};
    printf("%d\n", Min(t,10));
    permute(t,4,0);
    printf("%d\n", Min(t,10));
    affiche_tab(t,13);
    return 0;
}
*/


//EXERCICE 3

/*
typedef int Tab[10];
void f(Tab t,int n)
{
    int b=1,j=n,i;
    while(b==1)
    {
        b=0;
        i=0;
        while(i<j)
        {
            if(t[i]>t[i+1])
               {
                   permut(t,i,i+1);
                    b=1;
               }
            i++;
        }
        j--;
    }
}
int main()
{
    Tab t[]={3,17,9,15,2,7,10,9,8,12};
}
*/



