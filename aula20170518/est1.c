#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SOMA(pa,pb, pr) \
({ pr.X = pa.X + pb.X; \
   pr.Y = pa.Y + pb.Y; })
#define DISTANCIA(pa,pb) \
(sqrt(pow(pa.X - pb.X, 2) + pow(pa.Y - pb.Y,2)))
#define IMPRIMIR(pa) \
({ printf("(%f , %f)\n", pa.X, pa.Y); })
struct ponto {
    float X;
    float Y;
};
int main(){
    struct ponto PontoA, PontoB, PontoC; // nome do novo
    printf("Digite as coordenadas X e Y de A:\n");
    scanf("%f %f", &(PontoA.X), &(PontoA.Y));
    printf("Digite as coordenadas de X e Y de B: \n");
    scanf("%f %f", &(PontoB.X), &(PontoB.Y));
    SOMA(PontoA, PontoB, PontoC);
    printf("A soma de A e B = \n");
    IMPRIMIR (PontoC);
    printf ("A distancia entre eles = %f\n", DISTANCIA(PontoA, PontoB));
    return 0;
}
