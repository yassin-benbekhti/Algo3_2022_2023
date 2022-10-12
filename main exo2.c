#include <stdio.h>
#include <stdlib.h>

 int suite (int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return 2+suite(n-1);
    }
}

int puissance_recurs( int  a, int n)
{
    if (a==0  and n==0)
    {
        return 1;
    }
    else{
        if (a=0)
        {
            return 0;
        }
        else{
            if ( n==1)
                {
                    return a;
                }
                else
                {
                    return a*recursive_puissance(a,n-1);
                }
            }


         }

}






int main()
{
    printf("%d\n",suite(5));
    printf("%d\n",puissance _recurs(5,8));


}
