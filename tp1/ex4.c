void modifierNom(Tab t, int nbClients, int i){
    char newNom;
    if(i <= nbClients)
        {
        printf("\n inserer le nouveau nom du client d'indice %d : ", i);
        scanf("%s", newNom);
        strcpy(t[i].nomClient, newNom);
    }
}
