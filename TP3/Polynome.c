#include <stdio.h>
#include <stdlib.h>

int main()
{
  double x = 0,resultat;
  scanf("%lf",&x);
  resultat = 8118 * (x*x*x*x) - 11482 * (x*x*x) + x*x + 5741 * x - 2030;
  printf("%lf", resultat);
  return EXIT_SUCCESS;
}