#include <stdio.h>
#include <stdlib.h>


// devoir algo du 21/09

void permuter(int *a , int *b)
{
    printf("les deux valeur de a et b sont respectivement : a=%d et  b=%d\n",*a,*b);
    int tempo = *a;
    *a = *b;
    *b = tempo;
    printf( "desormais les valeur de a et b sont a=%d et b=%d\n",*a,*b);
}

int max (int *x, int *y, int *z)
{
    printf("les valeur en entree sont actuellement:x=%d, y=%d, z=%d\n",*x,*y,*z);
    int max=0;
    if((*x < *z) && (* y< *z ))
    {
        max=*z;
    }
    else
    {
        if((*x>*y) && (*x>*z))
        {
            max=*x;
        }
        else
        {
                if(*y>*x && *y>*z )
                {
                    max=*y;
                }
                else{
                    max=*x;
                }
        }
    }

    return max;
}

int min (int *x, int *y, int *z)
{
    int min = 0;
    if ((*x < *z) && (* x< *y))
    {
        min = *x;
    }
    else
    {
       if((*x > *y) && (*y < *z))
       {
           min = *y;
       }
       else
       {
           if ((*x < *y) && *y<z && (*x > *z) || ((*x > y && *y<z && *x < *z)))
           {
               min = *y;
           }
           else
           {
               if((*x > *z) && (*y < *z))
                min = *z;

           }
       }
    }
    return min;
}
void max_et_min(max,min)
{
    printf("le max est : %d et le min est %d\n",max,min);
}

int main()
{
    int x; char c;
    printf("Inserer une valeur de x\n");
    scanf("%d",&x);
    printf("Le nombre insere est : %d\n",x);
    printf("L'adresse de n est : %d\n",&x);
    printf("Entrer une chaîne de caractere \n");
    scanf("%s",&c);
    printf("Le caractere insere est : %c\n",c);
    printf("L'adresse du caractere c est : %d\n",&c);

    int n1,n2;
    printf("Saisir deux valeurs:\n");
    scanf("%d%d",&n1,&n2);
    permuter(&n1,&n2);
    printf("Entrer trois valeurs\n");

    int d,e,f;
    scanf("%d %d %d",&d,&e,&f);
    max_et_min(max(&d,&e,&f),min(&d,&e,&f));
}

