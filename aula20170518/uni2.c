#include <stdio.h>
#include <time.h>
#include <stdlib.h>
union End{
	char string[4];
	int n;
};
void main(){
	union End var;
	printf("Digite uma frase de 3 letras: ");
	fgets(var.string,4,stdin);
	printf("\nO numero inteiro da união e: \n0x%x", var.n);
}
