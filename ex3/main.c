#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef int tab[N];


void f(tab t, int n)
{
    int g;
    int j;
    g = 1,
    j = n, i;
    while(g == 1){
        g = 0;
        i = 0;
        while(i < j){
            if (t[i] > t[i+1])
            {
                int temp
                temp = t[i];
                t[i] = t[i + 1];
                t[i + 1] = temp;
                g = 1;
            };
            i++;
        };
        j--;
    ;
};

int main()
{
    int t = {3, 17, 9, 15, 2, 7, 10, 9, 8, 12};
    int n = 9;
    int i;
    f(t, n);
    for (i = 0; i < 10; i++){
        printf("%d ", t[i]);
    };
    return 0;
};
