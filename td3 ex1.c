#include <stdio.h>
#include <stdlib.h>

char text[];




int longueur(char text[],int i, int size){
    if(text[i] != '\0'){
            return 1;

    }
    else{
            return 1 + longueur(text,i+1,size);
    };
}


void inverser(char *p, int start, int end)
{
   char ch;
   if (start >= end)
      return;

   ch = *(p+start);
   *(p+start) = *(p+end);
   *(p+end) = ch;
   inverser(p, ++start, --end);
}

void main(int argc, char * argv[]){
    char c="chaise";
    printf("%d",longueur(c, 0, 0));
    printf("entrer une chaine de charactere");
    char str[100];
   printf(" Entrez une chaîne de caractère :  ");
   gets(str);
   inverser(str, 0, strlen(str)-1);
   printf(" Chaîne de caractère après inversion = %s", str);
   return 0;
   }
