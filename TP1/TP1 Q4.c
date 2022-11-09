void modifierNom(Tab t, int nbClients, int i){
    chaine ChangementNom;
    if(i <= nbClients){
        printf("\nchangement de nom du -> %d : ", i);
        scanf("%s", ChangementNom);
        strcpy(t[i].clinom, ChangementNom);
    }
}