#include <stdio.h>
#include <stdlib.h>

struct soma{
    int num, den;
};
struct soma SOMA(int num, int den, int num2,int den2){
    struct soma r;
    r.num= (den2*num + den*num2);
    r.den= (den*den2);
return r;
};
int main(){
struct soma r;
int num, num2, den,den2;
printf("digite dois numeros racionas que serao o numerador:");
scanf("%d", &num);
scanf("%d", &num2);
printf("digite dois numeros racionais que serao o denominador:");
scanf("%d", &den);
scanf("%d", &den2);
r= SOMA(num, den, num2, den2);
printf("%d/%d", r.num, r.den);
return 0;
}
