#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n, i, max, min;
    n=0;
    max=0;
    min=max;
    printf("Digite um numero entre 1 e 1000");

    scanf (&n);
    int V[n];
    for(i=0;i<n;i++)
    {
        V[i] = rand()%max;
        if(max<V[i])    {max = V[i];}
        if(min>V[i])    {min = V[i];}
    }

    printf("\nOs valores minimo e maximo gerados aleatoriamente foram: \n\nMin: %d\nMax: %d\n",min,max);
    return EXIT_SUCCESS;
}
