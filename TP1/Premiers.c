#include <stdlib.h>
#include <stdio.h>
int main()
{
   int nbPremier, i = 2;
   scanf("%d",&nbPremier);
   while(i <= nbPremier)
   {
      if(nbPremier % i == 0)
      {
        printf("%d",i);
        if(i == nbPremier)
        {
          printf(" est premier");
        }else
        {
          printf(" est un diviseur de %d",nbPremier);
        }
        i = nbPremier + 1;
      }
      i++;
   }
   return EXIT_SUCCESS;
}