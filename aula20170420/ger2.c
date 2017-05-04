#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=0,soma=0;
    printf ("Digite um numero n");
    scanf ("%d", &n);

    int vet[n];

    for (i=n-1; i>0; i--)
    {
        if (n%i==0)
        {
            vet[j]=i;
           j++;
        }
    }

    for(i=0; i<j; i++)
    {
        soma = soma + vet[i];
    }

    if(n==soma)
     {
            printf("E um numero perfeito");
     }
    else
            printf("Nao e perfeito");
    return 0;
}
