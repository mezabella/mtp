#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, D;
    float distancia;
    printf("Entre com as coordenadas de X e Y:");
    scanf("%f",&A);
    printf ("\nB");
    scanf("%f", &B);
    printf ("\nC");
    scanf ("%f", &C);
    printf ("\nD");
    scanf ("%f", &D);
    distancia = sqrt(pow(C-A,2) + pow(D-B,2));
    printf("A distancia e: %f", distancia);
    return 0;

}
