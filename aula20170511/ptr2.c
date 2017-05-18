#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, cont=0;
    int V[] = {0,1,2,4,8};
    unsigned char *p;
    p = (unsigned char *) V ;
    for (i=0; i<sizeof(V); i++)
    {
        if (p[i]== 0x00){
            cont=cont+1;
            printf (" Endereco: %p | Conteudo: %u\n", &p[i], p[i]); // qdo coloca & antes de um p[i](vetor), vira o endereco de one ta armazenado
        }
    }
    printf("%d vetores com 0x00", cont);
    return 0;
}
