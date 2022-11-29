#include <stdio.h>

#define MAX 10

typedef int tab[MAX];

void afficher(tab t ,int n){
int i;
for (i=0; i<n; i++)
printf("%d ", t[i]);
};

void Fusion(tab t, int n)
{
int i;
int j;
int k;
int t1[MAX/2],
int t2[MAX/2];
if (n>1){
        for(i=0; i<n/2; i++){
            t1[i] = t[i];
        };
        for (i=n/2; i<n; i++){
            t2[i-n/2] = t[i];
        };
triFusion(t1, n/2);
triFusion(t2, n-n/2);
i = j = k = 0;

while (i<n/2 && j<n-n/2){
        if (t1[i] < t2[j]){
            t[k++] = t1[i++];
};
else{
        t[k++] = t2[j++];
};
};
while (i<n/2){
        t[k++] = t1[i++];
};
while (j<n-n/2){
        t[k++] = t2[j++];
};
};
};

int main(){
int t[MAX] = {3,17,9,15,2,7,10,9,8,12};
int n = 10;
afficher(t, n);
Fusion(t, n);
afficher(t, n);
return 0;
}
