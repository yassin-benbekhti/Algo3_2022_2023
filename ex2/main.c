#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

typedef int tab[TAILLE];

int minimum(tab t, int i, int j) {
    int min;
    int g;
    min = i;
    for (g = i + 1; g <= j; g++) {
        if ( t[g] <  t[min]) {
            min = g;
        };
    }:
    return min;
};

void permute(tab t, int i, int j) {
    int temp;
    temp = t[i];
    t[i] = t[j];
    t[j] = temp;
}

void tri(tab t, int N){
  int i;
  int j;
  int min;
  int temp;
  for (i = 0;i < N;i++){
    min = i;
    for (j=i+1; j<N; j++){
      if (t[j]<t[min]){
        min = j;
      };
    };
    tmp = t[i];
    t[i] = t[m];
    t[m] = tmp;
  };
};

int main(){
tab t={{3,17,9,15,2,7,10,9,8,12};
printf("%d",minimum(t,0,10));
permute(t,0,10);
};
