#include <string.h>
#include <stdio.h>

int main (void) {
	 int len;
	char str[100];
   printf("Digite uma string: ");
  fgets(str, 100, stdin);
  len = strlen(str);
  printf("Tamanho: %d", len);
 return 0;
}
