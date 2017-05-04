#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float L1,L2,L3, ang;
    printf ("Digite dois lados de um triangulo e o angulo entre eles:");
    scanf ("%f", &L1);
    scanf ("%f", &L2);
    scanf ("%f", &ang);
    L3= sqrt(pow(L1,2)+pow(L2,2)-2*L1*L2*cos(ang));
    printf ("O lado e: %f ", L3);




    return 0;
}
