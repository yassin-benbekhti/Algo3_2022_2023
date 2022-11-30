 void afficherClient(char * nomFichier){
     int fin;
     Client c;
     FILE *f=fopen(nomFichier,"r");
     while(!feof(f)){
         fin=fscanf(f," id %d nom %s tel %s ", &c.id,c.nom,c.tel);
         if(fin != EOF){
             printf(" id %d nom %s tel %s ", c.id, c.nom, c.tel);
             }
     }
     fclose(f);
     }
