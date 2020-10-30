#include <stdlib.h>
#include <stdio.h>
int main()
{
   int cote = 6,i,i2;
   for (i = 0;i <= cote;i++)
   {
      for (i2 = 0;i2 < i;i2++)
      {
        printf("*");
      }
      printf("\n");
   }
   
   return EXIT_SUCCESS;
}