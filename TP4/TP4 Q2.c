void ajouterclientficheir(File *f, Client c)
{
    f=open("test.txt","r+");
    Fseek(f,0, SEEK_SET);
    int id = 0;
    char nom[10];
    bool trouver = false;
    printf("id du client\n");
    scanf("%d",&c.id);
    
    printf("nom du client\n");
    scanf("%s",c.nom);
}