#include <stdio.h>
#include <stdlib.h>

void numerosp (int numero){
    int i;
    for(i=1; i<=numero; i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}
void numerosi (int numero){
    int j;
    for(j=1; j<=numero; j++){
        if(j%2!=0){
    printf("%d ",j);
        }
    }
}
int main(){
    int numero;
    printf("Digite um numero! \n");
    scanf("%d", &numero);
    numerosp(numero);
    numerosi(numero);
return 0;
}

