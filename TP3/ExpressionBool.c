#include <stdio.h>
#include <stdlib.h>
#define OUI 1
#define NON 0



int main()
{
   int a = NON,b = NON,aUb = NON,aETb = NON,na = NON,nb = NON,naETnb = NON;
   printf("a?\n");
   scanf("%d",&a);
   printf("b?\n");
   scanf("%d",&b);
   printf("a\tb\ta ET b\ta OU b\tNON a\tNON b\tNON a ET b\n");   
   
   if(a != NON)
   {
     a = OUI;
   }
   if(b != NON)
   {
     b = OUI;
   }
   if(a == OUI && b == OUI)
   {
     aETb = OUI;
   }
   if(a == OUI || b == OUI)
   {
     aUb = OUI;
   }
   if(a == NON)
   {
     na = OUI;
   }
   if(b == NON)
   {
     nb = OUI;
   }
   if(aUb == NON)
   {
     naETnb = OUI;
   }
   printf("%d\t%d\t%d\t%d\t%d\t%d\t%d",a,b,aETb,aUb,na,nb,naETnb); 
   return EXIT_SUCCESS;
}