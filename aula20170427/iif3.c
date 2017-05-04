#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, i;

unsigned long long int fat=1;

printf("Digite um numero inteiro aleatorio < 20:\n");
scanf("%d",&n);

for(i=n;i>1;i--)
{
    fat=fat*i;
}
printf("\n%d! = %llu\n",n,fat);
return 0;
}
