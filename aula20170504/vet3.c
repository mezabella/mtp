#include <stdio.h>
#include <stdio.h>
#define T10

int main(){
    int T[10],soma=0, produto=0,i;
    printf("Digite 10 numeros: ");
    for(i=0; i< 10;i++){
       printf("V(%d)=", i+1);
       scanf("%d", &T[i]);
    }
    for(i=0; i< 10; i++){
        soma += T[i];
        produto *= T[i];
    }
    printf("A soma e o produto dos 10 numeros e respectivamente : soma = %d, produto = %d", soma, produto);
    return 0;

}

