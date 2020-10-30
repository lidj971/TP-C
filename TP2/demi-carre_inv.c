#include <stdlib.h>
#include <stdio.h>
int main()
{
   int cote = 6,i,i2;
   for (i = cote;i >= 0;i--)
   {
      for (i2 = 0;i2 < cote;i2++)
      {
        if(i2 >= i)
        {
          printf("*");
        }else
        {
          printf(" ");
        }
      }
      
      printf("\n");
   }
   
   return EXIT_SUCCESS;
}