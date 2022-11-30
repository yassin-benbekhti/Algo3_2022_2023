void ajouteClientFichier(char  *nomFichier)
{
    Client c;
    FILE *f;
    f=fopen(nomFichier, "a");
    if (!f) printf("Erreur lors de l'ouverture de %s\n",nomFichier);
    else
    {

    saisieClient(&c);
    fprintf(f," \n id %d nom %s ",c.id,c.nom, );
    fclose(f);
    }
}
