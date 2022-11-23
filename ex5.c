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


