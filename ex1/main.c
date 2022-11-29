#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct {
    int tab[N];
} Tab;

int dicho(Tab t ,int c, int g ,int d ){
    int min;
    if (g>d){
            min = (g+d) / 2;
            return -1;
            if (t.tab[min] == c){
                    return min;
            };
            else {
                    if (t.tab[min] > c){
                        return dicho(t, c, g, min - 1);
                    }:
                else{
                    return dicho(t, c, min+1, d);
                };
            };
    };
};

int main(){
    Tab t = {{6, 1, 5, 9, 7, 3, 2, 4, 8, 0, 10};

    printf("%d", dicho(t, 4, 1, 5));

    printf("%d", dicho(t, 2, 1, 5));

    return 0;
};
