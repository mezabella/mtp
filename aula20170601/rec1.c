#include <stdio.h>
#include <stdlib.h>
#define N 256

void imprimeinv(char * frase){
    if(*frase != '\0')
            imprimeinv(frase + 1); // recurs�o - toda vez q chama a fun��o dentro dela msm
    printf("%c", *frase);
}
int main(){
    char frase[N];
    printf("Entre com uma frase: ");
    fgets(frase,N,stdin);
    imprimeinv(frase);
    return 0;
}
