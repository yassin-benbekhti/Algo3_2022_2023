#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
                int id;
                char nom[15];
                char tel[10];} Client;

typedef Client Tab[50];

void addCliFichier(char  *nomFichier)
{
    Client c;
    FILE *f;
    f=fopen(nomFichier, "a");
    if (!f) printf("Erreur lors de l'ouverture de %s\n",nomFichier);
    else
    {

    saisieClient(&c);
    fprintf(f," id %d nom %s tel %s ",c.id,c.nom, c.tel);
    fclose(f);
    }
}
 void afficherClient(char * nomFichier){
     int fin;
     Client c;
     FILE *f=fopen(nomFichier,"r");
     while(!feof(f)){
         fin=fscanf(f," id %d nom %s tel %s ", &c.id,c.nom,c.tel);
         if(fin != EOF){
             printf(" id %d nom %s tel %s ", c.id, c.nom, c.tel);
             }
     }
     fclose(f);
     }

int main()
{
}
