#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define TAM 256

int main()
{
    char str[TAM], resp[TAM];
    int i, j=0, tamanho=0;

    printf("\n Digite uma frase qualquer.\n");
    fgets(str,TAM,stdin);

    tamanho = strlen(str) -1;

    if(str[0]!=' ')
    {
        resp[j] = str[0];
        j++;
    }
    for(i=0;i<tamanho;i++)
    {
        str[i] = toupper(str[i]);
        if(isspace(str[i]))
        {
            resp[j] = str[i+1];
            j++;
        }
    }
    resp[j] = '\0';

    printf("\nA mensagem decodificada eh:\n%s\n",resp);


    return EXIT_SUCCESS;
}
