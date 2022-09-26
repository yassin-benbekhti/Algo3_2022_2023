#include <stdio.h>
#include <stdlib.h>
#define MAX 10


typedef float Tab_notes[MAX];
typedef int Tab_coeff[MAX];


void saisir_note(Tab_notes note)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("initialisé la %d note",i+1);
        scanf("%f",&note[i]);
        if(*(note+i)>20 || *(note+i)<0)
        {
            break;
        }
    }
}
void saisir_coeff(Tab_coeff coeff)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("entrer un coeff");
        scanf("%d",&coeff[i]);
    }
}

void afficher_tableau(Tab_notes note,Tab_coeff coeff)
{
    int i, *c; float *n;
    n=note;
    c=coeff;
    for(i=0;i<MAX;i++)
    {
        printf("la %deme valeur est : %2.2f\n " ,i+1,*(note+i));
        n++;
    }
    printf("\n");
    for(i=0;i<MAX;i++)
     {
         printf("le %deme coefficient est : %d\n",i+1,*(coeff+i));
         c++;
     }
}

float calcul_moyenne(Tab_notes note,Tab_coeff coeff, float * moyenne)
{
    int i;
    float somme_notes =0; int somme_coeff=0;
    float *n=&note[0];
    int *c=&coeff[0];
    for(i=0;i<MAX;i++)
    {
        somme_notes=somme_notes+(*(note+i)*(*(coeff+i)));
        somme_coeff=somme_coeff+ *(coeff+i);

        n++;
        c++;
    }
    *moyenne=somme_notes/somme_coeff;
    return *moyenne;
}
float minimun(Tab_notes note, float *min)
{
    int i;
    *min=*note;
    for(i=0;i<MAX;i++)
    {
        if(*min > *(note+i))
        {
            *min =*(note+i);
        }
    }
    return *min;
}

float maximun(Tab_notes note, float *max)
{
    int i;
    *max=*note;
    for(i=0;i<MAX;i++)
    {
        if(*max < *(note+i))
        {
            *max =*(note+i);
        }
    }
    return *max;
}

void modifier_i(Tab_notes note,int *position)
{

    float new_valeur;
    if(*position <=0 || *position >10)
    {
        printf("On peut modifier de la premiere à la dizieme note");
    }
    else{
    printf("Entrer la nouvelle valeur");
    scanf("%f",&new_valeur);
    if(new_valeur<=20 && new_valeur>=0 )
    {
    *(note+*(position)-1)=new_valeur;
    }
    }
}

void ajouter_1_point (Tab_notes note)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(*(note+i)< 19)
        {
            *(note+i)=*(note+i)+1.0;
        }
        else
        {
            *(note+i)=20.00;
        }
    }
}


int main()
{
    int i;
    float moyenne; float max,min;
    Tab_notes note;
    Tab_notes note_1={20,19.7,19,0,0.1,9,2.5,17.2,12.3,12.4};
    Tab_notes note_2={0.9,0.98,0.78,0.54,0.32,0.65,0.45,0.49,0.85,0.74};
    Tab_coeff coeff, coeff_1={2,3,2,1,5,2,2,1,1,3};
    saisir_note(note);
    saisir_coeff(coeff);
    afficher_tableau(note,coeff);
    printf("\n la moyenne des notes est : %2.3f\n", calcul_moyenne(note,coeff,&moyenne));
    printf(" le maximun est : %f\n",maximun(note,&max));
    printf("Le minimun est : %f\n",minimun(note,&min));
    ajouter_1_point(note);
    int position;
    printf("Entrer la position de la note que vous voulez modifier");
    scanf("%d",&position);
    modifier_i(note,&position);
    afficher_tableau(note,coeff);
    printf("\n la moyenne des notes est : %2.3f\n", calcul_moyenne(note_1,coeff_1,&moyenne));
    printf(" le maximun est : %f\n",maximun(note_1,&max));
    printf("Le minimun est : %f\n",minimun(note_1,&min));
    ajouter_1_point(note_1);
    printf("Entrer la position de la note que vous voulez modifier");
    scanf("%d",&position);
    modifier_i(note_1,&position);
    printf("les notes actuel sont : \n");
    afficher_tableau(note_1,coeff_1);


    printf("\n la moyenne est : %2.3f\n", calcul_moyenne(note_2,coeff_1,&moyenne));
    printf(" le maximun est : %f\n",maximun(note_2,&max));
    printf("Le minimun est : %f\n",minimun(note_2,&min));
    ajouter_1_point(note_2);
    printf("Entrer la position de la note que vous voulez modifier");
    scanf("%d",&position);
    modifier_i(note_2,&position);
    printf("Les nouvelles notes sont : \n");
    afficher_tableau(note_2,coeff_1);

}
