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