int ajouterSansDoublon(Client c, Tab t, int *nbClients){
    for(int i=0; i<*nbClients; i++)
        {
        if(t[i].idClient == c.idClient && strcmp(t[i].nomClient, c.nomClient) == 0)
        {
                printf("\n Le client existe deja.\n");
                return 0;
        }
    }
    ajouter(c, t, nbClients);
    printf("\n Client %d%s a ete mis en position : %d\n", c.idClient, c.nomClient, *nbClients-1)
    return 1;
}

