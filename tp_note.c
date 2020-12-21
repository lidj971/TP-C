//Gatibelza Lidj 12008967//
#include <stdlib.h> /* EXIT_SUCCESS */
#include <stdio.h> /* printf */
#include <string.h>
/* declarations de Constantes */
#define TAILLE_MAX 100 /* taille maximum du tableau */
/* valeures de vrai et faux */
#define TRUE 1  
#define FALSE 0

int compter_ascii_pairs(char T[ ] ,int n);

int main()
{
   //variables//
    char tab[TAILLE_MAX]; /* initilisation du tableau la taille maximum*/
    int taille = 0;/* taille entrée par l'utilisateur et variable de determinant si les valeurs du tableau sont croissantes (est vrai par défault)*/
    int i = 0, j = 0;
   
    printf("Entrez le nombre de characters : ");
    scanf("%d", &taille);
    scanf("%c",&tab[i]);

    while (taille > TAILLE_MAX) /*si la taille entrée est plus grande que la taille initiale du tableau*/
    {
        printf("Vous ne pouvez pas dépasser %d characteres. Essayer encore :", TAILLE_MAX);/*message d'erreur*/
        scanf("%d", &taille);/*on redemande la taille*/
    }
    // remplir le tableau
    for (i = 0; i <= taille +2; ++i) 
    { 
      scanf("%c",&tab[i]);/*on remplit le tableau jusqu'a la taille entrée précédemment*/
    }
    compter_ascii_pairs(tab,taille);

    for(j = 1; j <= 4;j++)
    {
        for(i = 0;i <= taille + 2;++i)
        {
            if(j == 1)
            {
                printf("%c (%d)",tab[i],tab[i]);
            }
            
            if(tab[i]%2 == 0 && j == 1)
            {
                
                if(i == 0)
                {
                  printf("\n");
                }
                printf("%c (%d)",tab[i],tab[i]);
            }

            if(tab[i]%2 != 0 && j == 2)
            {
                printf("%c (%d)",tab[i],tab[i]);
            }
            if(tab[i]%2 == 0 && j == 3)
            {
                if(i == 0)
                {
                  printf("\n");
                }
                printf("%c (%d)",tab[i],tab[i]);
            }
            if(tab[i]%2 != 0 && j == 4)
            {
                if(i == 0)
                {
                    printf("| ");
                    printf("%c (%d)",tab[i],tab[i]);
                }
                
            }
             
        }
    }
    
    return EXIT_SUCCESS;
}


int compter_ascii_pairs(char T[] ,int n )
{
    int i = 0,pairs = 0,impairs = 0;
    for(i = 0;i < n;i++)
    {
        if(T[i]%2 == 0)
        {
            pairs++;
        }
        
    }
    impairs = n - pairs;
    printf("nombre de charachteres a code ascii pairs = %d",pairs);
    printf("\nnombre de charachteres a code ascii impairs = %d\n",impairs);
    return EXIT_SUCCESS;
}