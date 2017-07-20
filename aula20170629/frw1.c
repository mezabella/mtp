#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256

void captura(char * nome, int * idadeanos, float * alturametros){
    char c;
    fprintf(stdout, "Entre com o nome: ");
    fgets(nome,MAXCHAR,stdin);
    fprintf(stdout, "Entre com a idade em anos: ");
    fscanf(stdin,"%d",idadeanos); while(!(c=getchar()));
    fprintf(stdout, "Entre com a altura em metros: ");
    fscanf(stdin,"%f",alturametros);
     while(!(c=getchar()));
}
void gravar(char * arquivo){
    char nome[MAXCHAR];
    int idadeanos;
    float alturametros;
    FILE * narquivo = NULL;
    narquivo = fopen(arquivo,"w");
    if(narquivo == NULL){
        fprintf(stderr,"Problema na gravacao\n");
        exit(EXIT_FAILURE);
    }
    captura(nome,&idadeanos,&alturametros);
    fprintf(narquivo,"%s%d\n%f\n", nome, idadeanos, alturametros);
    fclose(narquivo);
}
void mostra(char * nome, int idadeanos, float alturametros){
    printf("%s%d anos, %g metros.\n", nome, idadeanos, alturametros);
}
void recuperar(char * arquivo){
    char nome[MAXCHAR];
    int idadeanos;
    float alturametros;
    FILE * narquivo = NULL;
    narquivo = fopen(arquivo, "w");
    if(narquivo==NULL){
        fprintf(stderr,"Arquivo inexistente\n"); // para o programa encerrar se n achar arquivo - stderr(erro)
        exit(EXIT_FAILURE);
    }
    fgets(nome,MAXCHAR,narquivo);
    fscanf(narquivo,"%d", &idadeanos);
    fscanf(narquivo,"%f",&alturametros);
    fclose(narquivo);
    mostra(nome,idadeanos,alturametros);
}
int menu(char * nome_arquivo){
    int opc; char c;
    while(1) {printf("1 - Gravar\n");
    printf("2 -  Recuperar\n");
    printf("\nDigite sua opcao:");
    scanf("%d", &opc); while(!(c=getchar())); //getchar - p consumir o ENTER
    if(opc == 1) gravar(nome_arquivo);
    else if(opc==2)
        recuperar(nome_arquivo);
    else break;
    return opc;
}
}
int main(){
    char arquivo[MAXCHAR];
    printf("Entre com arquivo (sem espacos): ");
    scanf("%s", arquivo);
    while(menu(arquivo) != 3);
    return EXIT_SUCCESS;
}
