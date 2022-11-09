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