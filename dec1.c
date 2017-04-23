#include <stdio.h>

int main ()
{
    int numero;
    printf ("Entre com um numero:");
    scanf ("%d", &numero);
    if (numero%2==0)
        printf ("Ele e par \n");
    else
        printf ("Ele e impar \n");
    if (numero%3==0)
        printf ("Ele e multiplo de 3 \n");
    if (numero%5==0)
        printf ("Ele e multiplo de 5");
    if (numero%7==0)
        printf ("Ele e multiplo de 7");
return 0;
}


