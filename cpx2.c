#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main(){
    double complex A, m;
    double rA, iA;
    printf("Enre com a parte real de A: ");
    scanf ("%lf", &rA);
    printf ("Entre com a parte imaginaria de A: ");
    scanf ("%lf", &iA);
    A= rA + I*iA;
    m = A*conj(A);
    printf ("A multiplicacao e %lf + I%.15lf \n", creal(m), cimag(m));
    printf("ou igual a %lf<%lf rad \n", cabs(m),carg(m));

return 0;
}
