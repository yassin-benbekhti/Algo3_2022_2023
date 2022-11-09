int main(int argc, char *argv[])
{
    Tab t;
    Client c;
    c.idClient = 5;
    strcpy(c.nomClient, "c");

    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;

    int *indiceClient;
    int indiceclient = 0;
    indiceClient = &indiceclient;

    int *indiceIdMin;
    int indiceidmin = 0;
    indiceIdMin = &indiceidmin;

    int *indiceIdMax;
    int indiceidmax = 0;
    indiceIdMax = &indiceidmax;

    int nbDoublons;


    saisieClients(t, 5, nbClients);
    afficher(t, nbclient);
    enleverClient(2, "b", t, nbClients);
    modifierNom(t, nbclient, 2);
    afficher(t, nbclient);
    rechercheClient(3, t, nbclient, indiceClient);
    rechercherIdMinMax(t, nbclient, indiceIdMin, indiceIdMax);
    ajouterSansDoublon(c, t, nbClients);
    nbDoublons = afficherDoublons(t, nbclient);
    printf("\n nb doublons : %d\n", nbDoublons);
    afficher(t, nbclient);
    enleverClient(2, "b", t, nbClients);
    printf("\n apres modif \n");
    afficher(t, nbclient);

    nbDoublons = afficherDoublons(t, nbclient);
    printf("\n nb client : %d\n", nbclient);
    printf(" nb doublons : %d\n", nbDoublons);
    return 0;
