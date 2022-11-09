void afficher(Tab t, int nbClients){
    for(int i = 0; i<nbClients; i++){
        printf("\nid : %d\n", t[i].cliid);
        printf("Nom : %s\n", t[i].clinom);
    }
}