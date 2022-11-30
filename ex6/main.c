void ajouteClientFichier(char * nomFichier){
    Client c,c1;
    int find;
    FILE *f=fopen(nomFichier,"a+");
    saisieClient(&c1);
    while(!feof(f)){
        fscanf(f," %d %s %s ",&c.id,c.nom,c.tel);
        if(c.id == c1.id || strcmp(c.nom,c1.nom)==1 || strcmp(c.tel,c1.tel)==1){
            find=0;
        }
        else{
            find=1;
        }
    }
    if(find==1){
        fprintf(f," %d %s %s ", c1.id, c1.nom, c1.tel);
    }
    else{
        printf("Le client deja crée\n");
    }
    fclose(f);
}
