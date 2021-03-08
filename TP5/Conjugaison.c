#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0,j = 0;
    char sentence[500];
    char radical[i+5];
    char e[5] = {"e"};
    char es[5] = {"es"};
    char ons[5] = {"ons"};
    char ez[5] = {"ez"};
    char ent[5] = {"ent"};
    char finalverb[16];
    
    while(sentence[i-1] != 114 || sentence[i-2] != 101)
    {
       scanf("%s",sentence);
       i = strlen(sentence); 
       
       if(sentence[i-1] == 114 && sentence[i-2] == 101)
       {
           break;
       }
    }
    strncpy(radical,sentence,i-2);
    
    strcpy(finalverb , radical);
    printf("Je %s",strcat(finalverb,e));
    
    strcpy(finalverb , radical);
    printf("\nTu %s",strcat(finalverb,es));
    
    strcpy(finalverb , radical);
    printf("\nIl/Elle %s",strcat(finalverb,e));
    
    strcpy(finalverb , radical);
    printf("\nNous %s",strcat(finalverb,ons));
    
    strcpy(finalverb , radical);
    printf("\nVous %s",strcat(finalverb,ez));
    
    strcpy(finalverb , radical);
    printf("\nIls/Elles %s",strcat(finalverb,ent));
    
    return EXIT_SUCCESS;
}