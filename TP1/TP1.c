#include <stdio.h>
#include <string.h>

#define N 10

typedef char chaine[15];

typedef struct Client{
    int cliid;
    chaine clinom;
}Client;

typedef Client Tab[N];

void saisie(Client *c){
    printf("\nQuel est l'id de ce client : ");
    scanf("%d", &c->cliid);
    printf("Quel est le nom de ce client : ");
    scanf("%s", c->clinom);
}

int ajouter(Client c, Tab t, int *nbClients){
    if(*nbClients == N){
        return 0;
    }
    else{
        t[*nbClients] = c;
        *nbClients += 1;
        return 1;
    }
}

int saisieClients(Tab t, int p, int *nbClients){
    if(*nbClients == N){
        return 0;
    }
    else{
        for(int i=0; i<p; i++){
            Client c = t[*nbClients + i];
            saisie(&c);
            ajouter(c, t, nbClients);
        }
        return 1;
    }
}

void modifierNom(Tab t, int nbClients, int i){
    chaine ChangementNom;
    if(i <= nbClients){
        printf("\nchangement de nom du -> %d : ", i);
        scanf("%s", ChangementNom);
        strcpy(t[i].clinom, ChangementNom);
    }
}

void afficher(Tab t, int nbClients){
    for(int i = 0; i<nbClients; i++){
        printf("\nid : %d\n", t[i].cliid);
        printf("Nom : %s\n", t[i].clinom);
    }
}

int rechercheClient(int idClient, Tab t, int nbClients, int *indiceClient){
    for(int i = 0; i<nbClients; i++){
        if(t[i].cliid == idClient){
            *indiceClient = i;
            printf("\nL'indice du client qui a pour id %d est : %d", idClient, *indiceClient);
            return 1;
        }
    }
    return 0;
}

void rechercherIdMinMax(Tab t, int nbClients, int *indiceIdMin, int *indiceIdMax){
    int tempIdMin = t[0].cliid;
    int tempIdMax = t[0].cliid;
    for(int i = 1; i<nbClients; i++){
        if(t[i].cliid < tempIdMin){
            tempIdMin = t[i].cliid;
            *indiceIdMin = i;
        }
        if(t[i].cliid > tempIdMax){
            tempIdMax = t[i].cliid;
            *indiceIdMax = i;
        }  
    }
    printf("\nL'indice du client ayant l'id Client minimum est : %d\n", *indiceIdMin);
    printf("L'indice du client ayant l'id Client maximum : %d\n", *indiceIdMax);
}

int afficherDoublons(Tab t, int nbClients){
    int nbDoublons = 0;
    for(int i = 0; i<nbClients; i++){
        for(int j = 0; j<nbClients; j++){
            if(i != j && t[j].cliid == t[i].cliid && strcmp(t[j].clinom, t[i].clinom) == 0){
                nbDoublons += 1;
                if((nbDoublons+1) % 2 == 0){
                    printf("\nId client : %d Nom client : %s Indice : %d\n", t[i].cliid, t[i].clinom, i);
                }                    
                else{
                    printf("Id client : %d Nom client : %s Indice : %d\n", t[i].cliid, t[i].clinom, i);              
                }
            }
        }
    }
    if(nbDoublons == 0){
        printf("\nPas de doublons dans le tableau !\n");
    }
    return nbDoublons/2;
}

int ajouterSansDoublon(Client c, Tab t, int *nbClients){
    for(int i=0; i<*nbClients; i++){
        if(t[i].cliid == c.cliid && strcmp(t[i].clinom, c.clinom) == 0){
                printf("\nclient deja existant .\n");
                return 0;
        }   
    }
    ajouter(c, t, nbClients);
    printf("\nClient ayant a pour id : %d, nom : %s a ete ajout en position : %d\n", c.cliid, c.clinom, *nbClients-1);
    return 1; 
}

int enleverClient(int idClient, chaine nomClient, Tab t, int *nbClients){
    int temp_i;
    int a = 0;
    while(a==0){
        for(int i=0; i<*nbClients; i++){ // Trouver mon identifiant egal a celui en parametre.
            if(t[i].cliid == idClient && strcmp(t[i].clinom, nomClient) == 0){
                temp_i = i;
                a = 1;
            }
        }
        if(a==0){
            printf("\nLe client n'exite pas il ne peut donc pas etre enlevé.\n");
            return 0;
        }
    }
    for(int i = temp_i; i<*nbClients; i++){
        t[i] = t[i+1];
    }
    *nbClients -= 1;
    return 1;
}

int main(int argc, char *argv[])
{
    Tab t;

    Client c;
    c.cliid = 3;
    strcpy(c.clinom, "c");

    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;
    
    int *indiceClient;
    int indiceclient = 0;
    indiceClient = &indiceclient;

    int *indiceIdMin;
    int indiceidmin = 0;
    indiceIdMin = &indiceidmin;

    int *indiceIdMax;
    int indiceidmax = 0;
    indiceIdMax = &indiceidmax;

    int nbDoublons;


    saisieClients(t, 5, nbClients);
    afficher(t, nbclient);
    enleverClient(2, "b", t, nbClients);
    modifierNom(t, nbclient, 2);
    afficher(t, nbclient);
    rechercheClient(3, t, nbclient, indiceClient);
    rechercherIdMinMax(t, nbclient, indiceIdMin, indiceIdMax);
    ajouterSansDoublon(c, t, nbClients);
    nbDoublons = afficherDoublons(t, nbclient);
    printf("\nNombre de doublons : %d\n", nbDoublons);
    afficher(t, nbclient);
    enleverClient(2, "b", t, nbClients);
    printf("\n----------- Apres modification -----------\n");
    afficher(t, nbclient);

    nbDoublons = afficherDoublons(t, nbclient);
    printf("\nNombre de client dans le tableau : %d\n", nbclient);
    printf("Nombre de doublons : %d\n", nbDoublons);
    printf("\n//END\n");
    return 0;
}