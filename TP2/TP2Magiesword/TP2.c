#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define STABLE 1
#define INQUIETS 2
#define PANIQUE 3


int main( )
{
  int pib = 0, dettes = 0, marches,hausse = 0;
  char  s;
  printf("Le pays est il :\n1 Stable?\n2 Inquiet?\n3 Paniqu%c ?\n",130);
  scanf("%d",&marches);


  if(marches == STABLE)
  {
    printf("Ne rien changer");

  }else if(marches == INQUIETS)
  {
      printf("Les Taux sont ils entrain de monter ? : \n 1 OUI \n 2 NON \n");
      scanf("%d",&hausse);
       if(hausse == 1)
      {
          printf("Ne plus rembourser");

      }else if(hausse == 2)
      {
          printf("Ne rien changer");
      }else
      {
          printf("non valid input !");
      }

  }else if(marches == PANIQUE)
  {
      printf("Quel est le montant du PIB? \n");
      scanf("%d", &pib);
      printf("Quel est le montant de la dette? \n");
      scanf("%d", &dettes);

      if(dettes > pib/2)
      {
        printf("Ne plus rembourser");
      }else
      {
          printf("Ne rien changer");
      }
  }else
  {
     printf("non valid input !");
  }
  scanf("%s",s);


  return EXIT_SUCCESS;

}
