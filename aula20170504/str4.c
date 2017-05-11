#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 256

int main()
{
    char str[TAM];
    int i, tamanho;

    printf("\nDigite a frase que deseja deixar na linguagem 2\n");
    fgets(str,TAM,stdin);
    tamanho = strlen(str) -1;
    str[tamanho] = '\0';

    for(i=0;i<tamanho;i++)
    {
        str[i] = toupper(str[i]);
        if(str[i]=='A') {str[i]='4';}
        if(str[i]=='E') {str[i]='3';}
        if(str[i]=='I') {str[i]='1';}
        if(str[i]=='O') {str[i]='0';}
        if(str[i]=='S') {str[i]='5';}
        if(str[i]=='G') {str[i]='6';}
    }

    printf("%s",str);



    return EXIT_SUCCESS;
}
