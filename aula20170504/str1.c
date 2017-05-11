#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define TAM 256

int main()
{
    char str[TAM], resp[TAM];
    int i, tamanho=0;

    printf("\nOla! Digite uma frase qualquer, por favor.\n");
    fgets(str,TAM,stdin);

    tamanho = strlen(str) -1;
    str[tamanho]='\0';
    printf("\nO tamanho da string digitada eh:\nTamanho = %d\n",tamanho);

    //Transformando todas as letras em maiúsuclas
    for(i=0;i<tamanho;i++)
    {
        str[i] = toupper(str[i]);
    }

    if(strncmp(str,"BOM DIA",7)==0) {printf("\nBom dia para voce tambem! Seu lindao ou sua lindona!\n");}
    else                            {printf("\nVoce quis dizer: \"%s\"?", str);}



    return EXIT_SUCCESS;
}

