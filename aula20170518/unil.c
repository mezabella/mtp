#include <stdio.h>
#include <stdio.h>

union IntFloat {
    int i;
    float f;
};
int main (){
    union IntFloat var;
    char opc;
    printf("(i) inteiro; (f) float :");
    scanf ("%c", &opc);
    if (opc== '1'){
        printf("Entre com inteiro");
        scanf("%d", &(var.i));
        printf("Em float: %g \n", var.i);
    }
    else {
        printf("Entre com float: ");
        scanf("%f", &(var.f));
        printf("Em inteiro: %d \n", var.f);
    }
    return 0;
}
