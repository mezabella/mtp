#include <stdio.h>
#include <stdlib.h>

typedef unsigned char Byte;
typedef unsigned short Word;
typedef unsigned int Dword;
typedef
    struct RGB {Byte B, G,R; }
RGB;
int main(){
    FILE * arquivo, *arquivo2;
    RGB pixel;
    Byte byte; Word word; Dword dword;
    int WPX, HPX, BPP, NCP,NIC, AUX, PAL, i,j;
    arquivo = fopen("imagem.bmp","rb");
    arquivo2 = fopen("imagem2mud.bmp", "wb");
    if(!arquivo){
        fprintf(stderr,"arquivo n existe!\n");
        return(EXIT_FAILURE);
    }
    fread(&byte, sizeof(Byte), 1, arquivo);
    fwrite(&byte, sizeof(Byte), 1, arquivo2);
    printf("%c", byte);
    fread(&byte, sizeof(Byte),1,arquivo);
    fwrite(&byte, sizeof(Byte), 1, arquivo2);
    printf("%c",byte);
    fread(&dword, sizeof(Dword),1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Tamanho: %d bytes\n", dword);
    fread(&word, sizeof(Word),1, arquivo);
    fwrite(&word, sizeof(Word), 1, arquivo2);
    printf("Info reservada: %d\n", word);
    fread(&word, sizeof(Word),1, arquivo);
    fwrite(&word, sizeof(Word), 1, arquivo2);
    printf("Info reservada: %d\n", word);
    fread(&dword, sizeof(Dword),1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Offset: %d\n", dword);
    fread(&dword, sizeof(Dword),1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Cabecalho: %d bytes \n", dword);
    fread(&dword, sizeof(Dword),1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Largura: %d pixels \n", dword);
    WPX = dword;
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("altura: %d pixels\n", dword);
    HPX = dword;
    fread(&word,sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word), 1, arquivo2);
    printf("plano de cores: %d\n", word);
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word), 1, arquivo2);
    printf("Bits por pixel: %d\n", word);
    BPP=word;
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Compressao: %d\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Tamanho da imagem: %d\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Resolucao horizontal: %d\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    printf("Resolucao vertical: %d\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    NCP=dword;
    printf("Numero de cores: %d\n", (NCP==0)? 1<< BPP : NCP);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword), 1, arquivo2);
    NIC=dword;
    printf("Numero de cores: %d\n", (NIC==0)? 1<< BPP : NIC);
    printf("*******************************\n\n");
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    AUX = PAL - WPX*3;
    int aux;
    for(j=0; j<HPX; j++){
        for(i=0; i<WPX;i++){
            fread(&pixel, sizeof(RGB), 1, arquivo);
            aux=pixel.R;
            pixel.R=pixel.G;
            pixel.G=aux;
                fwrite(&pixel, sizeof(RGB), 1, arquivo2);

        }
    if (AUX > 0)
        fseek(arquivo, AUX, SEEK_CUR);
        Byte X = 0;
        for(i=0; i<AUX;i++)
            fwrite(&X, sizeof(Byte),1, arquivo2);
    }
    fclose(arquivo);
    fclose(arquivo2);
    return EXIT_SUCCESS;
}

