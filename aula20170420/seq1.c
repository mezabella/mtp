#include <stdio.h>

void safeFlush()
{
char c;
while ((c = getchar()) != EOF && c != '\n');
}

int main ()
{
float ladoquad;
float areaquad;
printf("Entre com o lado do quadrado:");
scanf ("%f", &ladoquad);
safeFlush ();
areaquad = ladoquad*ladoquad;
printf ( "A area do quadrado e: %.2f", areaquad);
return 0;
}
