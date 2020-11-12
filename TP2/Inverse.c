#include <stdlib.h>
#include <stdio.h>
int main()
{
   int nb, i;
   double resultat = 0.;
   scanf("%d",&nb);
   for(i = 1 ;i <= nb;i++)
   {
     resultat += 1./i;
   }
   printf("%f",resultat);
   return EXIT_SUCCESS;
}