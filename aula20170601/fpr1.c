#include <stdio.h>
#include <stdlib.h>

struct quoc{    // tipo da função
    int quoc, resto;
};
void Quoc(int *num,int *den, struct quoc *r){    // função
    r->quoc=(*num)/(*den); // para usar p ponteiro : "->"
    r->resto=*(num)%(*den);
};
 int main(){
    int num, den, quoc, resto;
    struct quoc r;
    printf("Entre com os valores do numerador e do denominador: \n");
    scanf("%d", &num);
    scanf("%d", &den);
    Quoc(&num, &den, &r);
    printf("%d = quociente, %d = resto", r.quoc, r.resto);
    return 0;
 }
