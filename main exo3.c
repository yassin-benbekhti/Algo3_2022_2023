#include <stdio.h>
#include <stdlib.h>
#define MAX 200
typedef int Tab[MAX];

void saisie_recurs (int n, Tab t)
{
    if(n==0)
    {
        scanf("%d",&t[0]);
    }
    else
    {
        scanf("%d",&t[n]);
        saisie((n-1),t);
    }
}

int calcul_somme(int n, Tab t)
{
    if(n=0)
    {
        return t[0];
    }
    else
    {
        return (t[n] + somme((n-1),t));
    }
}



int max(int n, Tab t)
{   int max;
    if  (n==0)
    {
        return t[0];
    }
        else
        {
            if(t[n]<t[n-1])
            {
                max=maximun(n-1,t);
                printf("La valeur max est :%d", maximun(n,t));
            }
            else
            {
                return t[n];
            }
        }
        return max;
    }

int min(int n, Tab t)
{
    int min;
   if(n==0)
   {
       return t[0];
   }
    else
    {
        if(t[n]>t[n-1])
        {
            min=minimun(n-1,t);
            printf("La valeur min est : %d", minimun(n,t));
            return min;

        }
        else
            {
            return t[n];
            }

    }

}

int main()
{
    int n; Tab t;
    Tab t={2,1,8};
    scanf("%d\n",&n);
    saisie_recurs(n,t);
    printf("%d\n",calcul_somme(n,t));

}
