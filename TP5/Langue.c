#include <stdio.h>
#include <stdlib.h>
#define TRUE 1 
#define FALSE 0


int main()
{
    char userInputChar;
    int  userInputInt,validInput = FALSE;
    do
    {
        printf("Quel langue parlez vous ?: \n(F)Francais\n(A)Anglais\n(E)Espagnol\n");
        scanf(" %c",&userInputChar);
        userInputInt = userInputChar;
        switch(userInputInt)
        {
            case ('F'): 
            printf("Bonjour");
            validInput = TRUE;
            break;
            case ('A'): 
            printf("Hello");
            validInput = TRUE;
            break;
            case ('E'): 
            printf("Holla");
            validInput = TRUE;
            break;
            default:
            printf("Valeur invalide\n");
            break;
        }
    }while(validInput == FALSE);

    return EXIT_SUCCESS;
}