#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m = 0,un = 0,un_1 = 1,un_2 = 1,n = 1;
  scanf("%d",&m);
  
  while(un <= m)
  {
    un = un_1 + un_2;
    un_2 = un_1;
    un_1 = un;
    n++;
  }
  printf("U%d = %d",n,un_2);
  return EXIT_SUCCESS;
}