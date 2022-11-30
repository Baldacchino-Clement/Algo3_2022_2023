#include <stdio.h>
#include <stdlib.h>

typedef char chaine[15]; //question 1
typedef char numtel[10];


typedef struct _client{
    int idCli;
    chaine Nom;
    numtel tel;
}_client;

int AjouterClientsFichier(char * client,_client c) //question 2
{
  FILE * f= fopen(client,"w");
  if (!f) printf("Erreur à l'ouverture de %s\n",client);
else {
    fprintf(f,"id :%d Nom : %s NTel:%s \n",c.idCli,c.Nom,c.tel);
    fclose(f);
}
}

void afficherClientsFichier(char * client) //question 3
{
    FILE * f =fopen(client,"r");
    char nom[100];

    if (!f) printf("Erreur à l'ouverture de 2  %s\n",client);
else {
        while(fgets(nom,100,f))
            printf("%s \n",nom);
        fclose(f);
   }
}

int nombreClientsFichier(char* nomFic) //question '
{
    FILE * f = fopen(nomFic, "r");
    int nbCli = 0;
    char ligne[100];
    char * token;
    char * clients[100];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int doublon = 0;
    while (fgets(ligne, 100, f) != NULL)
    {
        token = strtok(ligne, ";");
        while (token != NULL)
        {
            if (i == 0)
            {
                for (j = 0; j < nbCli; j++)
                {
                    if (strcmp(clients[j], token) == 0)
                    {
                        doublon = 1;
                    }
                }
                if (doublon == 0)
                {
                    clients[nbCli] = token;
                    nbCli++;
                }
                else
                {
                    doublon = 0;
                }
            }
            token = strtok(NULL, ";");
            i++;
        }
        i = 0;
    }
    fclose(f);
    return nbCli;
}

void triClientsFichier(char *nomFichier) //question 5
{
    FILE *f = fopen(nomFichier, "r");
    if (f == NULL)
    {
        printf("Erreur de l'ouverture du fichier %s en mode r (lecture)\n", nomFichier);
        exit(1);
    }
    _client *clients = malloc(nombreClientsFichier(nomFichier) * sizeof(_client));
    int i = 0;
    _client c;
    while (fscanf(f, "%d %s %s ", &c.idCli, c.Nom, c.tel) != EOF)
    {
        clients[i] = c;
        i++;
    }
    fclose(f);
    for (int i = 0; i < nombreClientsFichier(nomFichier); i++)
    {
        for (int j = i + 1; j < nombreClientsFichier(nomFichier); j++)
        {
            if (strcmp(clients[i].Nom, clients[j].Nom) > 0)
            {
                _client tmp = clients[i];
                clients[i] = clients[j];
                clients[j] = tmp;
            }
        }
    }
    f = fopen(nomFichier, "w");
    if (f == NULL)
    {
        printf("Erreur de l'ouverture du fichier %s en mode w (écriture)\n", nomFichier);
        exit(1);
    }
    for (int i = 0; i < nombreClientsFichier(nomFichier); i++)
    {
        fprintf(f, "%d %s %s ", clients[i].idCli, clients[i].Nom, clients[i].tel);
    }
    fclose(f);
}

int appartientClientFichier(char *nomClient)//question 6
{
    FILE *fichier = fopen("clients.txt", "r");
    if (fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier");
        return -1;
    }

    char chaine[100];
    int trouve = 0;
    while (fgets(chaine, 100, fichier) != NULL && !trouve)
    {
        char *nom = strtok(chaine, ";");
        if (strcmp(nom, nomClient) == 0)
        {
            printf("%s", chaine);
            trouve = 1;
        }
    }

    if (!trouve)
    {
        printf("Client non répertorié");
    }

    fclose(fichier);
    return 0;
}

int main (int argc, const char * argv[])

{
AjouterClientsFichier("C:/Users/cleme/algo/TD6/client.txt");

afficherClientsFichier("C:/Users/cleme/algo/TD6/client.txt");

return 0;
}