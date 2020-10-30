#include <stdlib.h>
#include <stdio.h>
int main()
{
   int x, j,i;
   scanf("%d",&x);
   double resultat = x;
   scanf("%d",&j);
   for(i = 1 ;i <= j;i++)
   {
     
     
     resultat = 0.5*(resultat + x/resultat);
   }
   printf("%f",resultat);
   return EXIT_SUCCESS;
}