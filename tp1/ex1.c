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
    scanf("%hd", &c->idClient);
    printf("initialiser le nom du client : ");
    scanf("%s", c->nomClient);
}
