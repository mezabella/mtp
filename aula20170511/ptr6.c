#include <stdio.h>

int main (){
char str[16];
int i;
int *p;
for (i=0;i<16; i++)
{
    str[i] = 0;
}
fgets(str, 16, stdin);
p = (int *)str;
for (i=0; i< sizeof(str)/sizeof(p[0]); i++) {
    printf("%d",*(p+1));
}
for (i=0; i<sizeof(str)/4; i++){
    printf("%X", *(p + 1));
}
 return 0;
}
