#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _client{
    unsigned short idClient;
    Chaine nomClient;
}Client;

typedef Client Tab[N];

void saisie(Client *c){
    printf("\n initialiser l'id du client : ");
    scanf("%d", &c->idClient);
    printf("initialiser le nom du client : ");
    scanf("%s", c->nomClient);
}

int ajouter(Client c, Tab t, int *nbClients){
    if(*nbClients == N)
        {
        return 0;
    }
    else
        {
        t[*nbClients] = c;
        *nbClients += 1
        return 1;
    }
}


int saisieClients(Tab t, int p, int *nbClients){
    if(*nbClients == N){
        return 0;
    }
    else{
        for(int i=0; i<p; i++){
            Client c = t[*nbClients + i];
            saisie(&c);
            ajouter(c, t, nbClients)
        }
        return 1;
    }
}


void modifierNom(Tab t, int nbClients, int i){
    char newNom;
    if(i <= nbClients)
        {
        printf("\n inserer le nouveau nom du client d'indice %d : ", i);
        scanf("%s", newNom);
        strcpy(t[i].nomClient, newNom);
    }
}

void afficher(Tab t, int nbClients){
    for(int i = 0; i<nbClients; i++)
        {
        printf("\n Id du client : %d\n", t[i].idClient);
        printf("Nom du client : %s\n", t[i].nomClient);
    }
}

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


void rechercherIdMinMax(Tab t, int nbClients, int *indiceIdMin, int *indiceIdMax){
    int IdMin = t[0].idClient;
    int IdMax = t[0].idClient;
    for(int i = 1; i<nbClients; i++)
    {
        if(t[i].idClient < IdMin)
            {
            IdMin = t[i].idClient;
            *indiceIdMin = i;
        }
        if(t[i].idClient > IdMax)
        {
            IdMax = t[i].idClient;
            *indiceIdMax = i;
        }
    }
    printf("\nL'indice dans le tableau du client ayant l'id Client minimum : %d\n", *indiceIdMin)
    printf("L'indice dans le tableau du client ayant l'id Client maximum : %d\n", *indiceIdMax)
}

int afficherDoublons(Tab t, int nbClients){
    int nbDoublons = 0;
    printf("\n-- Affichage des doublons\n");
    for(int i = 0; i<nbClients; i++)
        {
        for(int j = 0; j<nbClients; j++)
        {
            if(i != j && t[j].idClient == t[i].idClient && strcmp(t[j].nomClient, t[i].nomClient) == 0)
            {
                nbDoublons += 1;
                if((nbDoublons+1) % 2 == 0){
                    printf("\n Id : %d Nom : %s Indice : %d\n", t[i].idClient, t[i].nomClient, i);
                }
                else
                {
                    printf("Id : %d Nom : %s Indice : %d\n", t[i].idClient, t[i].nomClient, i);
                }
            }
        }
    }
    if(nbDoublons == 0){
        printf("\n aucun doublons dans le tableau !\n");
    }
    return nbDoublons/2;
}


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


int enleverClient(int idClient, Chaine nomClient, Tab t, int *nbClients){
    int j;
    int a = 0;
    while(a==0)
    {
        for(int i=0; i<*nbClients; i++)
        {
            if(t[i].idClient == idClient && strcmp(t[i].nomClient, nomClient) == 0){
                j = i;
                a = 1;
            }
        }
        if(a==0){
            printf("\n Le client il n'existe pas.\n");
            return 0;
        }
    }
    for(int i = j; i<*nbClients; i++)
    {
        t[i] = t[i+1];
    }
    *nbClients -= 1;
    return 1;
}


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

