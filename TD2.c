#include<stdio.h>     // partie 1
#include <stdlib.h>

int main(){

  typedef struct {
  char nom[15]; 
  char prenom[15]; 
  int Cfonction[1]; 
  float Salaire; 
}Employe;

Employe Emp1;

printf("Nom de l'employe ? :");
scanf("%s",Emp1.nom);
printf("%s\n",Emp1.nom);

printf("Prenom de l'employe ? :");
scanf("%s",Emp1.prenom);
printf("%s\n",Emp1.prenom);

printf("CodeFonction de l'employe ? :");
scanf("%d",*Emp1.Cfonction);
printf("%s\n",*Emp1.Cfonction);

printf("Salaire de l'employe ? :");
scanf("%f",Emp1.Salaire);
printf("%s\n",Emp1.Salaire);

return 0;

}



#include<stdio.h>     // partie 2
#include <stdlib.h>



typedef struct Employe{
  char nom[15]; 
  char prenom[15]; 
  int Cfonction[1]; 
  float Salaire; 
}Employe;

void saisieEmploye(Employe *Emp1)
{
    printf("Nom de l'employe ? :");
        scanf("%s",Emp1->nom);
    printf("\n %s \n",Emp1->nom);

    printf("Prenom de l'employe ? :");
        scanf("%s",Emp1->prenom);
    printf("\n %s \n",Emp1->prenom);

    printf("CodeFonction de l'employe ? :");
        scanf("%d",Emp1->Cfonction);
    printf("\n %s \n",Emp1->Cfonction);

    printf("Salaire de l'employe ? :");
        scanf("%f",Emp1->Salaire);
    printf("\n %s \n",Emp1->Salaire);
}

void afficheEmploye(Employe *Emp1)
{
    printf("\n Nom de l'employe : %s \n",Emp1->nom);

    printf("\n Prenom de l'employe : %s \n",Emp1->prenom);

    printf("\n CodeFonction de l'employe : %s \n",Emp1->Cfonction);

    printf("\n Salaire de l'employe : %s \n",Emp1->Salaire);
}

void modifEmploye (Employe *Emp1){

 printf("Quel est le nouveau nom de l'employe ?\n ");
scanf("%s", (*Emp1).nom);

printf("Quel est le nouveau prenom de l'employe ?\n ");
scanf("%s", (*Emp1).prenom);

printf("Quelle est le nouveau code de fonction de l'employe ?\n ");
scanf("%d", (*Emp1).Cfonction);

printf("Quel est le nouveau salaire de l'employe ?\n ");
scanf("%f", (*Emp1).Salaire);

};

int main(){
Employe Emp1;

saisieEmploye(&Emp1);
afficheEmploye (&Emp1);
modifEmploye (&Emp1);
afficheEmploye (&Emp1);

return 0;

}