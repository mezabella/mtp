#include <stdio.h>.
#include <stdlib.h>
#define T10

int main(){
    int T[10], R[10],i,j=9;
    printf("Digite 10 numeros: ");
    for(i=0; i<10; i++)
    {
        printf("V(%d)=", i+1);
        scanf ("%d", &T[i]);
    }
    for (i=0; i<10; i++) // T é vetor, por isso n pode ser i<T
    {
        R[i]=T[j];
        j--;
    }
    for (i=0; i < 10; i++)
        printf ("O reverso e: %d", R[i]);
    return 0;
}
