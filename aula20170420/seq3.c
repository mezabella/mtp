#include <stdio.h>

int main ()
{
    float A,B,C,D,E, media;
    printf ("Entre com a nota A:");
    scanf ("%f", &A);
    printf ("Entre com a nota B:");
    scanf ("%f", &B);
    printf ("Entre com a nota C:");
    scanf ("%f", &C);
    printf ("Entre com a nota D:");
    scanf ("%f", &D);
    printf ("Entre com a nota E:");
    scanf ("%f", &E);
    media = (2*(A+B+C) + 3*D +5*E)/14;
    printf ("media= %f", media);
return 0;
}
