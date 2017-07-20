#include  <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256

typedef
    struct Ponto { double x, y }
Ponto;
int main(){
    int i, N=0;
    Ponto * conjunto;
    Ponto teste;
    char nomearq[MAXCHAR];
    FILE * arquivo = NULL;
    printf("Entre com arquivo (sem espaços): ");
    scanf("%s", nomearq);
    arquivo = fopen(nomearq,"rb");
    if(arquivo ==NULL){
        fprintf(stderr, "Arquivo n existe\n");
        exit(EXIT_FAILURE);
    }
    while(!feof(arquivo)){
        fread(&teste, sizeof(Ponto),1, arquivo);
        conjunto = (Ponto*) realloc(conjunto, N*sizeof(Ponto));
        conjunto[N-1] = teste;
    }
    fclose(arquivo);
    for(i = 0; i < N; i++)
        printf("(%lf,%lf)\n", (conjunto+i)->x, conjunto[i].y);
    free(conjunto);
return 0;
}
