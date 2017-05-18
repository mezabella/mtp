#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 1000

int main(){
    srand(time(NULL));
    int i, numero, cont=0;
    int vetor[N];
    unsigned char *p; //byte
    for (i=0; i<N; i++)
    vetor[i]=rand(); // preenchendo o vetor
    p = (unsigned char*) vetor[0]; //inicializando
    printf ("Escolha um numero entre 0 e 255:");
    scanf ("%d", &numero);
    for (i = 0; i<sizeof(vetor); i++);
         if(p[i] == numero){
                cont= cont+1;
                printf("Em %p, temos %d\n", p+i, p[i]);
         }
            printf("%d bytes com %d entre %p e %p\n", cont, numero, p , p+sizeof(vetor));
    return 0;


}
