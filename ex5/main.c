void appartientClientFichier(char *nomFichier, char *nom){
    FILE *f=fopen(nomFichier,"r");
    Client c;
    int trouve;
    while(!feof(f)){
        fscanf(f, "%d %s %s ", &c.id, c.nom, c.tel);
        if(strcmp(c.nom, nom)== 1){
            trouve=1;
        }
        else{
                trouve=0;
        }

    }
    if(trouve ==1){
        printf("Le client appartient au fichier \n");
    }
    else{
            printf("Client non repertorie\n ");
    }
    fclose(f);
}
