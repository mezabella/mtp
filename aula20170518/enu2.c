#include <stdio.h>

int main () {
    enum X {primavera, verao, outono, inverno};
    enum X est;
    printf ("Digite o mes em que nasceu ");
    scanf ("%d",&est);
    switch (est){
        case 1:
            printf ("Voce nasceu no verao!\n");
            break;
        case 2:
            printf ("Voce nasceu no verao!\n");
            break;
        case 3:
            printf ("Voce nasceu no outono!\n");
            break;
        case 4:
            printf ("Voce nasceu no outono!\n");
            break;
        case 5:
            printf ("Voce nasceu no outono!\n");
            break;
        case 6:
            printf ("Voce nasceu no inverno!\n");
            break;
        case 7:
            printf ("Voce nasceu no inverno!\n");
            break;
        case 8:
            printf ("Voce nasceu no inverno!\n");
            break;
        case 9:
            printf ("Voce nasceu na primavera!\n");
            break;
        case 10:
            printf ("Voce nasceu na primavera!\n");
            break;
        case 11:
            printf ("Voce nasceu na primavera!\n");
            break;
        case 12:
            printf ("Voce nasceu no verao!\n");
            break;
    }
    return 0;
}
