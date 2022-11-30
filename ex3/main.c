 void afficherClient(char * nomFichier){
     int fin;
     Client c;
     FILE *f=fopen(nomFichier,"r");
     while(!feof(f)){
         fin=fscanf(f," id %d nom %s ", & c.id,c.nom);
         if(fin != EOF){
             printf(" id %d nom %s ", c.id, c.nom);
             }
     }
     fclose(f);
     }
