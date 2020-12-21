/*nom: Gaitbelza, prenom: Lidj, numero etudiant: 12008967 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n = 0/*entier naturel demandé a l'utilisateur*/, i = 0;
   printf("Entrez un entier naturel\n");
   scanf("%d",&n);/*on affecte l'entier entré par l'utilisateur a l'addresse de memoire de n*/
   printf("Les multiples de 3 ou 5 plus petit que %d sont : ",n);
   for (i = 0 ; i < n ; i++)/*i initialisé a 0 puis tant que i < n on incrémente i*/
   {
      if(i % 5 == 0 || i % 3 ==0)/*on cherche a savoir si chaque valeur de i est divisible par 3 ou 5 )*/
      {
         printf("%d\n",i);/*on affiche a l'ecran tout les i repondent a la condition*/
      }
   }
   /*compiler avec ligne de commade gcc -Wall Exo_noté.c -o "nom de l'executable" */
   return EXIT_SUCCESS;
}
