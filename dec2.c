#include <stdio.h>

int main ()
{
    srand (time(0));
    int numero, rand, resultado;
    printf ("Entre com um numero nao negativo");
    scanf ("%d", &numero);
    rand = srand()%10;
    resultado = rand + numero;
    printf("O numero digitado foi %d \n", numero);
    printf ("O numero aleatorio e %d \n", rand);
    if(resultado%2==0)
        printf("A soma deles e par");
    else
        printf("A sma deles e impar");



return 0;
}
