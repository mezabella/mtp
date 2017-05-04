#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float numero, base, lg;
    printf("Digite um numero e uma base: ");
    scanf("%f", &numero);
    scanf ("%f", &base);
    lg= log(numero)/log(base);
    printf("O log e: %0.2f ", lg);

    return 0;
}
