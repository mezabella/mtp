#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int d1,d2,d3, soma;
    srand(time(NULL));
    d1 = rand()%6 +1;
    d2 = rand()%6 +1 ;
    d3 = rand()%6 +1;
    soma = d1+d2+d3;
    printf ("Dado 1: %d \n Dado 2: %d \n Dado 3: %d \n", d1,d2,d3);
    printf ("A soma e %d \n", soma);
    if(soma==7 || soma==11)
        printf ("O jogador ganhou!!");
    else
        printf ("você perdeu :/");
    return 0;
}
