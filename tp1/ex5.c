void afficher(Tab t, int nbClients){
    for(int i = 0; i<nbClients; i++)
        {
        printf("\n Id du client : %d\n", t[i].idClient);
        printf("Nom du client : %s\n", t[i].nomClient);
    }
}
