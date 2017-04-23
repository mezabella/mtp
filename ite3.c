#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int i,cont=0;
   char palavra[256];

   printf("Digite uma palavra");
   scanf("%s", palavra);

   for(i=0; palavra[i]!='\0'; i++)
   {
       cont++;
   }

   printf("A palavra tem %d letras", cont);

   return 0;

}
