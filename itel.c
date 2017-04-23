#include <stdio.h>

int main()
{
    int fatorial, numero;
    printf ("Entre com um numero inteiro: ");
    scanf  ("%d", &numero);
    for (fatorial =1; numero > 1; fatorial *= numero, numero--);
    printf("Fatorial: %d", fatorial);
    return 0;
}
