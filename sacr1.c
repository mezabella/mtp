#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){
    int n=rand()%6+1;
    scanf("%d",n);
}
int jogada(int dado){
    return dado() + dado()+ dado()+ dado()+ dado();
}

int main(){
    int n, soma=0;
    srand(time(NULL));
    int i, s;
    printf("JOGO DOS 5 DADOS\n");
    for(i=0; i<3; i++){
        printf("Tecle ENTER para jogar...");
        getchar(); s = jogada();
    if(soma=>18 && soma<=23){
        printf("Voce ganhou!");
        break;
    }
    }
    if(i ==3)
        printf("Voce perdeu!")
return 0;
}
