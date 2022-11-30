int nombreClientsFichier(char * nomFichier){
     int compteur=0;
     int fin;
     FILE *f = fopen(nomFichier,"r");
     Client c;
     while(!feof(f))
     {
         fin=fscanf(f," %d %s ", &c.id,c.nom);
         if(fin !=EOF )
         {
             compteur++;
         }
     }
     fclose(f);
     return compteur;
 }
