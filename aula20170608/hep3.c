#include <stdio.h>
#include <stdio.h>

int main(){
    char c;
    int tam = 0;
    char * texto = NULL;
    printf("Escreva '\\'+ ENTER para encerrar: \n");
    do {
        c = getchar(); // salva a letra
        tam++;
        texto = (char *) realloc(texto, tam*sizeof(char)); // multiplica o tamanho pelo valor do caractere
        texto[tam-1] = toupper(c);
        }
    while (c != '\\');
    texto[tam-1] = '\0';
    printf("\n\n *********************** \n\n");
    printf("%s", texto);
}
