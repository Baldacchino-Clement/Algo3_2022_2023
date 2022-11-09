void saisie(Client *c){
    printf("\nQuel est l'id de ce client : ");
    scanf("%d", &c->cliid);
    printf("Quel est le nom de ce client : ");
    scanf("%s", c->clinom);
}