#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 0,resultat,i,u1 = 1,u2 = 1;
  scanf("%d",&n);
  if(n > 2)
  {
    for(i = 2;i<n;i++)
    {
      resultat = u1 + u2;
      u1 = u2;
      u2 = resultat;
    }
    printf("U%d = %d",n, resultat);
  }
  else if(n > 0)
  {
    resultat = 1;
    printf("U%d = %d",n, resultat);
  }
  else
  {
    printf("n non valide");
  }
  return EXIT_SUCCESS;
}