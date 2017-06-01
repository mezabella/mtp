#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(){
    return rand()%10 +1;
}
 int imp(int numero){
int i;
 int s=sorteio();
 for(i=0; i<10;  i++){
    s=sorteio();
    printf("%d\n", s);
    if(numero==s)
    printf("PARABENS, seu numero foi sorteado\n");
    else
        printf("nao e igual ao numero dado\n");
 }
 }
 int main(){
     int numero;
     printf("Digite um numero");
     scanf("%d", &numero);
     imp(numero);

 return 0;
 }
