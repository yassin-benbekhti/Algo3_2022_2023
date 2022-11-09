
int rechercheClient(int idClient, Tab t, int nbClients, int *indiceClient){
    for(int i = 0; i<nbClients; i++){
        if(t[i].idClient = idClient)
            {
            *indiceClient = i;
            printf("\n L'id de l'indice du client %d est : %d", idClient, *indiceClient)
            return 1;
        }
    }
    return 0;
}
