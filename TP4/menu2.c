#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define NB_MAX 15

//fonction de Vrai/Faux//
int est_premier(int x);
int est_majeur(int x);

//fonctions de calculs//
int cube(int x);
int somme(int x);

//fonctions utilisateur//
void nombre_secret();
void afficher_rectangle(int x,int y);
void saisie_utilisateur();

int main()
{
   int choix = 1;
   while(choix != 0)
   {
        printf("(1) tester si un entier est premier\t(2) deviner un nombre\t(3) trouver le cube d'un entier\t(4) determiner la majorite\t(5) determiner la somme d'un entier\t(6) afficher un rectangle\t(7)renvoyez une saisie\t(0) quitter\n");
        scanf("%d",&choix);
        if(choix == 1)
        {
            int prem = 0,res = 0;
            printf("Entrez un entier\n");
            scanf("%d",&prem);
            res = est_premier(prem);
            printf("premier = %d\n",res);
        }
        else if(choix == 2)
        { 
            nombre_secret();
        }else if(choix == 3)
        {
            int saisie,res;
            printf("Entrez un entier\n");
            scanf("%d",&saisie);
            res = cube(saisie);
            printf("%d^3 = %d\n",saisie,res);
            
        }else if(choix == 4)
        {
            int majeur,res;
            printf("Entrez un age\n");
            scanf("%d",&majeur);
            res = est_majeur(majeur);
            printf("majeur = %d\n",res);
            
        }else if(choix == 5)
        {
            int som,res;
            printf("Entrez un entier\n");
            scanf("%d",&som);
            res = somme(som);
            printf("somme %d = %d\n",som,res);
        }else if(choix == 6)
        {
            int largeur,longueur;
            printf("Entrez une Largeur\n");
            scanf("%d",&largeur);
            printf("Entrez une Longueur\n");
            scanf("%d",&longueur);
            afficher_rectangle(largeur,longueur);
        }else if(choix == 7)
        {
            saisie_utilisateur();
        }
        else if(choix != 0)
        {
            printf("veuillez entrer une valeur entre 0 et 7\n");
        }
    }
   return EXIT_SUCCESS;
}

int est_premier(int x)
{
    int i = 2;
    while(i <= x)
    {
        if(x % i == 0)
        {
            if(i == x)
            {
                return TRUE;
            }else
            {
                return FALSE;
            }
        }
        i++;
    }
}

int est_majeur(int x)
{
    if(x >= 18)
    {
        return TRUE;
    }else
    {
        return FALSE;
    }
}
    

void nombre_secret()
{
    int secretNb = 0,userInput;
    srand(time(NULL));
    secretNb = rand() % (NB_MAX + 1);
    printf("Pick a number\n");
    scanf("%d",&userInput);
   
    while (userInput != secretNb)
    {
        if(userInput < secretNb)
        {
            printf("Lower\n");
        }
        else
        {
            printf("Higher\n");
        }
        printf("Your Choice ?\n");
        scanf("%d",&userInput);
    }
    printf("Well played! The secret number is %d\n",secretNb);
}

void afficher_rectangle(int x,int y)
{
    int i,j;
    for(i = 1; i <= x;i++)
    {
        for(j = 1;j <= y;j++)
        {
          if(i == 1 || i == x || j == 1 || j == y)
          {
            printf("*");
          }
          else
          {
            printf(" ");
          }
        }
        printf("\n");
    }
}

void saisie_utilisateur()
{
    int saisie;
    printf("Entrez un entier\n");
    scanf("%d",&saisie);
    printf("%d\n",saisie);

}

int cube(int x)
{
    int result;
    result = x*x*x;
    return result;
}

int somme(int x)
{
    int i,result = 0;
    for (i = 1;i<= x;i++)
    {
       result += i;
    }
    return result;
}

