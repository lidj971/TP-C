#include <stdlib.h>
#include <stdio.h>
int main()
{
   int largeur = 10,longueur = 4,i,i2;
   for (i2 = 0;i2 < largeur;i2++)
   {
      for (i = 0; i < longueur;i++)
      {
         printf("*");
      } 
      printf("\n");
   }
   
   return EXIT_SUCCESS;
}