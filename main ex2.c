#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char Tab[15];

typedef struct { Tab nom; Tab prenom; int codeFonction; float salaire;} employe;

employe saisieEmploye(employe *e)
{
    printf("entrer le nom voulu");

    scanf("%s", (e->nom));

    printf("entrer le prenom voulu");

    scanf("%s", (e->prenom));

    printf("Entrer le code fonction voulu");

    scanf("%d", &(e->codeFonction));

    printf("entrer le salaire voulu");

    scanf("%f", &(e->salaire));

    return *e;
}

void afficheEmploye(employe *e)
{

    printf("le nom de l'employé est :%s\n", (e->nom));

    printf("le prenom de l'employé est :%s\n", (e->prenom));

    printf("le codefontion de l'employé est :%d\n", (e->codeFonction));

    printf("le salaire de l'employé est :%f\n", (e->salaire));
}

void modifEmploye(employe *e)
{
    char *nouv_nom,*nouv_prenom; int nouv_codeFonction; float nouv_salaire;

    printf("Entrer le nom voulu");

    scanf("%s", &nouv_nom);

    printf("Entrer le prenom voulu");

    scanf("%s", &nouv_prenom);

    printf("Entrer un code fonction voulu");

    scanf("%d", &nouv_codeFonction);

    printf("Entrer un salaire voulu");

    scanf("%f", &nouv_salaire);

    strcpy(e->nom,&nouv_nom);

    strcpy(e->prenom,&nouv_prenom);

    e->codeFonction=nouv_codeFonction;

    e->salaire=nouv_salaire;
}
int main()
{
    employe *e;
    saisieEmploye(&e);
    afficheEmploye(&e);
    modifEmploye(&e);
    afficheEmploye(&e);
}
