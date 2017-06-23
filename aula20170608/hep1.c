#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media (float*vetor, int qtde){
    int i;
    float soma = 0.f;
    for (i=0; i<qtde; i++)
        soma += vetor[i];
    return soma/qtde;
}
float desviop(float * vetor, int qtde){
    int i;
    float m = media(vetor,qtde), soma = 0.f;
        for(i=0; i< qtde; i++)
        soma +=  pow(vetor[i]-m,2);
    return sqrt ((1.f/(qtde-1))*soma);
}
int main(){
    float * vetor;
    int qtde, i;
    printf("quantos numers deseja entrar:");
    scanf("%d", &qtde);
    vetor = (float *) malloc (qtde*sizeof(float)); // liberando a memoria do tamanho q ele quer
    for (i=0; i< qtde; i++){
        printf("elemento [%d]:", i);
        scanf("%f", &(vetor[i]));
    }
    printf("Media = %f\n", media(vetor, qtde));
    printf("Desv. Padrão = %f\n", desviop(vetor, qtde));
    free(vetor); //liberar memoria
return 0;
}
