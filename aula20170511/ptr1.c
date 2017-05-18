#include <stdlib.h>
#include <stdio.h>

int main (){
    int i;
    unsigned int X = 0xfaca8421;
    unsigned char *p; // byte
    printf ("Variavel: %X\n", X);
    printf ("Endereco: %p | Conteudo: %u\n", &X, X); // poderia colocar unsigned dentro do () do sizeof, mas não precisa. Sizeof retorma o tamanho em byte
    p = (unsigned char *) &X; // static_cast, poderia ter void * V e coloca-lo dps do unsigned int e antes do p
    for (i=0; i < sizeof(X); i++)
    {
        printf ("Em: %p | ", p+1);
        printf("Contem: %u ou %X ou %c\n",*(p+1), p[i], p [i]);
    }
    return 0;

}
