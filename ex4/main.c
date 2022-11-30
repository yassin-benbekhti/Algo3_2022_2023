int nombreClientsFichier(char * nomFichier){
     int compteur=0;
     int fin;
     FILE *f = fopen(nomFichier,"r");
     Client c;
     while(!feof(f))
     {
         fin=fscanf(f," %d %s %s ", &c.id,c.nom,c.tel);
         if(fin !=EOF )
         {
             compteur++;
         }
     }
     fclose(f);
     return compteur;
 }
