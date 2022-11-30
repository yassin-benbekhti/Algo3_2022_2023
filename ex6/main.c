void ajouteClientFichier(char * nomFichier){
    Client c,c1;
    int find;
    FILE *f=fopen(nomFichier,"a+");
    saisieClient(&c1);
    while(!feof(f)){
        fscanf(f," %d %s ",&c.id,c.nom);
        if(c.id == c1.id || strcmp(c.nom,c1.nom)==1{
            find=0;
        }
        else{
            find=1;
        }
    }
    if(find==1){
        fprintf(f," %d %s ", c1.id, c1.nom);
    }
    else{
        printf("Le client deja crée\n");
    }
    fclose(f);
}
