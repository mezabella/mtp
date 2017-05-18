#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, cont=0;
    unsigned int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    unsigned char *p;
    p = (unsigned char *) vetor;
    for (i=0; i<sizeof(vetor); i++)
    {
        if (p[i]==0xFF){
            cont=cont+1;
            printf ("Endereço: %p | conteudo: %u\n", p, p[i]);
        }
    }
    printf ("%d", cont);
    return 0;
}
