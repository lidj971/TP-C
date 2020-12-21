#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define NB_MAX 15

int main()
{
  int secretNb = 0,userInput;
  srand(time(NULL));
  secretNb = rand() % (NB_MAX + 1);
  printf("Pick a number\n");
  canf("%d",&userInput);
   
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
  return EXIT_SUCCESS;
}