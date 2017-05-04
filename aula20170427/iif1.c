#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i, conta = 0;
    float n, prob;
    printf ("Entre com uma probabilidade: ");
    scanf ("%f", &prob);
    for (i=0; i<100; i++){
        n = rand()/(float)RAND_MAX;
        if(n < prob)
        conta++;
    }
    printf ("Sao %d vezes", conta);
    return 0;
}

