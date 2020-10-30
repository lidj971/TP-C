#include <stdio.h>
#include <stdlib.h>
#define STABILITE 0
#define INQUIETUDE 1
#define PANIQUE 2
#define OUI 4
#define NON 5

int main()
{
int m;
int s;
printf("Comment sont les marches ?\n");
printf("STABILITE =0\n INQUIETUDE 1\n PANIQUE 2\n");
scanf("%d",&m);
printf("Remboursons nous la dette ?\n");
printf("OUI=4\n NON=5\n");
scanf("%d",&s);
if (m == STABILITE)
{
  printf("Ne rien changer.");

}

if (m == INQUIETUDE);
{
   if (s == OUI)
  {
   printf("Ne plus rembourser");

  }
  else
  {
   printf("Ne rien changer");

   }
}


if(m == PANIQUE)
{
   if (s == OUI)
  {
   printf("Ne plus rembourser");

  }
  else
  {
   printf("Ne rien changer");
  }

   return EXIT_SUCCESS;

}



}


