#include <stdio.h>




/*
exo 1

#define N 10
typedef int Tab[N];

int partitionner(int tab[],int g,int d)
{
int i,j;
int pivot,temp;
pivot=tab[g];
i=g-1;
j=d+1;
while (i<j)
{
while (tab[i]<=pivot)
{
    i++;
}
while (tab[j]>pivot)
{
    j--;
}
if (i<j)
{
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
}
}
    tab[g]=tab[j];
    tab[j]=pivot;
return j;
}

void triRapide(int *tab,int taille)
{
  int i,j;
  int pivot,temp;
  if (taille<2)
  {
      return pivot=tab[taille/2];
  }
  for (i=0,j=taille-1;;i++,j--)
    {
    while (tab[i]<pivot)
    {
        i++;
    }
    while (pivot<tab[j])
    {
        j--;
    }
    if (i>=j)
    {
    break;
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
    }
   }
}

int initPivot(int tab[],int n)
{
    int i,j;
    int temp;
    for (i=0;i<n-1;i++)
{
        for (j=i+1;j<n;j++)
    {
        if (tab[i]>tab[j])
        {
            temp=tab[i];
            tab[i]=tab[j];
            tab[j]=temp;
        }
    }
}
return tab[n/2];
}

int main()
{
    Tab t = {3,17,9,15,2,7,10,9,8,12};
    triRapide(t,N);
    return 0;
}
*/


/*
exo 2
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef int Tab[MAX];


void affichage(Tab t, int n)
{
    for(int i=0; i<n;i++)
    {
        printf("%f ",t[i]);
    }
}
void permuter(Tab t, int i, int j)
{
    int temp;
    temp=t[i];
    t[i]=t[j];
    t[j]=temp;
}
void triTableau(Tab t, int n)
{
    int i,j;
   for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(t[i]>t[j])
            {
                permuter(t,i,j);
            
        }
    }
}
void fusion(Tab t1, int n1, Tab t2, int n2) 
{
    int i,j;
    Tab t3;
    if(n1+n2 <= MAX)
    {
    for(i=0; i<n1;i++)
    {
        t3[i]=t1[i];
    }
    for(j=0;j<n2;j++)
    {
        t3[j+n1]=t2[j];
    }
    }
    triTableau(t3,n1+n2);
    affichage(t3,n1+n2);
}


int main()
{
    Tab t1={12,5,6,14,3};
    Tab t2={2,8,7,3,4};
    affichage(t1, 5);
    printf("\n");
    affichage(t2,5);
    printf("\n");
    fusion(t1,5,t2,5);
}
*/