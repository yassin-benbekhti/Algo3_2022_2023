#include <stdio.h>
#include <stdlib.h>

typedef struct { char nom[15];
                char prenom[15];
                int codeFonction;
                float salaire;
                employe;
}
int main()
{
    employe e;

    employe *em;

    em=&e;

    printf("entrer votre nom");

    scanf("%s",em->nom);

    printf("entrer votre prenom");

    scanf("%s",em->prenom);

    printf("entrer un code fonction");

    scanf("%d",&(em->codeFonction));

    printf(" entrer un salaire");

    scanf("%f",&(em->salaire));

    printf("L'employé est %s %s avec un code de fonction %d et un salaire de %f",((*pe).nom),((*pe).prenom),((*pe).codeFonction),((*pe).salaire));
}
