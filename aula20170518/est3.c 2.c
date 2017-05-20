#include <stdio.h>
#include <stdlib.h>

struct RGB { int R; int G; int B; };
struct YCbCr {int Y; int Cb; int Cr };
int main() {
int x;
struct RGB pixel1;
struct YCbCr pixel2;
printf ("O valor de vermelho, verde e azul: ");
scanf ("%d", &(pixel1.R));
scanf ("%d", &(pixel1.G));
scanf ("%d", &(pixel1.B));
pixel2.Y = round(16+(65.481*(pixel1.R/255.0)+128.553*(pixel1.G/255.0)+24.996*(pixel1.B/255.0)));
pixel2.Cb = round(128+(-37.797*(pixel1.R/255.0)-74.203*(pixel1.G/255.0)+112.0*(pixel1.B/255.0)));
pixel2.Cr = round(128+(112.0*(pixel1.R/255.0)-93.786*(pixel1.G/255.0)-18.214*(pixel1.B/255.0)));
printf ("Estrutura convertida: %d  | %d  | %d\n", pixel2.Y,pixel2.Cb,pixel2.Cr);
return 0;
}
