#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media1 (float n1, float n2, float n3, float n4, float n5){
    float media;
    media = (n1+n2+n3+n4+n5)/5.0f;
    return media;
}

float desvio1 (float n1, float n2, float n3, float n4, float n5){
    float media, desvio;
    media = media1(n1,n2,n3,n4,n5);
    desvio = (pow(n1-media,2))+(pow(n2-media,2))+(pow(n3-media,2))+(pow(n4-media,2))+(pow(n5-media,2));
    desvio=desvio/4;
    desvio= sqrt(desvio);
    return desvio;
}

void main(){
 float n1,n2,n3,n4,n5;
    printf("Digite 5 numeros:");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    printf("a media e %f", media1(n1,n2,n3,n4,n5));
    printf("O desvio e %f ", desvio1(n1,n2,n3,n4,n5));
}

