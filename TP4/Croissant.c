//Gatibelza Lidj 12008967//
#include <stdlib.h> /* EXIT_SUCCESS */
#include <stdio.h> /* printf */
/* declarations de Constantes */
#define TAILLE_MAX 100 /* taille maximum du tableau */
/* valeures de vrai et faux */
#define TRUE 1  
#define FALSE 0

int main()
{
   //variables//
   int tab[TAILLE_MAX]; /* initilisation du tableau la taille maximum*/
   int taille = 0,croissant = TRUE;/* taille entrée par l'utilisateur et variable de determinant si les valeurs du tableau sont croissantes (est vrai par défault)*/
   
   printf("Entrez la taille du tableau : ");
   scanf("%d", &taille);

   while (taille > TAILLE_MAX) /*si la taille entrée est plus grande que la taille initiale du tableau*/
   {
      printf("Vous ne pouvez pas dépasser %d. Entrez une nouvelle valeur :", TAILLE_MAX);/*message d'erreur*/
      scanf("%d", &taille);/*on redemande la taille*/
   }
  
   // remplir le tableau
   for (int i = 0; i < taille; ++i) 
   {
      printf("tab[%d] ? ", i);
      scanf("%d", &tab[i]);/*on remplit le tableau jusqu'a la taille entrée précédemment*/
      if(i > 0 && tab[i] < tab[i - 1])/*a partir du second terme du tableau si un des termes est plus petit que le terme precedent croissant est faux sinon par default croissant vrai*/
      {
          croissant = FALSE;
      }
   }
return EXIT_SUCCESS;
}