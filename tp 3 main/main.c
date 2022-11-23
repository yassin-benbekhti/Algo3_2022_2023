#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

typedef int Tab[N];

void remplirTableau(Tab t, int n)
{ int i ;
srand ( time(NULL) );
for (i=0; i<n; i++)
    t[ i]= rand() % n;
}

void afficher(Tab t, int n, int i)
{
    if (i == n)
    {
        printf("| %d", t[0]) ;
        affiche (t + 1 , n, i+1) ;
    }
}

void cpytableau(Tab t1, Tab t2, int n)
{
    int i
    for(i=0; i<n; i++)
    {
        t2[i]=t1[i];
    }
}

int triMin(Tab t, int n)
{
    int min;
    int temp;
    int i;
    for(i=0; i<n-1; i++)
    {
       min = i;
       int j;
       for( j= i+1; j<n; j++)
           if(t[j]<t[min])
               min = j;
       if(min!=i)
       {
          temp=t[i];
          t[i]=t[min];
          t[min]=temp;
       }
    }
}

int permuter(int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

int Pivoter(Tab t, int g, int d){
	return t[g];
}

int partition(int arr[], int low, int high)
{
    int pivot;
    int i;
    pivot = arr[high];

    i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            permuter(&arr[i], &arr[j]);
        }
    }
    permuter(&arr[i + 1], &arr[high]);
    return (i + 1);
}


int partition(Tab t, int g, int d)
{
	int pivot;
	int i;
	int j;
	int fin;
	pivot = initPivot(t, g,d);
	i= g-1;
	j=d+1;
	fin = 0;

	while (!fin)
        {
		printf(" %d,%d,%d \n", pivot, i, j);

		do
            {
			j = j -1;
			}
			while(t[j] < pivot);
			{
			    do
                    {
                        i = i +1;
                }
            }
                while(t[i] >= pivot);
        {
            if (i < j)
                {
                    printf("\n Permuter ");
                    permute(&t[i], &t[j]);
                    }
                    else
                        {
                            fin = 1;
                    }
        }
        }
	return i;
}

int triRapid(Tab t, int g, int d){
	if (g < d)
    {
		int p = partition(t, g, d);
		triRapid(t, g, p-1);
		triRapid(t, p + 1, d);

	}
}




int main()
{

}
