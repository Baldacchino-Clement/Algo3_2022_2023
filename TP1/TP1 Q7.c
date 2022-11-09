void rechercherIdMinMax(Tab t, int nbClients, int *indiceIdMin, int *indiceIdMax){
    int tempIdMin = t[0].cliid;
    int tempIdMax = t[0].cliid;
    for(int i = 1; i<nbClients; i++){
        if(t[i].cliid < tempIdMin){
            tempIdMin = t[i].cliid;
            *indiceIdMin = i;
        }
        if(t[i].cliid > tempIdMax){
            tempIdMax = t[i].cliid;
            *indiceIdMax = i;
        }  
    }
    printf("\nL'indice du client ayant l'id Client minimum est : %d\n", *indiceIdMin);
    printf("L'indice du client ayant l'id Client maximum : %d\n", *indiceIdMax);
}