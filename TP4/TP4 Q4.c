int nombreClientsFichier(char *nomFichier) {
    FILE *f = fopen(nomFichier, "r");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    Client c;
    int nb = 0;
    while (fscanf(f, "%d %s ", &id, &nom) != EOF) {
        nb++;
    }
    fclose(f);
    return nb;
}