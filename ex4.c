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

