void ajouterClientFichier(FILE *f, Client c)
{
    f=fopen("fich.txt","r+");
    fseek(f, 0, SEEK_SET);
    int id = 0 ;
    char nom[12];
    bool trouver  = false;
    printf("id du client\n");
    scanf("%d", &id);

    printf("nom,du client\n");
    scanf("%s", &nom);

    do
    {
        fscanf(f,"%d %s", &id, &nom);
        printf("%s", nom);
        printf("%s",nom);
        if(nom == nom)
        {
            printf("le client existe déjà ! ");
            trouver = true;
        }
    }while (!feof(f));

    if(trouver == false)
    {
        fseek(f,0, SEEK_END);
        fprintf(f,"\n");
        fprintf(f, "%d ", id);
        fprintf(f, "%s ", nom);
    }
}