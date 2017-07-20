#include <stdio.h>
#include <stdlib.h>

struct Divisao {
int quociente, resto;
};
struct Divisao dividir(int a, int b){
    struct Divisao r;
    r.quociente = a/b; // acessar o valor por meio de uma variavel por isso o ponto
    r.resto = a%b;
return r;
};
int main(){
    struct Divisao r;
    int a,b;
    printf("Entre com um divisor a:");
    scanf("%d", &a);
    printf("Entre com um dividendo b:");
    scanf("%d", &b);
    r =  dividir(a,b);
    printf("Resposta: %d com resto  %d\n", r.quociente, r.resto);
    return 0;

}
