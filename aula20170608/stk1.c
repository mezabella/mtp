#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 4

void imprime (float M[L][C]){
    int i, j;
    for (i=0;i<L; i++){
    for (j=0; j<C; j++){
        printf("%g\t", M[i][j]);// \t é tab
    }
    }
}
    void tranposta (float M[L][C]){
        int i,j;
        for (j=0; j<C; j++){ // mudo a disposição do i e j para imprimir primeiro o j, dps o j
            for (i=0; i<L; i++){
                printf("%g\t ", M[i][j]);
            }
        }
    }

int main(){
    float matriz [L][C];
    int i, j; //  i = linhas e j = colunas
    for(i = 0; i < L; i++)
    for (j=0; j < C;j++){
        printf("Entre com os valores [%d] [%d]:", i, j);
        scanf("%f", &(matriz[i][j]));
    }
}
    imprime(matriz);
    printf ("Transposta: \n");
    transposta(matriz);
    return 0;
}
