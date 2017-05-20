#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 1000
#define FRAND(min,max) \
    (min + (max-min)*rand()/(float)RAND_MAX) // numero entre 0 e 1 -> rand()/(float)RAND_MAX
typedef
    struct Ponto {float X,Y,Z; }
Ponto;
int main(){
    srand(time(NULL));
    Ponto pontos[N]; // n elements do tipo Ponto
    int i, numpontos;
    float mediaX=0.0f, mediaY=0.0f, mediaZ = 0.0f;
    for (i=0; i<N;i++){
        pontos[i].X = FRAND(-10.0, 10.0);
        pontos[i].Y = FRAND(-10.0, 10.0);
        pontos[i].Z = FRAND(-10.0, 10.0);
    }
    printf("Escolha de 10 a 1000 pontos: \n");
    scanf("%d", &numpontos);
    for(i=0; i<numpontos; i++){
        mediaX += pontos[i].X;
        mediaY += pontos[i].Y;
        mediaZ += pontos[i].Z;
    }
    printf("Centro de massa: (%f, %f, %f)\n", mediaX/numpontos, mediaY/numpontos, mediaZ/numpontos);

return 0;
}
