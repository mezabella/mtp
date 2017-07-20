#include <stdio.h>

struct estrutura{
    int numerador;
    int denominador;
}fracao1, fracao2, resultado;

int MDC (int w, int v){
    if (w==v || v==0) return w;
    else if(w==0) return v;
    else if (w%2==0 && v%2==1) return MDC (w/2, v);
    else if(w%2 == 1 && v%2==0) return MDC (w, v/2);
    else if(w%2 ==0 && v%2==0) return 2*MDC(w/2, v/2);
    else if(w>v) return MDC((w-v)/2, v);
    else return MDC((v-w)/2, w);
}

int main(){
    int a, b;
printf("Entre com o numerador e o denominador da primeira fracao:\n");
scanf("%d%d", &fracao1.numerador, &fracao1.denominador);
printf("Entre com o numerador e o denominador da segunda fracao:\n");
scanf("%d%d", &fracao2.numerador, &fracao2.denominador);
resultado.numerador = fracao1.numerador*fracao2.denominador + fracao2.numerador*fracao1.denominador;
resultado.denominador = fracao1.denominador*fracao2.denominador;
a = resultado.numerador/MDC(resultado.numerador, resultado.denominador);
b = resultado.denominador/MDC(resultado.numerador, resultado.denominador);

printf("O resultado da fracao eh %d/%d", a,b);
return 0;

}
