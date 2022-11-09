#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _client{
    unsigned short idclient;
    Chaine nomclient;
}client;

typedef client Tab[N];

void saisie(client *c){
    printf("\n initialiser l'id du client : ");
    scanf("%hd", &c->idclient);
    printf("initialiser le nom du client : ");
    scanf("%s", c->nomclient);
}
