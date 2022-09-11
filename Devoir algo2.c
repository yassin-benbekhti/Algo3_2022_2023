#include <stdio.h>

int i;

int somme(int a,int b)
{
    int result = 0 ;
    for (i=0;i<=20;i++)

    {
        result = (a*b);

    }
    return(result);
}


int main()
{
    printf("%d",somme(6,5));
    return 0;

}
