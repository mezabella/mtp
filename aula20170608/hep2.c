#include <stdio.h>
#include <stdlib.h>

void transposta (float**Matriz, int l, int c){
    int i, j;
    for(i=0; i<l; i++){
      for(j=0; j<c; j++)
       printf("%.2f   ", Matriz[j][i]);
    printf("\n");
    }
}
void imprime(float**Matriz, int l, int c){
    int i, j;
    for(i=0; i<l ; i++){
        for(j=0; j<c; j++)
            printf("%.2f    ", Matriz[i][j]);
        printf("\n");
    }
}

int main() {
  int i, j;
  int l,c;
  printf("digite a quantidade de linhas e colunas:", l,c);
  scanf("%d %d", &l,&c);
  float **Matriz=(float**)malloc(sizeof(float)*l);
  for(i=0; i<c; i++)
    Matriz[i]=(float*)malloc(sizeof(float)*c);
  for(i=0; i<l; i++)
        for(j=0; j<c; j++)
        scanf("%f", &Matriz[i][j]);
    transposta(Matriz,l,c);
    imprime(Matriz,l,c);
    /*
    for(i=0; i<l; i++)
        free(Matriz[i]);
        free(Matriz);*/
return 0;
}
