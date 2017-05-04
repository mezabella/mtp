#include <stdlib.h>
#include <stdio.h>
#define N 10000

int main(){
    srand(time(0));
    int i, numero;
    int numeros[N];
    float media;
    printf ("Entre com o numero inteiro nao negativo:\n");
    scanf ("%d", &maximo);
    for(i=0; i < N; i++) //quando eu começo com 0, uso até i<1. Quando for 1, uso até i=n
        numeros[i] = rand ()%maximo = 1;    XXX // pq %maximo?
    media = 0.0; // preciso começar com um numero
    for (i=0; i<N ; i++);
        media += numeros[i]; // += substitui o "= media ="
        media /= N;
    printf("A media e: %g.\n", media);
    return 0;
}

