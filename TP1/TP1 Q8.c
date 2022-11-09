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