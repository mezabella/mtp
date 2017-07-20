#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256
typedef
    struct Ponto
         {double x,y;}
    Ponto;
int main(){
    Ponto * conjunto = NULL;
    int i, npontos;
    char nomearquivo[MAXCHAR];
    FILE * arquivo = NULL; // ponteiro p o arquivo
    printf("Entre com arquivo (sem espaços): ");
    scanf("%s", nomearquivo);
    printf("Quantos pontos? ");
    scanf("%d", &npontos);
    conjunto = (Ponto *)
        malloc(npontos*sizeof(Ponto));
    for (i=0; i<npontos; i++){
        printf("Coordenada x de [%d]:", i);
        scanf("%lf", &(conjunto[i].x));
        printf("Coordenada y de [%d]: ", i);
        scanf("%lf", &(conjunto[i].y));
    }
    arquivo=fopen(nomearquivo, "wb");
    fwrite(conjunto, sizeof(Ponto), npontos, arquivo);
    fclose(arquivo);
    free(conjunto);
    return 0;
}
