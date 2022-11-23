void v ()
{
    Tab t1;
    Tab t2;
    remplirTableau(t1, N);
    cpytableau(t1,t2,N);

    triMin(t1,N);
    afficher(t1,N,0);
    triRapid(t2,0,N-1);
    afficher(t2,N,0);
}
