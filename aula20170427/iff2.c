#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, i;
    float nf=0;
    double nd=0;

    printf("\nDigite um numero inteiro aleatorio\n");
    scanf("%d",&n);

    for(i=0;i<729;i++)
    {
        nf = nf + 1.0/n;
        nd = nd + 1.0/n;
    }

    printf("\nem float n = %.15f\nem double n = %.15lf\n",nf,nd);

    return EXIT_SUCCESS;
}
