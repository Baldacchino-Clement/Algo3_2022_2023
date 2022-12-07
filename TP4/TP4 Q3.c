void afficherclientFichier(File *f, Client c)
{
    f=fopen("test.txt","a+");
    fseek(f,0, SEEK_SET);
    int id = 0;
    char nom[10];
    do
    {
        fscanf(f,"%d %s",&id,nom);
        printf("l'id est : %d et le nom est %s \n",id,nom);
    } while (!feof(f)); 
}