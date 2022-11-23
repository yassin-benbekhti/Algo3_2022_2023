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
