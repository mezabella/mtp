#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main()
{
    double complex A,B,Z;
    double rA, rB, iA, iB;
    printf ("Entre com real A:");
    scanf ("%lf", &rA);
    printf("Entre com real B:");
    scanf("%lf", &rB);
    printf ("Entre com imaginario A");
    scanf("%lf", &iA);
    printf("Entre com imaginario B");
    scanf("%lf", &iB);
    A= rA + I*iA;
    B= rB + I*iB;
    Z= A + B;
    printf ("A soma e %lf + I%.15lf \n", creal(Z), cimag(Z));
    printf("ou igual a %lf<%lf rad \n", cabs(Z),carg(Z));
    return 0;
}

