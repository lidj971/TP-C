#include <stdio.h>
#include <stdlib.h>

typedef enum Temps
{
    COUVERT,
    PLUVIEUX,
    NEIGEUX,
    ENSOLEILLE 
}Temps;

typedef enum Pression
{
    BAISSE = 4,
    STABLE,
    AUGMENTE
}Pression;

typedef enum Vent
{
    EST = 7,
    OUEST,
    NORD,
    SUD
}Vent;


typedef struct Bulletin
{
    Temps temps;
    Pression pression;
    Vent vent;
    int temperature;
}Bulletin;

Temps prevision_meteo(Bulletin x_bm);

int main()
{
    Bulletin userInput;
    Temps prevision;
    
    printf("Temps actuel: COUVERT 0\tPLUVIEUX 1\tNEIGEUX 2\tENSOLEILLE 3\n");
    scanf("%d",&userInput.temps);
    printf("Pression: BAISSE 4\tSTABLE 5\tAUGMENTE 6\n");
    scanf("%d",&userInput.pression);
    printf("Direction du vent:  EST 7\tOUEST 8\tNORD 9\tSUD 10\n");
    scanf("%d",&userInput.vent);
    printf("Entrez la temperature: ");
    scanf("%d",&userInput.temperature);
    
    prevision = prevision_meteo(userInput);
    
    switch(prevision)
    {
        case COUVERT: 
        printf("temps couvert\n");
        break;
        case PLUVIEUX:
        printf("temps pluvieux\n");
        break;
        case NEIGEUX:
        printf("temps neigeux\n");
        break;
        case ENSOLEILLE:
        printf("temps ensoleille\n");
        break;
    }
    return EXIT_SUCCESS;
}

Temps prevision_meteo(Bulletin x_bm)
{
    if(x_bm.pression == STABLE && x_bm.vent == OUEST || x_bm.temps == ENSOLEILLE)
    {
        return ENSOLEILLE;
    }
    else if(x_bm.pression == AUGMENTE || x_bm.temperature > 0 || x_bm.vent == NORD)
    {
        return COUVERT;
    }
    else if(x_bm.pression == BAISSE && x_bm.temps == COUVERT)
    {
        return PLUVIEUX;
    }
    else if(x_bm.pression == BAISSE || x_bm.temperature < 0 || x_bm.temps == COUVERT)
    {
        return NEIGEUX;
    }
}